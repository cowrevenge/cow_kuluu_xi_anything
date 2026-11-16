/* f_0x1025fcd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025fcd0(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_1025fce2;
    return 0x80004003u;
L_1025fce2: ;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103294acu)), self, 1, 8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(arg2, t1);
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1025fcf9;
    }
    edx = t3;
    g->edx = edx;
    return 0x8007000eu;
L_1025fcf9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10266090u), ecx, 2, eax, COW_IMG(0x10385e28u));
    t4 = g->edx;
    g->edx = t4;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025fcd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025fcd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
