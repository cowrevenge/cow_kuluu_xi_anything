/* f_0x101e6620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e6620(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663524u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_101e669a;
    }
    ecx = t3;
    edx = t4;
    esi = t2;
    if (rd32(COW_IMG(0x1066355cu)) == 0u)
    {
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x400u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x1066355cu), t5);
        ecx = t6;
        edx = t7;
    }
    t8 = rd8(esi + 0x21u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x101cc590u), 1, t8);
    t10 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, rd32(COW_IMG(0x1066355cu)), 0x400u, 0xau, 0x36u, 1u, esi + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101e66a0u), 0u, rd32(COW_IMG(0x1066355cu)), 0u, 0u, 1u, 0u);
    return;
L_101e669a: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037c50u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e6620(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
