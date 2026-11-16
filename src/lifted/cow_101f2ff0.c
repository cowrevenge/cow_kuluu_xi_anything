/* f_0x101f2ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f2ff0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 != 0u)
    {
        if (arg1 != 0u)
        {
            if (rd16(arg1) != 0u)
            {
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t1 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, arg1);
                t2 = g->edx;
                if (t1 == 0x12u)
                {
                    eax = t1;
                    edx = t2;
                }
                else
                {
                    eax = t1;
                    t3 = rd32(arg1 + 4u);
                    t4 = rd8(arg1 + 2u);
                    g->edx = t4;
                    g->esp = sp0 - 4u;
                    t5 = cow_cdecl(g, COW_IMG(0x100eb6c0u), 3, eax, t4, t3);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103820e4u));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f2ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
