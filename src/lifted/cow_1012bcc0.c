/* f_0x1012bcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012bcc0(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x1057876cu)) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0;
            t1 = cow_call_regs(g, COW_IMG(0x101597f0u), (in_eax & 0xffffff00u) | (uint8_t)arg2, ecx, in_edx, 1, 0);
            t2 = g->edx;
            if (t1 == 0u)
            {
                eax = t1;
                edx = t2;
            }
            else
            {
                eax = t1;
                edx = t2;
                if (rd32(COW_IMG(0x1057876cu)) != 0u)
                {
                    ecx = rd32(COW_IMG(0x1057876cu));
                    g->esp = sp0;
                    t3 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
                    t4 = g->ecx;
                    t5 = g->edx;
                    eax = t3;
                    ecx = t4;
                    edx = t5;
                }
                else
                {
                    ecx = rd32(COW_IMG(0x1057876cu));
                    eax = 0u;
                }
                g->edx = edx;
                g->esp = sp0;
                t6 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, eax, 1u, 0u, 0u, 0u);
                t7 = g->edx;
                g->edx = t7;
                t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bcc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012bcc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
