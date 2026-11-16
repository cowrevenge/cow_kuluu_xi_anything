/* f_0x10018ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018ca0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10329fe0u));
    edx = in_edx;
    esi = self + 4u;
    edi = 6u;
L_10018cb0: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        if (rd32(eax) != 0u)
        {
            eax = rd32(eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), eax, 0);
            t2 = g->edx;
            g->edx = t2;
            cow_thiscall(g, COW_IMG(0x10071050u), esi, 0);
            t3 = g->edx;
            edx = t3;
        }
    }
    if (edi != 1u)
    {
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_10018cb0;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018ca0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
