/* f_0x102825b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102825b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a4u);
    cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, t1, in_edx, 1, 1, t1);
    t2 = g->ecx;
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u);
    g->eax = t3;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, t2, rd32(COW_IMG(0x1099d200u)), 1, 1, t3);
    t5 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8acu);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, rd32(COW_IMG(0x1099d200u)), t5, 1, 1, t5);
    t6 = g->edx;
    wr32(COW_IMG(0x103b484cu), 0xffffffffu);
    eax = 0x8b0u;
    ecx = 0xa20u;
L_102825fc: ;
    wr32(eax + rd32(COW_IMG(0x1099d200u)), 0xffffffffu);
    wr32(ecx + rd32(COW_IMG(0x1099d200u)), 0xffffffffu);
    wr32(ecx + rd32(COW_IMG(0x1099d200u)) + 4u, 0xffffffffu);
    if ((int32_t)(eax + 4u) < 2232)
    {
        eax = eax + 4u;
        ecx = ecx + 8u;
        goto L_102825fc;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102825b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102825b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
