/* f_0x10062ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10062ed0(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, 1u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10073d80u), 3, sp0 - 4u, t1, 1u);
    t3 = g->edx;
    t4 = rd32(t2);
    wr32(sp0 + 4u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        goto L_10062f39;
    }
    eax = t4;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    if ((uint8_t)t5 != 0u) goto L_10062f03;
    eax = t5;
    return (eax & 0xffffff00u) | 1u;
L_10062f03: ;
    wr32(sp0 - 8u, arg2);
    wr32(sp0 - 0xcu, 7u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(sp0 + 4u)), 3, sp0 + 8u, 7u, arg2);
    t7 = rd32(t6);
    wr32(sp0 + 4u, t7);
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10062f39;
    }
    eax = t7;
    wr32(sp0 - 8u, arg4);
    wr32(sp0 - 0xcu, arg3);
    g->eax = rd32(eax);
    t8 = rd32(eax);
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x10057010u), t8, 2, arg3, arg4);
    return t9;
L_10062f39: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10062ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
