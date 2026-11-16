/* f_0x100175e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100175e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    else
    {
        if (rd32(COW_IMG(0x10350770u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10350770u));
            edx = in_edx;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        else
        {
            ebx = (in_ebx & 0xffffff00u) | 1u;
            esi = COW_IMG(0x10350770u);
L_100175fd: ;
            t1 = rd32(esi + 4u);
            g->edx = rd32(rd32(esi));
            t2 = rd32(rd32(esi));
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, COW_IMG(0x10019000u), self + 0xcu, 2, t2, t1);
            t4 = g->edx;
            if ((uint8_t)t3 != 0u)
            {
                edx = t4;
            }
            else
            {
                edx = t4;
                ebx = ebx & 0xffffff00u;
            }
            if (rd32(esi + 8u) != 0u)
            {
                esi = esi + 8u;
                goto L_100175fd;
            }
            eax = rd32(esi + 8u);
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100175e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100175e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
