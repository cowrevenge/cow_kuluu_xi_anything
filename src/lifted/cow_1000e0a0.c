/* f_0x1000e0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000e0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    edi = rd32(COW_IMG(0x10329370u));
L_1000e0aa: ;
    if ((uint32_t)(int8_t)rd8(rd32(self)) - 9u > 0x17u) goto L_1000e0cd;
    eax = rd32(self);
    ecx = (uint32_t)(int8_t)rd8(rd32(self)) - 9u;
    t1 = rd32(COW_IMG(0x1000e0d0u) + rd8(COW_IMG(0x1000e0d8u) + ecx) * 4u);
    switch (t1 - RD)
    {
    case 0x1000e0c6u: edx = rd8(COW_IMG(0x1000e0d8u) + ecx); goto L_1000e0c6;
    case 0x1000e0cdu: goto L_1000e0cd;
    default: rt_fatal(g, COW_IMG(0x1000e0bfu), "switch");
    }
    return;
L_1000e0c6: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, edi, ecx, 1, eax);
    wr32(self, t2);
    goto L_1000e0aa;
L_1000e0cd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000e0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000e0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
