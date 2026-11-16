/* f_0x1006b0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006b0e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032c128u));
    eax = in_eax;
    edx = in_edx;
    esi = 0u;
    edi = self + 0x28u;
L_1006b0f0: ;
    if (rd8(esi + self + 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + self + 8u);
    }
    else
    {
        g->eax = rd32(edi);
        g->edx = edx;
        t1 = rd32(edi);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(rd32(t1) + 8u), rd32(t1), 1, t1);
        t3 = g->edx;
        wr32(edi, 0u);
        eax = t2;
        edx = t3;
    }
    if ((int32_t)(esi + 1u) < 32)
    {
        esi = esi + 1u;
        edi = edi + 0x20u;
        goto L_1006b0f0;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006b0e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
