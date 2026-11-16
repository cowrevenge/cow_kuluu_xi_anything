/* f_0x10209b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10209b40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
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

    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x20u) == 0u)
        {
            eax = rd32(self + 0x20u);
            edx = in_edx;
        }
        else
        {
            ebx = 0u;
            ebp = 0u;
            edi = 0u;
L_10209b5a: ;
            t1 = edi + rd32(self + 0x20u);
            t2 = ebx + rd32(self + 0x24u);
            t3 = ebp + (uint32_t)(int16_t)rd16(self + 0x16u);
            t4 = (uint32_t)(int16_t)rd16(self + 0x14u);
            g->eax = t4;
            g->edx = t3;
            g->esp = sp0 - 0x10u;
            t5 = cow_stdcall(g, COW_IMG(0x10209920u), 4, t4, t3, t2, t1);
            t6 = g->edx;
            if ((int32_t)(edi + 0xcu) < 96)
            {
                ebx = ebx + 0x14u;
                ebp = ebp + 0x1eu;
                edi = edi + 0xcu;
                goto L_10209b5a;
            }
            eax = t5;
            edx = t6;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10209b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
