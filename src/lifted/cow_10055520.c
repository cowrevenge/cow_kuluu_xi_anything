/* f_0x10055520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10055520(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        if (eax + rd32(self + 8u) * 0x20u != 0u)
        {
            esi = eax + rd32(self + 8u) * 0x20u;
            ecx = self;
            edx = in_edx;
L_10055533: ;
            t1 = rd32(esi + 0xcu);
            g->edx = edx;
            t2 = rd32(esi + 4u);
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, rd32(esi + 8u), ecx, 1, t1);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(esi + 0x14u, 0u);
            if (t2 != 0u)
            {
                ecx = t3;
                edx = t4;
                esi = t2;
                goto L_10055533;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10055520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
