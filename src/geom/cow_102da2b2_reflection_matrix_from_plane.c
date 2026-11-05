/* f_102da2b2 - build the 4x4 matrix that reflects points in a plane.

   Asks the function table for the plane that belongs to a parameter - one call, four floats - and writes
   sixteen floats into the object its first argument names: the linear part I - 2nn^T of the reflection in
   a plane with unit normal n, and -2dn in the last column, which is what turns the mirror through the
   origin into the mirror through the plane n.x + d = 0. It also stores the rounded -2n.z over its own
   parameter word and multiplies THAT back in for one of the sixteen, so the entry's own scratch is part of
   the result.

   Evidence
   - the four floats are a plane ..... they are used as (n.x, n.y, n.z, d): the first three appear in pairs
                                multiplied by -2 and subtracted from 1.0 down the diagonal, and the fourth
                                appears only in the last column. 0x102da2c4-0x102da2dc load [ebp-0x10],
                                [ebp-0xc] and [ebp-8] and multiply each by COW_ADDR_FLOAT_NEG_TWO;
                                0x102da34b-0x102da365 use [ebp-4] only against the first three, in the row
                                that has no 1.0 added to it. That is the reflection in a plane, and the
                                sibling unit f_102d9502 fills the same four-field object from three points
   - where the four come from ........ 0x102da2b8 pushes [ebp+0xc] (the parameter) and 0x102da2be pushes
                                lea eax,[ebp-0x10] (the buffer), then 0x102da2bf calls
                                COW_ADDR_VECTOR4_TABLE_THUNK - `jmp dword ptr [COW_ADDR_VECTOR4_TABLE_SLOT]`,
                                slot 21 of the table at COW_ADDR_QUAT_FUNCTION_TABLE, whose file image holds
                                the trampoline 0x102d9338 (`push 1 / call 0x102e7670 / jmp [slot]`): the
                                unconverted refresh chain that also holds 0x102d920a parked. The contract is
                                read off the two callers of that slot (0x102da1e5 and here): fill four
                                floats from one parameter. The seed pins the slot to a row that returns and
                                the four floats outright, rather than let both sides disappear into it
   - the two constants are read from the image, not written into the code .. 0x102da2c7/0x102da2d3/0x102da2dc
                                multiply by the dword at COW_ADDR_FLOAT_NEG_TWO (0xc0000000 = -2.0f,
                                tools/cow/peek_bytes.py) and the three diagonal entries add the dword at
                                COW_ADDR_FLOAT_ONE (0x3f800000 = 1.0f) which 0x102da2e5 `fld`s - while the
                                bottom-right corner is 0x102da368 `fld1`, an immediate. Two different
                                sources for the same 1.0f, and a conversion that used one for both would
                                stop being wrong only when the image stops disagreeing with itself
   - one entry is built from the entry's own scratch .. 0x102da2e2 `fst [ebp+0xc]` stores the ROUNDED -2n.z
                                over the parameter word (which the routine had already been given at
                                0x102da2b8, so the clobber is after its use), and 0x102da362 `fmul dword ptr
                                [ebp+0xc]` multiplies that stored float by n.w for the +0x38 field, while
                                every other product of -2n.z comes out of the register stack. Negating and
                                doubling are exact in binary floating point, so the two agree in value - but
                                the WRITE is in the trace, the read-back is a read of memory rather than of
                                a register, and a conversion that skipped the store or kept the value in a
                                register is not the same program. Mutants M1/M2 of cow/mutations/102da2b2.json
   - the layout is row-major, translation in the last row .. the sixteen stores are at eax+0x00,04,08,0c /
                                0x10,0x14,0x18,0x1c / 0x20,0x24,0x28,0x2c / 0x30,0x34,0x38,0x3c; the three
                                zeros and the single 1.0 land at +0x0c, +0x1c, +0x2c and +0x3c, so the last
                                COLUMN is (0,0,0,1) and the -2dn terms are the first three of the last ROW.
                                That is the row-vector convention (v' = v * M), and the 3x3 block is
                                symmetric, so this is the only reading the store addresses support
   - the zeros and the one are pushed, not copied .. 0x102da304/0x102da323/0x102da346 `fldz` and 0x102da368
                                `fld1` put them on the register stack before 0x102da306/0x102da325/0x102da348/
                                0x102da36a `fstp` them out. They are constants of the shape, not of the data
   - nothing is rounded except at the stores .. every factor is a float read from memory and every product
                                and sum is a single x87 operation in double precision (the control word the
                                harness pins, 0x027F, asks for PC=double, so fr_cw is the identity), and the
                                only roundings are the sixteen `fstp` to memory. The doubling by -2.0f is
                                exact, so the stored -2n.z equals the register one - which is precisely why
                                this unit has no seed state for it and the sibling at 0x102d9502 does
   - the frame traffic is the entry's own .. push ebp (0x102da2b2), sub esp,0x10 (0x102da2b5), the two
                                argument pushes, the parameter word stored over at 0x102da2e2, and `leave`
                                (0x102da36d)
   - eax names the object ........... 0x102da2cd loads it and nothing else writes eax; ecx and edx are
                                never touched
   - stdcall, two arguments .......... 0x102da36e `ret 8`: the callee cleans two words, so rt_return's pop
                                is 8 bytes
   - two callers of one routine ...... this entry and f_102da1d8 are the only two that enter
                                COW_ADDR_VECTOR4_TABLE_THUNK (tools/cow/owner_index.py 0x102d9345: `call/jmp
                                from 0x102da1e5` and `from 0x102da2bf`), which is why they are one cluster.
                                Each is itself reached from one data reference: 0x103cc550 stores this
                                entry's address (tools/cow/refs_to.py 0x102da2b2), in the same run of
                                geometry entries as the slot that reaches the plane builder at 0x103cc52c

   Proof: tools/cow/cowdiff.py 0x102da2b2 - PASS on fault, eax, edx, callee-saved, esp, st0/top, memory
   (address, size, value) and calls out, over the states of cow/seeds/102da2b2.json plus the fuzzed ones,
   with every generated instruction reached. The object and the parameter are pinned into the arena, the
   table slot is pinned to a row that returns, and the four floats the routine was to fill are pinned
   outright; the object carries sentinels in all sixteen fields so a missing, extra or misfiled store
   shows. Two states are degenerate on purpose: a plane with a zero component, where the diagonal is
   exactly 1.0f and the zeros of the last column have to keep the sign the entry leaves them, and the
   x=1,y=z=w=0 plane, whose matrix is diag(-1,1,1,1).

   Name: cow_reflection_matrix_from_plane (guess) - I - 2nn^T with -2dn in the fourth column is the
   mirror in the plane n.x + d = 0 and nothing else, and the plane it reads is the one f_102d9502 builds.
   What the table routine does to produce that plane is the part this reading cannot see.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter. Not a guest layout: the matrix itself lives in guest
   memory at the address the first argument names, and the adapter stores it field by field there. The
   sixteenth field is not part of the matrix at all - it is the scratch word the entry stores over its own
   parameter and reads back for one of the sixteen. */
typedef struct CowPlaneReflectionMatrix
{
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;
    float doubled_normal_z;
} CowPlaneReflectionMatrix;

/* The mirror in the plane whose (normal.x, normal.y, normal.z, offset) the table routine handed over.
   negative_two and one are the image's own floats, read by the adapter where the original's `fmul` and
   `fld` read them, so a conversion cannot disagree with the data. The doubling is exact and the products
   of two floats are exact in double precision, so each of these is one rounding at the store - which is
   how the original works, and why nothing here needs the x87 stack rebuilt. */
void cow_reflection_matrix_from_plane(const float plane[4], float negative_two, float one,
                                      CowPlaneReflectionMatrix* m)
{
    const double nx2 = (double)plane[0] * (double)negative_two; /* 0x102da2c7 */
    const double ny2 = (double)plane[1] * (double)negative_two; /* 0x102da2d3 */
    const double nz2 = (double)plane[2] * (double)negative_two; /* 0x102da2dc */

    m->doubled_normal_z = (float)nz2; /* 0x102da2e2: `fst [ebp+0xc]`, and 0x102da362 reads THIS back */

    m->m00 = (float)(one + (double)plane[0] * nx2); /* 0x102da2e5-0x102da2f2: 1 - 2nx^2 */
    m->m01 = (float)(ny2 * (double)plane[0]);       /* 0x102da2f4-0x102da2f9 */
    m->m02 = (float)(nz2 * (double)plane[0]);       /* 0x102da2fc-0x102da301 */
    m->m03 = 0.0f;                                  /* 0x102da304-0x102da306: fldz */

    m->m10 = (float)((double)plane[1] * nx2);       /* 0x102da309-0x102da30e */
    m->m11 = (float)(one + (double)plane[1] * ny2); /* 0x102da311-0x102da318: 1 - 2ny^2 */
    m->m12 = (float)(nz2 * (double)plane[1]);       /* 0x102da31b-0x102da320 */
    m->m13 = 0.0f;                                  /* 0x102da323-0x102da325: fldz */

    m->m20 = (float)((double)plane[2] * nx2);       /* 0x102da328-0x102da32d */
    m->m21 = (float)((double)plane[2] * ny2);       /* 0x102da330-0x102da335 */
    m->m22 = (float)(one + (double)plane[2] * nz2); /* 0x102da338-0x102da33f: 1 - 2nz^2 */
    m->m23 = 0.0f;                                  /* 0x102da346-0x102da348: fldz */

    m->m30 = (float)((double)plane[3] * nx2);       /* 0x102da34b-0x102da350: -2dn */
    m->m31 = (float)((double)plane[3] * ny2);       /* 0x102da353-0x102da358 */
    m->m32 = (float)((double)plane[3] * (double)m->doubled_normal_z); /* 0x102da35f-0x102da365, and the
                                                                          factor is the STORED float that
                                                                          0x102da362 reads out of [ebp+0xc] */
    m->m33 = 1.0f;                                  /* 0x102da368-0x102da36a: fld1, an immediate - NOT the
                                                       image float at COW_ADDR_FLOAT_ONE the diagonal adds */
}

/* COW_ADAPTER BEGIN - stdcall, two arguments, `ret 8`: rt_return's pop of 8 bytes is the esp the entry's
   own `ret 8` gives the caller back. The frame, the pushes and every store below are the entry's own
   effects in the original's order, because cowdiff compares the guest memory trace. The entry's x87 work
   nets to nothing on the register stack, so g->top and g->st[top] are left exactly as the generated body
   leaves them. The readability gate skips this block. */
void cow_adapter_102da2b2(Guest* g)
{
    g->esp -= 4u; /* 0x102da2b2: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102da2b3: mov ebp, esp */
    g->esp -= 0x10u; /* 0x102da2b5: sub esp, 0x10 - where the table routine puts the plane */

    g->esp -= 4u; /* 0x102da2b8: push dword ptr [ebp+0xc] - the parameter, BEFORE it is overwritten */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0xcu)));
    const uint32_t plane_at = (uint32_t)(g->ebp - 0x10u);
    g->esp -= 4u; /* 0x102da2bb/0x102da2be: lea eax, [ebp-0x10] / push eax - where the plane goes */
    wr32(g->esp, plane_at);

    cow_call_vector4_from_table(COW_ADDR_VECTOR4_TABLE_RETURN_A); /* 0x102da2bf */

    float plane[4];
    plane[0] = rdf32(plane_at);                        /* 0x102da2c4 */
    plane[1] = rdf32((uint32_t)(plane_at + 0x04u));    /* 0x102da2d0 */
    plane[2] = rdf32((uint32_t)(plane_at + 0x08u));    /* 0x102da2d9 */
    const float negative_two = rdf32(COW_ADDR_FLOAT_NEG_TWO); /* 0x102da2c7 and its two siblings */
    const float one = rdf32(COW_ADDR_FLOAT_ONE);       /* 0x102da2e5 */
    g->eax = rd32((uint32_t)(g->ebp + 8u));            /* 0x102da2cd: mov eax, [ebp+8] - the matrix */
    plane[3] = rdf32((uint32_t)(plane_at + 0x0cu));    /* 0x102da34b */

    CowPlaneReflectionMatrix m;
    cow_reflection_matrix_from_plane(plane, negative_two, one, &m);

    wrf32((uint32_t)(g->ebp + 0xcu), m.doubled_normal_z); /* 0x102da2e2: fst [ebp+0xc] - over the
                                                              parameter the routine was already given */

    wrf32(g->eax, m.m00);                                 /* 0x102da2f2 */
    wrf32((uint32_t)(g->eax + 0x04u), m.m01);             /* 0x102da2f9 */
    wrf32((uint32_t)(g->eax + 0x08u), m.m02);             /* 0x102da301 */
    wrf32((uint32_t)(g->eax + 0x0cu), m.m03);             /* 0x102da306 */
    wrf32((uint32_t)(g->eax + 0x10u), m.m10);             /* 0x102da30e */
    wrf32((uint32_t)(g->eax + 0x14u), m.m11);             /* 0x102da318 */
    wrf32((uint32_t)(g->eax + 0x18u), m.m12);             /* 0x102da320 */
    wrf32((uint32_t)(g->eax + 0x1cu), m.m13);             /* 0x102da325 */
    wrf32((uint32_t)(g->eax + 0x20u), m.m20);             /* 0x102da32d */
    wrf32((uint32_t)(g->eax + 0x24u), m.m21);             /* 0x102da335 */
    wrf32((uint32_t)(g->eax + 0x28u), m.m22);             /* 0x102da33f */
    wrf32((uint32_t)(g->eax + 0x2cu), m.m23);             /* 0x102da348 */
    wrf32((uint32_t)(g->eax + 0x30u), m.m30);             /* 0x102da350 */
    wrf32((uint32_t)(g->eax + 0x34u), m.m31);             /* 0x102da358 */
    wrf32((uint32_t)(g->eax + 0x38u), m.m32);             /* 0x102da365 */
    wrf32((uint32_t)(g->eax + 0x3cu), m.m33);             /* 0x102da36a */

    g->esp = g->ebp; /* 0x102da36d: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 8u); /* 0x102da36e: ret 8 - two words, in BYTES, as every other rt_return in src/
                                 passes it */
}
/* COW_ADAPTER END */
