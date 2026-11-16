/* f_0x10144ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10144ca0(Guest* g)
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

    if (rd8(self + 0x20u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
        t1 = rd8(self + 0x23u);
        wr8(self + 0x23u, (uint8_t)(t1 - 1u));
        if ((int8_t)(t1 - 1u) >= 0)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(t1 - 1u);
            edx = in_edx;
        }
        else
        {
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t2 = cow_cdecl(g, COW_IMG(0x10097fd0u), 2, COW_IMG(0x10147010u), 0u);
            t3 = g->ecx;
            t4 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                ecx = t3;
                edx = t4;
                t7 = rd8(self + 0x22u);
                wr8(self + 0x22u, (uint8_t)(t7 + 1u));
                if ((int8_t)t7 <= 10)
                {
                    eax = (eax & 0xffffff00u) | t7;
                    wr8(self + 0x23u, 0x14u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | t7;
                    wr8(self + 0x20u, 1u);
                }
            }
            else
            {
                edx = t4;
                wr8(self + 0x20u, 1u);
                if (rd32(COW_IMG(0x105781f8u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x105781f8u));
                }
                else
                {
                    eax = rd32(COW_IMG(0x105781f8u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t5 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x40u);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
            }
        }
    }
    if (rd8(COW_IMG(0x10485824u)) & 1u)
    {
        wr8(self + 0x21u, 1u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144ca0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
