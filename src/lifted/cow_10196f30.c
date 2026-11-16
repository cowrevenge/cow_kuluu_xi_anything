/* f_0x10196f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10196f30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_10196f5b;
    }
    if (rd32(COW_IMG(0x10662770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10662770u));
        goto L_10196f5b;
    }
    eax = rd32(COW_IMG(0x10662770u));
    if (rd32(COW_IMG(0x10662774u)) == 0u) goto L_10196f5b;
    ecx = rd32(COW_IMG(0x10662774u));
    g->eax = rd32(ecx);
    t1 = rd32(ecx);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x48u), ecx, 0);
    g->edx = rd32(rd32(COW_IMG(0x10662770u)));
    return cow_tailcall(g, rd32(rd32(rd32(COW_IMG(0x10662770u))) + 0x48u), t2, rd32(COW_IMG(0x10662770u)), rd32(rd32(COW_IMG(0x10662770u))));
L_10196f5b: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196f30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
