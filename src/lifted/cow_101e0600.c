/* f_0x101e0600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101e0600(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101e0625;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101e0662;
    }
    t1 = rd32(rd32(COW_IMG(0x106634acu)) + 8u);
    g->eax = rd32(COW_IMG(0x106634acu));
    t2 = rd32(COW_IMG(0x106634acu));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101e0625: ;
    if (rd32(arg4 + 4u) <= 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
    }
    else
    {
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x1013e3b0u), (uint32_t)(int16_t)arg1 - 5u, rd32(COW_IMG(0x10578204u)), in_edx, 0, 4, 1u, 0u, 0u, 0u);
        eax = t5;
    }
    t6 = rd32(arg4 + 4u);
    g->eax = eax;
    g->edx = t6;
    t7 = rd32(COW_IMG(0x10578200u));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1013a870u), t7, 5, 1u, t6, COW_IMG(0x101e0670u), arg4, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10037b90u), t9, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101e0662: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0600(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
