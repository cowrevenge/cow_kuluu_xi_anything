/* f_0x10074a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10074a50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x24u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10074a69;
    }
    eax = in_eax;
    edx = in_edx;
    esi = rd32(self + 0x24u);
L_10074a5b: ;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, esi, edx, 1, 0);
    t2 = g->edx;
    if (rd32(esi + 0x28u) != 0u)
    {
        eax = t1;
        edx = t2;
        esi = rd32(esi + 0x28u);
        goto L_10074a5b;
    }
    eax = t1;
    edx = t2;
L_10074a69: ;
    if (rd16(self + 0x22u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        wr16(self + 0x22u, (uint16_t)(eax - 1u));
        eax = eax - 1u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074a50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
