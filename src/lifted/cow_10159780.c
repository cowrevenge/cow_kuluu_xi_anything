/* f_0x10159780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10159780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10159de0u), in_eax, self, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101597ae;
    }
    eax = t1;
    ecx = t2;
    if (rd8(self + 0x21u) == 0u)
    {
        t4 = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
        t5 = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
        wr32(self + 8u, t4);
        if (t5 == 0u)
        {
            eax = t4;
        }
        else
        {
            eax = t4;
            t6 = rd32(eax + 0xa0u);
            wr32(self + 0xcu, t6);
        }
    }
    return eax;
L_101597ae: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10159740u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159780(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
