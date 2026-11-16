/* f_0x102344d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102344d0(Guest* g)
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        t1 = (self & 0xffffff00u) | rd8(self + 0x64u);
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_thiscall(g, COW_IMG(0x10233f70u), ecx, 1, t1);
        t3 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            edx = t3;
            g->edx = edx;
            g->esp = sp0;
            t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
            t5 = g->edx;
            if (t4 != 0u)
            {
                eax = t4;
                edx = t5;
                if (rd32(eax + 0x1598u) != 0u)
                {
                    eax = rd32(eax + 0x1598u);
                    if (rd32(arg2 * 4u + eax) != 0u)
                    {
                        eax = rd32(arg2 * 4u + eax);
                        g->esp = sp0;
                        t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
                        if (t6 != 0u)
                        {
                            eax = t6;
                            if (rd32(eax + 0x14c8u) != 0u)
                            {
                                eax = rd32(eax + 0x14c8u);
                                g->esp = sp0;
                                cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, eax, arg3);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102344d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102344d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
