/* f_102d8019 - build a view matrix from an eye point, a point it looks away from, and an up hint.

   The entry takes four words: an object to fill, and three float triples. It differences two of them,
   asks the function table to do something to the difference, crosses that with the third vector, asks the
   table again, crosses the two results together, and writes sixteen floats at the object: the three
   results as the columns of an orthonormal frame, +0.0f down the fourth column, the negative dot product
   of each axis with the SECOND vector along the fourth row, and 1.0f in the corner. That is the
   look-at/view matrix, field for field, with the frame placed at the second vector.

   Evidence
   - the frame is built the way a view matrix builds it
                                               d  = the float triple at [ebp+0xc] minus the one at
                                               [ebp+0x10] (0x102d8026-0x102d803b: three `fld [ebx]` /
                                               `fsub [eax]` pairs), then handed to the table routine and
                                               used as an axis thereafter.
                                               n  = the routine applied to (up x d): c0 = d2*up1 - d1*up2,
                                               c1 = d0*up2 - d2*up0, c2 = d1*up0 - d0*up1 at
                                               0x102d804e-0x102d808d - the operand order of each `fsubp
                                               st(1)` puts the first product in the destination, which is
                                               the cross product of the caller's third vector by d and not
                                               its negation.
                                               u  = d x n, computed at 0x102d809b-0x102d80cf and NEVER
                                               stored: the three products live on the register stack until
                                               0x102d80f2/0x102d80fb/0x102d80ff file them at +0x04, +0x14
                                               and +0x24.
                                               That is z = normalize(eye - at), x = normalize(up x z),
                                               y = z x x - the classic construction, with the third vector
                                               as the up hint
   - the sixteen stores say which vector is the eye  the upper-left 3x3 is [n | u | d] column by column
                                               (+0x00,+0x04,+0x08 = n0,u0,d0 at 0x102d80d4/0x102d80f2/
                                               0x102d8112, +0x10..+0x18 and +0x20..+0x28 the same for the
                                               other two rows), +0x0c/+0x1c/+0x2c come from `fldz` and
                                               +0x3c from `fld1`, and the fourth row is -n.b, -u.b, -d.b
                                               (0x102d80eb/0x102d8123/0x102d8144 each `fchs` a dot product
                                               of the axis with [ebp+0xc]). A matrix that rotates by a
                                               frame and then translates by -dot(axis, P) moves P to the
                                               origin, so the vector at [ebp+0xc] is the point the frame
                                               sits AT - the eye - and the one at [ebp+0x10] is the point
                                               the eye is looked away from. Nothing here says who consumes
                                               the matrix
   - five of the nine axis floats are raw dword moves .. n1 -> +0x10 and n2 -> +0x20 (0x102d809e/0x102d80a4,
                                               0x102d80aa/0x102d80b0) and d0 -> +0x08, d1 -> +0x18, d2 ->
                                               +0x28 (0x102d80f5/0x102d8112, 0x102d8115/0x102d8118,
                                               0x102d811d/0x102d8120) go through ecx with no FPU
                                               involvement at all. They are BIT copies, and each is loaded
                                               from the frame well before the store that uses it - d0 is
                                               read at 0x102d80f5 and filed at 0x102d8112, past two stores
                                               into the object - so in the aliased state the value that
                                               reaches memory is the one that was in the slot at the LOAD,
                                               not at the store
   - the register stack outlives the stores .... the three u components are still on the stack when the
                                               first store goes out at 0x102d80d4, when `pop edi`/`pop esi`
                                               run (0x102d80fa/0x102d80fe), and when the second dot product
                                               reaches them by index at 0x102d8102-0x102d810f. The three
                                               `fld [ebp-0x18]`-style reads around them are separate loads
                                               of the same slots (0x102d80d1 and 0x102d80d6 both load n0),
                                               so the slots are read more than once and the stack is read
                                               more than once, and the two are not the same thing
   - the last read is after everything ...... the third dot product (0x102d812e-0x102d8142) reads d0, d1,
                                               d2 and the three components of [ebp+0xc] AFTER the stores
                                               into the object, so a conversion that hoisted those reads
                                               agrees on every state where the object does not overlap the
                                               frame or the caller's vector, and disagrees otherwise. The
                                               seed aims the object at the entry's own frame to make that
                                               state exist
   - the table routine is asked twice, for the same kind of job 0x102d8049 and 0x102d8093 both call
                                               COW_ADDR_VECTOR3_TABLE_THUNK with `lea eax,[frame]` pushed
                                               TWICE - in=and out= are one buffer - and both results are
                                               then used as an axis of an orthonormal frame. What the
                                               routine does is still not established by anything this entry
                                               shows (the seed stubs it: the slot's file image is the
                                               unconverted refresh trampoline), but two callers that hand
                                               it a vector and expect a usable axis is the strongest thing
                                               said about it so far, and it is recorded as such rather than
                                               as a normalise
   - the direction flag moves the copy ...... 0x102d8090-0x102d8092 are three `movsd` from esi (ebp-0x24,
                                               the cross product just built) to edi (ebp-0x18, the buffer
                                               the second call will receive), and both pointers walk by +4,
                                               or by -4 with DF set - which the harness fuzzes. With DF set
                                               the second and third words land on the pushed argument
                                               addresses instead and the buffer the callee is handed keeps
                                               the stack's own bytes, so the state pins the frame copy as
                                               well as the vectors
   - the two pushes come BEFORE the copy ...... 0x102d8086 and 0x102d808c push `lea eax,[ebp-0x18]` twice
                                               and only THEN the three movsd run, so the trace order is
                                               push, push, copy, copy, copy, call. Same shape at the first
                                               call (0x102d8041/0x102d8045 push, 0x102d8046 stores d2,
                                               0x102d8049 calls) - the entry pushes the address of a buffer
                                               it has not finished writing
   - stdcall, four arguments ................ 0x102d815e `ret 0x10`: the callee cleans 0xc... the four
                                               words above the return address, so rt_return's pop is 0x10
                                               BYTES. The order by offset is object, eye, at, up
   - nothing asks for it .................... no code reference and no data reference names this address
                                               (tools/cow/owner_index.py 0x102d8019, and loopy reports
                                               "references to 102D8019: 0"), unlike its four neighbours in
                                               the geometry cluster, which are all slots of the pointer
                                               table at 0x103cc560. It is converted anyway: the ledger
                                               books it as a function and the recompiler translated it

   Proof: tools/cow/cowdiff.py 0x102d8019 - PASS on eax, edx, callee-saved, esp, st0/top, memory writes
   (address, size, value, order - which is what pins the five raw dword moves, the two scratch buffers,
   the three `fldz`/`fld1` stores and the three negated dots) and calls out. cow/seeds/102d8019.json pins
   the object, the three vectors and the entry's frame copies of them, and stubs the table thunk twice -
   the two sites have different return addresses, so the stack the callee pops is different at each.

   Name: cow_view_matrix_from_eye_at_up (guess) - from the frame construction and the -dot(axis, eye)
   translation row. The four arguments are named for the role the reading gave them; who calls it did not
   survive in the image.
*/
#include "cow.h"

/* One component of a cross product. The entry computes both products first (`fld`/`fmul` each) and then
   one `fsubp st(1)`, which leaves the FIRST product in the destination - so the minuend is the product of
   the components the entry loaded first, and getting that backwards is a sign error that only NaN
   payloads and the sign of a zero can see (mutation M4). The products are passed in rather than formed
   here because they read the caller's vectors, and on a fuzzed pointer the read is the instruction that
   faults - see mutation M1. */
double cow_vector3_cross_component(double minuend, double subtrahend)
{
    return cow_fsub_r(minuend, subtrahend);
}

/* The dot product of an axis held in memory with one of the caller's float triples: three
   `fld [axis+k]` / `fmul [vector+k]` pairs and then two `faddp st(1)`. The entry writes it unrolled; this
   is the same three steps in the same order - the first product becomes st(0) and each later term is
   added INTO it, so the association is (t0 + t1) + t2 and not t0 + (t1 + t2) (mutation M5), and the first
   term is a product rather than a zero accumulator, which is what keeps a -0.0f a -0.0f. The reads are
   here, in this order, because they are what faults on a fuzzed pointer. */
double cow_vector3_dot_product(uint32_t axis_at, uint32_t vector_at)
{
    double sum = cow_fmul_m((double)rdf32(axis_at), vector_at);
    for (int component = 1; component < 3; ++component) {
        sum = cow_fadd_r(sum, cow_fmul_m((double)rdf32((uint32_t)(axis_at + 4u * (unsigned)component)),
                                              (uint32_t)(vector_at + 4u * (unsigned)component)));
    }
    return sum;
}

/* The same three steps for an axis the entry is carrying in registers (the y axis, which is never stored
   to memory at all - see the (0,2)/(1,2)/(2,2) fields at 0x102d80f2, 0x102d80fb and 0x102d80ff). */
double cow_vector3_dot_product_regs(const double axis[3], uint32_t vector_at)
{
    double sum = cow_fmul_m(axis[0], vector_at);
    for (int component = 1; component < 3; ++component) {
        sum = cow_fadd_r(sum, cow_fmul_m(axis[component],
                                              (uint32_t)(vector_at + 4u * (unsigned)component)));
    }
    return sum;
}

/* COW_ADAPTER BEGIN - stdcall, four arguments, `ret 0x10`: rt_return's pop of 4 does the esp the
   original's `ret 0x10` does. The frame, the pushes, the copies and the sixteen stores below are the
   entry's own effects in the entry's own order, because cowdiff compares the guest memory byte for byte
   and in order. The readability gate skips this block. */
void cow_adapter_102d8019(Guest* g)
{
    g->esp -= 4u; /* 0x102d8019: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d801a: mov ebp, esp */
    g->esp -= 0x24u; /* 0x102d801c: sub esp, 0x24 */

    const uint32_t d0_at = (uint32_t)(g->ebp - 0xcu);   /* the normalised difference, the z axis */
    const uint32_t d1_at = (uint32_t)(g->ebp - 8u);
    const uint32_t d2_at = (uint32_t)(g->ebp - 4u);
    const uint32_t n0_at = (uint32_t)(g->ebp - 0x18u);  /* the normalised up x d, the x axis */
    const uint32_t n1_at = (uint32_t)(g->ebp - 0x14u);
    const uint32_t n2_at = (uint32_t)(g->ebp - 0x10u);
    const uint32_t c0_at = (uint32_t)(g->ebp - 0x24u);  /* the cross product before the routine sees it */
    const uint32_t c1_at = (uint32_t)(g->ebp - 0x20u);
    const uint32_t c2_at = (uint32_t)(g->ebp - 0x1cu);

    g->eax = rd32((uint32_t)(g->ebp + 0x10u));          /* 0x102d801f: mov eax,[ebp+0x10] - at */
    g->esp -= 4u;                                       /* 0x102d8022: push ebx */
    wr32(g->esp, g->ebx);
    g->ebx = rd32((uint32_t)(g->ebp + 0xcu));           /* 0x102d8023: mov ebx,[ebp+0xc] - eye */

    /* 0x102d8026-0x102d802c: fld [ebx], PUSH, fsub [eax], PUSH, fstp. Every one of those five is in this
       order, because a fault is a memory effect too: with a fuzzed `at` pointer the entry dies on the
       fsub, by which time it has written the saved esi and not yet the saved edi, and cowdiff compares
       that prefix. Reading the two operands together - in either order - is a different program. */
    const double d0_loaded = (double)rdf32(g->ebx);     /* 0x102d8026: fld [ebx] */
    g->esp -= 4u;                                       /* 0x102d8028: push esi */
    wr32(g->esp, g->esi);
    const double d0 = cow_fsub_m(d0_loaded, g->eax);    /* 0x102d8029: fsub [eax] */
    g->esp -= 4u;                                       /* 0x102d802b: push edi */
    wr32(g->esp, g->edi);
    wrf32(d0_at, (float)d0);                            /* 0x102d802c: fstp [ebp-0xc] */

    wrf32(d1_at, (float)cow_fsub_m((double)rdf32((uint32_t)(g->ebx + 4u)),
                                   (uint32_t)(g->eax + 4u))); /* 0x102d802f-0x102d8035 */

    /* 0x102d8038-0x102d8046: d2 is computed, the two arguments are pushed, and only THEN is it stored. The
       callee is therefore handed the address of a buffer whose last word is still in st(0). */
    const double d2 = cow_fsub_m((double)rdf32((uint32_t)(g->ebx + 8u)),
                                 (uint32_t)(g->eax + 8u));
    g->eax = (uint32_t)(g->ebp - 0xcu);                 /* 0x102d803e: lea eax,[ebp-0xc] */
    g->esp -= 4u;                                       /* 0x102d8041: push eax */
    wr32(g->esp, g->eax);
    g->eax = (uint32_t)(g->ebp - 0xcu);                 /* 0x102d8042: lea eax,[ebp-0xc] again */
    g->esp -= 4u;                                       /* 0x102d8045: push eax - the same buffer twice */
    wr32(g->esp, g->eax);
    wrf32(d2_at, (float)d2);                            /* 0x102d8046: fstp [ebp-4] */

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_D); /* 0x102d8049 */

    /* 0x102d804e-0x102d8065: c0 = d2*up1 - d1*up2. Both d reads are fresh loads of the frame, the up
       components are reads through eax, and the two products are subtracted by one `fsubp st(1)`. */
    g->eax = rd32((uint32_t)(g->ebp + 0x14u));          /* 0x102d8051: mov eax,[ebp+0x14] - up */
    const double d2_now = (double)rdf32(d2_at);         /* 0x102d804e: fld [ebp-4] */
    const double prod_a0 = cow_fmul_m(d2_now, (uint32_t)(g->eax + 4u));  /* 0x102d8054 */
    g->esi = (uint32_t)(g->ebp - 0x24u);                /* 0x102d8057: lea esi,[ebp-0x24] */
    const double d1_now = (double)rdf32(d1_at);         /* 0x102d805a: fld [ebp-8] */
    g->edi = (uint32_t)(g->ebp - 0x18u);                /* 0x102d805d: lea edi,[ebp-0x18] */
    const double prod_b0 = cow_fmul_m(d1_now, (uint32_t)(g->eax + 8u));  /* 0x102d8060 */
    wrf32(c0_at, (float)cow_vector3_cross_component(prod_a0, prod_b0));  /* 0x102d8063/0x102d8065 */

    /* 0x102d8068-0x102d8075: c1 = d0*up2 - d2*up0 */
    const double prod_a1 = cow_fmul_m((double)rdf32(d0_at), (uint32_t)(g->eax + 8u));   /* 0x102d8068/6b */
    const double prod_b1 = cow_fmul_m((double)rdf32(d2_at), g->eax);                    /* 0x102d806e/71 */
    wrf32(c1_at, (float)cow_vector3_cross_component(prod_a1, prod_b1));                 /* 0x102d8073/75 */

    /* 0x102d8078-0x102d808d: c2 = d1*up0 - d0*up1, with the two pushes of the SECOND call's arguments
       interleaved between the products and the store. */
    const double prod_a2 = cow_fmul_m((double)rdf32(d1_at), g->eax);                    /* 0x102d8078/7b */
    const double prod_b2 = cow_fmul_m((double)rdf32(d0_at), (uint32_t)(g->eax + 4u));   /* 0x102d807d/80 */
    g->eax = (uint32_t)(g->ebp - 0x18u);                /* 0x102d8083: lea eax,[ebp-0x18] */
    g->esp -= 4u;                                       /* 0x102d8086: push eax */
    wr32(g->esp, g->eax);
    g->eax = (uint32_t)(g->ebp - 0x18u);                /* 0x102d8087: lea eax,[ebp-0x18] again */
    g->esp -= 4u;                                       /* 0x102d808c: push eax - BEFORE the store that
                                                           0x102d808d follows, in the entry's own order */
    wr32(g->esp, g->eax);
    wrf32(c2_at, (float)cow_vector3_cross_component(prod_a2, prod_b2)); /* 0x102d808a fsubp, 0x102d808d fstp */

    const int step = g->df ? -4 : 4; /* the three movsd walk esi AND edi; the harness fuzzes df */
    wr32(g->edi, rd32(g->esi));                         /* 0x102d8090: copy c0 into the callee's buffer */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi));                         /* 0x102d8091 */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi));                         /* 0x102d8092 */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_E); /* 0x102d8093 */

    g->eax = rd32((uint32_t)(g->ebp + 8u));             /* 0x102d8098: mov eax,[ebp+8] - the object */

    /* 0x102d809b-0x102d80b0: the two components of n that are copied into the object by `mov ecx,...` /
       `mov [eax+..],ecx` - RAW dword moves, so they carry the bits, not the number. Each is loaded here
       and filed two instructions later, with a product of the next cross product in between. */
    const uint32_t n1_word = rd32(n1_at);               /* 0x102d809e: mov ecx,[ebp-0x14] */
    const double term_a = cow_fmul_m((double)rdf32(d1_at), n2_at);   /* 0x102d809b fld, 0x102d80a1 fmul */
    wr32((uint32_t)(g->eax + 0x10u), n1_word);          /* 0x102d80a4: mov [eax+0x10],ecx */
    const uint32_t n2_word = rd32(n2_at);               /* 0x102d80aa: mov ecx,[ebp-0x10] */
    const double term_b = cow_fmul_m((double)rdf32(d2_at), n1_at);   /* 0x102d80a7 fld, 0x102d80ad fmul */
    wr32((uint32_t)(g->eax + 0x20u), n2_word);          /* 0x102d80b0: mov [eax+0x20],ecx */
    const double u0 = cow_vector3_cross_component(term_a, term_b);   /* 0x102d80b3: fsubp st(1) */

    const double term_c = cow_fmul_m((double)rdf32(d2_at), n0_at);   /* 0x102d80b5/0x102d80b8 */
    const double term_d = cow_fmul_m((double)rdf32(d0_at), n2_at);   /* 0x102d80bb/0x102d80be */
    const double u1 = cow_vector3_cross_component(term_c, term_d);   /* 0x102d80c1 */

    const double term_e = cow_fmul_m((double)rdf32(d0_at), n1_at);   /* 0x102d80c3/0x102d80c6 */
    const double term_f = cow_fmul_m((double)rdf32(d1_at), n0_at);   /* 0x102d80c9/0x102d80cc */
    const double u2 = cow_vector3_cross_component(term_e, term_f);   /* 0x102d80cf */
    /* u0, u1 and u2 are the three values the entry keeps on the register stack from here to 0x102d8125:
       they are stored, read again by index for the second dot product, and never re-loaded from memory. */

    wrf32(g->eax, (float)rdf32(n0_at));                 /* 0x102d80d1: fld [ebp-0x18] / 0x102d80d4 fstp */

    /* 0x102d80d6-0x102d80ed: -dot(n, eye) at +0x30. n0 is loaded a SECOND time here (0x102d80d6) - the
       store above took its own load - and every eye component is read through ebx. */
    wrf32((uint32_t)(g->eax + 0x30u), cow_fchs(cow_vector3_dot_product(n0_at, g->ebx)));

    wrf32((uint32_t)(g->eax + 4u), (float)u0);          /* 0x102d80f0: fld st(2) - the REGISTER u0 */
    const uint32_t d0_word = rd32(d0_at);               /* 0x102d80f5: mov ecx,[ebp-0xc] */
    g->edi = rd32(g->esp);                              /* 0x102d80fa: pop edi - between the fld and the
                                                           store it belongs to, as the entry has it */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x14u), (float)u1);       /* 0x102d80f8 fld st(1), 0x102d80fb fstp */
    g->esi = rd32(g->esp);                              /* 0x102d80fe: pop esi */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x24u), (float)u2);       /* 0x102d80ff: fst [eax+0x24] - NO pop: the entry
                                                           uses u2 again two instructions later */

    /* 0x102d8102-0x102d810f: the three eye components are read HERE, before any of the stores that follow,
       and the two `faddp` fold them into (t0 + t1) + t2. The u axis comes from registers - it is never in
       memory at all. */
    const double u_regs[3] = { u0, u1, u2 };
    const double dot_u_eye = cow_vector3_dot_product_regs(u_regs, g->ebx);
    wr32((uint32_t)(g->eax + 8u), d0_word);             /* 0x102d8112: mov [eax+8],ecx */
    const uint32_t d1_word = rd32(d1_at);               /* 0x102d8115: mov ecx,[ebp-8] */
    wr32((uint32_t)(g->eax + 0x18u), d1_word);          /* 0x102d8118 */
    const uint32_t d2_word = rd32(d2_at);               /* 0x102d811d: mov ecx,[ebp-4] */
    wr32((uint32_t)(g->eax + 0x28u), d2_word);          /* 0x102d8120 */
    wrf32((uint32_t)(g->eax + 0x34u), cow_fchs(dot_u_eye)); /* 0x102d8123 fchs, 0x102d8125 fstp */

    /* 0x102d8128-0x102d812c: the three `fstp st(0)` that drop u2, u1 and u0 now they have been filed. No
       memory effect, but they are what leaves the stack empty for the last dot product. */

    /* 0x102d812e-0x102d8146: -dot(d, eye), the LAST reads in the entry - d0, d1 and d2 come out of the
       frame and the eye out of ebx, all of them after every store into the object has happened. pop ebx
       sits in the middle of the chain at 0x102d8141. */
    const double dot_d_eye = cow_vector3_dot_product(d0_at, g->ebx); /* 0x102d812e-0x102d813e: the last
                                                                         reads in the entry - d0, d1 and
                                                                         d2 out of the frame, the eye out
                                                                         of ebx */
    g->ebx = rd32(g->esp);                              /* 0x102d8141: pop ebx - between the last fmul and
                                                           the faddp that consumes its result */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x38u), cow_fchs(dot_d_eye));           /* 0x102d8144 fchs, 0x102d8146 fstp */

    wrf32((uint32_t)(g->eax + 0xcu), 0.0f);             /* 0x102d8149/0x102d814b: fldz / fstp */
    wrf32((uint32_t)(g->eax + 0x1cu), 0.0f);            /* 0x102d814e/0x102d8150 */
    wrf32((uint32_t)(g->eax + 0x2cu), 0.0f);            /* 0x102d8153/0x102d8155 */
    wrf32((uint32_t)(g->eax + 0x3cu), 1.0f);            /* 0x102d8158/0x102d815a: fld1 / fstp */

    g->esp = g->ebp;                                    /* 0x102d815d: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0x10u);                        /* 0x102d815e: ret 0x10 - four words, in BYTES */
}
/* COW_ADAPTER END */
