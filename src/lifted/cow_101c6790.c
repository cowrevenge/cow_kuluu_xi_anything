/* f_0x101c6790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c6790(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int8_t)rd8(sp0 + 4u) - 0x64u > 5u) goto L_101c67d8;
    eax = (uint32_t)(int8_t)rd8(sp0 + 4u) - 0x64u;
    t1 = rd32(COW_IMG(0x101c67e0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101c67a4u: goto L_101c67a4;
    case 0x101c67b1u: goto L_101c67b1;
    case 0x101c67beu: goto L_101c67be;
    case 0x101c67cbu: goto L_101c67cb;
    case 0x101c67d8u: goto L_101c67d8;
    default: rt_fatal(g, COW_IMG(0x101c679du), "switch");
    }
    return 0;
L_101c67a4: ;
    wr32(sp0 + 4u, 0xa0u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10129c70u), eax, self, in_edx);
L_101c67b1: ;
    wr32(sp0 + 4u, 0x9eu);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10129c70u), eax, self, in_edx);
L_101c67be: ;
    wr32(sp0 + 4u, 0x9fu);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10129c70u), eax, self, in_edx);
L_101c67cb: ;
    wr32(sp0 + 4u, 0xcfu);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10129c70u), eax, self, in_edx);
L_101c67d8: ;
    return 0x80808080u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c6790(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
