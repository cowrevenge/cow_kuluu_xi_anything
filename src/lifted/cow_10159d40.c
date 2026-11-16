/* f_0x10159d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10159d40(Guest* g)
{
    double d14;
    double d17;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_10159dc1;
    ecx = t2;
    edx = t3;
    esi = t1;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x10159c80u), sp0 - 0x10u, ecx, g->edx, 0, 1, sp0 - 0x10u);
    wr32(sp0 - 0x24u, sp0 - 0x18u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    if ((uint8_t)t4 == 0u)
    {
        ecx = esi;
        g->eax = sp0 - 0x10u;
        g->edx = rd32(esi);
        t10 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t11 = cow_thiscall(g, rd32(t10 + 0x27cu), ecx, 3, sp0 - 0x10u, sp0 - 0x14u, sp0 - 0x18u);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = esi;
        d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0xcu, (float)d5);
        g->eax = sp0 - 0x10u;
        g->edx = rd32(esi);
        t6 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall(g, rd32(t6 + 0x280u), ecx, 3, sp0 - 0x10u, sp0 - 0x14u, sp0 - 0x18u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    if ((uint8_t)eax == 0u) goto L_10159dc1;
    g->edx = edx;
    d14 = (double)rdf32(sp0 - 0x10u);
    fpush(g, d14);
    g->esp = sp0 - 0x20u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    d17 = (double)rdf32(sp0 - 0xcu);
    wr16(arg1, (uint16_t)t15);
    fpush(g, d17);
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    t19 = rd32(sp0 - 0x20u);
    wr16(arg2, (uint16_t)t18);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = t19;
    return (t18 & 0xffffff00u) | 1u;
L_10159dc1: ;
    wr16(arg1, 0u);
    wr16(arg2, 0u);
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159d40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
