/* f_102d7c47 - build a rotation matrix from an axis and an angle.

   The entry takes the caller's angle through fsincos, copies the caller's axis into its own frame with
   three string moves, asks the function table to do something to that copy, and then writes sixteen
   floats at the object its first argument names: the axis's self-products weighted by (1 - cos) plus
   cos on the diagonal, the axis's cross-products weighted the same way with a sine term added or
   subtracted off the diagonal, zeros in the fourth column and 0,0,0,1 in the fourth row. That is the
   row-vector rotation matrix about an arbitrary axis, field for field. It reads no global and writes
   nothing outside that object, the two caller parameter slots it reuses as scratch, and its own frame.

   Evidence
   - it is a rotation matrix .................. sixteen float stores through eax (the object loaded from
                                               [ebp+8] at 0x102d7c88) at +0x00..+0x3c. The three diagonal
                                               fields of the upper-left 3x3 are component^2*(1-cos) + cos
                                               (0x102d7cb2, 0x102d7ced, 0x102d7d20 each `fadd` the cosine),
                                               the six off-diagonal ones are the other two components'
                                               product weighted the same way with a sine term added on one
                                               side of the diagonal and subtracted on the other, +0x0c,
                                               +0x1c and +0x2c..+0x38 come from `fldz` and +0x3c from
                                               `fld1`. Weighting the squares by (1-cos), adding cos, and
                                               skewing the pairs by a sine with opposite signs is the
                                               axis-angle rotation and nothing else that was read says
                                               otherwise
   - which convention ......................... the (0,1) field gets +kz*sin and the (1,0) field -kz*sin
                                               (0x102d7cbf `fadd st(1)` against 0x102d7cde `fsub st(1)`,
                                               both against the kx*ky term). Reading the matrix as rows
                                               and multiplying a vector on the LEFT puts that pair where
                                               the right-handed rotation about +z wants it, so this is the
                                               row-vector (v' = v*R) form - the transpose of the
                                               column-vector one. Nothing here says which one the engine
                                               multiplies by; the sign pair is what was read
   - the axis is copied before it is used ..... 0x102d7c6c loads [ebp+0xc] into esi, 0x102d7c72 puts edi on
                                               ebp-0x1c, and three `movsd` (opcode a5) at 0x102d7c75,
                                               0x102d7c7c and 0x102d7c82 copy three words. They are string
                                               moves, so they walk esi AND edi by +4, or by -4 with the
                                               direction flag set - which the harness fuzzes, and which
                                               with DF set puts the second and third words on the saved esi
                                               and edi instead (ebp-0x20 and ebp-0x24) and makes the
                                               `pop edi / pop esi` at 0x102d7d26/0x102d7d27 hand back two
                                               of the axis floats. Modelled on g->df, as f_102d9502 does
   - the table routine gets that copy twice ... 0x102d7c7d and 0x102d7c81 both `push eax` with eax =
                                               `lea eax,[ebp-0x1c]`, so in=and out= are the same three words,
                                               and every component the matrix uses is read back from
                                               ebp-0x1c/-0x18/-0x14 AFTER the call (0x102d7c91, 0x102d7c99,
                                               0x102d7caa, 0x102d7cf3...). The callee cleans both words
                                               (nothing adds to esp afterwards and the frame below survives),
                                               so the seed stubs COW_ADDR_VECTOR3_TABLE_THUNK with pop 8: its
                                               slot's file image is the unconverted refresh trampoline, the
                                               same chain that keeps 0x102d920a parked
   - the angle slot is scratch ................ 0x102d7c79 `fstp [ebp+0x10]` puts (1-cos) over the caller's
                                               angle and 0x102d7c8b reads it back; 0x102d7c96 then puts
                                               kx*ky*(1-cos) over THAT and both 0x102d7cbc and 0x102d7cdb
                                               read it back again. Two consequences, both in the trace: the
                                               weight every field uses is the FLOAT that was stored, not the
                                               double the fsub produced, and the (0,1)/(1,0) pair is
                                               weighted by the float-rounded product - not by the double
                                               that went into the store
   - the axis slot is scratch too ............. 0x102d7cca `fst [ebp+0xc]` (no pop) writes ky*sin over the
                                               axis POINTER, which 0x102d7d05 reads back for the (2,0)
                                               field, while the (0,2) field at 0x102d7cd1 uses the same
                                               product still sitting in the register stack. The two fields
                                               therefore do not cross by the same value, and a conversion
                                               that kept ky*sin in one place loses the store and equates
                                               them
   - cos and sin are stored and read back ..... 0x102d7c66/0x102d7c68 store them at [edx]/[eax], which the
                                               entry itself had put in [ebp-0xc]/[ebp-0x10] at
                                               0x102d7c50/0x102d7c58 from `lea eax,[ebp-4]` and `lea
                                               eax,[ebp-8]`; every later `fadd [ebp-4]` and `fmul [ebp-8]`
                                               therefore reads a FLOAT out of memory. fsincos leaves st0 =
                                               cos and st1 = sin (the generated body assigns sin into the old
                                               top and PUSHES cos), so the cosine is the one at [edx], in the
                                               slot the entry addressed first
   - what lives in a register, and for how long . the entry reads [ebp-0x14] exactly ONCE (0x102d7c99) and
                                               carries kz on the register stack to the `fmul st(1)` of the
                                               (2,2) field at 0x102d7d1c, by which time the stores have been
                                               running for seven instructions; [ebp-0x1c] by contrast is
                                               loaded five separate times, the last at 0x102d7cf3 after the
                                               store at 0x102d7ce0. So "read the axis once at the top" is
                                               wrong twice over - once by reading a slot the entry left
                                               alone, once by re-reading a slot the entry overwrote. The
                                               aliased-object state in the seed (the matrix aimed at the
                                               entry's own frame) is what proves it
   - reads happen at the instruction that reads  the matrix stores begin at 0x102d7cb5, well before the
                                               last frame read at 0x102d7d05, so a conversion that hoisted
                                               the reads to the top would read pre-store values whenever the
                                               object overlaps the frame - the defect that cost 0x102da1d8
                                               eight stores
   - why the arithmetic is six functions, and .. every operation here is one x87 instruction, and the six
     not three operators                                   helpers below are its two forms: the memory form
                                               (`fmul dword ptr [m]`) and the register form (`fmul st(n)`).
                                               They are separate because the forms are not interchangeable:
                                               when both operands are NaN the reference translation hands
                                               back the payload of the operand the compiler put in the
                                               destination register, and it is not consistent. Measured
                                               against cowdiff, one field at a time: the (0,1) field wanted
                                               0xffffe732, the kz read out of the image at a fuzzed axis
                                               pointer, where a plain expression answered 0xffffffff
                                               (state 77) - the memory-form multiply keeps the loaded
                                               operand. The (1,2) field wanted the OTHER one, and the (2,2)
                                               field wanted the cosine out of [ebp-4] rather than the product
                                               that was in st(0) - so the two additions are written with the
                                               rule stated (the operand not in st(0) wins), because
                                               reordering a C addition does not reach the choice:
                                               build/probe_nan_codegen.c shows both orders compiling to the
                                               same allocation. The multiplications and the subtractions are
                                               plain expressions, which is what the harness agreed with at
                                               every site it exercised - and the memory/register split is
                                               kept for transcription, not for behaviour: writing the
                                               memory-form multiply with the loaded operand first (mutation
                                               M9) is something cowdiff cannot see at all. The guest's own
                                               FPU has a cleaner rule (the first source, quieted) and the
                                               reference does not always follow it; it is the reference that
                                               proves these units, and where they differ a caller can only
                                               tell on the bit pattern of a NaN. If a future compiler changes
                                               its mind, cowdiff says so and the rule moves
   - eax and edx are left behind .............. eax ends as the object pointer (0x102d7c88 is its last
                                               write) and edx as ebp-4 (0x102d7c5e is its last). Both are
                                               compared by cowdiff, so both are set here rather than left to
                                               the bridge
   - stdcall, three arguments ................. 0x102d7d46 `ret 0xc`: the callee cleans, so rt_return's pop
                                               is 0xc BYTES. The three are the object, the axis, and the
                                               angle - in that order by offset, which is all the reading
                                               gives
   - who asks for it .......................... 0x103cc5a0 holds this entry's address
                                               (tools/cow/owner_index.py 0x102d7c47), and the dwords either
                                               side of it hold 0x102d7ef1, 0x102d920a, 0x102da1d8, 0x102da2b2
                                               and 0x102d8be9 (python tools/cow/peek_bytes.py 0x103cc560
                                               --len 96) - the other geometry builders this cluster has
                                               produced, in one table of function pointers

   Proof: tools/cow/cowdiff.py 0x102d7c47 - PASS on eax, edx, callee-saved, esp, st0/top, memory writes
   (address, size, value, order - which is what pins the two scratch stores, the three DF-sensitive
   copies and the sixteen fields) and calls out. cow/seeds/102d7c47.json pins the object, the axis and its
   neighbours, the entry's frame copy of the axis, the angle as raw float bits, and stubs the table thunk,
   because unpinned the entry faults on a fuzzed pointer before it stores anything and both sides would
   agree by agreeing on nothing. Four states exist to keep the reading honest rather than lucky: the
   aliased-frame one (the reads above), the angle-0 one (the signed zeros that tell `fadd st(1)` from
   `fsub st(1)`), the angle-pi one (the diagonal's catastrophic cancellation, which is the only place the
   weight's rounding is visible), and the two-NaN-axis one (which operand's payload a field carries).

   Name: cow_rotation_matrix_from_axis_angle (guess) - from the sixteen stores and the sincos. That the
   table routine is handed the axis copy in and out supports reading the axis as whatever it returns, but
   nothing here shows what it does to it, so no part of this name claims a normalisation.
*/
#include "cow.h"

/* --- the entry's six x87 operations, in the two forms each appears in -------------------------------

   One expression each, written the way the generated body writes it, because with two NaN operands the
   payload that comes out is the destination register's - and MSVC puts the freshly loaded memory operand
   in the destination for `f* dword ptr [m]` and st(0) there for `f* st(n)`. RT_INLINE matters: these have
   to be rebuilt in the caller's context, not compiled as calls whose parameters arrive in fixed
   registers. See the "why the arithmetic is six functions" bullet above. */

RT_INLINE double cow_x87_quiet(double value)
{
    union { double d; uint64_t u; } bits;
    bits.d = value;
    bits.u |= 0x0008000000000000ull; /* the quiet bit of an IEEE-754 double NaN */
    return bits.d;
}

RT_INLINE double cow_fmul_m(double st0, uint32_t address) /* fmul dword ptr [address] */
{
    return st0 * (double)rdf32(address);
}

RT_INLINE double cow_fmul_r(double st0, double st_n)      /* fmul st(n) */
{
    return st0 * st_n;
}

RT_INLINE double cow_fadd_m(double st0, uint32_t address) /* fadd dword ptr [address] */
{
    /* Same rule as cow_fadd_r, and found the same way: state 77's (2,2) field is 0xffffffff, the cosine
       read out of [ebp-4], where the plain expression answers 0xffffe732, the weighted product that was in
       st(0). With two NaNs an addition here hands back the operand that was NOT in st(0), whichever form
       it was written in. */
    const double loaded = (double)rdf32(address);
    if (st0 != st0 && loaded != loaded)
    {
        return cow_x87_quiet(loaded);
    }
    return st0 + loaded;
}

RT_INLINE double cow_fadd_r(double st0, double st_n)      /* fadd st(n) */
{
    /* The one operation here whose result cannot be left to the compiler. With two NaN operands the
       reference translation hands back the payload of the operand REACHED BY INDEX, not of st(0) - which
       is not what the guest's FPU does, and not what writing the addition the other way round produces:
       build/probe_nan_codegen.c shows both C orders compiling to the same register allocation, so the
       choice is not reachable from the expression. Measured at both sites that use this form, 0x102d7cfb
       and 0x102d7d08: cowdiff's state 77 wants 0xffffe732 (the weighted product of the image's NaN) where
       the plain expression answers 0xffffffff (the sine of the NaN angle), and the seed's two-NaN axis
       state wants 0x7ff00001 where the plain expression answers 0x7fc00000. The subtractions and the
       multiplications are left as plain expressions because every case the harness has found agrees with
       them - the memory-form operations hand back the freshly loaded operand and the register-form
       multiplications st(0)'s, as the reference does. */
    if (st0 != st0 && st_n != st_n)
    {
        return cow_x87_quiet(st_n);
    }
    return st0 + st_n;
}

RT_INLINE double cow_fsub_m(double st0, uint32_t address) /* fsub dword ptr [address] */
{
    return st0 - (double)rdf32(address);
}

RT_INLINE double cow_fsub_r(double st0, double st_n)      /* fsub st(n) */
{
    return st0 - st_n;
}

/* The weight of every term: two components multiplied, and that product multiplied by (1 - cos) after.
   Two fmul instructions in that nesting, not one expression - the association is visible in the float that
   gets stored - and two forms, because the entry used both: _m where its second factor was a memory
   operand (0x102d7c91, 0x102d7ca5, 0x102d7cad, 0x102d7ce8) and _r where it was a register (0x102d7c9f,
   0x102d7ca1, 0x102d7d1c). */
double cow_rotation_axis_weight_m(double leading, uint32_t second_at, double weight)
{
    return cow_fmul_r(cow_fmul_m(leading, second_at), weight);
}

double cow_rotation_axis_weight_r(double leading, double second, double weight)
{
    return cow_fmul_r(cow_fmul_r(leading, second), weight);
}

/* A diagonal field: component^2 * (1 - cos) + cos. The three of them differ in where the second copy of
   the component came from - 0x102d7cad and 0x102d7ce8 read the slot again, 0x102d7d1c squares the register
   the entry has been carrying since 0x102d7c99 - and the last `fadd` always reads the cosine out of
   memory. */
float cow_rotation_axis_diagonal_field_m(double leading, uint32_t second_at, double weight,
                                         uint32_t cosine_at)
{
    return (float)cow_fadd_m(cow_rotation_axis_weight_m(leading, second_at, weight), cosine_at);
}

float cow_rotation_axis_diagonal_field_r(double component, double weight, uint32_t cosine_at)
{
    return (float)cow_fadd_m(cow_rotation_axis_weight_r(component, component, weight), cosine_at);
}

/* An off-diagonal field: the weighted product with a sine term put on or taken off it, in the order the
   entry had them - st(0) first, the operand reached by index second. Which of the two is which is not
   decorative: 0x102d7cbf adds the sine into the weighted product while 0x102d7cfb and 0x102d7d08 add the
   weighted product into the SINE. All six are register forms; the sines and cosines were loaded earlier
   and travel on the stack. */
float cow_rotation_axis_side_field(double leading, double trailing, int subtract)
{
    return (float)(subtract ? cow_fsub_r(leading, trailing) : cow_fadd_r(leading, trailing));
}

/* COW_ADAPTER BEGIN - stdcall, three arguments, `ret 0xc`: rt_return's pop of 3 does the esp the
   original's `ret 0xc` does. The frame, the two argument pushes, the three string copies and the sixteen
   stores below are the entry's own effects in the original's order, because cowdiff compares the guest
   memory byte for byte and in order. The readability gate skips this block. */
void cow_adapter_102d7c47(Guest* g)
{
    g->esp -= 4u; /* 0x102d7c47: push ebp */
    wr32(g->esp, g->ebp);
    g->ebp = g->esp; /* 0x102d7c48: mov ebp, esp */
    g->esp -= 0x1cu; /* 0x102d7c4a: sub esp, 0x1c */

    g->eax = (uint32_t)(g->ebp - 4u);                         /* 0x102d7c4d: lea eax,[ebp-4] */
    wr32((uint32_t)(g->ebp - 0xcu), g->eax);                  /* 0x102d7c50: mov [ebp-0xc],eax - where cos
                                                                  goes, and edx's last value */

    g->esp -= 4u; /* 0x102d7c53: push esi */
    wr32(g->esp, g->esi);

    g->eax = (uint32_t)(g->ebp - 8u);                         /* 0x102d7c54: lea eax,[ebp-8] */
    g->esp -= 4u; /* 0x102d7c57: push edi */
    wr32(g->esp, g->edi);
    wr32((uint32_t)(g->ebp - 0x10u), g->eax);                 /* 0x102d7c58: mov [ebp-0x10],eax - where sin
                                                                  goes */

    g->eax = rd32((uint32_t)(g->ebp - 0x10u));                /* 0x102d7c5b: mov eax,[ebp-0x10] */
    g->edx = rd32((uint32_t)(g->ebp - 0xcu));                 /* 0x102d7c5e: mov edx,[ebp-0xc] - and edx
                                                                  stays this to the end */
    const uint32_t sin_at = g->eax;                           /* the two addresses the entry itself put in
                                                                  eax and edx, which is how its fmul/fadd
                                                                  reach the sine and the cosine */
    const uint32_t cos_at = g->edx;

    const double angle = (double)rdf32((uint32_t)(g->ebp + 0x10u)); /* 0x102d7c61: fld [ebp+0x10] */
    /* 0x102d7c64 fsincos: st0 = cos, st1 = sin, so the FIRST fstp stores the cosine. fcw is pinned 0x027F,
       which makes the generated body's fr_cw the identity, and the CRT sin/cos below are the ones it calls. */
    wrf32(g->edx, (float)cos(angle));                         /* 0x102d7c66: fstp [edx] */
    wrf32(g->eax, (float)sin(angle));                         /* 0x102d7c68: fstp [eax] */
    g->c2 = 0u;                                               /* what fsincos clears */

    /* 0x102d7c6a-0x102d7c6f: fld1 / fsub [ebp-4]. The cosine comes out of memory, as a float, which is what
       makes 1-cos of a small angle exact rather than merely close. */
    const double one_minus_cos = cow_fsub_m(1.0, cos_at);

    g->esi = rd32((uint32_t)(g->ebp + 0xcu));                 /* 0x102d7c6c: mov esi,[ebp+0xc] - the axis */
    g->edi = (uint32_t)(g->ebp - 0x1cu);                      /* 0x102d7c72: lea edi,[ebp-0x1c] */

    const int step = g->df ? -4 : 4; /* the three movsd walk esi AND edi by +4, or by -4 with DF set */
    wr32(g->edi, rd32(g->esi));                               /* 0x102d7c75: copy the first component */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    g->eax = (uint32_t)(g->ebp - 0x1cu);                      /* 0x102d7c76: lea eax,[ebp-0x1c] */
    wrf32((uint32_t)(g->ebp + 0x10u), (float)one_minus_cos);  /* 0x102d7c79: fstp [ebp+0x10] - the ANGLE slot
                                                                  becomes (1-cos), and 0x102d7c8b reads it
                                                                  back as a float, so that rounding is the
                                                                  weight every field carries */

    wr32(g->edi, rd32(g->esi));                               /* 0x102d7c7c: copy the second - with DF set
                                                                  this one lands on the saved esi */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    g->esp -= 4u;                                             /* 0x102d7c7d: push eax */
    wr32(g->esp, g->eax);
    g->eax = (uint32_t)(g->ebp - 0x1cu);                      /* 0x102d7c7e: lea eax,[ebp-0x1c] again */
    g->esp -= 4u;                                             /* 0x102d7c81: push eax - the SAME address
                                                                  twice: in=and out= are one buffer */
    wr32(g->esp, g->eax);

    wr32(g->edi, rd32(g->esi));                               /* 0x102d7c82: copy the third - AFTER both
                                                                  pushes */
    g->esi = (uint32_t)(g->esi + (uint32_t)step);
    g->edi = (uint32_t)(g->edi + (uint32_t)step);

    cow_call_vector3_from_table(COW_ADDR_VECTOR3_TABLE_RETURN_C); /* 0x102d7c83 */

    g->eax = rd32((uint32_t)(g->ebp + 8u));                   /* 0x102d7c88: mov eax,[ebp+8] - the object */

    const double weight = (double)rdf32((uint32_t)(g->ebp + 0x10u)); /* 0x102d7c8b: fld [ebp+0x10] */

    /* 0x102d7c8b-0x102d7c96: kx*ky*(1-cos) - st(0) is ky, then `fmul [ebp-0x1c]`, then `fmul st(1)` for the
       weight - stored into the parameter slot as a float, and BOTH the (0,1) and the (1,0) field read that
       store back. */
    const double weighted_xy = cow_rotation_axis_weight_m((double)rdf32((uint32_t)(g->ebp - 0x18u)),
                                                         (uint32_t)(g->ebp - 0x1cu), weight);
    wrf32((uint32_t)(g->ebp + 0x10u), (float)weighted_xy);    /* 0x102d7c96: fstp [ebp+0x10] */

    /* 0x102d7c99: the ONLY read of [ebp-0x14]. kz lives on the register stack from here to 0x102d7d1c. */
    const double kz = (double)rdf32((uint32_t)(g->ebp - 0x14u));

    /* 0x102d7c9c-0x102d7ca1: ky loaded, `fmul st(1)` by kz, `fmul st(2)` by the weight. Note the order:
       kz was loaded FIRST (0x102d7c99) but ky is the one in st(0) for this product, and both factors are
       registers here - a different form from the two products around it. */
    const double weighted_yz = cow_rotation_axis_weight_r((double)rdf32((uint32_t)(g->ebp - 0x18u)),
                                                         kz, weight);

    /* 0x102d7ca3-0x102d7ca8: `fld st(1)` takes the register kz, `fmul [ebp-0x1c]` the memory kx, `fmul
       st(3)` the weight. */
    const double weighted_xz = cow_rotation_axis_weight_m(kz, (uint32_t)(g->ebp - 0x1cu), weight);

    /* 0x102d7caa-0x102d7cb2: `fld [ebp-0x1c]`, `fmul [ebp-0x1c]` again, `fmul st(4)`, `fadd [ebp-4]`. */
    wrf32(g->eax, cow_rotation_axis_diagonal_field_m((double)rdf32((uint32_t)(g->ebp - 0x1cu)),
                                                    (uint32_t)(g->ebp - 0x1cu), weight, cos_at));

    const double sine_z = cow_fmul_m(kz, sin_at);             /* 0x102d7cb7 fld st(2) / 0x102d7cb9 fmul
                                                                  [ebp-8] - the REGISTER kz, not the slot */

    /* 0x102d7cbc-0x102d7cc1: the STORED product, plus the sine. */
    wrf32((uint32_t)(g->eax + 4u),
          cow_rotation_axis_side_field((double)rdf32((uint32_t)(g->ebp + 0x10u)), sine_z, 0));

    const double sine_y = cow_fmul_m((double)rdf32((uint32_t)(g->ebp - 0x18u)), sin_at); /* 0x102d7cc4,
                                                                                             0x102d7cc7 */
    wrf32((uint32_t)(g->ebp + 0xcu), (float)sine_y);          /* 0x102d7cca: fst [ebp+0xc] - the AXIS POINTER
                                                                  slot becomes ky*sin, as a float, and the
                                                                  (0,2) field below still uses the double
                                                                  that is in st(0) */

    wrf32((uint32_t)(g->eax + 8u), cow_rotation_axis_side_field(weighted_xz, sine_y, 1)); /* 0x102d7ccd
                                                                  fld st(2) / 0x102d7ccf fsub st(1) */
    wrf32((uint32_t)(g->eax + 0xcu), 0.0f);                   /* 0x102d7cd6/0x102d7cd8: fldz / fstp, and the
                                                                  sign of that zero is compared */

    /* 0x102d7cdb reads the stored product a SECOND time - kept as its own read for the state where the
       object overlaps the frame and the two reads see different words. */
    wrf32((uint32_t)(g->eax + 0x10u),
          cow_rotation_axis_side_field((double)rdf32((uint32_t)(g->ebp + 0x10u)), sine_z, 1));

    wrf32((uint32_t)(g->eax + 0x14u),                         /* 0x102d7ce5-0x102d7cf0: fld [ebp-0x18], fmul
                                                                  [ebp-0x18], fmul st(4), fadd [ebp-4] */
          cow_rotation_axis_diagonal_field_m((double)rdf32((uint32_t)(g->ebp - 0x18u)),
                                             (uint32_t)(g->ebp - 0x18u), weight, cos_at));

    const double sine_x = cow_fmul_m((double)rdf32((uint32_t)(g->ebp - 0x1cu)), sin_at); /* 0x102d7cf3,
                                                                                             0x102d7cf6 */

    /* 0x102d7cf9 puts the SINE in st(0) and adds the weighted product to it (`fadd st(3)`), so the sine
       leads here where the product leads at 0x102d7cbf. */
    wrf32((uint32_t)(g->eax + 0x18u), cow_rotation_axis_side_field(sine_x, weighted_yz, 0));

    wrf32((uint32_t)(g->eax + 0x1cu), 0.0f);                  /* 0x102d7d00/0x102d7d02: fldz / fstp */

    /* 0x102d7d05 reads ky*sin back out of the axis slot - the FLOAT, while the (0,2) field above crossed
       with the double - and 0x102d7d08's `fadd st(2)` makes that stored sine the leading operand. */
    wrf32((uint32_t)(g->eax + 0x20u),
          cow_rotation_axis_side_field((double)rdf32((uint32_t)(g->ebp + 0xcu)), weighted_xz, 0));

    wrf32((uint32_t)(g->eax + 0x24u), cow_rotation_axis_side_field(weighted_yz, sine_x, 1)); /* 0x102d7d0d
                                                                  fld st(2) / 0x102d7d0f fsub st(1) */

    /* 0x102d7d1a-0x102d7d20: `fld st(0)`/`fmul st(1)` square the REGISTER kz - the slot has been a store
       target for six instructions by now - and the weight and the cosine finish the field. */
    wrf32((uint32_t)(g->eax + 0x28u),
          cow_rotation_axis_diagonal_field_r(kz, weight, cos_at));

    g->edi = rd32(g->esp); /* 0x102d7d26: pop edi - out of MEMORY, because with DF set the copy above wrote
                              its third word over this slot and the caller's edi is gone */
    g->esp += 4u;
    g->esi = rd32(g->esp); /* 0x102d7d27: pop esi - likewise the second word */
    g->esp += 4u;

    wrf32((uint32_t)(g->eax + 0x2cu), 0.0f);                  /* 0x102d7d2c/0x102d7d2e: fldz / fstp */
    wrf32((uint32_t)(g->eax + 0x30u), 0.0f);                  /* 0x102d7d31/0x102d7d33 */
    wrf32((uint32_t)(g->eax + 0x34u), 0.0f);                  /* 0x102d7d36/0x102d7d38 */
    wrf32((uint32_t)(g->eax + 0x38u), 0.0f);                  /* 0x102d7d3b/0x102d7d3d */
    wrf32((uint32_t)(g->eax + 0x3cu), 1.0f);                  /* 0x102d7d40/0x102d7d42: fld1 / fstp - the
                                                                  homogeneous corner. It is a `fld1`, not the
                                                                  dword at COW_ADDR_FLOAT_ONE: same value,
                                                                  different origin */

    g->esp = g->ebp;                                          /* 0x102d7d45: leave */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    rt_return(g, g->eax, 0xcu);                               /* 0x102d7d46: ret 0xc - three words, in BYTES */
}
/* COW_ADAPTER END */
