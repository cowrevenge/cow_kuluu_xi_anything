/* f_102d7ef1 - build a 4x4 transform: a uniform scale, a table routine's orientation about a point, and
   an optional extra translation. Returns the matrix it filled.

   Five words come in: the matrix to write, a scale, an offset pointer, a rotation pointer and a further
   translation pointer. The matrix is cleared to a uniform-scale diagonal, then - if an offset was given -
   the offset is SUBTRACTED out of the translation row, a routine behind the function table is called on
   the matrix, and the offset is ADDED back. If no offset was given the routine is still called, once, on
   the same arguments. Finally the translation pointer, if there is one, is added to the translation row.

   Evidence
   - it is a 4x4 float matrix ........ 0x102d7f04-0x102d7f4c write [esi+0x00] through [esi+0x3c], sixteen
                                floats, and 0x102d7fce `mov eax,esi` returns the same pointer. The
                                entries written are the diagonal at +0x00, +0x14, +0x28 and the corner at
                                +0x3c - the only four positions a row-major 4x4 has that mean "scale and
                                homogeneous 1" - and everything else gets +0.0f
   - the diagonal is a UNIFORM scale .. one `fld dword ptr [ebp+0xc]` at 0x102d7f3f feeds three stores:
                                `fst [esi]`, `fst [esi+0x14]`, `fstp [esi+0x28]` (0x102d7f42/0x102d7f44/
                                0x102d7f47). ONE register value, THREE fields - so all three carry the
                                identical float, and a conversion that read the parameter three times
                                would still be right here but is not what happens. +0x3c is 1.0f from
                                `fld1` at 0x102d7f4a, an immediate, not an image read
   - the twelve zeros are +0.0f from `fldz`, in a specific order .. [esi+0x38,0x34,0x30,0x2c,0x24,0x20,
                                0x1c,0x18,0x10,0x0c,0x08,0x04] at 0x102d7f04-0x102d7f3c. Not ascending,
                                and the first one lands between the two register pushes (0x102d7f00 push
                                esi, 0x102d7f07 push edi) so the trace interleaves a matrix store with the
                                prologue. `fldz` leaves a POSITIVE zero, which matters because a
                                conversion that wrote the negation of something, or cleared the region by
                                other means, is not distinguishable by value at all but is by the sign bit
   - the translation row is +0x30,+0x34,+0x38 .... those three are zeroed with everything else and then
                                modified three times over: subtracted by [ebp+0x10]'s three floats
                                (0x102d7f6c-0x102d7f83, `fsub [edi]`, `fsub [edi+4]`, `fsub [edi+8]`),
                                passed across the table call, then added back with `fadd` against the SAME
                                three words of the SAME pointer (0x102d7f8b-0x102d7fa2), and finally
                                added to [ebp+0x18]'s three floats if that was given
                                (0x102d7fb3-0x102d7fca). Subtract, transform, add back is the T(p)·R·T(-p)
                                sandwich, so the routine orients ABOUT the offset rather than moving by it
   - the sandwich is observable, not algebra ....... the three `fsub`s are followed by the call at
                                0x102d7f86 and only THEN the three `fadd`s, so the adds apply to whatever
                                the routine left in those fields. Doing the subtraction and addition
                                together because they "cancel" is a rewrite, not a translation - and it
                                also loses the six stores, which are in the trace
   - two call sites for one routine, and a THIRD path that calls neither .. `test edi,edi / je
                                0x102d7fa7` at 0x102d7f61-0x102d7f6a: with an offset the call is at
                                0x102d7f86 (between the subtract and the add), without one it is at
                                0x102d7fa7 (straight to the merge). Same three arguments each time - the
                                scratch slot and the matrix pointer pushed TWICE (0x102d7f68/0x102d7f69
                                `push esi` / `push esi`), so in=and out= are the same object and the
                                routine rewrites the matrix in place. Different return address each time,
                                which is why there are two COW_ADDR_ORIENT_THUNK_RETURN_* macros and the
                                bridge takes a retaddr. But BOTH of those sites are inside the
                                rotation-present branch, because the `je 0x102d7fac` at 0x102d7f4f has
                                rel8 0x5b from 0x102d7f51 = 0x102d7fac - a target past both calls, not
                                past the first one. No rotation means no orient call at all: that is the
                                third path, and it is what distinguishes a routine that "always runs once"
                                from one that runs only when there is something to orient by
   - the branch is a `cmp`, not a `test`, and it fires much later .. `cmp dword ptr [ebp+0x14], 0` at
                                0x102d7efa, and the `je` that consumes it is at 0x102d7f4f - fifty-one
                                instructions and the whole matrix clear away. Nothing between touches
                                flags (fld/fst/fstp/push do not), so the sense is: a NULL rotation pointer
                                skips the rotation call AND leaves the matrix a pure scale. Reproducing
                                that distance is not decoration: it is why the clear happens even when the
                                rotation is absent
   - esp is aligned, and the scratch slot depends on it .. `and esp, 0xfffffff0` at 0x102d7ef4 aligns the
                                frame DOWN before `sub esp,0x48`, so where the frame lands depends on the
                                caller's esp - which cowdiff fuzzes. Two `lea`s then name one scratch
                                word: `lea eax,[esp+0x14]` at 0x102d7f54 (taken after one push) and
                                `lea eax,[esp+0x10]` at 0x102d7f63 (taken after the rotation call
                                returned). They address the same word only if the callee cleaned the two
                                words the entry pushed - which is how the 8-byte and 12-byte stub pops are
                                known rather than assumed, and why the alignment is reproduced instead of
                                an aligned host local being used for the scratch
   - both callees are table thunks ...... 0x102d7d56 is `jmp dword ptr [0x103cc4a8]` and 0x102d6f23 is
                                `jmp dword ptr [0x103cc41c]`, both slots in the function table whose row
                                COW_ADDR_AXES_THUNK_SLOT also sits in. Bridged and stubbed, never
                                converted: their slots' file images hold the unconverted refresh
                                trampoline, and letting 2000 fuzzed states follow it takes the harness's
                                own stack down
   - stdcall, five arguments, returns the matrix ..... 0x102d7fd4 `ret 0x14` cleans five words
                                ([ebp+8] matrix, [ebp+0xc] scale, [ebp+0x10] offset, [ebp+0x14] rotation,
                                [ebp+0x18] translation) and eax = esi = the matrix; `mov esp,ebp / pop ebp`
                                restores the frame whatever the pushes did
   - one way in ........................ tools/cow/refs_to.py 0x102d7ef1: one data reference

   Proof: tools/cow/cowdiff.py 0x102d7ef1 - PASS on fault, eax, edx, callee-saved, esp, st0/top, memory
   (address, size, value) and calls out, over the states of cow/seeds/102d7ef1.json plus the fuzzed ones,
   with every generated instruction reached. Both table thunks are STUBBED (pop 8 and pop 0xc, one for
   each site), the matrix is pinned into the arena with a sentinel in all sixteen fields, and the offset,
   rotation and translation objects are pinned too - so a missing or extra store shows, and the three
   pointers being non-NULL is what makes the branches reach the interesting side. One state gives no
   rotation pointer at all, one gives no offset, one gives neither, and one has the offset and the
   translation pointing at the same three floats so the sandwich's two halves cannot be silently folded.

   Name: cow_transform_from_scale_and_orientation (guess) - a uniform scale on the diagonal, a translation
   row taken around a table routine by subtract-and-add-back about a point, and an added translation is
   scale-then-rotate-about-a-point-then-move. That the routine behind 0x103cc41c is an orientation is
   inferred from being called between a subtraction and the matching addition; the routine itself is
   unconverted, so the inference is the entry's shape and not the routine's contract.
*/
#include "cow.h"

/* The matrix as the entry lays it out: a uniform scale down the diagonal of the upper-left 3x3, +1.0f in
   the homogeneous corner, and a translation row at +0x30..+0x38 that the caller's offset and translation
   move. Not a guest layout - the matrix lives in guest memory at the address the first argument names,
   and the adapter writes it field by field there, in the entry's own order. */
typedef struct CowScaleOrientMatrix
{
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;
} CowScaleOrientMatrix;

/* The matrix the entry writes before either table call: every field +0.0f except the diagonal +0x00,
   +0x14 and +0x28, which all carry the SAME scale value (one `fld` feeding three stores in the original,
   so they cannot differ), and +0x3c, which is the positive 1.0f of `fld1`. */
void cow_scale_orient_matrix_clear(CowScaleOrientMatrix* m, float scale)
{
    const float zero = 0.0f; /* 0x102d7efe etc: `fldz` - a positive zero, not a computed one */
    m->m00 = scale; m->m01 = zero; m->m02 = zero; m->m03 = zero;
    m->m10 = zero;  m->m11 = scale; m->m12 = zero; m->m13 = zero;
    m->m20 = zero;  m->m21 = zero;  m->m22 = scale; m->m23 = zero;
    m->m30 = zero;  m->m31 = zero;  m->m32 = zero;  m->m33 = 1.0f; /* 0x102d7f4a: fld1 */
}

/* One component of the translation row, moved by one component of a caller vector. Each is `fld` the
   field, one `fsub` or `fadd` of a float read out of the vector, and one `fstp` - so the field is exactly
   one rounding of the sum of two floats held as doubles, and the write-back is unconditional: a field
   whose delta is zero is still stored. */
float cow_translation_row_component(float field, float delta, int add)
{
    return (float)(add ? ((double)field + (double)delta) : ((double)field - (double)delta));
}

/* COW_ADAPTER BEGIN - stdcall, five arguments, `ret 0x14`. The pushes, the aligned frame, the scratch
   slot and every store are the entry's own effects in the entry's own order: the twelve zero stores are
   interleaved with the prologue pushes and the three vector edits straddle a call, so an order that
   tidies them is a different program. g->top/g->st are left as the generated body leaves them (the
   entry's x87 work is net zero: every fldz is popped by its own fstp and the one `fld` of the scale is
   popped by its third `fstp`). The readability gate skips this block. */
void cow_adapter_102d7ef1(Guest* g)
{
    g->esp -= 4u; /* 0x102d7ef1: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d7ef2: mov ebp, esp */
    g->esp &= 0xfffffff0u; /* 0x102d7ef4: and esp, 0xfffffff0 - the frame is aligned DOWN first, so every
                              [esp+..] below, and the scratch slot both callees are handed, sit at
                              addresses that depend on the caller's esp */
    g->esp -= 0x48u; /* 0x102d7ef7: sub esp, 0x48 */

    /* There is deliberately no captured base for the scratch slot. The two `lea eax,[esp+0x14]` at
       0x102d7f54 and `lea eax,[esp+0x10]` at 0x102d7f63 are evaluated against the esp of THEIR OWN
       moment - which already carries the `push esi` and `push edi` of the prologue, and in the second
       case the callee's cleanup of the rotation call - and both land on the same word only because of
       that. Hoisting them into one `frame + 0x10` constant names a different word and cowdiff sees it
       in the argument the two callees are handed. */

    /* 0x102d7efa: cmp dword [ebp+0x14], 0 - consumed by the je 0x102d7f4f BELOW, after the whole clear.
       The value is read once, here, because that is where the entry reads it. */
    const uint32_t rotation = rd32((uint32_t)(g->ebp + 0x14u));

    g->esp -= 4u; /* 0x102d7f00: push esi - the CALLER's esi, before this entry overwrites it */
    wr32(g->esp, g->esi);
    g->esi = rd32((uint32_t)(g->ebp + 8u)); /* 0x102d7f01: mov esi, [ebp+8] - the matrix */

    /* The scale is read once here because the entry reads it once: ONE `fld` at 0x102d7f3f feeds the
       three diagonal stores, so the three fields cannot differ from each other. */
    const float scale = rdf32((uint32_t)(g->ebp + 0xcu)); /* 0x102d7f3f: fld [ebp+0xc] */
    CowScaleOrientMatrix m;
    cow_scale_orient_matrix_clear(&m, scale);

    /* The stores, in the entry's order - which is neither address order nor field order, and the first
       of them falls between the two prologue pushes. */
    wrf32((uint32_t)(g->esi + 0x38u), m.m32); /* 0x102d7efe/0x102d7f04 */
    g->esp -= 4u; /* 0x102d7f07: push edi - the caller's edi */
    wr32(g->esp, g->edi);
    wrf32((uint32_t)(g->esi + 0x34u), m.m31); /* 0x102d7f08-0x102d7f0a */
    wrf32((uint32_t)(g->esi + 0x30u), m.m30); /* 0x102d7f0d-0x102d7f0f */
    wrf32((uint32_t)(g->esi + 0x2cu), m.m23); /* 0x102d7f12-0x102d7f14 */
    wrf32((uint32_t)(g->esi + 0x24u), m.m21); /* 0x102d7f17-0x102d7f19 */
    wrf32((uint32_t)(g->esi + 0x20u), m.m20); /* 0x102d7f1c-0x102d7f1e */
    wrf32((uint32_t)(g->esi + 0x1cu), m.m13); /* 0x102d7f21-0x102d7f23 */
    wrf32((uint32_t)(g->esi + 0x18u), m.m12); /* 0x102d7f26-0x102d7f28 */
    wrf32((uint32_t)(g->esi + 0x10u), m.m10); /* 0x102d7f2b-0x102d7f2d */
    wrf32((uint32_t)(g->esi + 0x0cu), m.m03); /* 0x102d7f30-0x102d7f32 */
    wrf32((uint32_t)(g->esi + 0x08u), m.m02); /* 0x102d7f35-0x102d7f37 */
    wrf32((uint32_t)(g->esi + 0x04u), m.m01); /* 0x102d7f3a-0x102d7f3c */

    wrf32(g->esi, m.m00);                     /* 0x102d7f42: fst [esi] - the scale */
    wrf32((uint32_t)(g->esi + 0x14u), m.m11); /* 0x102d7f44: fst [esi+0x14] - THE SAME VALUE */
    wrf32((uint32_t)(g->esi + 0x28u), m.m22); /* 0x102d7f47: fstp [esi+0x28] - and again */
    wrf32((uint32_t)(g->esi + 0x3cu), m.m33); /* 0x102d7f4a/0x102d7f4c: fld1 / fstp */

    /* 0x102d7f4f: je 0x102d7fac. The rel8 is 0x5b from 0x102d7f51, so the target is 0x102d7fac - which is
       PAST BOTH orient call sites, not past the rotation call. A NULL rotation pointer therefore skips
       the rotation call, the whole offset sandwich AND the orient routine: none of them runs, and none
       of their pushes touches the stack. Reading this as "only the rotation call is conditional" is the
       mistake this line exists to stop, and it is the one the first version of this file made. */
    if (rotation != 0u) {
        g->esp -= 4u; /* 0x102d7f51: push dword [ebp+0x14] - the rotation pointer */
        wr32(g->esp, rotation);
        /* The lea runs BEFORE the push, so the slot is the current esp + 0x14 and the push then lands
           four bytes below it. Reading them in the other order is off by four and the callee is handed
           the word above the scratch. */
        const uint32_t scratch_a = g->esp + 0x14u; /* 0x102d7f54: lea eax,[esp+0x14] */
        g->esp -= 4u;                              /* 0x102d7f58: push eax */
        wr32(g->esp, scratch_a);
        cow_call_scale_rot_from_table(COW_ADDR_SCALE_ROT_THUNK_RETURN); /* 0x102d7f59 */

        g->edi = rd32((uint32_t)(g->ebp + 0x10u)); /* 0x102d7f5e: mov edi, [ebp+0x10] - the offset */

        /* The three words the orient routine is given: the scratch slot and the matrix pointer twice.
           Pushed before the branch, so both of its call sites find them in place. */
        const uint32_t scratch_b = g->esp + 0x10u; /* 0x102d7f63: lea eax,[esp+0x10] - the SAME word that
                                                      scratch_a named, which is the whole proof that the
                                                      rotation callee cleaned the two words the entry
                                                      pushed for it: without that cleanup this esp is
                                                      eight higher and the callees get different slots */
        g->esp -= 4u;                              /* 0x102d7f67: push eax */
        wr32(g->esp, scratch_b);
        g->esp -= 4u; /* 0x102d7f68: push esi */
        wr32(g->esp, g->esi);
        g->esp -= 4u; /* 0x102d7f69: push esi - the same object again: in and out are one */
        wr32(g->esp, g->esi);

        if (g->edi != 0u) { /* 0x102d7f6a: je 0x102d7fa7 - this one really does skip only the sandwich */
        /* Subtract the offset out of the translation row. Read the three floats HERE, per component, in
           the order the fsubs read them - the row is about to be rewritten by the call below. */
        wrf32((uint32_t)(g->esi + 0x30u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x30u)), rdf32(g->edi), 0)); /* 0x102d7f6c-0x102d7f71 */
        wrf32((uint32_t)(g->esi + 0x34u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x34u)), rdf32((uint32_t)(g->edi + 4u)), 0)); /* 0x102d7f74- */
        wrf32((uint32_t)(g->esi + 0x38u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x38u)), rdf32((uint32_t)(g->edi + 8u)), 0)); /* 0x102d7f7d- */

        cow_call_orient_from_table(COW_ADDR_ORIENT_THUNK_RETURN_A); /* 0x102d7f86 */

        /* And add it back - against the row the routine LEFT, not the row that went in. */
        wrf32((uint32_t)(g->esi + 0x30u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x30u)), rdf32(g->edi), 1)); /* 0x102d7f8b-0x102d7f90 */
        wrf32((uint32_t)(g->esi + 0x34u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x34u)), rdf32((uint32_t)(g->edi + 4u)), 1)); /* 0x102d7f93- */
        wrf32((uint32_t)(g->esi + 0x38u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x38u)), rdf32((uint32_t)(g->edi + 8u)), 1)); /* 0x102d7f9c- */
        } else {
            cow_call_orient_from_table(COW_ADDR_ORIENT_THUNK_RETURN_B); /* 0x102d7fa7 - same routine, the
                                                                           other site, so a different word
                                                                           on the stack when it returns */
        }
    } /* 0x102d7f4f's `je` lands here when there was no rotation: no offset sandwich and NO orient call */

    g->eax = rd32((uint32_t)(g->ebp + 0x18u)); /* 0x102d7fac: mov eax, [ebp+0x18] - the translation */
    if (g->eax != 0u) { /* 0x102d7fb1: je 0x102d7fcd */
        wrf32((uint32_t)(g->esi + 0x30u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x30u)), rdf32(g->eax), 1)); /* 0x102d7fb3-0x102d7fb8 */
        wrf32((uint32_t)(g->esi + 0x34u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x34u)), rdf32((uint32_t)(g->eax + 4u)), 1)); /* 0x102d7fbb- */
        wrf32((uint32_t)(g->esi + 0x38u), cow_translation_row_component(
                 rdf32((uint32_t)(g->esi + 0x38u)), rdf32((uint32_t)(g->eax + 8u)), 1)); /* 0x102d7fc4- */
    }

    g->edi = rd32(g->esp); g->esp += 4u; /* 0x102d7fcd: pop edi */
    g->eax = g->esi; /* 0x102d7fce: mov eax, esi - the matrix is the return value */
    g->esi = rd32(g->esp); g->esp += 4u; /* 0x102d7fd0: pop esi */
    g->esp = g->ebp; /* 0x102d7fd1-0x102d7fd3: mov esp,ebp / pop ebp */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0x14u); /* 0x102d7fd4: ret 0x14 - five words, in BYTES */
}
/* COW_ADAPTER END */
