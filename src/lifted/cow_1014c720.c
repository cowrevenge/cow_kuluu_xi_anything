/* f_0x1014c720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014c720(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1014c745;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1014c74a;
    }
    t1 = rd32(rd32(COW_IMG(0x10578450u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578450u));
    t2 = rd32(COW_IMG(0x10578450u));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1014c745: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1014c74a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c720(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
