/* f_0x10290930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10290930(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 4u);
    wr32(t1 + 0x80u, 0x3f000000u);
    wr32(t1 + 0x6cu, 0x3f000000u);
    wr32(t1 + 0xa0u, 1u);
    wr32(t1 + 0x74u, 0x3f800000u);
    wr32(t1 + 0x7cu, 0x3f800000u);
    wr32(t1 + 0x88u, 1u);
    wr32(t1 + 0x8cu, 1u);
    wr32(t1 + 0x98u, 1u);
    wr32(t1, 0xf0001u);
    wr32(t1 + 8u, COW_IMG(0x102908f0u));
    wr32(t1 + 0xcu, COW_IMG(0x10290900u));
    wr32(t1 + 0x10u, COW_IMG(0x10290aa0u));
    wr32(t1 + 0x4cu, 0u);
    wr32(t1 + 0x50u, 0u);
    wr32(t1 + 0x54u, 0u);
    wr32(t1 + 0x58u, 0u);
    wr32(t1 + 0x5cu, 0u);
    wr32(t1 + 0x64u, 0u);
    wr32(t1 + 0x70u, 0x3ba3d70au);
    wr32(t1 + 0xa4u, 0u);
    wr32(t1 + 0x78u, 0u);
    wr32(t1 + 0x84u, 0u);
    wr32(t1 + 0x90u, 0u);
    wr32(t1 + 0x94u, 0u);
    wr32(t1 + 0xa8u, 0u);
    wr32(t1 + 0x9cu, 0u);
    wr32(t1 + 0xb0u, 0u);
    wr32(t1 + 0xacu, 0u);
    wr32(t1 + 0xb4u, 0u);
    eax = t1;
    edx = t1 + 0xbcu;
    esi = t1 + 0x158u;
    edi = 0xau;
L_102909ec: ;
    wr32(edx - 4u, 0u);
    wr32(edx, 0u);
    wr32(edx + 4u, 0u);
    wr32(esi - 0x28u, 0u);
    wr32(esi, 0u);
    if (edi != 1u)
    {
        edx = edx + 0xcu;
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_102909ec;
    }
    edx = edx + 0xcu;
    wr32(eax + 0x60u, 0u);
    wr32(eax + 0x68u, 0u);
    wr32(sp0 + 4u, eax + 0x14u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x102a33b0u), eax + 0x14u, 0u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10290930(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
