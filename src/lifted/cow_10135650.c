/* f_0x10135650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10135650(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 0xcu);
    if ((uint8_t)t1 == 0u)
    {
        edx = t1;
        goto L_10135698;
    }
    eax = (uint8_t)t1;
    edx = t1;
    if (eax == 1u) goto L_1013567f;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101356b1;
    }
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, edx);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t2);
    wr32(sp0 + 8u, t3);
    if (rd32(rd32(COW_IMG(0x105781bcu)) + 0x1cu) != 1u)
    {
        edx = rd32(COW_IMG(0x105781bcu));
        goto L_10135620;
    }
    edx = rd32(COW_IMG(0x105781bcu));
    wr8(self + 4u, 1u);
    wr8(self + 5u, 0u);
    wr32(self + 8u, 0u);
    g->eax = 1u;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x105781bcu));
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x101316a0u), t4, 3, 0u, 0u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
L_10135603: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t14 = g->edx;
    edx = t14;
L_10135608: ;
    t15 = rd32(rd32(COW_IMG(0x105781bcu)) + 8u);
    g->eax = rd32(COW_IMG(0x105781bcu));
    t16 = rd32(COW_IMG(0x105781bcu));
    g->esp = sp0;
    t17 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t15, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10135520: ;
    if (rd16(sp0 + 4u) == 5u)
    {
        if (rd32(COW_IMG(0x105781a0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781a0u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781a0u));
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
            t38 = g->edx;
            g->eax = rd32(self);
            g->edx = t38;
            t39 = rd32(self);
            t40 = cow_thiscall(g, rd32(t39 + 0x54u), self, 0);
            t41 = g->edx;
            g->edx = t41;
            t42 = cow_thiscall(g, COW_IMG(0x10136360u), rd32(COW_IMG(0x105781a4u)), 1, t40);
            t43 = g->edx;
            eax = t42;
            edx = t43;
        }
    }
    g->edx = edx;
    return eax;
L_10135550: ;
    if (rd32(rd32(COW_IMG(0x105781bcu)) + 0x1cu) != 1u)
    {
        edx = rd32(COW_IMG(0x105781bcu));
        goto L_101355a0;
    }
    edx = rd32(COW_IMG(0x105781bcu));
    wr8(self + 4u, 1u);
    wr8(self + 5u, 0xfeu);
    wr32(self + 8u, 0u);
    g->eax = 1u;
    g->edx = edx;
    t21 = rd32(COW_IMG(0x105781bcu));
    g->esp = sp0;
    t22 = cow_thiscall(g, COW_IMG(0x101316a0u), t21, 3, 0u, 0u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
L_10135583: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t31 = g->edx;
    edx = t31;
L_10135588: ;
    t32 = rd32(rd32(COW_IMG(0x105781bcu)) + 8u);
    g->eax = rd32(COW_IMG(0x105781bcu));
    t33 = rd32(COW_IMG(0x105781bcu));
    g->esp = sp0;
    t34 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t32, 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_101355a0: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10134f00u), 2, 0xffffu, 2u);
    t25 = g->edx;
    g->edx = t25;
    t26 = rd32(COW_IMG(0x105781bcu));
    t27 = cow_thiscall(g, COW_IMG(0x10135f00u), t26, 2, 0u, 2u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_10135583;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t30 = g->edx;
    edx = t30;
    goto L_10135588;
L_10135620: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10134f00u), 2, 0xffffu, 2u);
    t8 = g->edx;
    g->edx = t8;
    t9 = rd32(COW_IMG(0x105781bcu));
    t10 = cow_thiscall(g, COW_IMG(0x10135f00u), t9, 2, 0u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_10135603;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t13 = g->edx;
    edx = t13;
    goto L_10135608;
L_1013567f: ;
    t19 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, edx);
    t20 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t19);
    wr32(sp0 + 8u, t20);
    goto L_10135550;
L_10135698: ;
    t36 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, edx);
    t37 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t36);
    wr32(sp0 + 8u, t37);
    eax = t36;
    edx = t37;
    goto L_10135520;
L_101356b1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135650(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
