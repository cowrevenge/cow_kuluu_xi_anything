/* f_0x10227140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10227140(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t t1;
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

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1021e870u), 2, t1, 0x1fcu);
    t3 = g->edx;
    t4 = rd32(self) + 4u;
    t5 = rd32(self);
    wr32(self + 4u, t4);
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
    if (t6 == 0u) goto L_10227186;
    eax = t6;
    edi = t5;
    t7 = rd32(edi + 0x280u);
    t8 = rd32(self + 0xcu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10026890u), eax, 3, t8, edi + 0x284u, t7);
    wr32(self + 8u, t9);
    return;
L_10227186: ;
    wr32(self + 8u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10227140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
