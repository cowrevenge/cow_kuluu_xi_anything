/* f_0x1015dd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015dd00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x1015dce0u), self, in_edx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1015dd46;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015edb0u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_1015dd37;
    }
    eax = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10160700u), eax, self, g->edx, 1, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        edx = t6;
        goto L_1015dd37;
    }
    edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10118260u), arg1, rd32(self + 0x54u), g->edx, 0, 1, arg1);
    if (t7 == 0u) goto L_1015dd46;
    eax = t7;
    return eax;
L_1015dd37: ;
    if ((uint16_t)arg1 == 7u)
    {
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1015ee40u), self, 0);
    }
L_1015dd46: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015dd00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015dd00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
