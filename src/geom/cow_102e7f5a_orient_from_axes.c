/* f_102e7f5a - build an orientation from three optional caller pairs and an angle, hand it to the
   geometry table, and give the result to an object's vtable.

   Eight words come in. Three of them are pointers to a pair of floats the caller may or may not have;
   for each one the entry copies the two dwords into its own frame and fills the third slot itself with
   an immediate, or leaves the whole group alone and tells the callee the group does not exist. A sixth
   word is an angle: when it is not zero the entry computes its sine and cosine into four more frame
   words and passes a pointer to them, and when it is zero it passes NULL. The frame then holds a
   72-byte buffer the table routine is asked to fill, and that buffer goes to slot 6 of the first
   argument's vtable.

   Evidence
   - the three groups are (x, y, immediate) .. [ebp+0x14] -> [ebp-0x24,-0x20] with 1.0f at [ebp-0x1c]
                                (0x102e7f69-0x102e7f76, and the 1.0f is `fld1`/`fstp` at
                                0x102e7f6b/0x102e7f70, not a read); [ebp+0x18] -> [ebp-0x18,-0x14]
                                with 0.0f at [ebp-0x10] (0x102e7f80-0x102e7f8d, `fldz` at 0x102e7f82);
                                [ebp+0x20] -> [ebp-0x0c,-0x08] with 0.0f at [ebp-0x04]
                                (0x102e7fc5-0x102e7fd2, `fldz` at 0x102e7fc7). Each is guarded by its
                                own `test reg,reg / je`, so a NULL pointer leaves its three frame words
                                untouched - they are never read either, because of the select below
   - the copy is raw, not a conversion ......... the six dwords move with `mov eax,[reg]; mov [frame],eax`
                                - no fld/fstp between them - so they are bit patterns and the adapter
                                uses rd32/wr32, not rdf32/wrf32, for them. Only the immediates are
                                float writes
   - NULL becomes 0 without a branch ........... 0x102e7fe9-0x102e7ff0 (and 0x102e7ff4-0x102e7ffb,
                                0x102e7ffd-0x102e8005) is `neg ecx / sbb ecx,ecx / lea edi,[ebp-0xc] /
                                and ecx,edi` - all-ones when the source pointer was non-NULL, zero when
                                it was not, so what the callee receives is either the address of the
                                group or NULL. That is why the uninitialised words are harmless, and why
                                a conversion must reproduce the ZERO rather than the bytes: pushing the
                                frame address unconditionally would hand the callee garbage the original
                                never lets it see
   - the angle test is `!= 0.0f`, and it is read twice .. `fld [ebp+0x1c]` (0x102e7f90) then
                                `fcom [0x103295d8]` (0x102e7f93) and, after the block, `fcomp
                                [0x103295d8]` (0x102e7fd5). 0x103295d8 is the dword 00000000, +0.0f
                                (tools/cow/peek_bytes.py --len 4). Both are followed by
                                `fnstsw ax / test ah,0x44 / jnp`, and 0x44 masks ah bit 2 (C2) and bit 6
                                (C3): fcom leaves C3C2 = 00 for greater, 00 for less, 10 for equal and 11
                                for unordered, so the masked value has ODD popcount only for EQUAL and
                                `jnp` is taken only there. The first `jnp` jumps past the trig block and
                                the second jumps to `xor eax,eax` - so both say the same thing: block
                                runs and pointer passed when the angle is NOT zero, block skipped and
                                NULL passed when it is. NaN is unordered, hence even parity, hence it
                                RUNS the block - which is why the predicate is written as a comparison
                                against the image's own zero and not as a bit test on the sign
   - the trig is of the NEGATED angle, and both calls get the same value .. `fld [0x1032a3d0]` (which is
                                0xbf800000, -1.0f) then `fmul st(1)` (0x102e7fb0) - side A's own line is
                                `x87_s0 = fr_cw(x87_cw, x87_s0 * x87_s1)`, i.e. st(0)*st(1), so the
                                product is -1.0f*angle and NOT an angle scaled by some constant - then
                                `fld st(0)` (0x102e7fb2) so `fsin` (0x102e7fb4) and `fcos` (0x102e7fb9)
                                see one value, stored at [ebp-0x2c] and [ebp-0x28] with the two zeros at
                                [ebp-0x34] and [ebp-0x30]. The angle itself is left on the stack by the
                                `fcom` and taken back by the `fcomp`, so the entry's x87 work is net zero
   - sin/cos are the CRT's, which is exactly what side A calls .. the generated body is
                                `x87_s0 = fr_cw(x87_cw, sin(x87_s0))` and the harness pins fcw 0x027F,
                                where PC=double makes fr_cw the identity; there is no fsin/fcos helper in
                                runtime/guest.h to ask. src/geom/cow_102d8be9_quaternion_from_axis_angle.c
                                already computes it this way and passes, so this does too, rounding to
                                float only at the store
   - the writes interleave, and the trace sees that .. the order is group0's first dword, its 1.0f, its
                                second dword, then group1's, then the four trig words, then group2's,
                                then the pushes - not group by group in address order. cowdiff compares
                                the guest memory trace, so the adapter keeps that order even where it
                                looks untidy, and does not hoist a read out of it
   - seven words for the table routine, five for the slot .. 0x102e7ff2-0x102e800f push the three
                                group-or-NULL pointers, the trig-or-NULL pointer, two zeros and
                                `lea eax,[ebp-0x74]`, then `call 0x102d7e83` - which is
                                `jmp dword ptr [0x103cc4ac]`, a table thunk, so bridged and stubbed. No
                                `add esp` follows, so the callee cleans the seven. Then 0x102e8015-
                                0x102e8027 push the eighth argument, the buffer, [ebp+0x10], [ebp+0xc]
                                and the object, and 0x102e8028 `call dword ptr [ecx+0x18]` with ecx the
                                vtable read from the object
   - the buffer is the reason the pushes matter .. [ebp-0x74] is 72 bytes handed to BOTH callees, and
                                the pushes below the frame land at esp values that depend on what the
                                first callee left behind, so they are emitted at the guest's own esp
                                rather than through a host temporary
   - stdcall, eight arguments ............. 0x102e802e `ret 0x20`: the callee cleans eight words, so
                                rt_return's pop is 0x20 bytes, and the `leave` at 0x102e802d restores
                                esp from ebp no matter what the callees did to it
   - eax is whatever the slot returns .......... 0x102e8018 loads the object into eax and 0x102e8028
                                overwrites it with the callee's answer; the entry never reads it again
                                and `pop edi / pop esi` follow, so rt_return takes g->eax as it comes
   - one way in .......................... tools/cow/refs_to.py 0x102e7f5a: one data reference

   Proof: tools/cow/cowdiff.py 0x102e7f5a - PASS on fault, eax, edx, callee-saved, esp, st0/top, memory
   (address, size, value) and calls out, over the states of cow/seeds/102e7f5a.json plus the fuzzed ones,
   with every generated instruction reached. The table thunk 0x102d7e83 is STUBBED (its slot's file image
   is the unconverted refresh trampoline, which the fuzzed states would follow into recursion); the
   vtable slot is NOT stubbed but PINNED to a real 2-instruction function, because instrument() rewrites
   only direct f_<hex>(g) calls and side A reaches the slot through rt_call_indirect, which never
   consults the stub table - pinning means both sides run the same code, which is the only way an
   indirect call can be compared at all. The object, its vtable and the three caller pairs are pinned
   into the arena; states vary which of the three pairs exist, whether the angle is zero, and whether
   the angle is NaN.

   Name: cow_orient_from_axes (guess) - three pairs of caller floats with a default third component, an
   angle turned into a sine and a cosine, a 72-byte buffer built by a geometry table routine and handed
   to an object's vtable is the shape of orienting something by axes and an angle. Nothing the entry
   does on its own says what the buffer is laid out as, and the table routine behind the thunk is what
   would say so.
*/
#include "cow.h"

/* The trig group the entry writes when the angle is not zero: two zeros, then the sine and the cosine
   of the angle negated by the image's own -1.0f, in the order [ebp-0x34,-0x30,-0x2c,-0x28]. Returns 0
   when the group must not exist at all, which is also when the entry passes NULL for it - the same
   comparison, read twice. */
int cow_orient_trig_group(float angle, float zero, float neg_one, float trig[4])
{
    if (angle == zero) {
        /* +0.0f and -0.0f both compare equal, which is the single case whose C3/C2 popcount is odd and
           so the only one `jnp` takes. NaN compares false against everything, so it falls through and
           the group IS produced - as it is in the original, where unordered leaves both bits set. */
        return 0;
    }
    const double t = (double)neg_one * (double)angle; /* 0x102e7faa-0x102e7fb0, exact in double */
    trig[0] = 0.0f; /* 0x102e7fa0-0x102e7fa2: `fldz`/`fstp` - a positive zero, not a negated one */
    trig[1] = 0.0f; /* 0x102e7fa5-0x102e7fa7 */
    trig[2] = (float)sin(t); /* 0x102e7fb4-0x102e7fb6; side A calls the same CRT sin, at the same width */
    trig[3] = (float)cos(t); /* 0x102e7fb9-0x102e7fbb, of the SAME t via the `fld st(0)` at 0x102e7fb2 */
    return 1;
}

/* The entry's NULL test expressed the way the entry expresses it - without a branch. `neg reg /
   sbb reg,reg` makes all-ones when the caller's pointer was non-NULL and zero when it was not, and the
   `and` with the frame address therefore yields either the group's address or 0. The callee's "there is
   no group" argument is this value, so it has to be exactly 0 and not a pointer at unwritten words. */
CowU32 cow_group_address_or_null(CowU32 caller_pointer, CowU32 group_at)
{
    return (caller_pointer != 0u) ? group_at : 0u;
}

/* COW_ADAPTER BEGIN - stdcall, eight arguments, `ret 0x20`. Every push, store and call below is the
   entry's own effect in the entry's own order: cowdiff compares the guest memory trace, and several of
   these writes interleave in a way that no tidied order reproduces. The entry's x87 work is net zero on
   the register stack (the `fcom` leaves the angle for the `fcomp` that pops it), so g->top and g->st are
   left as the generated body leaves them. The readability gate skips this block. */
void cow_adapter_102e7f5a(Guest* g)
{
    const uint32_t sp0 = g->esp; /* E: the caller's esp, and the base every slot below is named from */

    g->esp -= 4u; /* 0x102e7f5a: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102e7f5b: mov ebp, esp - so [ebp+0x8] is the first argument */
    g->esp -= 0x74u; /* 0x102e7f5d: sub esp, 0x74 - the buffer at ebp-0x74 and the groups above it */
    g->esp -= 4u; /* 0x102e7f60: push esi - the CALLER's esi, before this entry overwrites it */
    wr32(g->esp, g->esi);

    g->esi = rd32((uint32_t)(g->ebp + 0x14u)); /* 0x102e7f61: mov esi, [ebp+0x14] - first pair */
    /* 0x102e7f64/0x102e7f66: test esi,esi sits BETWEEN the two pushes, and `push edi` is the second of
       them - so the caller's edi lands at ebp-0x7c here, not wherever a tidied prologue would put it,
       and the `je` that follows is what makes the group0 stores below it conditional. */
    g->esp -= 4u;
    wr32(g->esp, g->edi);
    if (g->esi != 0u) { /* 0x102e7f67: je 0x102e7f79 */
        const uint32_t lo = rd32(g->esi); /* 0x102e7f69: mov eax,[esi] */
        /* 0x102e7f6b/0x102e7f70: fld1 / fstp [ebp-0x1c] - the immediate 1.0f, in the middle */
        wr32((uint32_t)(g->ebp - 0x24u), lo); /* 0x102e7f6d */
        wrf32((uint32_t)(g->ebp - 0x1cu), 1.0f); /* 0x102e7f70 */
        wr32((uint32_t)(g->ebp - 0x20u), rd32((uint32_t)(g->esi + 4u))); /* 0x102e7f73/0x102e7f76 */
    }

    g->edx = rd32((uint32_t)(g->ebp + 0x18u)); /* 0x102e7f79: mov edx, [ebp+0x18] - second pair */
    if (g->edx != 0u) { /* 0x102e7f7c/0x102e7f7e */
        const uint32_t lo = rd32(g->edx); /* 0x102e7f80 */
        wr32((uint32_t)(g->ebp - 0x18u), lo); /* 0x102e7f84 */
        wrf32((uint32_t)(g->ebp - 0x10u), 0.0f); /* 0x102e7f82/0x102e7f87: fldz / fstp */
        wr32((uint32_t)(g->ebp - 0x14u), rd32((uint32_t)(g->edx + 4u))); /* 0x102e7f8a/0x102e7f8d */
    }

    /* The angle, and the trig group it may or may not produce. Read here because that is where the
       entry loads it, and the two tests on it are the same test. */
    const float angle = rdf32((uint32_t)(g->ebp + 0x1cu)); /* 0x102e7f90: fld [ebp+0x1c] */
    const float zero = rdf32(COW_ADDR_FLOAT_ZERO_103295D8); /* 0x103295d8: the guard, +0.0f */
    const float neg_one = rdf32(COW_ADDR_FLOAT_NEG_ONE); /* 0x1032a3d0: -1.0f, the negation */
    float trig[4];
    const int have_trig = cow_orient_trig_group(angle, zero, neg_one, trig);
    if (have_trig) { /* 0x102e7fa0-0x102e7fbb, in the order the stores happen */
        wrf32((uint32_t)(g->ebp - 0x34u), trig[0]);
        wrf32((uint32_t)(g->ebp - 0x30u), trig[1]);
        wrf32((uint32_t)(g->ebp - 0x2cu), trig[2]); /* the sine */
        wrf32((uint32_t)(g->ebp - 0x28u), trig[3]); /* the cosine */
    }

    g->ecx = rd32((uint32_t)(g->ebp + 0x20u)); /* 0x102e7fbe: mov ecx, [ebp+0x20] - third pair */
    if (g->ecx != 0u) { /* 0x102e7fc1/0x102e7fc3 */
        const uint32_t lo = rd32(g->ecx); /* 0x102e7fc5 */
        wr32((uint32_t)(g->ebp - 0xcu), lo); /* 0x102e7fc9 */
        wrf32((uint32_t)(g->ebp - 4u), 0.0f); /* 0x102e7fc7/0x102e7fcc: fldz / fstp */
        wr32((uint32_t)(g->ebp - 8u), rd32((uint32_t)(g->ecx + 4u))); /* 0x102e7fcf/0x102e7fd2 */
    }

    /* The five words the table routine gets before the two zeros and the buffer, in push order: third
       group, trig, second group, first group. Each goes through the register the entry uses for it -
       `neg/sbb/lea/and` into ecx, edx and esi, and the buffer through eax then edx - because the entry
       LEAVES those registers holding those values and cowdiff compares them at the return. The last one
       is the tell: 0x102e801d's `lea edx,[ebp-0x74]` is the final write to edx, so edx must go back to
       the caller holding the buffer address, and a host temporary that never touches g->edx is wrong
       even though every value it computed was right. */
    /* 0x102e7fed: lea edi, [ebp-0xc] - the address the `and` masks against. It is restored by the
       `pop edi` on the normal path, but set it anyway: on a path that faults before that pop, edi is
       what this instruction left there. */
    g->edi = (uint32_t)(g->ebp - 0xcu);
    g->ecx = cow_group_address_or_null(g->ecx, (uint32_t)(g->ebp - 0xcu)); /* 0x102e7fe9-0x102e7ff0 */
    g->eax = have_trig ? (uint32_t)(g->ebp - 0x34u) : 0u; /* 0x102e7fe2 / 0x102e7fe7 */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102e7ff2: push ecx */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x102e7ff3: push eax */
    g->edx = cow_group_address_or_null(g->edx, (uint32_t)(g->ebp - 0x18u)); /* 0x102e7ff4-0x102e7ffb */
    g->esp -= 4u; wr32(g->esp, g->edx); /* 0x102e7fff: push edx */
    g->esi = cow_group_address_or_null(g->esi, (uint32_t)(g->ebp - 0x24u)); /* 0x102e7ffd-0x102e8005 */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102e8007: push esi */
    g->eax = (uint32_t)(g->ebp - 0x74u); /* 0x102e800c: lea eax, [ebp-0x74] - the buffer */
    g->esp -= 4u; wr32(g->esp, 0u); /* 0x102e8008: push 0 */
    g->esp -= 4u; wr32(g->esp, 0u); /* 0x102e800a: push 0 */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x102e800f: push eax - the buffer */

    cow_call_axes_from_table(COW_ADDR_AXES_THUNK_RETURN); /* 0x102e8010 -> the table thunk */

    g->esp -= 4u; /* 0x102e8015: push dword [ebp+0x24] - the eighth argument, passed through */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0x24u)));
    g->eax = rd32((uint32_t)(g->ebp + 8u)); /* 0x102e8018: mov eax, [ebp+8] - the object */
    g->ecx = rd32(g->eax); /* 0x102e801b: mov ecx, [eax] - its vtable */
    g->edx = (uint32_t)(g->ebp - 0x74u); /* 0x102e801d: lea edx, [ebp-0x74] - and edx stays that way */
    g->esp -= 4u;                          /* 0x102e8020: push edx, the buffer again */
    wr32(g->esp, g->edx);
    g->esp -= 4u; /* 0x102e8021: push dword [ebp+0x10] */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0x10u)));
    g->esp -= 4u; /* 0x102e8024: push dword [ebp+0xc] */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0xcu)));
    g->esp -= 4u; /* 0x102e8027: push eax - the object, as a stack argument, not in ecx */
    wr32(g->esp, g->eax);

    /* 0x102e8028: call dword ptr [ecx+0x18]. The target is read HERE, at the point the original reads
       it, so a vtable the callee itself modified is seen the same way both sides see it. */
    cow_call_vtable_set_orient(rd32((uint32_t)(g->ecx + COW_OFF_VTABLE_SET_ORIENT)),
                               COW_ADDR_AXES_VTABLE_RETURN);

    g->edi = rd32(g->esp); g->esp += 4u; /* 0x102e802b: pop edi */
    g->esi = rd32(g->esp); g->esp += 4u; /* 0x102e802c: pop esi */
    g->esp = g->ebp; /* 0x102e802d: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0x20u); /* 0x102e802e: ret 0x20 - eight words, in BYTES */
}
/* COW_ADAPTER END */
