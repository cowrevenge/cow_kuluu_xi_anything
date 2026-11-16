/* f_0x1006b090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006b090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0xcu);
    wr32(self, COW_IMG(0x1032c10cu));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        eax = in_eax;
        edx = in_edx;
L_1006b0a1: ;
        g->eax = eax;
        g->edx = edx;
        t2 = rd32(ecx + 8u);
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x1006adc0u), ecx, 0);
        t4 = g->edx;
        if (t2 != 0u)
        {
            eax = t3;
            ecx = t2;
            edx = t4;
            goto L_1006b0a1;
        }
        eax = t3;
        edx = t4;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1006adb0u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006b090(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
