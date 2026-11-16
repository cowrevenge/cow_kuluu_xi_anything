/* f_0x102897e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102897e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if ((int32_t)rd32(sp0 + 8u) <= 0) goto L_1028983f;
    edi = rd32(sp0 + 8u);
    if (rd32(rd32(sp0 + 4u) + 0x24u) == 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_10289818;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x24u);
    esi = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9550u), in_edi);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(esi + 0x24u);
    wr32(sp0 + 8u, t3);
    wr32(sp0 + 4u, COW_IMG(0x103b952cu));
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x102858b0u), t3, t1, t2);
    return;
L_10289818: ;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, edi << 4u, COW_IMG(0x103b9520u), 0xd8u);
    wr32(esi + 0x24u, t4);
    wr32(esi + 0x20u, edi);
    wr32(esi + 0x1cu, 0u);
L_1028983f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102897e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102897e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
