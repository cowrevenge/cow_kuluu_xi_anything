/* f_0x10263590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10263590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (arg2 != 0u) goto L_102635a6;
    return 0x80004003u;
L_102635a6: ;
    g->eax = rd32(arg1 - 0x98u);
    t1 = rd32(arg1 - 0x98u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x38u), arg1 - 0x98u, 0);
    if (t2 != 0u)
    {
        eax = t2;
        goto L_102636ed;
    }
    eax = t2;
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x1033e8d8u));
    wr32(sp0 - 0x18u, arg2);
    g->eax = eax;
    t3 = rd32(arg2);
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(t3), t3, 3, arg2, COW_IMG(0x1033e8d8u), sp0 + 8u);
    t5 = g->ecx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        ecx = t5;
        goto L_10263602;
    }
    wr32(sp0 - 0x10u, arg1 + 0x10u);
    wr32(sp0 - 0x14u, 0x30u);
    wr32(sp0 - 0x18u, arg2);
    g->eax = arg2;
    g->edx = arg1 + 0x10u;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, rd32(rd32(arg2) + 0x4cu), rd32(arg2), 3, arg2, 0x30u, arg1 + 0x10u);
    t7 = g->edx;
    wr32(sp0 - 0x10u, arg2);
    cow_thiscall(g, rd32(rd32(arg2) + 8u), rd32(arg2), 1, arg2);
    if ((int32_t)t6 >= 0) goto L_1026369f;
    edi = t6;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return edi;
L_10263602: ;
    wr32(arg1 + 0x10u, 0x30u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x18u, 0u);
    wr32(sp0 - 0x10u, arg2);
    g->eax = eax;
    g->edx = rd32(arg2);
    t8 = rd32(arg2);
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, rd32(t8 + 0x3cu), ecx, 1, arg2);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        ecx = t10;
        edx = t11;
    }
    else
    {
        ecx = t10;
        edx = t11;
        t12 = (rd32(arg1 + 0x18u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x18u) | 4u);
        wr32(arg1 + 0x18u, t12);
    }
    wr32(sp0 - 0x10u, arg2);
    g->eax = rd32(arg2);
    g->edx = edx;
    t13 = rd32(arg2);
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, rd32(t13 + 0x24u), ecx, 1, arg2);
    t15 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t15;
    }
    else
    {
        edx = t15;
        t16 = (rd32(arg1 + 0x18u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x18u) | 2u);
        wr32(arg1 + 0x18u, t16);
        eax = t16;
    }
    wr32(sp0 - 0x10u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, rd32(rd32(arg2) + 0x1cu), rd32(arg2), 1, arg2);
    if (t17 == 0u)
    {
        t18 = (rd32(arg1 + 0x18u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x18u) | 1u);
        wr32(arg1 + 0x18u, t18);
    }
    wr32(sp0 - 0x10u, arg1 + 0x28u);
    wr32(sp0 - 0x14u, arg1 + 0x20u);
    wr32(sp0 - 0x18u, arg2);
    g->eax = arg1 + 0x28u;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(rd32(arg2) + 0x14u), arg1 + 0x20u, 3, arg2, arg1 + 0x20u, arg1 + 0x28u);
    t20 = g->ecx;
    if ((int32_t)t19 < 0)
    {
        ecx = t20;
    }
    else
    {
        ecx = t20;
        wr32(arg1 + 0x18u, rd32(arg1 + 0x18u) | 0x110u);
    }
    wr32(sp0 - 0x10u, arg1 + 0x34u);
    wr32(sp0 - 0x14u, arg2);
    g->eax = arg1 + 0x34u;
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, rd32(rd32(arg2) + 0x34u), ecx, 2, arg2, arg1 + 0x34u);
    if (t21 != 0u)
    {
        eax = t21;
    }
    else
    {
        t22 = (rd32(arg1 + 0x18u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x18u) | 8u);
        wr32(arg1 + 0x18u, t22);
        eax = t22;
    }
    wr32(sp0 - 0x10u, arg1 + 0x38u);
    wr32(sp0 - 0x14u, arg2);
    g->edx = arg1 + 0x38u;
    t23 = rd32(arg2);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t23 + 0xcu), t23, 2, arg2, arg1 + 0x38u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x10u, arg2);
    g->eax = rd32(arg2);
    g->edx = t25;
    t26 = rd32(arg2);
    t27 = cow_thiscall(g, rd32(t26 + 0x2cu), t24, 1, arg2);
    t28 = g->edx;
    wr32(arg1 + 0x1cu, t27);
    wr32(sp0 - 0x10u, arg2);
    t29 = cow_thiscall(g, rd32(rd32(arg2) + 0x10u), rd32(arg2), 1, arg2);
    wr32(arg1 + 0x3cu, t29);
L_1026369f: ;
    if ((rd8(arg1 + 0x18u) & 8u) != 0u) goto L_102636ad;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return 0u;
L_102636ad: ;
    t30 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x10u, t30);
    g->eax = t30;
    g->edx = rd32(arg1 - 0x98u);
    t31 = rd32(arg1 - 0x98u);
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, rd32(t31 + 0x20u), arg1 - 0x98u, 1, t30);
    t33 = g->edx;
    if (t32 != 0u)
    {
        edx = t33;
        goto L_102636c3;
    }
    eax = t32;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_102636c3: ;
    wr32(sp0 - 0x10u, arg1 - 0x8cu);
    t34 = rd32(arg1 - 0x8cu);
    wr8(arg1 - 0x74u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t34 + 0x38u), t34, 1, arg1 - 0x8cu);
    t35 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x8004022au);
    wr32(sp0 - 0x18u, 3u);
    cow_thiscall(g, COW_IMG(0x10261a00u), rd32(arg1 - 0x70u), 3, 3u, 0x8004022au, 0u);
    eax = 0x80040200u;
L_102636ed: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263590(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
