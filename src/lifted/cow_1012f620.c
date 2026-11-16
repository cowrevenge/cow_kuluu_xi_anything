/* f_0x1012f620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012f620(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd32(rd32(COW_IMG(0x10578470u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
        ecx = rd32(COW_IMG(0x10578470u));
        goto L_1012f651;
    }
    wr32(sp0 - 0x28u, 0u);
    t1 = rd32(self + 8u);
    wr32(sp0 - 0x2cu, t1);
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    wr16(self + 0x1b4u, 0x18u);
    return;
L_1012f651: ;
    wr32(sp0 - 0x28u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_call_regs(g, COW_IMG(0x1014f820u), eax, ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint16_t)t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        edi = t2;
    }
    else
    {
        eax = t2;
        edi = t2;
        wr32(sp0 - 0x2cu, 0u);
        wr16(rd32(COW_IMG(0x10578470u)) + 0x15cu, 0u);
        t5 = rd32(self + 8u);
        wr32(sp0 - 0x30u, t5);
        g->esp = sp0 - 0x28u;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t5, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if ((uint32_t)(int16_t)edi > 5u)
    {
        eax = (uint32_t)(int16_t)edi;
        edi = rd32(sp0 - 0x28u);
        goto L_1012f73e;
    }
    eax = (uint32_t)(int16_t)edi;
    edi = rd32(sp0 - 0x28u);
    t8 = rd32(COW_IMG(0x1012f770u) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x1012f691u: goto L_1012f691;
    case 0x1012f6fcu: goto L_1012f6fc;
    case 0x1012f713u: goto L_1012f713;
    case 0x1012f73eu: goto L_1012f73e;
    case 0x1012f76au: goto L_1012f76a;
    default: rt_fatal(g, COW_IMG(0x1012f68au), "switch");
    }
    return;
L_1012f691: ;
    wr32(sp0 - 0x28u, 0x20u);
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10578470u));
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall(g, COW_IMG(0x1014f810u), t11, 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x2cu, t12);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->edx = t14;
    g->esp = sp0 - 0x24u;
    t15 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x20u, g->ecx, g->edx, 1, 3, sp0 - 0x20u, t12, 0x20u);
    t16 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->ecx = sp0 - 0x20u;
    g->edx = t16;
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x10077c30u), t15, g->ecx, g->edx, 1, 7, sp0 - 0x20u, sp0 - 0x20u, rd32(sp0 - 0x2cu), 0x20u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_1012f73e;
    }
    ecx = t18;
    wr32(sp0 - 0x28u, 0x20u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    wr32(sp0 - 0x30u, self + 0x1c6u);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x24u;
    t20 = cow_call_regs(g, COW_IMG(0x10312090u), self + 0x1c6u, g->ecx, g->edx, 1, 3, self + 0x1c6u, sp0 - 0x20u, 0x20u);
    t21 = g->edx;
    t22 = rd32(self + 8u);
    wr8(self + 0x1f2u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    cow_call_regs(g, COW_IMG(0x10118db0u), t20, t22, g->edx, 0, 2, 1u, 0u);
    wr8(rd32(self + 8u) + 0x5du, 1u);
    wr16(self + 0x1b4u, 7u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = edi;
    return;
L_1012f6fc: ;
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b4u, 0x15u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = edi;
    return;
L_1012f713: ;
    if (rd32(COW_IMG(0x10578158u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        wr32(sp0 - 0x28u, 0x32u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t9 = cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x32u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 5u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 5u, 0u);
    wr16(self + 0x1b4u, 0xfu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = edi;
    return;
L_1012f73e: ;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t23 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    g->edx = rd32(COW_IMG(0x10578470u));
    t24 = rd32(COW_IMG(0x10578470u));
    cow_call_regs(g, COW_IMG(0x10118db0u), t23, rd32(t24 + 8u), g->edx, 0, 2, 1u, 0u);
    t25 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    t26 = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
    wr32(sp0 - 0x2cu, t26);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t25, 2, t26, 0u);
L_1012f76a: ;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012f620(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
