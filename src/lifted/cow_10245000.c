/* f_0x10245000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10245000(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1024501f;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10245045;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1024501f: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10245039;
    }
    eax = rd32(self + 0x14u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_10245045;
    }
    t3 = (uint32_t)(int16_t)arg2 - 1u;
    g->eax = t3;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x102450a0u), 1, t3);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10245039: ;
    t6 = (uint32_t)(int16_t)arg2 - 1u;
    g->eax = eax;
    g->edx = t6;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x10245070u), 1, t6);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10245045: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245000(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
