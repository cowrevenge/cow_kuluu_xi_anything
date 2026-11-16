/* f_0x1029abf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1029abf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 0xcu) == 2u) goto L_1029ac18;
    eax = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc554u));
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc554u), eax);
    return;
L_1029ac18: ;
    wr32(sp0 - 0x20u, arg4);
    t1 = rd32(sp0 + 8u) + 0x50u;
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, sp0 + 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 0x10u, 4u, 1u, t1, arg4);
    t3 = g->edx;
    if ((int32_t)arg4 > 0)
    {
        eax = t2;
        goto L_1029ac54;
    }
    eax = t2;
    edx = t3;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc514u));
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc514u), arg4);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1029ac54: ;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->ecx = arg4;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 0xcu, 4u, 1u, eax, arg4);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)rd32(sp0 - 0xcu) > 0)
    {
        edx = t6;
        esi = t4;
        goto L_1029ac87;
    }
    eax = rd32(sp0 - 0xcu);
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc4dcu));
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc4dcu), eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1029ac87: ;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = arg1;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1029a350u), 3, arg1, arg4, rd32(sp0 - 0x1cu));
    t7 = g->ecx;
    wr32(sp0 + 0xcu, 0u);
    if ((int32_t)arg4 <= 0) goto L_1029ae04;
    ecx = t7;
L_1029acb3: ;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x1cu;
    t8 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 8u, 4u, 2u, esi, arg4);
    t9 = g->edx;
    if ((int32_t)rd32(sp0 - 8u) < 0)
    {
        eax = rd32(sp0 - 4u);
        ecx = rd32(sp0 - 8u);
        edx = t9;
        goto L_1029adf0;
    }
    eax = rd32(sp0 - 4u);
    ecx = rd32(sp0 - 8u);
    edx = t9;
    esi = t8;
    if ((int32_t)eax <= 0) goto L_1029adf0;
    wr32(sp0 - 0x20u, 0x5bu);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc4acu));
    wr32(sp0 - 0x28u, eax << 2u);
    wr32(sp0 - 0x2cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, eax << 2u, COW_IMG(0x103bc4acu), 0x5bu, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        goto L_1029adb2;
    }
    edx = t11;
    ebx = t10;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, esi);
    t12 = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, t12);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, ebx);
    g->ecx = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, ebx, 4u, t12, esi, arg4);
    t14 = g->ecx;
    wr32(sp0 - 0x34u, 0x69u);
    wr32(sp0 - 0x38u, COW_IMG(0x103bc4acu));
    t15 = rd32(sp0 - 4u) * 4u;
    wr32(sp0 - 0x3cu, t15);
    wr32(sp0 - 0x40u, 1u);
    g->ecx = t14;
    g->edx = rd32(sp0 - 4u);
    t16 = rd32(sp0 - 4u);
    t17 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t15, COW_IMG(0x103bc4acu), 0x69u, rd32(sp0 - 0x30u), 4u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), arg4);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        goto L_1029add1;
    }
    edx = t19;
    esi = t17;
    edi = t13;
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, edi);
    t20 = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, t20);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, esi);
    g->ecx = t20;
    g->esp = sp0 - 0x1cu;
    t21 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, esi, 4u, t20, edi, arg4);
    t22 = g->ecx;
    t23 = rd32(sp0 - 8u);
    wr32(sp0 + 8u, t21);
    wr32(sp0 - 0x34u, t23);
    wr32(sp0 - 0x38u, arg1);
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x30u;
    t24 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, arg1, t23);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 != 0u)
    {
        ecx = t25;
        edx = t26;
        edi = t24;
        g->esp = sp0 - 0x1cu;
        t27 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
        t28 = rd32(sp0 - 4u);
        wr32(t27 + 0x9cu, edi);
        wr32(sp0 - 0x20u, t27);
        wr32(sp0 - 0x24u, arg1);
        wr32(t27 + 0x50u, t28);
        wr32(t27 + 0x30u, ebx);
        wr32(t27 + 0x38u, esi);
        wr32(t27 + 0x3cu, 0u);
        wr32(t27 + 0x58u, edi + 0x24u);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x1029a3a0u), t27, g->ecx, g->edx, 1, 5, arg1, t27, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    }
    t29 = rd32(sp0 + 0xcu) + 1u;
    t30 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t29);
    if ((int32_t)(t30 + 1u) < (int32_t)arg4) goto L_1029acaf;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1029acaf: ;
    ecx = arg4;
    esi = rd32(sp0 + 8u);
    goto L_1029acb3;
L_1029adb2: ;
    t33 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t33);
    t34 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x24u, t34);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc478u));
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc478u), t34);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1029add1: ;
    t31 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t31);
    t32 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x24u, t32);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc440u));
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc440u), t32);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1029adf0: ;
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, ecx);
    t35 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x28u, t35);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bc414u));
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc414u), t35);
L_1029ae04: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029abf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029abf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
