/* f_0x10232a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10232a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10232760u), (in_eax & 0xffffff00u) | (uint8_t)arg2, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_call_regs(g, COW_IMG(0x10230930u), arg1 - 0x2000u, g->ecx, g->edx, 1, 1, arg1 - 0x2000u);
            t5 = g->ecx;
            t6 = g->edx;
            if ((uint8_t)t4 != 0u)
            {
                eax = t4;
                edx = t6;
            }
            else
            {
                ecx = t5;
                edx = t6;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t7 = cow_cdecl(g, COW_IMG(0x10098fe0u), 2, 0u, arg1);
                t8 = g->edx;
                t9 = rd32(COW_IMG(0x10668ed0u));
                wr32(COW_IMG(0x10668edcu), 0u);
                if (t9 == 0u)
                {
                    eax = t7;
                    edx = t8;
                }
                else
                {
                    eax = t7;
                    ecx = t9;
                    edx = t8;
                    if (rd32(ecx + 0x64u) == 1u)
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 4u;
                        t10 = cow_thiscall(g, COW_IMG(0x10221c60u), ecx, 0);
                        t11 = g->edx;
                        t12 = cow_fastcall(g, COW_IMG(0x10221cb0u), rd32(COW_IMG(0x10668ed0u)), t11, 0);
                        t13 = g->edx;
                        wr32(rd32(COW_IMG(0x10668ed0u)) + 0x64u, 0u);
                        eax = t12;
                        edx = t13;
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10232a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
