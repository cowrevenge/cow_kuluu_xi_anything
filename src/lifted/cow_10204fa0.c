/* f_0x10204fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10204fa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10204fd5;
    }
    ecx = rd32(sp0 + 8u);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_10204fc4;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd32(eax + 0x3c390u) == rd32(rd32(sp0 + 4u) + 4u))
    {
        eax = rd32(eax + 0x3c390u);
        edx = rd32(sp0 + 4u);
        goto L_10204fd5;
    }
    eax = rd32(eax + 0x3c390u);
    edx = rd32(sp0 + 4u);
L_10204fc4: ;
    wr32(sp0 + 8u, ecx);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100e9220u), eax, ecx, edx);
L_10204fd5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204fa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
