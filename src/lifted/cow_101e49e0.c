/* f_0x101e49e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e49e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_101e4a10;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u) goto L_101e49f2;
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        edx = in_edx;
        goto L_101e4a1a;
    }
L_101e49f2: ;
    t1 = rd32(COW_IMG(0x10663520u));
    wr32(sp0 + 8u, 0u);
    t2 = rd32(t1 + 8u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t1, COW_IMG(0x10621838u), in_edx);
L_101e4a10: ;
    t3 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = t3;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x101e4980u), 1, t3);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101e4a1a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e49e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e49e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
