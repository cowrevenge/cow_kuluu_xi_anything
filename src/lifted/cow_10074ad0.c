/* f_0x10074ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10074ad0(Guest* g)
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

    if (rd32(self + 0x10u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x10u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x100747f0u), ecx, 1, self);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(self + 0x24u) != 0u)
    {
        ecx = rd32(self + 0x24u);
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x10074890u), ecx, edx, 0);
        t3 = g->edx;
        edx = t3;
    }
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
        if (arg1 == 0u)
        {
            eax = arg1;
        }
        else
        {
            g->eax = arg1;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall(g, COW_IMG(0x10074a20u), self, 0);
            eax = t4;
        }
        if (rd8(self + 0x20u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
        }
        else
        {
            t5 = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
            wr32(rd32(COW_IMG(0x1047d140u)) + 0xd5cu, t5);
            wr32(rd32(COW_IMG(0x1047d140u)) + 0xd50u, self);
            wr32(self + 4u, 0u);
            t6 = rd32(COW_IMG(0x1047d140u));
            wr32(t6 + 0xd44u, rd32(t6 + 0xd44u) - 1u);
            eax = t6;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074ad0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
