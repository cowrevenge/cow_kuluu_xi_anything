/* f_0x1012fb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012fb30(Guest* g)
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1012eb40u), self, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        if (rd32(COW_IMG(0x1057847cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057847cu));
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, eax, 2u);
            t5 = g->edx;
            edx = t5;
        }
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x1012eba0u), self, 0);
        t7 = g->edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t6, 2u);
    }
    wr16(self + 0x1b4u, 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012fb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012fb30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
