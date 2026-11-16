/* f_0x10060c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10060c60(Guest* g)
{
    double d16;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(self, COW_IMG(0x1032bc10u));
    wr32(self + 0x34u, COW_IMG(0x1032bbf4u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t4 = g->edx;
    if (rd16(self + 0x78u) == 0u)
    {
        edx = t4;
        ebp = t1;
        edi = t3;
        goto L_10060cb1;
    }
    ebp = t1;
    edi = t3;
    t5 = rd32(self + 0x84u);
    wr32(sp0 - 0x14u, t5);
    t6 = rd32(self + 0x80u);
    wr32(sp0 - 0x18u, t6);
    t7 = rd32(self + 0x7cu);
    wr32(sp0 - 0x1cu, t7);
    t8 = rd32(self + 0x88u);
    wr32(sp0 - 0x20u, t8);
    wr32(sp0 - 0x24u, ebp);
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100aa940u), edi, 5, ebp, t8, t7, t6, t5);
    t9 = g->edx;
    edx = t9;
L_10060cd0: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x10084390u), edi, 0);
    t14 = g->edx;
    if (t13 > 0x53u)
    {
        eax = t13;
        edx = t14;
        goto L_10060d2a;
    }
    eax = t13;
    edx = t14;
    t15 = rd32(COW_IMG(0x10060d3cu) + rd8(COW_IMG(0x10060d44u) + eax) * 4u);
    switch (t15 - RD)
    {
    case 0x10060cebu: ecx = rd8(COW_IMG(0x10060d44u) + eax); goto L_10060ceb;
    case 0x10060d2au: goto L_10060d2a;
    default: rt_fatal(g, COW_IMG(0x10060ce4u), "switch");
    }
    return;
L_10060cb1: ;
    if (rd32(self + 0x8cu) == 0u)
    {
        eax = rd32(self + 0x8cu);
        goto L_10060d2a;
    }
    eax = rd32(self + 0x8cu);
    wr32(sp0 - 0x14u, eax);
    t10 = (uint32_t)(int16_t)rd16(self + 0x7au);
    wr32(sp0 - 0x18u, t10);
    t11 = rd32(self + 0x88u);
    wr32(sp0 - 0x1cu, t11);
    wr32(sp0 - 0x20u, ebp);
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100aa8e0u), edi, 4, ebp, t11, t10, eax);
    t12 = g->edx;
    edx = t12;
    goto L_10060cd0;
L_10060ceb: ;
    wr32(sp0 - 0x14u, ecx);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x41400000u);
    wr32(sp0 - 0x2cu, 0x41400000u);
    d16 = (double)rdf32(self + 0x84u);
    fpush(g, d16);
    g->esp = sp0 - 0x2cu;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), sp0 - 0x14u, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x30u, t17);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    t18 = rd32(self + 0x88u);
    wr32(sp0 - 0x3cu, t18);
    g->edx = t18;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x100cd920u), edi, 11, t18, 0x3f800000u, 0x3f800000u, t17, 0x41400000u, 0x41400000u, 0u, 0u, 0u, 0u, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_10060d2a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t22 = g->edx;
    g->esp = sp0;
    g->edx = t22;
    cow_tailcall(g, COW_IMG(0x100747c0u), t21, self, t22);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10060c60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
