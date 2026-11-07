/* f_102d8161 - orient a frame at a point so that it faces another point.

   The twin of f_102d8019 two instructions up the same page, with the difference taken the other way: it
   differences the caller's two float triples in the OPPOSITE order, asks the function table to do
   something to that, crosses it with a third vector, asks again, crosses the two results together, and
   writes sixteen floats at the object its first argument names - the three results as the columns of an
   orthonormal frame, +0.0f down the fourth column, the negative dot product of each axis with the SECOND
   vector along the fourth row, and 1.0f in the corner.

   Evidence
   - it is the sibling, and where it differs .... f_102d8019 builds d from [ebp+0xc] minus [ebp+0x10]
                                               (0x102d8026 `fld [ebx]` / 0x102d8029 `fsub [eax]`); THIS one
                                               builds it the other way round - 0x102d816a `fld [eax]` /
                                               0x102d8170 `fsub [ebx]`, i.e. [ebp+0x10] minus [ebp+0xc].
                                               Everything after that is the same shape: n = routine(up x d)
                                               at 0x102d8196-0x102d81db, u = d x n at
                                               0x102d81e3-0x102d8217, the same sixteen store offsets, the
                                               same three `fldz` and one `fld1`, the same `ret 0x10`. So the
                                               two entries are the same frame built on two opposite
                                               forward axes - which is why the second argument is read as
                                               the thing that HAS the frame in both, and the third as the
                                               thing it is pointed at here and pointed away from there.
                                               Nothing says which one the engine uses where
   - the dot products add their terms in a different order  f_102d8019 starts each dot at component 0
                                               (0x102d80d6 fld [ebp-0x18] first) and this one starts at
                                               component 1: 0x102d821e loads [ebp-0x14] (n.y) and
                                               0x102d8224 then [ebp-0x18] (n.x), and the same 1-then-0
                                               opening at 0x102d824a/0x102d824f for the second dot and
                                               0x102d8276/0x102d827c for the third, with component 2 last
                                               in all three. Same value for any three finite numbers;
                                               different for a NaN, whose payload comes from whichever
                                               operand the reference had in its destination register, and
                                               different for the sign of a zero. The order is transcribed,
                                               not tidied: the parameters of the helper below are what the
                                               listing says, not what reads nicely
   - the frame is [n | u | d], column by column ... +0x00 n0 (0x102d821c), +0x04 u0 (0x102d823a), +0x08 d0
                                               (0x102d825a); +0x10 n1, +0x14 u1, +0x18 d1; +0x20 n2, +0x24
                                               u2, +0x28 d2; +0x0c/+0x1c/+0x2c from `fldz` and +0x3c from
                                               `fld1`; and the fourth row is -n.b, -u.b, -d.b behind the
                                               `fchs` at 0x102d8233/0x102d826b/0x102d828c, each of them
                                               negating the DOUBLE before the store rounds it
   - five of the nine axis floats are raw dword moves .. n1 -> +0x10 and n2 -> +0x20 through ecx at
                                               0x102d81e6/0x102d81ec and 0x102d81f2/0x102d81f8, and d0 ->
                                               +0x08, d1 -> +0x18, d2 -> +0x28 at 0x102d823d/0x102d825a,
                                               0x102d825d/0x102d8260 and 0x102d8265/0x102d8268. Bit copies,
                                               each loaded well before the store that files it - d0 is read
                                               into ecx at 0x102d823d and stored at 0x102d825a, past the
                                               whole second dot product - so with the object aimed at the
                                               frame the value that reaches memory is the one at the LOAD
   - the y axis never reaches memory ............. u0, u1 and u2 are computed at 0x102d81fb/0x102d8209/
                                               0x102d8217 and live on the register stack until 0x102d8238
                                               (`fld st(2)`), 0x102d8240 (`fld st(1)`) and 0x102d8247 (`fst
                                               [eax+0x24]`, with no pop) file them, and until the second dot
                                               product reaches them again by index at 0x102d824a, 0x102d824f
                                               and 0x102d8255. The three `fstp st(0)` at
                                               0x102d8270-0x102d8274 drop them, and only then does the last
                                               dot product re-read d from memory
   - the last reads are after everything ...... the third dot product (0x102d8276-0x102d828a) reads d0, d1
                                               and d2 out of the frame and the second vector through ebx
                                               after every store into the object except the trailing zeros
                                               has happened, and `pop ebx` at 0x102d8289 sits INSIDE that
                                               chain, between the last `fmul` and the `faddp` that consumes
                                               its result. Reading the axes once at the top, or hoisting the
                                               pops, is visible in the aliased-object state of the seed
   - the table routine is asked twice, for the same kind of job 0x102d8191 and 0x102d81db both call
                                               COW_ADDR_VECTOR3_TABLE_THUNK with `lea eax,[frame]` pushed
                                               TWICE, in=and out= one buffer, and both results are used as
                                               an axis of the frame. What lives behind the slot is still not
                                               established (the seed stubs it - the slot's file image is the
                                               unconverted refresh trampoline); three callers now hand it a
                                               vector and use the answer as an axis, which is the strongest
                                               thing said about it and is recorded as that and not as
                                               "normalise"
   - the direction flag moves the copy ...... 0x102d81d8-0x102d81da are three `movsd` from esi (ebp-0x24) to
                                               edi (ebp-0x18) and both pointers walk by +4, or by -4 with
                                               DF set, which the harness fuzzes: with DF set the second and
                                               third words land on the pushed argument addresses and the
                                               buffer the second call receives keeps whatever was there.
                                               The two pushes at 0x102d81ce/0x102d81d4 come BEFORE the
                                               copies, so the entry hands the callee an address whose
                                               contents it has not written yet
   - stdcall, four arguments ................ 0x102d82a6 `ret 0x10`: the callee cleans the four words above
                                               the return address, so rt_return's pop is 0x10 BYTES. By
                                               offset: object, the point that has the frame, the point it
                                               faces, and the up hint

   Proof: tools/cow/cowdiff.py 0x102d8161 - PASS on eax, edx, callee-saved, esp, st0/top, memory writes
   (address, size, value, order) and calls out. cow/seeds/102d8161.json pins the object, the three vectors
   and the entry's frame copy of the x axis (so a fuzzed DF cannot empty it), and stubs the table thunk at
   both sites with their own return addresses. The states are the sibling's set with the arguments swapped
   to match the reversed difference, plus the term-order trap: the eye-at-the-origin state, where all
   three dots collapse to a negated sum of zero products and the sign of each stored zero depends on the
   order the products were added in and on the `fchs`.

   Name: cow_face_matrix_from_position_and_target (guess) - from the reversed difference against its twin:
   the forward axis points from the second argument toward the third, and the frame is placed AT the
   second argument. That is an object turned to face something. The name says what the entry points the
   frame at, not what the game does with it - no code or data reference names this address
   (tools/cow/owner_index.py 0x102d8161).
*/
#include "cow.h"

/* One component of a cross product: two products formed first and joined by one `fsubp st(1)`, which
   subtracts st(0) FROM st(1), so the product the entry built FIRST is the minuend. The products are passed
   in because their factors come out of memory, and on a fuzzed pointer the read is the instruction that
   faults - see mutation M1 of the sibling unit. */
double cow_face_matrix_cross_component(double minuend, double subtrahend)
{
    return cow_fsub_r(minuend, subtrahend);
}

/* The dot product of an axis held in memory with one of the caller's float triples, in a component order
   the entry chose per site: this unit opens every one of its three dots at component 1, adds component 0
   to it, and finishes with component 2 (0x102d821e/0x102d8224/0x102d822b, 0x102d824a/0x102d824f/0x102d8255,
   0x102d8276/0x102d827c/0x102d8283). The accumulator starts at the FIRST product - there is no +0.0 in the
   entry anywhere - which is what keeps a zero result's sign, and the association is
   ((term_first + term_second) + term_third) because the two `faddp st(1)` fold left. */
double cow_face_matrix_dot_product(uint32_t axis_at, uint32_t vector_at, int first, int second, int third)
{
    double sum = cow_fmul_m((double)rdf32((uint32_t)(axis_at + 4u * (unsigned)first)),
                            (uint32_t)(vector_at + 4u * (unsigned)first));
    sum = cow_fadd_r(sum, cow_fmul_m((double)rdf32((uint32_t)(axis_at + 4u * (unsigned)second)),
                                          (uint32_t)(vector_at + 4u * (unsigned)second)));
    sum = cow_fadd_r(sum, cow_fmul_m((double)rdf32((uint32_t)(axis_at + 4u * (unsigned)third)),
                                          (uint32_t)(vector_at + 4u * (unsigned)third)));
    return sum;
}

/* The same three foldings for the y axis, which the entry keeps in registers and never stores: the factors
   come from the live register stack and the vector is read through memory, in the order the listing
   reaches them. */
double cow_face_matrix_dot_product_regs(const double axis[3], uint32_t vector_at,
                                        int first, int second, int third)
{
    double sum = cow_fmul_m(axis[first], (uint32_t)(vector_at + 4u * (unsigned)first));
    sum = cow_fadd_r(sum, cow_fmul_m(axis[second], (uint32_t)(vector_at + 4u * (unsigned)second)));
    sum = cow_fadd_r(sum, cow_fmul_m(axis[third], (uint32_t)(vector_at + 4u * (unsigned)third)));
    return sum;
}

/* COW_ADAPTER BEGIN - stdcall, four arguments, `ret 0x10`: rt_return's pop of 4 does the esp the
   original's `ret 0x10` does. The frame, the pushes, the copies and the sixteen stores below are the
   entry's own effects in the entry's own order, because cowdiff compares the guest memory byte for byte
   and in order - and, as the first block shows, a read moved by one instruction changes which bytes were
   written before a fault. The readability gate skips this block. */
void cow_adapter_102d8161(Guest* g)
{
    g->esp -= 4u; /* 0x102d8161: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d8162: mov ebp, esp */
    g->esp -= 0x24u; /* 0x102d8164: sub esp, 0x24 */

    const uint32_t d0_at = (uint32_t)(g->ebp - 0xcu);   /* target - position, the z axis after the routine */
    const uint32_t d1_at = (uint32_t)(g->ebp - 8u);
    const uint32_t d2_at = (uint32_t)(g->ebp - 4u);
    const uint32_t n0_at = (uint32_t)(g->ebp - 0x18u);  /* up x d, then through the routine: the x axis */
    const uint32_t n1_at = (uint32_t)(g->ebp - 0x14u);
    const uint32_t n2_at = (uint32_t)(g->ebp - 0x10u);
    const uint32_t c0_at = (uint32_t)(g->ebp - 0x24u);  /* the cross products before the routine sees them */
    const uint32_t c1_at = (uint32_t)(g->ebp - 0x20u);
    const uint32_t c2_at = (uint32_t)(g->ebp - 0x1cu);

    g->eax = rd32((uint32_t)(g->ebp + 0x10u));          /* 0x102d8167: mov eax,[ebp+0x10] - the target */
    const double d0_loaded = (double)rdf32(g->eax);     /* 0x102d816a: fld [eax] - BEFORE ebx is loaded */
    g->esp -= 4u;                                       /* 0x102d816c: push ebx */
    wr32(g->esp, g->ebx);
    g->ebx = rd32((uint32_t)(g->ebp + 0xcu));           /* 0x102d816d: mov ebx,[ebp+0xc] - the position */
    const double d0 = cow_fsub_m(d0_loaded, g->ebx);    /* 0x102d8170: fsub [ebx] - the other way round
                                                           from f_102d8019, and the reason these are two
                                                           entries and not one */
    g->esp -= 4u;                                       /* 0x102d8172: push esi */
    wr32(g->esp, g->esi);
    g->esp -= 4u;                                       /* 0x102d8173: push edi */
    wr32(g->esp, g->edi);
    wrf32(d0_at, (float)d0);                            /* 0x102d8174: fstp [ebp-0xc] */

    wrf32(d1_at, (float)cow_fsub_m((double)rdf32((uint32_t)(g->eax + 4u)),
                                   (uint32_t)(g->ebx + 4u))); /* 0x102d8177-0x102d817d */

    /* 0x102d8180-0x102d818e: the third component is computed, the two arguments are pushed, and only then
       is it stored - the callee is handed the address of a buffer whose last word is still in st(0). */
    const double d2 = cow_fsub_m((double)rdf32((uint32_t)(g->eax + 8u)),
                                 (uint32_t)(g->ebx + 8u));
    g->eax = (uint32_t)(g->ebp - 0xcu);                 /* 0x102d8183: lea eax,[ebp-0xc] */
    g->esp -= 4u;                                       /* 0x102d8189: push eax */
    wr32(g->esp, g->eax);
    g->eax = (uint32_t)(g->ebp - 0xcu);                 /* 0x102d818a: lea eax,[ebp-0xc] again */
    g->esp -= 4u;                                       /* 0x102d818d: push eax - the same buffer twice */
    wr32(g->esp, g->eax);
    wrf32(d2_at, (float)d2);                            /* 0x102d818e: fstp [ebp-4] */

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_F); /* 0x102d8191 */

    /* 0x102d8196-0x102d81ad: c0 = d2*up1 - d1*up2, the same product order as the sibling's, so the same
       cross product and not its negation. */
    g->eax = rd32((uint32_t)(g->ebp + 0x14u));          /* 0x102d8196: mov eax,[ebp+0x14] - the up hint */
    const double prod_a0 = cow_fmul_m((double)rdf32(d2_at), (uint32_t)(g->eax + 4u)); /* 0x102d8199/19c */
    g->esi = (uint32_t)(g->ebp - 0x24u);                /* 0x102d819f: lea esi,[ebp-0x24] */
    const double prod_b0 = cow_fmul_m((double)rdf32(d1_at), (uint32_t)(g->eax + 8u)); /* 0x102d81a2/1a8 */
    g->edi = (uint32_t)(g->ebp - 0x18u);                /* 0x102d81a5: lea edi,[ebp-0x18] */
    wrf32(c0_at, (float)cow_face_matrix_cross_component(prod_a0, prod_b0)); /* 0x102d81ab/1ad */

    /* 0x102d81b0-0x102d81bd: c1 = d0*up2 - d2*up0 */
    const double prod_a1 = cow_fmul_m((double)rdf32(d0_at), (uint32_t)(g->eax + 8u)); /* 0x102d81b0/1b3 */
    const double prod_b1 = cow_fmul_m((double)rdf32(d2_at), g->eax);                  /* 0x102d81b6/1b9 */
    wrf32(c1_at, (float)cow_face_matrix_cross_component(prod_a1, prod_b1));            /* 0x102d81bb/1bd */

    /* 0x102d81c0-0x102d81d5: c2 = d1*up0 - d0*up1, with the SECOND call's two pushes interleaved between
       the products and the store - and both pushes land before the copies that fill the buffer they name. */
    const double prod_a2 = cow_fmul_m((double)rdf32(d1_at), g->eax);                  /* 0x102d81c0/1c3 */
    const double prod_b2 = cow_fmul_m((double)rdf32(d0_at), (uint32_t)(g->eax + 4u)); /* 0x102d81c5/1c8 */
    g->eax = (uint32_t)(g->ebp - 0x18u);                /* 0x102d81cb: lea eax,[ebp-0x18] */
    g->esp -= 4u;                                       /* 0x102d81ce: push eax */
    wr32(g->esp, g->eax);
    g->eax = (uint32_t)(g->ebp - 0x18u);                /* 0x102d81cf: lea eax,[ebp-0x18] again */
    g->esp -= 4u;                                       /* 0x102d81d4: push eax */
    wr32(g->esp, g->eax);
    wrf32(c2_at, (float)cow_face_matrix_cross_component(prod_a2, prod_b2)); /* 0x102d81d2 fsubp, 0x102d81d5
                                                                               fstp */

    const int step = g->df ? -4 : 4; /* the three movsd walk esi AND edi; the harness fuzzes df */
    wr32(g->edi, rd32(g->esi));                         /* 0x102d81d8: copy the first into the callee's
                                                           buffer - which is also the buffer its argument
                                                           already points at */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi));                         /* 0x102d81d9 */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi));                         /* 0x102d81da */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_G); /* 0x102d81db */

    g->eax = rd32((uint32_t)(g->ebp + 8u));             /* 0x102d81e0: mov eax,[ebp+8] - the object */

    /* 0x102d81e3-0x102d81fb: u0 = d1*n2 - d2*n1, with the raw dword move of n1 filed between the load of
       its neighbour and the second product. */
    const uint32_t n1_word = rd32(n1_at);               /* 0x102d81e6: mov ecx,[ebp-0x14] */
    const double term_a = cow_fmul_m((double)rdf32(d1_at), n2_at);   /* 0x102d81e3/1e9 */
    wr32((uint32_t)(g->eax + 0x10u), n1_word);          /* 0x102d81ec: mov [eax+0x10],ecx */
    const uint32_t n2_word = rd32(n2_at);               /* 0x102d81f2: mov ecx,[ebp-0x10] */
    const double term_b = cow_fmul_m((double)rdf32(d2_at), n1_at);   /* 0x102d81ef/1f5 */
    wr32((uint32_t)(g->eax + 0x20u), n2_word);          /* 0x102d81f8: mov [eax+0x20],ecx */
    const double u0 = cow_face_matrix_cross_component(term_a, term_b); /* 0x102d81fb: fsubp st(1) */

    const double term_c = cow_fmul_m((double)rdf32(d2_at), n0_at);   /* 0x102d81fd/200 */
    const double term_d = cow_fmul_m((double)rdf32(d0_at), n2_at);   /* 0x102d8203/206 */
    const double u1 = cow_face_matrix_cross_component(term_c, term_d); /* 0x102d8209 */

    const double term_e = cow_fmul_m((double)rdf32(d0_at), n1_at);   /* 0x102d820b/20e */
    const double term_f = cow_fmul_m((double)rdf32(d1_at), n0_at);   /* 0x102d8211/214 */
    const double u2 = cow_face_matrix_cross_component(term_e, term_f); /* 0x102d8217 */
    /* u0, u1 and u2 stay on the register stack from here to the three `fstp st(0)` at 0x102d8270: they are
       stored, then reached by index again for the second dot product, and never re-loaded. */

    wrf32(g->eax, (float)rdf32(n0_at));                 /* 0x102d8219: fld [ebp-0x18] / 0x102d821c fstp */

    /* 0x102d821e-0x102d8235: -dot(n, position), opened at component 1. */
    wrf32((uint32_t)(g->eax + 0x30u),
          cow_fchs(cow_face_matrix_dot_product(n0_at, g->ebx, 1, 0, 2)));

    wrf32((uint32_t)(g->eax + 4u), (float)u0);          /* 0x102d8238: fld st(2) - the REGISTER u0 */
    const uint32_t d0_word = rd32(d0_at);               /* 0x102d823d: mov ecx,[ebp-0xc] */
    g->edi = rd32(g->esp);                              /* 0x102d8242: pop edi - between the fld and the
                                                           store it belongs to */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x14u), (float)u1);       /* 0x102d8240 fld st(1), 0x102d8243 fstp */
    g->esi = rd32(g->esp);                              /* 0x102d8246: pop esi */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x24u), (float)u2);       /* 0x102d8247: fst [eax+0x24] - NO pop: the entry
                                                           reaches u2 again at 0x102d8255 */

    /* 0x102d824a-0x102d826d: -dot(u, position) from the registers, opened at component 1 as well, filed at
       +0x34 between the three raw dword moves of the d column. */
    const double u_regs[3] = { u0, u1, u2 };
    const double dot_u = cow_face_matrix_dot_product_regs(u_regs, g->ebx, 1, 0, 2);
    wr32((uint32_t)(g->eax + 8u), d0_word);             /* 0x102d825a: mov [eax+8],ecx */
    const uint32_t d1_word = rd32(d1_at);               /* 0x102d825d: mov ecx,[ebp-8] */
    wr32((uint32_t)(g->eax + 0x18u), d1_word);          /* 0x102d8260 */
    const uint32_t d2_word = rd32(d2_at);               /* 0x102d8265: mov ecx,[ebp-4] */
    wr32((uint32_t)(g->eax + 0x28u), d2_word);          /* 0x102d8268 */
    wrf32((uint32_t)(g->eax + 0x34u), cow_fchs(dot_u)); /* 0x102d826b fchs, 0x102d826d fstp */

    /* 0x102d8270-0x102d8274: the three `fstp st(0)` that drop u2, u1 and u0 now they have been filed. No
       memory effect - but they are what leaves the stack empty for the last dot product, and cowdiff
       compares st(0) and the top. */

    /* 0x102d8276-0x102d828e: -dot(d, position), the LAST reads in the entry, opened at component 1 too.
       `pop ebx` at 0x102d8289 sits inside the chain, after the last read and before the last fold. */
    const double dot_d = cow_face_matrix_dot_product(d0_at, g->ebx, 1, 0, 2);
    g->ebx = rd32(g->esp);                              /* 0x102d8289: pop ebx */
    g->esp += 4u;
    wrf32((uint32_t)(g->eax + 0x38u), cow_fchs(dot_d)); /* 0x102d828c fchs, 0x102d828e fstp */

    wrf32((uint32_t)(g->eax + 0xcu), 0.0f);             /* 0x102d8291/0x102d8293: fldz / fstp */
    wrf32((uint32_t)(g->eax + 0x1cu), 0.0f);            /* 0x102d8296/0x102d8298 */
    wrf32((uint32_t)(g->eax + 0x2cu), 0.0f);            /* 0x102d829b/0x102d829d */
    wrf32((uint32_t)(g->eax + 0x3cu), 1.0f);            /* 0x102d82a0/0x102d82a2: fld1 / fstp */

    g->esp = g->ebp;                                    /* 0x102d82a5: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0x10u);                        /* 0x102d82a6: ret 0x10 - four words, in BYTES */
}
/* COW_ADAPTER END */
