/* f_0x10246a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10246a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x190u, in_edi, in_esi);
    wr32(self + 8u, t1);
    eax = t1;
    ecx = t1 + 0x190u;
    esi = arg1 >> 0x15u | arg1 << 0xbu;
L_10246a68: ;
    wr32(eax, esi);
    if (eax + 4u < ecx)
    {
        eax = eax + 4u;
        esi = esi + (esi >> 0x1du | esi * 8u);
        goto L_10246a68;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10246a40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
