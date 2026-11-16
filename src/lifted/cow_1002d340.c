/* f_0x1002d340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002d340(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d20;
    double d21;
    double d22;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t12;
    uint32_t t19;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x34u) == 0u)
    {
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x34u);
        ebp = rd32(eax);
    }
    if (rd32(self + 0x3cu) == 0u) goto L_1002d5da;
    eax = rd32(self + 0x3cu);
    loc_c = ebp;
    if (eax == 1u) goto L_1002d500;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1002d4f4;
    }
    wr32(self + 0x8au, 0u);
    t1 = rd32(ebp + 0x48u);
    wr32(COW_IMG(0x1045b620u), t1);
    t2 = t1 + rd16(rd32(ebp + 0x42u)) * 4u;
    wr32(COW_IMG(0x1045b61cu), t2);
    t3 = rd32(ebp + 0x42u);
    t4 = rd32(self + 0x6eu) + rd16(rd32(ebp + 0x42u)) * 0x18u;
    if ((int32_t)rd32(self + 0x86u) >= (int32_t)rd16(t3 + 2u))
    {
        eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x38u + rd16(rd32(ebp + 0x42u)) * 0x18u;
        goto L_1002d4f4;
    }
    eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x38u + rd16(rd32(ebp + 0x42u)) * 0x18u;
    ecx = t4;
    ebx = t2;
    loc_4 = t4;
L_1002d3e7: ;
    t5 = COW_IMG(0x103515f0u) + (rd16(ebx + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u;
    t6 = rd32(self + 0x86u);
    t7 = rd16(ebx + rd32(self + 0x86u) * 4u);
    t8 = rd16(ebx + rd32(self + 0x86u) * 4u + 2u);
    d9 = fr(g, (double)rdf32(ecx + rd32(self + 0x86u) * 0x38u) * (double)rdf32(COW_IMG(0x103515e8u) + (rd16(ebx + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u));
    wrf32(eax, (float)d9);
    d10 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 8u) * (double)rdf32(COW_IMG(0x103515ecu) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 8u, (float)d10);
    d11 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x10u) * (double)rdf32(t5));
    wrf32(eax + 0x10u, (float)d11);
    t12 = rd32(ecx + t6 * 0x38u + 0x18u);
    wr32(eax + 0x18u, t12);
    d13 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x20u) * (double)rdf32(COW_IMG(0x103515e8u) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x20u, (float)d13);
    d14 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x28u) * (double)rdf32(COW_IMG(0x103515ecu) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x28u, (float)d14);
    d15 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x30u) * (double)rdf32(t5));
    wrf32(eax + 0x30u, (float)d15);
    d16 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 4u) * (double)rdf32(COW_IMG(0x103515e8u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 4u, (float)d16);
    d17 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0xcu) * (double)rdf32(COW_IMG(0x103515ecu) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0xcu, (float)d17);
    d18 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x14u) * (double)rdf32(COW_IMG(0x103515f0u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x14u, (float)d18);
    t19 = rd32(ecx + t6 * 0x38u + 0x1cu);
    wr32(eax + 0x1cu, t19);
    d20 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x24u) * (double)rdf32(COW_IMG(0x103515e8u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x24u, (float)d20);
    d21 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x2cu) * (double)rdf32(COW_IMG(0x103515ecu) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x2cu, (float)d21);
    d22 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x34u) * (double)rdf32(COW_IMG(0x103515f0u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x34u, (float)d22);
    t23 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t23);
    if ((int32_t)t23 > 1000)
    {
        eax = eax + 0x38u;
        goto L_1002d629;
    }
    eax = eax + 0x38u;
    t24 = rd32(self + 0x86u) + 1u;
    wr32(self + 0x86u, t24);
    if ((int32_t)t24 < (int32_t)rd16(rd32(loc_c + 0x42u) + 2u)) goto L_1002d3dd;
L_1002d4f4: ;
    return (eax & 0xffffff00u) | 1u;
L_1002d3dd: ;
    ecx = loc_4;
    ebx = rd32(COW_IMG(0x1045b61cu));
    goto L_1002d3e7;
L_1002d500: ;
    wr32(self + 0x8au, 0u);
    t25 = rd32(ebp + 0x48u);
    wr32(COW_IMG(0x1045b620u), t25);
    t26 = rd32(self + 0x6eu);
    if ((int32_t)rd32(self + 0x86u) >= (int32_t)rd16(rd32(ebp + 0x42u))) goto L_1002d616;
    eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x18u;
    loc_4 = t26;
L_1002d534: ;
    t27 = rd32(self + 0x86u);
    t28 = rd16(rd32(COW_IMG(0x1045b620u)) + rd32(self + 0x86u) * 4u);
    d29 = fr(g, (double)rdf32(COW_IMG(0x103515e8u) + (rd16(rd32(COW_IMG(0x1045b620u)) + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u) * (double)rdf32(loc_4 + rd32(self + 0x86u) * 0x18u));
    wrf32(eax, (float)d29);
    d30 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 4u) * (double)rdf32(COW_IMG(0x103515ecu) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 4u, (float)d30);
    d31 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 8u) * (double)rdf32(COW_IMG(0x103515f0u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 8u, (float)d31);
    d32 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0xcu) * (double)rdf32(COW_IMG(0x103515e8u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0xcu, (float)d32);
    d33 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0x10u) * (double)rdf32(COW_IMG(0x103515ecu) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x10u, (float)d33);
    d34 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0x14u) * (double)rdf32(COW_IMG(0x103515f0u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x14u, (float)d34);
    t35 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t35);
    if ((int32_t)t35 > 1000)
    {
        eax = eax + 0x18u;
        goto L_1002d629;
    }
    eax = eax + 0x18u;
    t36 = rd32(self + 0x86u) + 1u;
    wr32(self + 0x86u, t36);
    if ((int32_t)t36 < (int32_t)rd16(rd32(ebp + 0x42u))) goto L_1002d534;
L_1002d616: ;
    t40 = rd32(self + 0x3cu);
    wr32(self + 0x86u, 0u);
    wr32(self + 0x8au, 0u);
    wr32(self + 0x3cu, t40 + 1u);
    eax = t40 + 1u;
L_1002d629: ;
    return eax & 0xffffff00u;
L_1002d5da: ;
    t37 = rd16(rd32(ebp + 0x42u)) * 0x18u + rd16(rd32(ebp + 0x42u) + 2u) * 0x38u + 0x40u;
    g->esp = sp0 - 0x1cu;
    t38 = cow_call_regs(g, COW_IMG(0x10028640u), t37, rd16(rd32(ebp + 0x42u) + 2u) * 8u - rd16(rd32(ebp + 0x42u) + 2u), rd16(rd32(ebp + 0x42u)) * 0x18u, 1, 2, t37, 4u);
    wr32(self + 0x72u, t38);
    if (t38 == 0u)
    {
        eax = t38;
        goto L_1002d629;
    }
    eax = t38;
    t39 = (eax + 0x3fu & 0xffffff00u) | (eax + 0x3fu & 0xc0u);
    wr32(self + 0x76u, t39);
    goto L_1002d616;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002d340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002d340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
