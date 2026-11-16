/* f_0x10312fe8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10312fe8(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 > 0xffffffe0u)
    {
        edx = in_edx;
        goto L_10313011;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
L_10312fef: ;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10313014u), g->eax, ecx, edx, 1, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10313013;
    }
    eax = t1;
    edx = t2;
    if (arg2 == eax) goto L_10313013;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x1031d1aeu), g->eax, arg1, edx, 1, 1, arg1);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = arg1;
        edx = t4;
        goto L_10312fef;
    }
    edx = t4;
L_10313011: ;
    eax = 0u;
L_10313013: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312fe8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312fe8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
