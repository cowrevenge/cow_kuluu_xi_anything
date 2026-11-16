/* f_0x1012acc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012acc0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10578174u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10578174u));
        goto L_1012acd1;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10578174u));
    wr8(COW_IMG(0x10578174u), 0u);
    return eax;
L_1012acd1: ;
    if (rd8(COW_IMG(0x10578175u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10578175u));
        goto L_1012ace2;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10578175u));
    wr8(COW_IMG(0x10578174u), 1u);
    return eax;
L_1012ace2: ;
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10129de0u), t1, 1, 0xf7u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x10037c50u), t2, t3, t4);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012acc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012acc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
