/* f_0x10225b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10225b00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10225370u), 1, t1);
    t3 = g->edx;
    if (rd8(COW_IMG(0x1066716eu)) == 0u) goto L_10225b27;
    eax = (t2 & 0xffffff00u) | rd8(COW_IMG(0x1066716eu));
    edx = t3;
    wr8(COW_IMG(0x1066716eu), (uint8_t)((uint8_t)eax - 1u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x102258b0u), (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 1u), self, edx);
    return;
L_10225b27: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10225b00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
