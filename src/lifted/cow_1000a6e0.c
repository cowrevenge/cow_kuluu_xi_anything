/* f_0x1000a6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1000a6e0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (arg3 != 0u)
    {
        wr32(arg3, 0u);
    }
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    t1 = rd32(self + 0x90u);
    wr32(sp0 - 0x38u, t1);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(t1) + 0x20u), rd32(t1), 2, t1, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, arg5);
    wr32(sp0 - 0x3cu, 0x15u);
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, (uint16_t)arg2);
    wr32(sp0 - 0x4cu, (uint16_t)arg1);
    t2 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t2);
    g->eax = t2;
    g->edx = arg4;
    t3 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x50u), rd32(rd32(self + 0xcu)), 8, t2, (uint16_t)arg1, (uint16_t)arg2, 1u, arg4, 0x15u, arg5, sp0 + 0xcu);
    t4 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edx = t4;
        goto L_1000a7b9;
    }
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, arg5);
    wr32(sp0 - 0x3cu, 0x19u);
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, (uint16_t)arg2);
    wr32(sp0 - 0x4cu, (uint16_t)arg1);
    t5 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t5);
    g->eax = t5;
    g->edx = arg4;
    g->esp = sp0 - 0x30u;
    t6 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x50u), rd32(rd32(self + 0xcu)), 8, t5, (uint16_t)arg1, (uint16_t)arg2, 1u, arg4, 0x19u, arg5, sp0 + 0xcu);
    t7 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t7;
        goto L_1000a7b9;
    }
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, arg5);
    wr32(sp0 - 0x3cu, 0x16u);
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, (uint16_t)arg2);
    wr32(sp0 - 0x4cu, (uint16_t)arg1);
    t8 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t8);
    g->eax = t8;
    g->edx = arg4;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x50u), rd32(rd32(self + 0xcu)), 8, t8, (uint16_t)arg1, (uint16_t)arg2, 1u, arg4, 0x16u, arg5, sp0 + 0xcu);
    t10 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t10;
        goto L_1000a7b9;
    }
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, arg5);
    wr32(sp0 - 0x3cu, 0x18u);
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, (uint16_t)arg2);
    wr32(sp0 - 0x4cu, (uint16_t)arg1);
    t11 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t11);
    g->eax = t11;
    g->edx = arg4;
    g->esp = sp0 - 0x30u;
    t12 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x50u), rd32(rd32(self + 0xcu)), 8, t11, (uint16_t)arg1, (uint16_t)arg2, 1u, arg4, 0x18u, arg5, sp0 + 0xcu);
    t13 = g->edx;
    if ((int32_t)t12 >= 0)
    {
        edx = t13;
        goto L_1000a7b9;
    }
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, arg5);
    t14 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x3cu, t14);
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, (uint16_t)arg2);
    wr32(sp0 - 0x4cu, (uint16_t)arg1);
    t15 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t15);
    g->eax = rd32(rd32(self + 0xcu));
    g->edx = t14;
    t16 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x30u;
    t17 = cow_thiscall(g, rd32(t16 + 0x50u), arg4, 8, t15, (uint16_t)arg1, (uint16_t)arg2, 1u, arg4, t14, arg5, sp0 + 0xcu);
    t18 = g->edx;
    if ((int32_t)t17 < 0)
    {
        edx = t18;
        goto L_1000a7c7;
    }
    edx = t18;
L_1000a7b9: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return arg3;
L_1000a7c7: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000a6e0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
