/* f_0x101e6150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e6150(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101e34d0u), rd32(COW_IMG(0x10663520u)), 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            t3 = rd8(eax + 1u);
            g->eax = eax;
            g->ecx = (uint8_t)arg1;
            g->edx = t3;
            g->esp = sp0;
            t4 = cow_cdecl(g, COW_IMG(0x100eb6c0u), 3, t3, (uint8_t)arg1, 1u);
            t5 = g->ecx;
            t6 = g->edx;
            if ((uint8_t)t4 == 0u)
            {
                eax = rd32(COW_IMG(0x10663520u));
                edx = t6;
            }
            else
            {
                eax = rd32(COW_IMG(0x10663520u));
                ecx = t5;
                edx = t6;
                if (eax != 0u)
                {
                    wr8(eax + 0x65u, rd8(eax + 0x65u) | 2u);
                    eax = rd32(COW_IMG(0x10663520u));
                }
            }
            t7 = rd32(eax + 8u);
            g->eax = t7;
            g->esp = sp0;
            t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t7, 0u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
