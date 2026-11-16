/* f_0x10204e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10204e00(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x106643a8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            g->edx = in_edx;
            g->esp = sp0;
            t1 = cow_thiscall(g, COW_IMG(0x10203190u), ecx, 0);
            t2 = g->ecx;
            t3 = g->edx;
            if (t1 == 0u)
            {
                ecx = t2;
                edx = t3;
            }
            else
            {
                eax = t1;
                ecx = t2;
                edx = t3;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x100e9420u), 3, 0u, eax + 2u, 7u);
                t4 = g->ecx;
                t5 = g->edx;
                ecx = t4;
                edx = t5;
            }
        }
    }
    if (rd32(COW_IMG(0x10664400u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664400u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10664400u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t6 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t7 = g->edx;
        wr32(COW_IMG(0x10664400u), 0u);
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
