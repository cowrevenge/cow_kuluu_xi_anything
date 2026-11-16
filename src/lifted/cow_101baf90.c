/* f_0x101baf90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101baf90(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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

    if (rd8(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101bb9e0u), in_eax, self, g->edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    esi = self + 0x7e2cu;
    edi = 0x40u;
L_101bafa9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101ba5b0u), esi - 0x1f0u, 0);
    t4 = g->edx;
    if (edi != 1u)
    {
        eax = t3;
        edx = t4;
        esi = esi - 0x1f0u;
        edi = edi - 1u;
        goto L_101bafa9;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101baf90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101baf90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
