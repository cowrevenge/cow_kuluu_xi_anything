/* f_0x10140270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10140270(Guest* g)
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
        goto L_1014035e;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_101402db;
    }
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t6;
        goto L_101402db;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t9;
        goto L_101402a3;
    }
    ecx = t8;
    edx = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t11;
        goto L_101402db;
    }
    edx = t11;
L_101402a3: ;
    g->edx = edx;
    t12 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10118bc0u), t12, 1, 0xcu);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 5u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = t13;
        edx = t15;
        g->eax = eax;
        g->edx = edx;
        t16 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x10118b60u), t16, 2, 5u, 0xcu);
        t18 = g->ecx;
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2au);
        t21 = g->edx;
        g->edx = t21;
        t22 = rd32(self + 8u);
        t23 = cow_thiscall(g, COW_IMG(0x1011adb0u), t22, 2, 0xcu, t20);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    wr8(self + 0x25u, 0u);
L_10140311: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, ecx, g->edx, 1, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        ecx = t41;
        edx = t42;
    }
    else
    {
        eax = t40;
        edx = t42;
        g->edx = edx;
        t43 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t43, 2, 5u, 6u);
        t44 = g->ecx;
        t45 = g->edx;
        ecx = t44;
        edx = t45;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t46 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t47 = g->edx;
    if ((uint8_t)t46 != 0u)
    {
        eax = t46;
        edx = t47;
        goto L_1014035e;
    }
    eax = t46;
    edx = t47;
    if (rd32(COW_IMG(0x106634acu)) == 0u) goto L_10140352;
    ecx = rd32(COW_IMG(0x106634acu));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t48 = cow_thiscall(g, COW_IMG(0x101e15c0u), ecx, 0);
    t49 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        eax = t48;
        edx = t49;
        goto L_10140352;
    }
    eax = t48;
    edx = t49;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t50 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
    t51 = g->edx;
    g->edx = t51;
    return t50;
L_101402db: ;
    g->edx = edx;
    t26 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x10118bc0u), t26, 1, 0xcu);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 5u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = t27;
        edx = t29;
        g->eax = eax;
        g->edx = edx;
        t30 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t31 = cow_thiscall(g, COW_IMG(0x10118b60u), t30, 2, 0xbu, 0xcu);
        t32 = g->ecx;
        t33 = g->edx;
        g->edx = t33;
        t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29u);
        t35 = g->edx;
        g->edx = t35;
        t36 = rd32(self + 8u);
        t37 = cow_thiscall(g, COW_IMG(0x1011adb0u), t36, 2, 0xcu, t34);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    wr8(self + 0x25u, 1u);
    goto L_10140311;
L_10140352: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t52 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xau);
    t53 = g->edx;
    eax = t52;
    edx = t53;
L_1014035e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140270(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
