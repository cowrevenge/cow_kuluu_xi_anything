/* f_0x100690a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100690a0(Guest* g)
{
    double d2;
    double d4;
    uint32_t eax;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u) goto L_1006910c;
    eax = rd32(self + 4u);
    if (eax == 1u) goto L_100690ef;
    eax = eax - 1u;
    if (eax == 1u) goto L_100690bb;
    eax = eax - 1u;
    return eax & 0xffffff00u;
L_100690bb: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t1 = g->edx;
    d2 = cow_take_float(g);
    t3 = cow_thiscall(g, COW_IMG(0x100699d0u), arg1, 0);
    d4 = cow_take_float(g);
    if ((cow_fsw(g, d4, (double)(float)d2, 0u) & 0x100u) != 0u)
    {
        loc_4_f = (double)(float)d2;
        goto L_100690e7;
    }
    loc_4_f = (double)(float)d2;
    return 1u;
L_100690e7: ;
    return 0u;
L_100690ef: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x100699a0u), arg1, 0);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    return -(t5 < t7) + 1u;
L_1006910c: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10069970u), arg1, 0);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    return (t10 & 0xffffff00u) | (int32_t)t10 <= (int32_t)t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100690a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100690a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
