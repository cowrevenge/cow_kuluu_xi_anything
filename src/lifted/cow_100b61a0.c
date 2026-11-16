/* f_0x100b61a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b61a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    if (t1 == 0u)
    {
        eax = t3;
        goto L_100b61c7;
    }
    eax = t3;
    ecx = t3;
    edi = t1;
    if (ecx == 0u) goto L_100b61c7;
    t4 = cow_divs(g, edi, ecx);
    t5 = cow_mods(g, edi, ecx);
    eax = t4;
    edx = t5;
L_100b61c9: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, edx);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
L_100b61c7: ;
    edx = 0u;
    goto L_100b61c9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b61a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b61a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
