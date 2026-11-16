/* f_0x10188a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10188a10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10188a10u), in_eax, ecx, in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        esi = rd32(self + 0x10u);
L_10188a28: ;
        g->ebx = self;
        g->eax = eax;
        g->edx = edx;
        t3 = rd32(esi + 8u);
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x1018abf0u), esi, 0);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t8 = g->edx;
        if (t3 != 0u)
        {
            eax = t7;
            edx = t8;
            esi = t3;
            goto L_10188a28;
        }
        eax = t7;
    }
    wr32(self + 0x10u, 0u);
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10188a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
