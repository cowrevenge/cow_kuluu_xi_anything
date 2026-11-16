/* f_0x10145c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10145c20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 6u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_10145c44;
    }
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), in_edx);
L_10145c44: ;
    if ((uint16_t)eax != 5u)
    {
        edx = in_edx;
        goto L_10145c62;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_10145c5d;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_10145c62;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10145bf0u), self, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10145c5d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10145bc0u), self, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10145c62: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145c20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
