/* f_0x101ab7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ab7d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10662db0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662db0u));
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x101b9ff0u), in_eax, ecx, g->edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x106626ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106626ccu));
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x101953f0u), eax, ecx, g->edx, 1, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x101c4cf0u), ecx, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ab7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ab7d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
