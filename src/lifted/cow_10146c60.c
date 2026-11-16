/* f_0x10146c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10146c60(Guest* g)
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10334928u));
    if (rd32(COW_IMG(0x105783e0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105783e0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x105783e0u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x105783e8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783e8u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x105783e8u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x105783ecu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783ecu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x105783ecu), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x105783f0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783f0u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x105783f0u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x105783f4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783f4u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x105783f4u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x105783f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783f8u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 8u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x105783f8u), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x105783fcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783fcu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x105783fcu), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x10578400u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578400u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 8u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x10578400u), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x10578404u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578404u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 8u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x10578404u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x10578408u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578408u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 8u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x10578408u), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x1057840cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057840cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 8u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x1057840cu), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x10578410u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578410u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 8u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x10578410u), 0u);
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x10578414u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578414u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 8u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x10578414u), 0u);
        eax = t38;
        edx = t39;
    }
    if (rd32(COW_IMG(0x10578418u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578418u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 8u;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x10578418u), 0u);
        eax = t41;
        edx = t42;
    }
    if (rd32(COW_IMG(0x1057841cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057841cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 8u;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x1057841cu), 0u);
        eax = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x10578420u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578420u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 8u;
        t47 = cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t48 = g->edx;
        wr32(COW_IMG(0x10578420u), 0u);
        eax = t47;
        edx = t48;
    }
    if (rd32(COW_IMG(0x10578424u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578424u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t49 = rd32(ecx);
        g->esp = sp0 - 8u;
        t50 = cow_thiscall(g, rd32(t49), ecx, 1, 1u);
        t51 = g->edx;
        wr32(COW_IMG(0x10578424u), 0u);
        eax = t50;
        edx = t51;
    }
    if (rd32(COW_IMG(0x10578428u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578428u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t52 = rd32(ecx);
        g->esp = sp0 - 8u;
        t53 = cow_thiscall(g, rd32(t52 + 0x18u), ecx, 1, 1u);
        t54 = g->edx;
        wr32(COW_IMG(0x10578428u), 0u);
        eax = t53;
        edx = t54;
    }
    if (rd32(COW_IMG(0x1057842cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057842cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t55 = rd32(ecx);
        g->esp = sp0 - 8u;
        t56 = cow_thiscall(g, rd32(t55), ecx, 1, 1u);
        t57 = g->edx;
        wr32(COW_IMG(0x1057842cu), 0u);
        eax = t56;
        edx = t57;
    }
    if (rd32(COW_IMG(0x10621900u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10621900u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t58 = rd32(ecx);
        g->esp = sp0 - 8u;
        t59 = cow_thiscall(g, rd32(t58 + 0x18u), ecx, 1, 1u);
        t60 = g->edx;
        wr32(COW_IMG(0x10621900u), 0u);
        eax = t59;
        edx = t60;
    }
    if (rd32(COW_IMG(0x10578430u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578430u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t61 = rd32(ecx);
        g->esp = sp0 - 8u;
        t62 = cow_thiscall(g, rd32(t61), ecx, 1, 1u);
        t63 = g->edx;
        wr32(COW_IMG(0x10578430u), 0u);
        eax = t62;
        edx = t63;
    }
    if (rd32(COW_IMG(0x10578438u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578438u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t64 = rd32(ecx);
        g->esp = sp0 - 8u;
        t65 = cow_thiscall(g, rd32(t64), ecx, 1, 1u);
        t66 = g->edx;
        wr32(COW_IMG(0x10578438u), 0u);
        eax = t65;
        edx = t66;
    }
    if (rd32(COW_IMG(0x1057843cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057843cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t67 = rd32(ecx);
        g->esp = sp0 - 8u;
        t68 = cow_thiscall(g, rd32(t67), ecx, 1, 1u);
        t69 = g->edx;
        wr32(COW_IMG(0x1057843cu), 0u);
        eax = t68;
        edx = t69;
    }
    if (rd32(COW_IMG(0x10578440u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578440u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t70 = rd32(ecx);
        g->esp = sp0 - 8u;
        t71 = cow_thiscall(g, rd32(t70), ecx, 1, 1u);
        t72 = g->edx;
        wr32(COW_IMG(0x10578440u), 0u);
        eax = t71;
        edx = t72;
    }
    if (rd32(COW_IMG(0x10578444u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578444u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t73 = rd32(ecx);
        g->esp = sp0 - 8u;
        t74 = cow_thiscall(g, rd32(t73), ecx, 1, 1u);
        t75 = g->edx;
        wr32(COW_IMG(0x10578444u), 0u);
        eax = t74;
        edx = t75;
    }
    if (rd32(COW_IMG(0x10578448u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578448u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t76 = rd32(ecx);
        g->esp = sp0 - 8u;
        t77 = cow_thiscall(g, rd32(t76 + 0x18u), ecx, 1, 1u);
        t78 = g->edx;
        wr32(COW_IMG(0x10578448u), 0u);
        eax = t77;
        edx = t78;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10146c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10146c60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
