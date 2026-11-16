/* f_0x102e2047 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102e2047(Guest* g)
{
    double d12;
    double d14;
    double d16;
    double d17;
    double d19;
    double d21;
    double d23;
    double d25;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t15;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, COW_IMG(0x102d2a17u));
    wr32(sp0 - 0x28u, 0x100u);
    wr32(sp0 - 0x2cu, 0x10u);
    wr32(sp0 - 0x30u, self + 0x30u);
    wr32(self, COW_IMG(0x10346140u));
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, in_edx, 0, 4, self + 0x30u, 0x10u, 0x100u, COW_IMG(0x102d2a17u));
    wr32(self + 0x18u, rd32(arg1));
    t1 = rd32(arg1 + 4u);
    wr32(self + 4u, t1);
    t2 = rd32(arg1 + 8u);
    wr32(self + 0x1050u, t2);
    t3 = rd32(arg1 + 0xcu);
    wr32(self + 0x1054u, t3);
    wr32(sp0 - 0x24u, 6u);
    esi = arg1 + 0x28u;
    edi = self + 0x1030u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(arg1 + 0x40u) != 0u)
    {
        ecx = COW_IMG(0x103ccbd0u);
    }
    else
    {
        ecx = COW_IMG(0x103ccb50u);
    }
    d4 = (double)rdf32(COW_IMG(0x10329e94u));
    wr32(self + 0x2cu, ecx);
    t5 = rd32(sp0 + 8u) >> 3u;
    wr32(self + 0x1068u, t5);
    t6 = rd32(sp0 + 8u);
    wr32(self + 0x1048u, 0u);
    wr32(self + 0x104cu, 0u);
    wr32(self + 0xcu, t6 != 0u);
    wr32(self + 8u, arg3);
    t7 = rd32(arg1 + 0x44u);
    t8 = rd32(arg1 + 0x44u);
    wr32(self + 0x10u, t7);
    if (t8 == 0u)
    {
        x0 = d4;
    }
    else
    {
        x0 = d4;
        t9 = rd32(arg1 + 0x44u);
        t10 = (uint8_t)(t9 >> 0x10u);
        wr32(sp0 + 8u, t10);
        t11 = (uint8_t)(t9 >> 8u);
        d12 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wr32(sp0 + 8u, t11);
        wrf32(sp0 - 0x14u, (float)(double)(float)d12);
        t13 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, (uint8_t)t9);
        d14 = (double)(float)fr(g, (double)(int32_t)t13 * x0);
        wrf32(sp0 - 0x10u, (float)d14);
        t15 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t9 >> 0x18u);
        d16 = (double)(float)fr(g, (double)(int32_t)t15 * x0);
        wrf32(sp0 - 0xcu, (float)d16);
        d17 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wrf32(sp0 - 8u, (float)d17);
        esi = sp0 - 0x14u;
        edi = self + 0x1cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    }
    if (rd32(self + 4u) == 0x29u) goto L_102e2150;
    ecx = rd32(self + 4u);
    if (ecx == 0x28u) goto L_102e2150;
    wr32(self + 0x14u, 0u);
L_102e21de: ;
    t26 = rd32(self + 0x103cu) - rd32(self + 0x1034u);
    t27 = rd32(self + 0x1040u);
    t28 = rd32(self + 0x1038u);
    wr32(self + 0x105cu, t26);
    t29 = rd32(self + 0x1044u) - t27;
    t30 = rd32(self + 0x1068u);
    t31 = rd32(self + 0x1030u);
    wr32(self + 0x1060u, t29);
    wr32(self + 0x1058u, t28 - t31);
    t32 = t30 * (t28 - t31);
    t33 = rd32(self + 0xcu);
    wr32(self + 0x1064u, t32);
    if (t33 != 0u)
    {
        eax = t30;
        esi = t31;
        wr32(self + 0x18u, eax * esi + rd32(self + 0x18u) + rd32(self + 0x1050u) * rd32(self + 0x1034u) + rd32(self + 0x1054u) * rd32(self + 0x1040u));
        t34 = rd32(self + 0x1058u);
        wr32(self + 0x1038u, t34);
        t35 = rd32(self + 0x105cu);
        wr32(self + 0x103cu, t35);
        t36 = rd32(self + 0x1060u);
        wr32(self + 0x1030u, 0u);
        wr32(self + 0x1034u, 0u);
        wr32(self + 0x1040u, 0u);
        wr32(self + 0x1044u, t36);
    }
    g->edx = self + 0x1030u;
    return self;
L_102e2150: ;
    wr32(self + 0x14u, 1u);
    if (rd32(arg1 + 0x48u) == 0u)
    {
        eax = self + 0x38u;
        ecx = 0x100u;
L_102e21c5: ;
        wrf32(eax + 4u, (float)1.0);
        wrf32(eax, (float)1.0);
        wrf32(eax - 4u, (float)1.0);
        wrf32(eax - 8u, (float)1.0);
        if (ecx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx - 1u;
            goto L_102e21c5;
        }
    }
    else
    {
        ecx = self + 0x34u;
        esi = 0u;
L_102e215f: ;
        t18 = rd8(esi + rd32(arg1 + 0x48u));
        wr32(sp0 + 8u, t18);
        d19 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wrf32(ecx - 4u, (float)d19);
        t20 = rd8(esi + rd32(arg1 + 0x48u) + 1u);
        wr32(sp0 + 8u, t20);
        d21 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wrf32(ecx, (float)d21);
        t22 = rd8(esi + rd32(arg1 + 0x48u) + 2u);
        wr32(sp0 + 8u, t22);
        d23 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wrf32(ecx + 4u, (float)d23);
        t24 = rd8(esi + rd32(arg1 + 0x48u) + 3u);
        wr32(sp0 + 8u, t24);
        d25 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * x0);
        wrf32(ecx + 8u, (float)d25);
        if (esi + 4u < 0x400u)
        {
            ecx = ecx + 0x10u;
            esi = esi + 4u;
            goto L_102e215f;
        }
    }
    goto L_102e21de;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e2047(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e2047(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
