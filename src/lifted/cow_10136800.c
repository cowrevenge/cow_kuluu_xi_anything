/* f_0x10136800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10136800(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    t3 = rd32(self + 0x50u);
    wr32(sp0 - 0x14u, t3);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10129290u), rd32(rd32(self + 0x64u) + 0x18u), 1, t3);
    t5 = g->edx;
    if (rd32(sp0 - 4u) == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1013685d;
    }
    eax = t4;
    ebx = rd32(sp0 - 4u);
L_1013682b: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, sp0 - 4u, 0, 1, sp0 - 4u);
    t7 = g->edx;
    wr32(sp0 - 0x14u, ebx);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, ebx);
    t9 = g->edx;
    if (t6 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        eax = t8;
        edx = t9;
        edi = t6;
        g->eax = eax;
        g->ecx = edi;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_stdcall(g, COW_IMG(0x10136940u), 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x14u, edi);
        t13 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t11, t12, 1, 1, edi);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    if (rd32(sp0 - 4u) != 0u)
    {
        ebx = rd32(sp0 - 4u);
        goto L_1013682b;
    }
L_1013685d: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101265d0u), self + 0x14u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10136800(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
