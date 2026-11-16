/* f_0x10205230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10205230(Guest* g)
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
    const uint32_t in_edx = g->edx;

    t1 = cow_call_regs(g, COW_IMG(0x102053f0u), in_eax, g->ecx, in_edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0;
            t3 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
            t4 = g->ecx;
            if (t3 != 0u)
            {
                eax = t3;
                ecx = t4;
                t5 = (ecx & 0xffff0000u) | rd16(eax);
                t6 = rd32(eax + 4u);
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t6, t5, 5u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10205230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
