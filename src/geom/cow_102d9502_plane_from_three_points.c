/* f_102d9502 - fit a plane through three points.

   Subtracts two of its points from the third, takes the cross product of the two differences and copies
   it into the object its first argument names, hands that object to the function table once to read and
   once to write, and then stores MINUS the dot product of the vector now in the object with the point the
   differences were taken from. Read together the object is a plane - a normal at +0x00/+0x04/+0x08 and an
   offset at +0x0c - and the four arguments are (plane, apex, point, point).

   Evidence
   - the two differences ...... 0x102d950f-0x102d9527 computes (apex - first) component by component from
                                [ebp+0xc] and [ebp+0x10], and 0x102d952d-0x102d9543 the same shape against
                                [ebp+0x14]. ebx is set from [ebp+0xc] at 0x102d950c and never written
                                again - which is why the same register is still the apex when the final dot
                                product reads [ebx], [ebx+4] and [ebx+8] at 0x102d9589/0x102d958f/0x102d9596
   - the cross product ........ 0x102d9546-0x102d9572 forms three terms of shape (product - product) from
                                the two differences and stores them, in x, y, z order, at ebp-0x18,
                                ebp-0x14 and ebp-0x10; 0x102d9575/0x102d9576/0x102d957b then move those
                                three words into the object. Nothing else in the image multiplies two
                                differences of the same pair of points and subtracts the products
   - the two differences are NOT symmetric, and that is behaviour .. three of the six factors are never
                                stored (0x102d950f-0x102d9527 and 0x102d9540-0x102d9543: they sit in the
                                register stack and are consumed by `fmul st(N)`, not read from memory), and
                                two are stored with `fstp` at 0x102d9534/0x102d953d and read back with
                                `fld dword ptr` at 0x102d954a/0x102d9556/0x102d956b/0x102d956e - so those
                                two factors are the FLOAT-rounded differences and the other four are not.
                                State 3 of the seed makes that observable: 1.0f minus 1e-4f is not a float,
                                and it is multiplied by 1.0f, so the y component of the normal is
                                -9.9999997e-05 for the entry and -9.9992752e-05 for a conversion that
                                rounded the way a C compiler rounds an expression
   - the entry stores the first edge before it has even read the second point's y component (0x102d9534
                                precedes 0x102d953a), and the second before it reads the third (0x102d953d
                                precedes 0x102d9543). That ordering is why the arithmetic is in two user
                                functions rather than one, and why the adapter's reads are interleaved with
                                its writes in exactly this order: a bad pointer has to fault at the same
                                point in the write trace on both sides
   - the subtractions are ordered, and that is behaviour too .. every term is an `fsubp st(1)`, which
                                subtracts the SECOND product it computed from the FIRST. Swapping a pair is
                                invisible except where the two products are equal, where it turns +0.0f
                                into -0.0f: state 4 (two equal, nonzero difference vectors, so every term
                                subtracts equal products) therefore pins the sign of all four stored words
   - the offset is a negated dot, in one order .. 0x102d9585-0x102d9599 multiplies the object's +0x08,
                                +0x04 and +0x00 by the apex's +0x08, +0x04 and +0x00 and adds them in THAT
                                order - z, then y, then x, and float addition does not associate - and
                                0x102d959b `fchs` negates the double SUM before 0x102d959d stores it at
                                +0x0c. Negating after the rounding, or subtracting from zero instead,
                                differs at -0.0f, which is exactly what a degenerate triangle stores
   - the vector is read back from memory after the table call .. 0x102d9585, 0x102d958c and 0x102d9594
                                `fld` the three floats OUT OF THE OBJECT, after 0x102d957c called the table
                                thunk, and not out of a register; the apex is read again at
                                0x102d9589/0x102d958f/0x102d9596 for the same reason. So whatever that
                                routine does to the six words is what the offset is computed from. It is
                                handed the same pointer twice (0x102d951e and 0x102d952f both push
                                [ebp+8]), so this caller's contract is to read and rewrite in place. What
                                lives behind slot 7 of the table at COW_ADDR_QUAT_FUNCTION_TABLE is the
                                unconverted refresh chain - the slot's file image holds the trampoline
                                0x102d64a4: `push 1 / call 0x102e7670 / jmp [slot]`, the same chain that
                                keeps 0x102d920a parked - so the seed pins the slot to a row that returns.
                                The call, its two arguments and both read-backs are still compared; the
                                only thing not compared is what that routine would have written
   - the three floats are copied with the string move, so DF decides where they land .. the bytes at
                                0x102d9575 are a5 a5 dd d8 dd d8 a5: `movsd` is 0xa5, which copies one
                                dword and advances BOTH esi and edi by 4, or by -4 with the direction flag
                                set. esi is ebp-0x18 (0x102d9524) and edi is the object (0x102d9518), so
                                with df clear the three locals land at +0x00/+0x04/+0x08 and with df set
                                they walk down the object instead. The adapter reproduces the stepping and
                                not the addresses, because the harness fuzzes df
   - the frame traffic is the entry's own .. push ebp (0x102d9502), sub esp,0x18 (0x102d9505), the three
                                callee-saved pushes (0x102d950b/0x102d9511/0x102d9514), the two argument
                                pushes, the two edge words at ebp-0xc and ebp-8, the three normal floats at
                                ebp-0x18/-0x14/-0x10, the three pops, and `leave` (0x102d95a0)
   - eax is the object and nothing else is an output .. after the call the only write to eax is
                                `mov eax,[ebp+8]` at 0x102d9581, and the entry stores through it at
                                0x102d959d. ebx, esi and edi are pushed and popped and come back as the
                                caller left them; ecx and edx are never touched
   - stdcall, four arguments ... 0x102d95a1 `ret 0x10`: the callee cleans four words, so rt_return's pop is
                                0x10 bytes
   - one way in, through a table ......... 0x103cc52c stores this entry's address (tools/cow/refs_to.py
                                0x102d9502: one data reference, tools/cow/owner_index.py agrees) in a run
                                of geometry entries alongside 0x102d94b7, 0x102d9a19 and 0x102d6e4c - the
                                same neighbourhood as the slot that reaches the quaternion at 0x103cc56c

   Proof: tools/cow/cowdiff.py 0x102d9502 - PASS on fault, eax, edx, callee-saved, esp, st0/top, memory
   (address, size, value) and calls out, over the four states of cow/seeds/102d9502.json and the 2000
   fuzzed states. The four pointers are pinned into the arena because a fuzzed one faults at the first
   `fld` on both sides, which is agreement and not proof; the object carries sentinels in all four fields
   so a missing, extra or misfiled store shows; the table slot is pinned to a row that returns. Two states
   are degenerate or rounding-critical on purpose, for the two subtleties above.

   Name: cow_plane_from_three_points (guess) - from the two differences taken from one point, the cross
   product stored as three floats, and the negated dot of that vector with the same point stored as a
   fourth: that is how a plane is fitted through three points. That the engine uses the object as a plane
   is supported by the shape, and the routine between the two halves - which the object is handed in
   place, and which no reading has yet reached - is the part this unit cannot assert.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter. Not a guest layout: the plane itself lives in guest
   memory at the address the first argument names, and the adapter stores it field by field there. */
typedef struct CowPlaneThroughPoints
{
    float edge_x;   /* apex.x - second.x: stored at ebp-0xc and read back, so the ROUNDED value */
    float edge_y;   /* apex.y - second.y: stored at ebp-8 and read back, rounded likewise */
    float normal_x; /* the three floats stored at ebp-0x18/-0x14/-0x10 and copied into the object */
    float normal_y;
    float normal_z;
    float offset;   /* minus the dot of the vector the object holds after the table call, with the apex */
} CowPlaneThroughPoints;

/* One of the two edge factors the entry keeps in memory: `fld` the apex component, `fsub` the other
   point's, `fstp` it back out as a float, and use THAT from then on. Separate from the normal below
   because the entry computes and stores this word before it has read the rest of the point it is
   subtracting - 0x102d9534 comes before 0x102d953a - so a bad pointer has to fault before it, not after. */
float cow_plane_stored_edge(float apex_component, float other_component)
{
    return (float)((double)apex_component - (double)other_component);
}

/* The plane's normal: (apex-first) x (apex-second). The two differences are deliberately unlike each
   other - edge_x and edge_y are the rounded factors the entry stored and read back, and the other four
   factors were never stored at all, so they keep the full precision of a difference of two floats. Each
   product is a separate x87 register and so is rounded to double on its own before the subtraction: the
   `volatile` is what stops the host compiler contracting a pair into a fused multiply-add, which would
   round once instead of twice and drift from the guest in the last bit. The harness's own translation
   cannot contract, because its multiply is a statement of its own.

   Two apex triples, because the entry reads the apex twice - once at 0x102d950f-0x102d9527 for the first
   difference and again at 0x102d952d-0x102d9543 for the second - with its two argument pushes and the
   first edge store in between. An apex that points into the caller's own stack therefore does not give
   the same numbers twice, and the fuzzer hits exactly that. */
void cow_plane_from_three_points(const float near_apex[3], const float first[3],
                                const float far_apex[3], const float second[3],
                                float edge_x, float edge_y, CowPlaneThroughPoints* plane)
{
    const double near_x = (double)near_apex[0] - (double)first[0]; /* 0x102d950f/0x102d9512: never stored */
    const double near_y = (double)near_apex[1] - (double)first[1]; /* 0x102d9515/0x102d951b */
    const double near_z = (double)near_apex[2] - (double)first[2]; /* 0x102d9521/0x102d9527 */
    const double far_z = (double)far_apex[2] - (double)second[2];  /* 0x102d9540/0x102d9543: likewise
                                                                       unwritten to memory, unlike its two
                                                                       siblings, which were rounded */

    volatile double left, right; /* 0x102d9546-0x102d9551: the x term, first product minus second */
    left = far_z * near_y;
    right = (double)edge_y * near_z;
    plane->normal_x = (float)(left - right);

    left = near_z * (double)edge_x;   /* 0x102d9554-0x102d955f: the y term */
    right = near_x * far_z;
    plane->normal_y = (float)(left - right);

    left = (double)edge_y * near_x;   /* 0x102d9566-0x102d9572: the z term */
    right = (double)edge_x * near_y;
    plane->normal_z = (float)(left - right);
}

/* The plane's offset: minus the dot product of the vector the OBJECT holds with the apex. The six floats
   are the ones the adapter read out of guest memory AFTER the table routine had its turn at them, which is
   why they are arguments and not the normal this unit computed. The additions run z, y, x because that is
   the order the entry's two `faddp` do them, and the negation is applied to the double sum, where `fchs`
   applies it - so a degenerate triangle stores -0.0f, as the original does. */
void cow_plane_offset_from_apex(const float normal[3], const float apex[3], CowPlaneThroughPoints* plane)
{
    volatile double first, second; /* 0x102d9585-0x102d9599: three products, summed z, then y, then x */
    first = (double)normal[2] * (double)apex[2];
    second = (double)normal[1] * (double)apex[1];
    const double sum = (first + second) + (double)normal[0] * (double)apex[0];
    plane->offset = (float)-sum;
}

/* COW_ADAPTER BEGIN - stdcall, four arguments, `ret 0x10`: rt_return's pop of 0x10 bytes is the esp the
   entry's own `ret 0x10` gives the caller back. The frame, the pushes and every store below are the
   entry's own effects in the original's order, and so are the READS: cowdiff fuzzes the unpinned pointers
   and compares the memory trace, so side B has to have written exactly what side A had written by the time
   a bad address faults. The entry's x87 work nets to nothing on the register stack - it pushes and pops
   back to the top it was handed, both before and after the table call - so g->top and g->st[top] are left
   exactly as the generated body leaves them. The readability gate skips this block. */
void cow_adapter_102d9502(Guest* g)
{
    g->esp -= 4u; /* 0x102d9502: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d9503: mov ebp, esp */
    g->esp -= 0x18u; /* 0x102d9505: sub esp, 0x18 - the two edge words and the three normal floats */

    const uint32_t first = rd32((uint32_t)(g->ebp + 0x10u)); /* 0x102d9508: mov eax, [ebp+0x10] */
    g->esp -= 4u; /* 0x102d950b: push ebx */
    wr32(g->esp, g->ebx);
    g->ebx = rd32((uint32_t)(g->ebp + 0xcu)); /* 0x102d950c: mov ebx, [ebp+0xc] - the apex, still in ebx
                                                 at 0x102d9596, where the dot product reads through it */
    const float apex_x = rdf32(g->ebx); /* 0x102d950f: fld [ebx] */
    g->esp -= 4u; /* 0x102d9511: push esi */
    wr32(g->esp, g->esi);
    const float first_x = rdf32(first); /* 0x102d9512: fsub [eax] */
    g->esp -= 4u; /* 0x102d9514: push edi */
    wr32(g->esp, g->edi);
    const float apex_y = rdf32((uint32_t)(g->ebx + 0x04u)); /* 0x102d9515: fld [ebx+4] */
    g->edi = rd32((uint32_t)(g->ebp + 8u)); /* 0x102d9518: mov edi, [ebp+8] - the plane */
    const float first_y = rdf32((uint32_t)(first + 0x04u)); /* 0x102d951b: fsub [eax+4] */
    g->esp -= 4u; /* 0x102d951e: push dword ptr [ebp+8] - the routine's first argument */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 8u)));
    const float apex_z = rdf32((uint32_t)(g->ebx + 0x08u)); /* 0x102d9521: fld [ebx+8] */
    g->esi = (uint32_t)(g->ebp - 0x18u); /* 0x102d9524: lea esi, [ebp-0x18] - where the normal is built */
    const float first_z = rdf32((uint32_t)(first + 0x08u)); /* 0x102d9527: fsub [eax+8] */
    const uint32_t second = rd32((uint32_t)(g->ebp + 0x14u)); /* 0x102d952a: mov eax, [ebp+0x14] */
    const float far_apex_x = rdf32(g->ebx); /* 0x102d952d: fld [ebx] - the apex read a SECOND time, after
                                               the first difference was taken and before the second push
                                               below, so an apex that points into the stack sees what the
                                               pushes wrote */
    g->esp -= 4u; /* 0x102d952f: push dword ptr [ebp+8] - and its second, the same object: in place */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 8u)));
    const float second_x = rdf32(second); /* 0x102d9532: fsub [eax] */

    CowPlaneThroughPoints plane;
    plane.edge_x = cow_plane_stored_edge(far_apex_x, second_x);
    wrf32((uint32_t)(g->ebp - 0x0cu), plane.edge_x); /* 0x102d9534: fstp [ebp-0xc] */

    const float far_apex_y = rdf32((uint32_t)(g->ebx + 0x04u)); /* 0x102d9537: fld [ebx+4], third read of
                                                                    that word */
    const float second_y = rdf32((uint32_t)(second + 0x04u));   /* 0x102d953a: fsub [eax+4] */
    plane.edge_y = cow_plane_stored_edge(far_apex_y, second_y);
    wrf32((uint32_t)(g->ebp - 0x08u), plane.edge_y); /* 0x102d953d: fstp [ebp-8] */

    const float far_apex_z = rdf32((uint32_t)(g->ebx + 0x08u)); /* 0x102d9540: fld [ebx+8] */
    const float second_z = rdf32((uint32_t)(second + 0x08u));   /* 0x102d9543: fsub [eax+8] - and this
                                                                    difference is never stored back, so
                                                                    unlike the two above it is not
                                                                    rounded to a float first */
    const float near_apex[3] = { apex_x, apex_y, apex_z };      /* the first, still-live reads */
    const float far_reads[3] = { far_apex_x, far_apex_y, far_apex_z };
    const float first_all[3] = { first_x, first_y, first_z };
    const float second_all[3] = { second_x, second_y, second_z };
    cow_plane_from_three_points(near_apex, first_all, far_reads, second_all,
                               plane.edge_x, plane.edge_y, &plane);

    wrf32((uint32_t)(g->ebp - 0x18u), plane.normal_x); /* 0x102d9551: fstp [ebp-0x18] */
    wrf32((uint32_t)(g->ebp - 0x14u), plane.normal_y); /* 0x102d955f: fstp [ebp-0x14] */
    wrf32((uint32_t)(g->ebp - 0x10u), plane.normal_z); /* 0x102d9572: fstp [ebp-0x10] */

    const int step = g->df ? -4 : 4; /* the three `movsd` (0xa5) at 0x102d9575, 0x102d9576 and 0x102d957b
                                        walk esi AND edi by +4, or by -4 with the direction flag set. The
                                        harness fuzzes df, so which three words of the plane the normal
                                        lands in is decided by it and has to be reproduced, not assumed */
    wr32(g->edi, rd32(g->esi)); /* 0x102d9575 */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi)); /* 0x102d9576 */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);
    wr32(g->edi, rd32(g->esi)); /* 0x102d957b */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_B); /* 0x102d957c */

    g->eax = rd32((uint32_t)(g->ebp + 8u)); /* 0x102d9581: mov eax, [ebp+8] */
    g->edi = rd32(g->esp); /* 0x102d9584: pop edi */
    g->esp += 4u;

    float read_back[3], apex_now[3];
    read_back[2] = rdf32((uint32_t)(g->eax + 0x08u)); /* 0x102d9585: fld [eax+8] - out of memory, AFTER
                                                         the routine had the object */
    g->esi = rd32(g->esp); /* 0x102d9588: pop esi */
    g->esp += 4u;
    apex_now[2] = rdf32((uint32_t)(g->ebx + 0x08u)); /* 0x102d9589: fmul [ebx+8] */
    read_back[1] = rdf32((uint32_t)(g->eax + 0x04u)); /* 0x102d958c: fld [eax+4] */
    apex_now[1] = rdf32((uint32_t)(g->ebx + 0x04u)); /* 0x102d958f: fmul [ebx+4] */
    read_back[0] = rdf32(g->eax);                     /* 0x102d9594: fld [eax] */
    apex_now[0] = rdf32(g->ebx);                      /* 0x102d9596: fmul [ebx] */
    g->ebx = rd32(g->esp); /* 0x102d9598: pop ebx - after the last read through it */
    g->esp += 4u;

    cow_plane_offset_from_apex(read_back, apex_now, &plane);
    wrf32((uint32_t)(g->eax + 0x0cu), plane.offset); /* 0x102d959d: fstp [eax+0xc] */

    g->esp = g->ebp; /* 0x102d95a0: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0x10u); /* 0x102d95a1: ret 0x10 - four words, in BYTES, as every other rt_return
                                    in src/ passes it */
}
/* COW_ADAPTER END */
