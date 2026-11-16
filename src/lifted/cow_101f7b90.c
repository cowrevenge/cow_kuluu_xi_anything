/* f_0x101f7b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f7b90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x106638a0u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x106638a0u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x106638a0u));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            if (rd32(COW_IMG(0x10663888u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x10663888u));
                if ((uint8_t)(rd8(ecx + 0xa51u) + 1u) < rd8(ecx + 0xa50u))
                {
                    loc_4 = (rd32(sp0 - 4u) & 0xffffff00u) | rd8(ecx + 0xa50u);
                    loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | (uint8_t)(rd8(ecx + 0xa51u) + 1u);
                }
                else
                {
                    loc_4 = (rd32(sp0 - 4u) & 0xffffff00u) | rd8(ecx + 0xa50u);
                    loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | (uint8_t)(rd8(ecx + 0xa51u) + 1u);
                    loc_8 = loc_8 & 0xffffff00u;
                }
                t3 = rd32(ecx + 0xa4cu);
                g->eax = t3;
                g->edx = loc_4;
                g->esp = sp0 - 8u;
                t4 = cow_thiscall(g, COW_IMG(0x101fb140u), ecx, 3, t3, loc_4, loc_8);
                t5 = g->edx;
                eax = t4;
                edx = t5;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7b90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
