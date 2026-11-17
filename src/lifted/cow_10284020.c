/* f_0x10284020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10284020(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    double loc_90_f;
    double loc_94_f;
    double loc_a4_f;
    double loc_a8_f;
    double loc_ac_f;
    double loc_b0_f;
    double loc_b4_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 228u);

    t1 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
    wr32(sp0 - 0xb8u, t1);
    t2 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0xbcu, t2);
    wr32(sp0 - 0xc0u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, t2, t1);
    t3 = g->edx;
    wr32(sp0 - 0xc4u, sp0 - 0x40u);
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x80u, sp0 - 0x40u);
    wr32(sp0 - 0xccu, arg1);
    wr32(sp0 - 0xd0u, sp0 - 0x80u);
    wr32(sp0 - 0xd4u, sp0 - 0xa0u);
    g->esp = sp0 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xa0u, sp0 - 0x80u, arg1);
    wr32(sp0 - 0x8cu, arg2);
    wr32(sp0 - 0x88u, arg2);
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0xd8u, sp0 - 0x8cu);
    wr32(sp0 - 0xdcu, sp0 - 0x80u);
    d4 = (double)(float)-(double)rdf32(sp0 - 0x98u);
    wrf32(sp0 - 0x98u, (float)d4);
    wr32(sp0 - 0xe0u, sp0 - 0xb4u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0xd4u;
    t5 = cow_cdecl(g, COW_IMG(0x1027efa0u), 3, sp0 - 0xb4u, sp0 - 0x80u, sp0 - 0x8cu);
    d6 = (double)rdf32(sp0 - 0xb4u);
    if (!(d6 < rdf64(COW_IMG(0x1032a108u))))
    {
        eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, rdf64(COW_IMG(0x1032a108u)), 0u);
        loc_b4_f = (double)rdf32(sp0 - 0xb4u);
    }
    else
    {
        eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, rdf64(COW_IMG(0x1032a108u)), 0u);
        d7 = (double)(float)-(double)rdf32(sp0 - 0xb4u);
        wrf32(sp0 - 0xb4u, (float)d7);
        loc_b4_f = d7;
    }
    d8 = (double)rdf32(sp0 - 0xb0u);
    if (!(d8 < rdf64(COW_IMG(0x1032a108u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, rdf64(COW_IMG(0x1032a108u)), 0u);
        loc_b0_f = (double)rdf32(sp0 - 0xb0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, rdf64(COW_IMG(0x1032a108u)), 0u);
        d9 = (double)(float)-(double)rdf32(sp0 - 0xb0u);
        wrf32(sp0 - 0xb0u, (float)d9);
        loc_b0_f = d9;
    }
    d10 = (double)rdf32(sp0 - 0xacu);
    if (!(d10 < rdf64(COW_IMG(0x1032a108u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1032a108u)), 0u);
        loc_ac_f = (double)rdf32(sp0 - 0xacu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1032a108u)), 0u);
        d11 = (double)(float)-(double)rdf32(sp0 - 0xacu);
        wrf32(sp0 - 0xacu, (float)d11);
        loc_ac_f = d11;
    }
    if ((cow_fsw(g, loc_b4_f, loc_b0_f, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_b4_f, loc_b0_f, 0u) & 0x4100u;
        goto L_1028411c;
    }
    eax = cow_fsw(g, loc_b4_f, loc_b0_f, 0u) & 0x4100u;
    if ((cow_fsw(g, loc_b4_f, loc_ac_f, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_b4_f, loc_ac_f, 0u) & 0x4100u;
        goto L_10284133;
    }
    eax = cow_fsw(g, loc_b4_f, loc_ac_f, 0u) & 0x4100u;
    x0 = loc_b4_f;
L_10284137: ;
    d12 = (double)(float)fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c4u));
    wrf32(sp0 - 0x94u, (float)d12);
    d13 = (double)(float)fr(g, x0 * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2ccu));
    wrf32(sp0 - 0xa4u, (float)d13);
    d14 = (double)rdf32(sp0 - 0x9cu);
    d15 = fr(g, fr(g, x0 * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2ccu)) + d12);
    if ((cow_fsw(g, d14, d15, 2u) & 0x4100u) == 0u)
    {
        x1 = fr(g, fr(g, x0 * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2ccu)) + d12);
        goto L_1028428d;
    }
    eax = cow_fsw(g, d14, d15, 2u) & 0x4100u;
    ecx = rd32(COW_IMG(0x1099d200u));
    loc_94_f = d12;
    loc_a4_f = d13;
    x1 = fr(g, fr(g, x0 * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2ccu)) + d12);
    d16 = (double)rdf32(sp0 - 0x9cu);
    if ((cow_fsw(g, -x1, d16, 1u) & 0x4100u) == 0u) goto L_1028428f;
    eax = cow_fsw(g, -x1, d16, 1u) & 0x4100u;
    d17 = (double)(float)fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(ecx + 0x2c0u));
    wrf32(sp0 - 0x90u, (float)d17);
    d18 = (double)(float)fr(g, x0 * (double)rdf32(ecx + 0x2c8u));
    wrf32(sp0 - 0xa8u, (float)d18);
    d19 = (double)rdf32(sp0 - 0xa0u);
    d20 = fr(g, fr(g, x0 * (double)rdf32(ecx + 0x2c8u)) + d17);
    if ((cow_fsw(g, d19, d20, 2u) & 0x4100u) == 0u)
    {
        x1 = fr(g, fr(g, x0 * (double)rdf32(ecx + 0x2c8u)) + d17);
        goto L_1028428d;
    }
    eax = cow_fsw(g, d19, d20, 2u) & 0x4100u;
    loc_90_f = d17;
    loc_a8_f = d18;
    x1 = fr(g, fr(g, x0 * (double)rdf32(ecx + 0x2c8u)) + d17);
    d21 = (double)rdf32(sp0 - 0xa0u);
    if ((cow_fsw(g, -x1, d21, 1u) & 0x4100u) == 0u) goto L_1028428f;
    eax = cow_fsw(g, -x1, d21, 1u) & 0x4100u;
    d22 = fr(g, x0 + (double)rdf32(ecx + 0x2b8u));
    d23 = (double)rdf32(sp0 - 0x98u);
    if (d22 < d23) goto L_1028428f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, d23, 1u);
    d24 = fr(g, (double)rdf32(ecx + 0x2bcu) - x0);
    d25 = (double)rdf32(sp0 - 0x98u);
    if ((cow_fsw(g, d24, d25, 1u) & 0x4100u) == 0u) goto L_1028428f;
    eax = cow_fsw(g, d24, d25, 1u) & 0x4100u;
    d26 = (double)(float)fr(g, loc_94_f - loc_a4_f);
    wrf32(sp0 - 0xa4u, (float)d26);
    d27 = (double)(float)fr(g, loc_90_f - loc_a8_f);
    wrf32(sp0 - 0xa8u, (float)d27);
    d28 = fr(g, (double)rdf32(ecx + 0x2b8u) - x0);
    d29 = (double)rdf32(sp0 - 0x98u);
    if ((cow_fsw(g, d28, d29, 1u) & 0x4100u) != 0u) goto L_1028427f;
    eax = cow_fsw(g, d28, d29, 1u) & 0x4100u;
    loc_a4_f = d26;
    loc_a8_f = d27;
    d30 = fr(g, x0 + (double)rdf32(ecx + 0x2bcu));
    d31 = (double)rdf32(sp0 - 0x98u);
    if (!(d30 < d31)) goto L_10284281;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, d31, 0u);
    d32 = (double)rdf32(sp0 - 0x9cu);
    if (!(d32 < loc_a4_f)) goto L_10284281;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, loc_a4_f, 0u);
    d33 = (double)rdf32(sp0 - 0x9cu);
    if (!(-loc_a4_f < d33)) goto L_10284281;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, -loc_a4_f, d33, 0u);
    d34 = (double)rdf32(sp0 - 0xa0u);
    if (!(d34 < loc_a8_f)) goto L_10284281;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, loc_a8_f, 0u);
    d35 = (double)rdf32(sp0 - 0xa0u);
    if (!(-loc_a8_f < d35)) goto L_10284281;
    return 1u;
L_1028411c: ;
    if ((cow_fsw(g, loc_b0_f, loc_ac_f, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_b0_f, loc_ac_f, 0u) & 0x4100u;
        goto L_10284133;
    }
    eax = cow_fsw(g, loc_b0_f, loc_ac_f, 0u) & 0x4100u;
    x0 = loc_b0_f;
    goto L_10284137;
L_10284133: ;
    x0 = loc_ac_f;
    goto L_10284137;
L_1028427f: ;
L_10284281: ;
    return 3u;
L_1028428d: ;
L_1028428f: ;
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10284020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
