/* f_0x1014f700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014f700(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t t1;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u) goto L_1014f74d;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1014f764u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1014f712u: goto L_1014f712;
    case 0x1014f734u: goto L_1014f734;
    case 0x1014f744u: goto L_1014f744;
    default: rt_fatal(g, COW_IMG(0x1014f70bu), "switch");
    }
    return;
L_1014f712: ;
    if (rd8(self + 0x164u) == 0u) goto L_1014f74d;
    eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
    t3 = rd32(self + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10118db0u), eax, t3, in_edx);
    return;
L_1014f734: ;
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        goto L_1014f75c;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    if (eax == 1u) goto L_1014f750;
    eax = eax - 1u;
    if (eax != 1u) goto L_1014f74d;
L_1014f744: ;
    wr16(self + 0x15cu, 4u);
L_1014f74d: ;
    return;
L_1014f750: ;
    wr16(self + 0x15cu, 3u);
    return;
L_1014f75c: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    d2 = cow_take_float(g);
    fpush(g, d2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014f700(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
