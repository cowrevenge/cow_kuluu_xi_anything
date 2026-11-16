/* f_0x1021df90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021df90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1033be90u));
    wr32(self + 0xcu, COW_IMG(0x1033be54u));
    wr32(self + 0x10u, COW_IMG(0x1033be40u));
    wr32(self + 0xe0u, COW_IMG(0x1033be1cu));
    wr32(self + 0xe4u, COW_IMG(0x1033be08u));
    edx = in_edx;
    ebx = 4u;
    esi = self + 0x174u;
L_1021dfc8: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t2 = g->edx;
        wr32(esi, 0u);
        eax = t1;
        edx = t2;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_1021dfc8;
    }
    wr8(COW_IMG(0x10666e80u), 0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1025fe30u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021df90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021df90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
