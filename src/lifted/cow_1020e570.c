/* f_0x1020e570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020e570(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    t1 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    t2 = rd32(self + 0x64u);
    t3 = rd32(COW_IMG(0x104dfd98u));
    t4 = rd32(self + 0x54u);
    t5 = rd32(self + 0x60u);
    wr32(t2 + t4 * 8u, t1);
    g->eax = t2;
    g->edx = t1;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x23u);
    t7 = g->edx;
    t8 = t4 * 0x54u + t5;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x101f4b20u), t8, t7, 4, 0u, 1u, t6, 0x80808080u);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x24u);
    t13 = g->edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_fastcall(g, COW_IMG(0x101f4b20u), t8, t13, 4, 1u, 0x21u, t12, 0x80808080u);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = t2 + t4 * 8u;
    wr32(t8 + 0x48u, t17);
    g->edx = t16;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
    t19 = g->edx;
    wr32(t8 + 0x4cu, t18);
    t20 = (t18 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
    t21 = rd32(self + 0x60u);
    t22 = rd32(self + 0x54u) + 1u;
    wr32(self + 0x54u, t22);
    g->esi = self;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t21, t20, 1u);
    t23 = g->ecx;
    t24 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->ecx = t23;
    g->edx = rd32(COW_IMG(0x104dfd98u));
    t25 = rd32(COW_IMG(0x104dfd98u));
    t26 = cow_call_regs(g, COW_IMG(0x1020a680u), t24, g->ecx, g->edx, 1, 1, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((int32_t)t26 >= 0)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t29 = cow_cdecl(g, COW_IMG(0x1020e750u), 1, eax);
        if ((int32_t)t29 > 1)
        {
            t30 = rd32(self + 0x60u);
            t31 = rd32(self + 0x54u);
            t32 = rd32(self + 0x64u);
            wr32(t32 + t31 * 8u, 0xffffffffu);
            g->eax = t30;
            g->edx = t32;
            g->esp = sp0 - 0x10u;
            t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xbau);
            t34 = g->edx;
            t35 = t31 * 0x54u + t30;
            g->esp = sp0 - 0xcu;
            t36 = cow_fastcall(g, COW_IMG(0x101f4b20u), t35, t34, 4, 0u, 1u, t33, 0x80808080u);
            t37 = g->ecx;
            t38 = g->edx;
            g->edx = t38;
            g->esp = sp0 - 0x10u;
            t39 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xbbu);
            t40 = g->edx;
            g->esp = sp0 - 0xcu;
            t41 = cow_fastcall(g, COW_IMG(0x101f4b20u), t35, t40, 4, 1u, 0x21u, t39, 0x80808080u);
            t42 = g->ecx;
            t43 = g->edx;
            t44 = t31 * 8u + t32;
            wr32(t35 + 0x48u, t44);
            g->edx = t43;
            t45 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x62u);
            t46 = g->edx;
            wr32(t35 + 0x4cu, t45);
            t47 = (t45 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
            t48 = rd32(self + 0x60u);
            t49 = rd32(self + 0x54u) + 1u;
            wr32(self + 0x54u, t49);
            g->esi = self;
            cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t48, t47, 1u);
        }
    }
    t50 = rd32(self + 0x60u);
    t51 = rd32(self + 0x54u);
    t52 = rd32(self + 0x64u);
    wr32(t52 + t51 * 8u, 0u);
    g->eax = t50;
    g->edx = t52;
    g->esp = sp0 - 0x10u;
    t53 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x25u);
    t54 = g->edx;
    t55 = t51 * 0x54u + t50;
    g->esp = sp0 - 0xcu;
    t56 = cow_fastcall(g, COW_IMG(0x101f4b20u), t55, t54, 4, 0u, 1u, t53, 0x80808080u);
    t57 = g->ecx;
    t58 = g->edx;
    g->edx = t58;
    g->esp = sp0 - 0x10u;
    t59 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x26u);
    t60 = g->edx;
    g->esp = sp0 - 0xcu;
    t61 = cow_fastcall(g, COW_IMG(0x101f4b20u), t55, t60, 4, 1u, 0x21u, t59, 0x80808080u);
    t62 = g->ecx;
    t63 = g->edx;
    t64 = t51 * 8u + t52;
    wr32(t55 + 0x48u, t64);
    g->edx = t63;
    t65 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x15u);
    t66 = g->edx;
    wr32(t55 + 0x4cu, t65);
    t67 = (t65 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
    t68 = rd32(self + 0x60u);
    t69 = rd32(self + 0x54u) + 1u;
    wr32(self + 0x54u, t69);
    g->esi = self;
    g->eax = t67;
    t70 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t68, t67, 1u);
    g->esi = in_esi;
    return t70;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020e570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
