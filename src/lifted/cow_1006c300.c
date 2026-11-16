/* f_0x1006c300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_1006c300(Guest* g)
{
    double d10;
    double d14;
    double d2;
    double d49;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, self);
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(sp0 + 4u);
    d2 = (double)rdf32(rd32(sp0 + 4u));
    fpush(g, d2);
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    d6 = (double)rdf32(t1 + 4u);
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    d10 = (double)rdf32(t1 + 8u);
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    d14 = (double)rdf32(t1 + 0xcu);
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    if ((int32_t)t3 <= (int32_t)t11)
    {
        edx = t16;
        ebx = t3;
        ebp = t7;
        esi = t11;
        edi = t15;
    }
    else
    {
        edx = t16;
        ebx = t3;
        ebp = t7;
        esi = t11;
        edi = t15;
        t17 = ebx;
        ebx = esi;
        esi = t17;
    }
    if ((int32_t)ebp > (int32_t)edi)
    {
        t18 = ebp;
        ebp = edi;
        edi = t18;
    }
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0xcu, ebp);
    wr32(sp0 - 8u, esi);
    wr32(sp0 - 4u, edi);
    if ((int32_t)ebx >= -256)
    {
        eax = ebp;
        loc_10 = ebx;
        loc_c = ebp;
        loc_8 = esi;
        loc_4 = edi;
    }
    else
    {
        eax = ebp;
        loc_c = ebp;
        loc_8 = esi;
        loc_4 = edi;
        wr32(sp0 - 0x10u, 0xffffff00u);
        loc_10 = 0xffffff00u;
    }
    if ((int32_t)eax < -256)
    {
        wr32(sp0 - 0xcu, 0xffffff00u);
        loc_c = 0xffffff00u;
    }
    g->edx = edx;
    t19 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x28u;
    t20 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t19 + 0xdc8u), 0);
    t21 = g->edx;
    if ((int32_t)rd32(sp0 - 8u) < (int32_t)(rd32(t20 + 8u) + 0x100u))
    {
        edx = t21;
    }
    else
    {
        edx = t21;
        g->edx = edx;
        t22 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x28u;
        t23 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t22 + 0xdc8u), 0);
        t24 = g->edx;
        t25 = rd32(t23 + 8u) + 0x100u;
        wr32(sp0 - 8u, t25);
        edx = t24;
        loc_8 = t25;
    }
    g->edx = edx;
    t26 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x28u;
    t27 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t26 + 0xdc8u), 0);
    t28 = g->edx;
    if ((int32_t)rd32(sp0 - 4u) < (int32_t)(rd32(t27 + 0xcu) + 0x100u))
    {
        edx = t28;
    }
    else
    {
        edx = t28;
        g->edx = edx;
        t29 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x28u;
        t30 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t29 + 0xdc8u), 0);
        t31 = g->edx;
        t32 = rd32(t30 + 0xcu) + 0x100u;
        wr32(sp0 - 4u, t32);
        edx = t31;
        loc_4 = t32;
    }
    if ((int32_t)ebx < 0)
    {
        ebx = 0u;
    }
    if ((int32_t)ebp < 0)
    {
        ebp = 0u;
    }
    g->edx = edx;
    t33 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x28u;
    t34 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t33 + 0xdc8u), 0);
    t35 = g->edx;
    if ((int32_t)esi < (int32_t)rd32(t34 + 8u))
    {
        edx = t35;
    }
    else
    {
        edx = t35;
        g->edx = edx;
        t36 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x28u;
        t37 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t36 + 0xdc8u), 0);
        t38 = g->edx;
        edx = t38;
        esi = rd32(t37 + 8u);
    }
    g->edx = edx;
    t39 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x28u;
    t40 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t39 + 0xdc8u), 0);
    t41 = g->edx;
    if ((int32_t)edi < (int32_t)rd32(t40 + 0xcu))
    {
        edx = t41;
    }
    else
    {
        edx = t41;
        g->edx = edx;
        t42 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x28u;
        t43 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t42 + 0xdc8u), 0);
        t44 = g->edx;
        edx = t44;
        edi = rd32(t43 + 0xcu);
    }
    if ((int32_t)(esi - ebx) <= 0) goto L_1006c51a;
    esi = esi - ebx;
    edi = edi - ebp;
    if ((int32_t)edi <= 0) goto L_1006c51a;
    t45 = cow_divs(g, esi << 4u, rd32(sp0 - 8u) - rd32(sp0 - 0x10u));
    t46 = cow_mods(g, esi << 4u, rd32(sp0 - 8u) - rd32(sp0 - 0x10u));
    wr32(sp0 - 0x18u, t45);
    t47 = cow_divs(g, edi << 4u, rd32(sp0 - 4u) - rd32(sp0 - 0xcu));
    t48 = cow_mods(g, edi << 4u, rd32(sp0 - 4u) - rd32(sp0 - 0xcu));
    wr32(sp0 + 4u, t47);
    if ((uint8_t)arg8 != 0u)
    {
        loc_18 = t45;
    }
    else
    {
        loc_18 = t45;
        wr32(sp0 + 8u, 0x3f7ffffeu);
    }
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg6);
    wr32(sp0 - 0x34u, arg5);
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    d49 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x40u, (float)d49);
    wrf32(sp0 - 0x44u, (float)(double)(float)(double)(int32_t)loc_18);
    t50 = rd32(sp0 + 8u);
    wr32(sp0 - 0x48u, t50);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    t51 = rd32(sp0 - 0x14u);
    g->ebx = ebx;
    g->edx = arg3;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, COW_IMG(0x1006c530u), 9, sp0 - 0x10u, t50, cow_f2bits((double)(float)(double)(int32_t)loc_18), cow_f2bits(d49), arg3, arg4, arg5, arg6, 0u);
    t52 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    t53 = cow_thiscall(g, COW_IMG(0x1006c8b0u), t51, 1, 0u);
    t54 = g->ecx;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 7u);
    t55 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x34u, t55);
    g->edx = rd32(t55);
    t56 = rd32(t55);
    cow_thiscall(g, rd32(t56 + 0xc8u), t54, 3, t55, 7u, 1u);
    t57 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0xeu);
    t58 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x34u, t58);
    g->edx = t57;
    cow_thiscall(g, rd32(rd32(t58) + 0xc8u), rd32(t58), 3, t58, 0xeu, 1u);
    t59 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t59;
    return t53;
L_1006c51a: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006c300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006c300(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
