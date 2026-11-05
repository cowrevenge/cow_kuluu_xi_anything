/* f_102da1d8 - build the 4x4 matrix (q.e)I - q(e)^T from two 4-vectors.

   Asks the function table for the four floats that belong to a parameter, reads four more out of an object
   its second argument names, takes the dot product of the two, and writes sixteen floats into the object
   its first argument names: minus the outer product of the pair, with the dot product added down the
   diagonal. It keeps the four negated components in the register stack and two of them in its own frame,
   and it reads the column component out of memory once per field - between the stores, not before them.

   Evidence
   - the sixteen are an outer product with the dot on the diagonal .. the stores are at eax+0x00,04,08,0c /
                                0x10,0x14,0x18,0x1c / 0x20,0x24,0x28,0x2c / 0x30,0x34,0x38,0x3c and the one
                                at +0x00 is `dot - q0*e0` (0x102da227-0x102da22d: fld st(3) of the negated
                                components, fmul [ecx], fadd st(5) of the dot), while +0x04 is -q0*e1 with
                                no add (0x102da244-0x102da249), +0x14 has the add again (0x102da24c-0x102da253)
                                and so on along 0x00,0x14,0x28,0x3c. Column by column, the row index runs
                                with the negated q kept in the register stack and the column index with the
                                component read through ecx
   - the four from the table ..... 0x102da1de pushes [ebp+0x10] (the parameter) and 0x102da1e4 pushes
                                lea eax,[ebp-0x10], then 0x102da1e5 calls COW_ADDR_VECTOR4_TABLE_THUNK -
                                the same thunk f_102da2b2 asks for its plane, and the only two callers it
                                has (tools/cow/owner_index.py 0x102d9345). The four floats it fills are
                                used here as one 4-vector and there as a plane's normal plus offset; what
                                is proved for the routine is that it writes four floats from one parameter
   - the four from the object .... ecx = [ebp+0xc] at 0x102da1ed, and [ecx], [ecx+4], [ecx+8] and
                                [ecx+0xc] are the four column components. They are read once for the dot
                                (0x102da1f0, 0x102da1f9, 0x102da200, 0x102da208) and then ONCE PER FIELD
                                for the sixteen - eighteen reads of four words, not two
   - the column component is read BETWEEN the stores, and that is observable .. each field's `fmul` takes
                                its operand from memory at the point the field is produced - [ecx+8] is
                                read at 0x102da268, 0x102da270, 0x102da278 and 0x102da280, which is after
                                +0x00, +0x10, +0x20 and +0x30 have already been stored into [eax]. The
                                entry gives no reason to think the two objects are different ones, and
                                nothing here prevents them from being the same, or from overlapping the
                                frame the two stored negations live in. So a conversion that reads the
                                four components up front and then computes all sixteen cannot agree with
                                the entry once a store lands on a word a later read is going to take: the
                                fields of the LAST columns are the ones that see the changed memory, and
                                they are the ones a hoisted conversion gets wrong. Each read is therefore
                                done at the point the original does it, immediately before the store it
                                belongs to, and the reads of one column are not shared between its fields
   - the dot product is summed in the order the entry sums it .. q1*e1 first (0x102da1ea-0x102da1f0), then
                                + q0*e0 (0x102da1f6-0x102da1fb), then + q3*e3 (0x102da1fd-0x102da203), then
                                + q2*e2 (0x102da205-0x102da20b), each an `faddp st(1)`. Four doubles added
                                in a chosen order: association is observable, and the order is z,w,x,y -
                                not x,y,z,w - so it is written down rather than tidied. The four components
                                it reads are all read before the first store, so the sum cannot be affected
                                by the aliasing above, and the value sits in the register stack below the
                                four negations until a diagonal field adds it
   - four negated components live in the REGISTER stack .. 0x102da20d-0x102da224 pushes -q0, -q1, -q2, -q3
                                with four `fld`/`fchs` pairs. Rows 0..3 of every column are `fld st(N)` of
                                those, so the rows are the register values and not re-reads of the frame -
                                the four are snapshotted once, at the points the entry loads them
   - two of them also go through MEMORY .. the same four pushes leave -q2 on top at 0x102da21c, where a
                                `fst` stores it to ebp-0x18 WITHOUT popping it, and -q3 at 0x102da224,
                                stored to ebp-0x14 the same way. The last two fields then multiply the
                                STORED words: 0x102da298 `fld [ebp-0x18]` feeds +0x2c and 0x102da2a1
                                `fld [ebp-0x14]` feeds +0x3c - both after thirteen earlier stores into
                                [eax], so both see whatever those left behind. Negating a float is exact,
                                so with two separate objects the register and the memory hold the same
                                value; the two `fst`s are still in the trace, still reproduced here, and
                                the two fields that read them back are the last but one and the last
   - what the pops leave the last two fields to add .. the stack is five deep (-q3,-q2,-q1,-q0,dot) until
                                0x102da283 pops one and 0x102da286 `fstp st(0)` pops another, so column 3
                                is built three deep (-q1,-q0,dot): +0x0c is `fld st(1)` = -q0 and +0x1c is
                                the in-place `fmul` of the -q1 that is then ST(0). 0x102da296 pops -q1 and
                                the dot is ST(0) for the rest, which is why +0x2c is a bare product and
                                +0x3c is the one field that ADDS st(1) - the dot - to a product of a word
                                it read out of the frame
   - no constants are read from the image .. unlike its sibling f_102da2b2, which multiplies by the dword
                                at COW_ADDR_FLOAT_NEG_TWO and adds COW_ADDR_FLOAT_ONE, this entry builds
                                everything from the two vectors and the dot. That is why the two units
                                share a callee and a shape and not a set of constants
   - the frame traffic is the entry's own .. push ebp (0x102da1d8), sub esp,0x20 (0x102da1db), the two
                                argument pushes, the two scratch words at ebp-0x18 and ebp-0x14, and
                                `leave` (0x102da2ae)
   - eax is the object ........... 0x102da1f3 loads it and nothing else writes eax; ecx is the other
                                object, loaded at 0x102da1ed and never written again; edx is untouched
   - stdcall, three arguments ......... 0x102da2af `ret 0xc`: the callee cleans three words, so rt_return's
                                pop is 0xc bytes - the matrix, the vector, and the parameter the table
                                routine was given
   - one way in, through a table ......... 0x103cc544 stores this entry's address (tools/cow/refs_to.py
                                0x102da1d8: one data reference), in the same run of geometry entries as
                                0x103cc52c, which reaches the plane builder, and 0x103cc550, which reaches
                                the reflection matrix

   Proof: tools/cow/cowdiff.py 0x102da1d8 - PASS on fault, eax, edx, callee-saved, esp, st0/top, memory
   (address, size, value) and calls out, over the states of cow/seeds/102da1d8.json plus the fuzzed ones,
   with every generated instruction reached. Both object pointers are pinned into the arena and the table
   thunk is stubbed (its slot's file image is the unconverted refresh trampoline, so the fuzzed states
   would otherwise recurse until the harness's own stack goes), with the four floats the routine was to
   fill pinned in the entry's frame. The fuzzed states are what forced the reads to stay where they are:
   with the object pointer fuzzed to the arena's last word and the vector pointer to the stack's first,
   the sixteen stores run straight through the words the later `fmul`s read, and a conversion that read
   the four components up front disagreed in the fields of columns 3 and 4 - sign of zero on a product
   whose factor had already been overwritten. One state has the two vectors identical, so the matrix must
   be (q.q)I - qq^T and equal its own transpose; one has a zero component in each vector, where which
   line of the matrix empties says which factor carried the zero and the sign of every zero says whether
   the product came off the entry's `fchs`.

   Name: cow_matrix_from_plane_and_vector (guess) - (q.e)I - q e^T is the matrix that annihilates q and,
   when e and q are the same unit vector, projects onto the plane perpendicular to it; that is a
   projection-onto-a-plane shape, and the q here is the four floats the sibling f_102da2b2 reads as a
   plane. Whether the engine feeds it a plane and a direction is not established by anything this entry
   does on its own.
*/
#include "cow.h"

/* The four negated components the entry keeps in the x87 register stack from 0x102da20d to 0x102da224,
   plus the dot product underneath them: what a field's `fld st(N)` takes, and the two words the entry
   stores into its own frame and reads back for the last two fields. Not a guest layout - the matrix
   itself lives in guest memory at the address the first argument names, and the adapter stores it field
   by field there, reading each column component at the point the original's `fmul` reads it. */
typedef struct CowOuterDiffRows
{
    double neg_x, neg_y, neg_z, neg_w; /* the four `fld`/`fchs` pairs, in double as the registers hold them */
    double dot;                        /* q.e, summed in the entry's order, before any store */
} CowOuterDiffRows;

/* The dot product, summed the way the entry sums it: q.y*e.y + q.x*e.x first, then q.w*e.w, then q.z*e.z.
   Association of four doubles is observable, so the order is the one the four `faddp`s give and not the
   obvious x,y,z,w. Each term is the product of two floats, which is exact in double, so the only
   roundings here are the three adds. */
double cow_vector4_dot_product(const float q[4], const float e[4])
{
    double left, right; /* 0x102da1ea-0x102da20b: the four terms, in the entry's order */
    volatile double a, b;

    a = (double)q[1] * (double)e[1]; /* 0x102da1ea/0x102da1f0 */
    b = (double)q[0] * (double)e[0]; /* 0x102da1f6/0x102da1f9 */
    left = a + b;
    a = (double)q[3] * (double)e[3]; /* 0x102da1fd/0x102da200 */
    right = left + a;
    a = (double)q[2] * (double)e[2]; /* 0x102da205/0x102da208 */
    return right + a;
}

/* The four negated components the register stack holds for the rows. Negating a float is exact, so this
   is the value the `fld` loaded with its sign flipped, and nothing here depends on the rounding mode. */
void cow_outer_diff_rows(CowOuterDiffRows* r, const float q[4], const float e[4])
{
    r->neg_x = -(double)q[0]; /* 0x102da20d/0x102da210 */
    r->neg_y = -(double)q[1]; /* 0x102da212/0x102da215 */
    r->neg_z = -(double)q[2]; /* 0x102da217/0x102da21a */
    r->neg_w = -(double)q[3]; /* 0x102da21f/0x102da222 */
    r->dot = cow_vector4_dot_product(q, e);
}

/* One field of the matrix: the row's negated component times the column's component, and on the diagonal
   the dot product added. The product of two floats is exact in double, so a non-diagonal field is one
   rounding, at the store; a diagonal one is the add and then the store, which is the entry's `fadd st(5)`
   and `fstp`. `column` is what the entry's `fmul [ecx+4j]` reads AT THIS POINT - the adapter reads it
   there for the reason the header states, and passes it in so the arithmetic stays in one place. */
float cow_outer_diff_field(double row, float column, double dot, int diagonal)
{
    const double product = row * (double)column;
    return (float)(diagonal ? dot + product : product);
}

/* COW_ADAPTER BEGIN - stdcall, three arguments, `ret 0xc`: rt_return's pop of 0xc bytes is the esp the
   entry's own `ret 0xc` gives the caller back. The frame, the pushes and every store below are the
   entry's own effects in the original's order, because cowdiff compares the guest memory trace, and
   every read of the column component is at the point the original's `fmul` does it, for the same
   reason. The entry's x87 work nets to nothing on the register stack - it pushes and pops the same
   number of times - so g->top and g->st[top] are left as the generated body leaves them. The readability
   gate skips this block. */
void cow_adapter_102da1d8(Guest* g)
{
    g->esp -= 4u; /* 0x102da1d8: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102da1d9: mov ebp, esp */
    g->esp -= 0x20u; /* 0x102da1db: sub esp, 0x20 - the four floats and the two stored negations */

    g->esp -= 4u; /* 0x102da1de: push dword ptr [ebp+0x10] - the parameter */
    wr32(g->esp, rd32((uint32_t)(g->ebp + 0x10u)));
    const uint32_t plane_at = (uint32_t)(g->ebp - 0x10u);
    g->esp -= 4u; /* 0x102da1e1/0x102da1e4: lea eax, [ebp-0x10] / push eax - the buffer */
    wr32(g->esp, plane_at);

    cow_call_vector4_from_table(COW_ADDR_VECTOR4_TABLE_RETURN_B); /* 0x102da1e5 */

    /* The four components of q and the four of e that the dot is made of, all read before the first
       store, in the order the entry loads them. */
    float q[4], e[4];
    q[1] = rdf32((uint32_t)(plane_at + 0x04u));              /* 0x102da1ea: fld [ebp-0xc] */
    const uint32_t other = rd32((uint32_t)(g->ebp + 0xcu));  /* 0x102da1ed: mov ecx, [ebp+0xc] */
    e[1] = rdf32((uint32_t)(other + 0x04u));                 /* 0x102da1f0: fmul [ecx+4] */
    g->eax = rd32((uint32_t)(g->ebp + 8u));                  /* 0x102da1f3: mov eax, [ebp+8] - the matrix */
    q[0] = rdf32(plane_at);                                  /* 0x102da1f6: fld [ebp-0x10] */
    e[0] = rdf32(other);                                     /* 0x102da1f9: fmul [ecx] */
    q[3] = rdf32((uint32_t)(plane_at + 0x0cu));              /* 0x102da1fd: fld [ebp-4] */
    e[3] = rdf32((uint32_t)(other + 0x0cu));                 /* 0x102da200: fmul [ecx+0xc] */
    q[2] = rdf32((uint32_t)(plane_at + 0x08u));              /* 0x102da205: fld [ebp-8] */
    e[2] = rdf32((uint32_t)(other + 0x08u));                 /* 0x102da208: fmul [ecx+8] */

    CowOuterDiffRows rows;
    cow_outer_diff_rows(&rows, q, e);

    /* The two negations the entry stores into its own frame without popping them. Written here, in the
       entry's order, and read back out of guest memory for the last two fields. */
    wrf32((uint32_t)(g->ebp - 0x18u), (float)rows.neg_z); /* 0x102da21c: fst [ebp-0x18] */
    wrf32((uint32_t)(g->ebp - 0x14u), (float)rows.neg_w); /* 0x102da224: fst [ebp-0x14] */

    /* Column 0. Each component is read again for each field, immediately before the store it belongs to,
       because a store into [eax] can land on [ecx] or on the frame. */
    wrf32(g->eax, cow_outer_diff_field(rows.neg_x, rdf32(other), rows.dot, 1));                    /* 0x102da227-0x102da22d */
    wrf32((uint32_t)(g->eax + 0x10u), cow_outer_diff_field(rows.neg_y, rdf32(other), rows.dot, 0)); /* 0x102da22f-0x102da233 */
    wrf32((uint32_t)(g->eax + 0x20u), cow_outer_diff_field(rows.neg_z, rdf32(other), rows.dot, 0)); /* 0x102da236-0x102da23a */
    wrf32((uint32_t)(g->eax + 0x30u), cow_outer_diff_field(rows.neg_w, rdf32(other), rows.dot, 0)); /* 0x102da23d-0x102da241 */

    /* Column 1, and the diagonal add at +0x14. */
    wrf32((uint32_t)(g->eax + 0x04u), cow_outer_diff_field(rows.neg_x, rdf32((uint32_t)(other + 0x04u)), rows.dot, 0)); /* 0x102da244-0x102da249 */
    wrf32((uint32_t)(g->eax + 0x14u), cow_outer_diff_field(rows.neg_y, rdf32((uint32_t)(other + 0x04u)), rows.dot, 1)); /* 0x102da24c-0x102da253 */
    wrf32((uint32_t)(g->eax + 0x24u), cow_outer_diff_field(rows.neg_z, rdf32((uint32_t)(other + 0x04u)), rows.dot, 0)); /* 0x102da256-0x102da25b */
    wrf32((uint32_t)(g->eax + 0x34u), cow_outer_diff_field(rows.neg_w, rdf32((uint32_t)(other + 0x04u)), rows.dot, 0)); /* 0x102da25e-0x102da263 */

    /* Column 2, and the diagonal add at +0x28. */
    wrf32((uint32_t)(g->eax + 0x08u), cow_outer_diff_field(rows.neg_x, rdf32((uint32_t)(other + 0x08u)), rows.dot, 0)); /* 0x102da266-0x102da26b */
    wrf32((uint32_t)(g->eax + 0x18u), cow_outer_diff_field(rows.neg_y, rdf32((uint32_t)(other + 0x08u)), rows.dot, 0)); /* 0x102da26e-0x102da273 */
    wrf32((uint32_t)(g->eax + 0x28u), cow_outer_diff_field(rows.neg_z, rdf32((uint32_t)(other + 0x08u)), rows.dot, 1)); /* 0x102da276-0x102da27d */
    wrf32((uint32_t)(g->eax + 0x38u), cow_outer_diff_field(rows.neg_w, rdf32((uint32_t)(other + 0x08u)), rows.dot, 0)); /* 0x102da280-0x102da283, the in-place fmul */

    /* Column 3. The stack is three deep here, so the rows this column uses are -q0 and -q1 - which is
       what the two pops at 0x102da286 and 0x102da296 left - and the last two fields take their row from
       the frame words, read back out of memory after thirteen stores. */
    wrf32((uint32_t)(g->eax + 0x0cu), cow_outer_diff_field(rows.neg_x, rdf32((uint32_t)(other + 0x0cu)), rows.dot, 0)); /* 0x102da288-0x102da28d: fld st(1) */
    wrf32((uint32_t)(g->eax + 0x1cu), cow_outer_diff_field(rows.neg_y, rdf32((uint32_t)(other + 0x0cu)), rows.dot, 0)); /* 0x102da290-0x102da293, the in-place fmul */
    wrf32((uint32_t)(g->eax + 0x2cu), cow_outer_diff_field(
                (double)rdf32((uint32_t)(g->ebp - 0x18u)), rdf32((uint32_t)(other + 0x0cu)), rows.dot,
                0)); /* 0x102da298-0x102da29e: the row comes out of the frame, not the register stack */
    wrf32((uint32_t)(g->eax + 0x3cu), cow_outer_diff_field(
                (double)rdf32((uint32_t)(g->ebp - 0x14u)), rdf32((uint32_t)(other + 0x0cu)), rows.dot,
                1)); /* 0x102da2a1-0x102da2a9: likewise, and the only field that adds st(1), the dot */

    g->esp = g->ebp; /* 0x102da2ae: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0xcu); /* 0x102da2af: ret 0xc - three words, in BYTES, as every other rt_return
                                   in src/ passes it */
}
/* COW_ADAPTER END */
