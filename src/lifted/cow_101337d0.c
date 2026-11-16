/* f_0x101337d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101337d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd8(rd32(self + 0x144u)) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = rd32(self + 0x144u);
            if (rd32(COW_IMG(0x1057847cu)) == 0u)
            {
                edx = in_edx;
            }
            else
            {
                ecx = rd32(COW_IMG(0x1057847cu));
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, eax, 2u);
                t1 = g->edx;
                edx = t1;
            }
        }
        if (rd8(rd32(self + 0x140u)) == 0u)
        {
            eax = rd32(self + 0x140u);
        }
        else
        {
            eax = rd32(self + 0x140u);
            if (rd32(COW_IMG(0x105781f8u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x105781f8u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t2 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, eax, 2u);
                t3 = g->edx;
                eax = t2;
                edx = t3;
            }
        }
        if (rd8(self + 0x14fu) == 0xffu)
        {
            wr16(COW_IMG(0x105781c2u), 0x78u);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101337d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101337d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
