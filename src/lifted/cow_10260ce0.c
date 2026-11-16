/* f_0x10260ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10260ce0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, sp0 + 0x10u);
    wr32(sp0 - 0x10u, COW_IMG(0x1034a128u));
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x1033fb08u));
    wr32(arg4, 0u);
    g->eax = sp0 + 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103294a4u)), arg1, 5, COW_IMG(0x1033fb08u), arg1, 1u, COW_IMG(0x1034a128u), sp0 + 0x10u);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
        goto L_10260d6f;
    }
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, COW_IMG(0x1033e6e8u));
    wr32(sp0 - 0x14u, arg4);
    g->eax = arg4;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(arg4)), sp0 + 4u, 3, arg4, COW_IMG(0x1033e6e8u), sp0 + 4u);
    t4 = g->ecx;
    if ((int32_t)t3 >= 0) goto L_10260d36;
    ecx = t4;
    esi = t3;
    wr32(sp0 - 0xcu, arg4);
    g->edx = rd32(arg4);
    t5 = rd32(arg4);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t5 + 8u), ecx, 1, arg4);
    t6 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t6;
    return esi;
L_10260d36: ;
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(rd32(arg1) + 0xcu), rd32(arg1), 3, arg1, arg2, arg3);
    t8 = g->edx;
    wr32(sp0 - 0xcu, arg1);
    g->edx = t8;
    t9 = rd32(arg1);
    cow_thiscall(g, rd32(t9 + 8u), t9, 1, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t7 >= 0)
    {
        edx = t11;
        goto L_10260d6b;
    }
    ecx = t10;
    esi = t7;
    wr32(sp0 - 0xcu, arg4);
    g->edx = rd32(arg4);
    t12 = rd32(arg4);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t12 + 8u), ecx, 1, arg4);
    t13 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t13;
    return esi;
L_10260d6b: ;
    wr32(arg4, arg4);
    eax = 0u;
L_10260d6f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260ce0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
