/* f_0x100cde70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_100cde70(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x80u) == 0u)
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t1);
        t4 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            edx = t4;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t6 = g->edx;
            t7 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t5);
            if ((uint8_t)t7 == 0u)
            {
                eax = t7;
                if (rd8(self + 0xf8u) == 0u)
                {
                    ecx = 0x3f696467u;
                    edx = 0u;
                }
                else
                {
                    ecx = 0x3f6d6467u;
                    edx = arg6;
                }
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, ecx, arg1, arg2, arg3, arg4, arg5, edx, 0u, 0u, 0u, 0u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cde70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cde70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
