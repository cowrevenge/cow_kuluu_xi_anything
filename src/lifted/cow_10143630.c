/* f_0x10143630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10143630(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10143697;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1014369cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10143645u: goto L_10143645;
    case 0x10143651u: goto L_10143651;
    case 0x1014365du: goto L_1014365d;
    case 0x1014367cu: goto L_1014367c;
    case 0x10143697u: edx = in_edx; goto L_10143697;
    default: rt_fatal(g, COW_IMG(0x1014363eu), "switch");
    }
    return 0;
L_10143645: ;
    t9 = rd8(self + 0x14u);
    wr8(self + 0x14u, (uint8_t)(t9 - 1u));
    return (eax & 0xffffff00u) | (uint8_t)(t9 - 1u);
L_10143651: ;
    t8 = rd8(self + 0x14u);
    wr8(self + 0x14u, (uint8_t)(t8 + 1u));
    return (eax & 0xffffff00u) | (uint8_t)(t8 + 1u);
L_1014365d: ;
    t6 = rd32(COW_IMG(0x10578280u));
    wr32(sp0 + 8u, 0u);
    t7 = rd32(t6 + 8u);
    wr32(sp0 + 4u, t7);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t6, COW_IMG(0x10621838u), in_edx);
L_1014367c: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x101425a0u), 0);
    t3 = rd32(self + 8u);
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10143697: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143630(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
