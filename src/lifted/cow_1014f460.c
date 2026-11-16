/* f_0x1014f460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014f460(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int8_t)rd8(self + 0x14u) == 1u)
    {
        t5 = rd32(sp0 + 8u);
        t6 = rd32(sp0 + 4u);
        g->eax = t6;
        g->edx = t5;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x1014f520u), self, 2, t6, t5);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x14u) - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
            edx = in_edx;
        }
        else
        {
            t1 = rd32(sp0 + 8u);
            t2 = rd32(sp0 + 4u);
            g->eax = t1;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t3 = cow_stdcall(g, COW_IMG(0x1014f700u), 2, t2, t1);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    if (rd16(self + 0x15cu) == 0u) goto L_1014f4bf;
    if (rd32(rd32(COW_IMG(0x10578198u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578198u)) + 8u);
        goto L_1014f4bf;
    }
    eax = rd32(rd32(COW_IMG(0x10578198u)) + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015db80u), eax, COW_IMG(0x10621838u), edx);
L_1014f4bf: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014f460(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
