/* f_0x10211010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10211010(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self + 0x3cu, (uint8_t)arg1);
    if ((uint8_t)arg1 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x40u) == 0u)
        {
            eax = rd32(self + 0x40u);
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            t1 = rd32(COW_IMG(0x10578188u));
            g->esp = sp0 - 4u;
            t2 = cow_thiscall(g, COW_IMG(0x1011ba40u), t1, 0);
            t3 = g->ecx;
            t4 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                edx = t4;
            }
            else
            {
                ecx = t3;
                edx = t4;
                if (rd8(rd32(COW_IMG(0x10578188u)) + 0x24u) == 0u)
                {
                    eax = rd32(COW_IMG(0x10578188u));
                }
                else
                {
                    eax = rd32(COW_IMG(0x10578188u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t5 = cow_stdcall(g, COW_IMG(0x10211340u), 0);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10211010(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
