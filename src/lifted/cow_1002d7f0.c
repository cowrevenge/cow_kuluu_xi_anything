/* f_0x1002d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1002d7f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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

    if (rd8(self + 0x30u) == 0u)
    {
        eax = rd8(self + 0x30u);
        goto L_1002d81b;
    }
    eax = rd8(self + 0x30u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1002d81b;
    }
    eax = eax - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d50u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd8(self + 0x30u);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1002d81b: ;
    if (rd8(self + 0x31u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x31u);
        edx = in_edx;
        goto L_1002d84f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x31u);
    if ((rd8(self + 0x32u) & 0x7fu) == 0u)
    {
        eax = rd8(self + 0x32u) & 0x7fu;
        goto L_1002d83d;
    }
    eax = rd8(self + 0x32u) & 0x7fu;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1002d84b;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10022470u), self, 0);
    t7 = g->edx;
    wr8(self + 0x31u, 1u);
    g->edx = t7;
    return t6;
L_1002d83d: ;
    wr32(self + 0x5eu, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1002d8f0u), self, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1002d84b: ;
    wr8(self + 0x31u, 1u);
L_1002d84f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002d7f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
