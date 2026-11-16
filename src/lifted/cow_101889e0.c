/* f_0x101889e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101889e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 4u);
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x101889e0u), in_eax, ecx, in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(self + 0x10u) == 0u) goto L_10188a04;
    esi = rd32(self + 0x10u);
L_101889f6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1018a320u), esi, 0);
    t4 = g->edx;
    if (rd32(esi + 8u) != 0u)
    {
        eax = t3;
        edx = t4;
        esi = rd32(esi + 8u);
        goto L_101889f6;
    }
L_10188a04: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101889e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101889e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
