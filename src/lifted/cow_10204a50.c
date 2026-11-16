/* f_0x10204a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10204a50(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x100e9420u), 3, 0u, arg1 + 8u, 6u);
        t2 = g->edx;
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385474u));
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x10664400u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664400u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10664400u));
        g->eax = eax;
        g->esp = sp0;
        t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t6 = g->edx;
        wr32(COW_IMG(0x10664400u), 0u);
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204a50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
