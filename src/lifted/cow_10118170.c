/* f_0x10118170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10118170(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        edi = t2;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
        t5 = g->edx;
        wr32(sp0 + 4u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            goto L_101181bc;
        }
        edx = t5;
L_10118197: ;
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->esp = sp0 - 0xcu;
        t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
        t7 = g->edx;
        if (rd16(t6) != 2u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            wr32(sp0 - 0x10u, edi);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10119e30u), eax, 1, edi);
            t8 = g->edx;
            wr32(self + 8u, edi);
            edx = t8;
        }
        if (rd32(sp0 + 4u) != 0u) goto L_10118197;
        eax = rd32(sp0 + 4u);
    }
L_101181bc: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118170(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
