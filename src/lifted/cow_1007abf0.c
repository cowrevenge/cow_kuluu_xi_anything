/* f_0x1007abf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007abf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1007ac0b;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x101cc1b0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t6;
        goto L_1007ad30;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
L_1007ac0b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_1007ad30;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t12;
        goto L_1007ad30;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->ecx = ecx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x75u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t15;
        goto L_1007ad30;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_stdcall(g, COW_IMG(0x10177730u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        edx = t18;
        goto L_1007ad23;
    }
    ecx = t17;
    edx = t18;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1007ad23;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    t19 = rd32(eax + 0x3c350u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_call_regs(g, COW_IMG(0x101cc320u), t19, g->ecx, g->edx, 1, 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        edx = t22;
        goto L_1007ad23;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t23 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_1007ac86;
    }
    edx = t25;
    g->edx = edx;
    return -arg3;
L_1007ac86: ;
    if (rd8(COW_IMG(0x10487e49u)) != 0u) goto L_1007ad30;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e49u));
    g->edx = edx;
    g->esp = sp0;
    t26 = cow_call_regs(g, COW_IMG(0x1009fb50u), eax, g->ecx, g->edx, 1, 0);
    t27 = g->edx;
    if (t26 != 0u)
    {
        edx = t27;
        goto L_1007ad30;
    }
    eax = t26;
    edx = t27;
    wr8(COW_IMG(0x10485a70u), (uint8_t)eax);
    wr8(COW_IMG(0x10487e49u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t28 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t29 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        eax = t28;
        t30 = rd32(eax + 0x34u);
        t31 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        wr32(t31 + 4u, t30);
        t32 = rd32(eax + 0x38u);
        wr32(t31 + 8u, t32);
        t33 = rd32(eax + 0x3cu);
        wr32(t31 + 0xcu, t33);
        t34 = rd32(eax + 0x44u);
        t35 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        wr32(t35 + 0x14u, t34);
        t36 = rd32(eax + 0x48u);
        wr32(t35 + 0x18u, t36);
        t37 = rd32(eax + 0x4cu);
        wr32(t35 + 0x1cu, t37);
        g->eax = t37;
        g->edx = t36;
        g->esp = sp0;
        t38 = cow_thiscall(g, COW_IMG(0x10092c20u), rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u), 0);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
    g->edx = edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x101590a0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    t40 = g->edx;
    g->edx = t40;
    return arg3;
L_1007ad23: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 7u);
    t41 = g->edx;
    edx = t41;
L_1007ad30: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007abf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007abf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
