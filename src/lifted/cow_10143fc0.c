/* f_0x10143fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10143fc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_10143fd0;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u)
    {
        edx = in_edx;
        goto L_10144010;
    }
    eax = eax - 1u;
    return eax;
L_10143fd0: ;
    if (rd16(sp0 + 8u) != 0x14u)
    {
        eax = rd32(COW_IMG(0x10578284u));
        edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10143ff5;
    }
    eax = rd32(COW_IMG(0x10578284u));
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
    if (eax != 0u)
    {
        wr32(eax + 0x14u, 0xffffffffu);
    }
    if (rd32(COW_IMG(0x10578288u)) == 0u)
    {
        edx = 0xffffffffu;
        goto L_10144010;
    }
    eax = rd32(COW_IMG(0x10578288u));
    edx = 0xffffffffu;
L_1014400d: ;
    wr32(eax + 0x14u, edx);
L_10144010: ;
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), edx);
L_10143ff5: ;
    if (eax != 0u)
    {
        wr32(eax + 0x14u, (uint32_t)(int16_t)edx);
    }
    if (rd32(COW_IMG(0x10578288u)) == 0u) goto L_10144010;
    eax = rd32(COW_IMG(0x10578288u));
    edx = (uint32_t)(int16_t)edx;
    goto L_1014400d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143fc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
