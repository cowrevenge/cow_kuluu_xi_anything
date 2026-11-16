/* f_0x1018e800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018e800(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    if (rd32(arg1 * 4u + self + 4u) != 0u) goto L_1018e87e;
    t1 = cow_divu(g, arg1 + rd32(self + 0x58u), 0x14u);
    t2 = cow_modu(g, arg1 + rd32(self + 0x58u), 0x14u);
    wr32(sp0 - 0x10cu, t2);
    t3 = rd32(self + 0x5cu);
    wr32(sp0 - 0x110u, t3);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->ecx = 0x14u;
    g->edx = t3;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t3, t2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x118u, 0xe0u);
    g->esp = sp0 - 0x10cu;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, t5, 1, 3, 0xe0u, sp0 - 0x100u, rd32(sp0 - 0x110u));
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t6;
        edx = t7;
        t8 = rd32(self + 0x5cu);
        wr32(sp0 - 0x10cu, t8);
        g->eax = eax;
        g->esp = sp0 - 0x108u;
        t9 = cow_thiscall(g, COW_IMG(0x1018e0a0u), eax, 1, t8);
        eax = t9;
    }
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    wr32(arg1 * 4u + self + 4u, eax);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x108u;
    t10 = cow_thiscall(g, COW_IMG(0x1018e1d0u), eax, 1, sp0 - 0x100u);
    t11 = g->edx;
    t12 = ((int32_t)t10 >= 0) * 2u - 1u;
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    g->edx = t11;
    return t12;
L_1018e87e: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e800(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
