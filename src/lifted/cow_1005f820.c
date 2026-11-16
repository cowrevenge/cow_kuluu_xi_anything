/* f_0x1005f820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005f820(Guest* g)
{
    double d14;
    double d19;
    double d24;
    double d37;
    double d4;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x85u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x85u);
        goto L_1005f83e;
    }
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), self, 1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return (t2 & 0xffffff00u) | 1u;
L_1005f83e: ;
    d4 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t5 = rd32(COW_IMG(0x1047bfa8u));
    d6 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d4);
    if (!(d4 < d6))
    {
        ecx = t5;
        x0 = d4;
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)));
    }
    else
    {
        ecx = t5;
        x0 = d4;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    t7 = rd8(self + 0x7eu);
    t8 = rd8(self + 0x82u) - rd8(self + 0x7eu);
    g->edx = t8;
    d9 = fr(g, fr(g, (double)(int32_t)t8 * x0) + (double)(int32_t)t7);
    fpush(g, d9);
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    t12 = rd8(self + 0x7du);
    t13 = rd8(self + 0x81u) - t12;
    g->ecx = t13;
    d14 = fr(g, fr(g, (double)(int32_t)t13 * x0) + (double)(int32_t)t12);
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = rd8(self + 0x7cu);
    t18 = rd8(self + 0x80u) - t17;
    g->edx = t18;
    d19 = fr(g, fr(g, (double)(int32_t)t18 * x0) + (double)(int32_t)t17);
    fpush(g, d19);
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
    t21 = g->edx;
    t22 = rd8(self + 0x7fu);
    t23 = rd8(self + 0x83u) - t22;
    g->edx = t21;
    d24 = fr(g, fr(g, (double)(int32_t)t23 * x0) + (double)(int32_t)t22);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t22, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        eax = t27;
        edx = t28;
        loc_c = ((t10 << 0x10u | (uint8_t)t15 << 8u | (uint8_t)t20) & 0xffffffu) | (uint8_t)t25 << 0x18u;
        if (rd8(self + 0x84u) == 0u)
        {
            g->esp = sp0 - 0x14u;
            t33 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t33);
            t34 = rd32(t33);
            t35 = cow_thiscall(g, rd32(t34 + 0x30u), t33, 1, loc_c);
            t36 = g->edx;
            eax = t35;
            edx = t36;
        }
        else
        {
            g->esp = sp0 - 0x14u;
            t29 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t29);
            t30 = rd32(t29);
            t31 = cow_thiscall(g, rd32(t30 + 0x60u), t29, 1, loc_c);
            t32 = g->edx;
            eax = t31;
            edx = t32;
        }
    }
    d37 = (double)rdf32(self + 0x74u);
    if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1005f97a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t38 = rd32(self);
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, rd32(t38 + 0x18u), self, 1, 1u);
    t40 = g->edx;
    g->edx = t40;
    return (t39 & 0xffffff00u) | 1u;
L_1005f97a: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
