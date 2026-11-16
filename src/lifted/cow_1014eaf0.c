/* f_0x1014eaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014eaf0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x100ec470u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            edx = t3;
            g->edx = edx;
            t4 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t4, 2, 5u, 4u);
            t5 = g->ecx;
            t6 = g->edx;
            ecx = t5;
            edx = t6;
        }
        t7 = rd32(rd32(COW_IMG(0x10666e44u)));
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t7);
        t9 = g->edx;
        if ((uint8_t)t8 != 0u)
        {
            eax = t8;
            edx = t9;
        }
        else
        {
            eax = t8;
            edx = t9;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t10 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x104dfd98u));
        g->edx = edx;
        t12 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0 - 4u;
        t13 = cow_cdecl(g, COW_IMG(0x100f97a0u), 1, t12);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 != 0u)
        {
            ecx = t14;
        }
        else
        {
            eax = t13;
            edx = t15;
            t16 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t16, 2, 5u, 8u);
            t17 = g->ecx;
            ecx = t17;
        }
        t18 = rd32(rd32(COW_IMG(0x10666e50u)));
        g->eax = rd32(COW_IMG(0x10666e50u));
        g->ecx = ecx;
        g->edx = t18;
        t19 = rd32(COW_IMG(0x10666e50u));
        g->esp = sp0 - 4u;
        t20 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t18);
        t21 = g->ecx;
        t22 = g->edx;
        if ((uint8_t)t20 != 0u)
        {
            ecx = t21;
            edx = t22;
        }
        else
        {
            eax = t20;
            edx = t22;
            g->edx = edx;
            t23 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t23, 2, 5u, 9u);
            t24 = g->ecx;
            t25 = g->edx;
            ecx = t24;
            edx = t25;
        }
        t26 = rd32(rd32(COW_IMG(0x10666e54u)));
        g->eax = t26;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t27 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t26);
        t28 = g->edx;
        if ((uint8_t)t27 != 0u)
        {
            edx = t28;
        }
        else
        {
            eax = t27;
            edx = t28;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
            t29 = g->edx;
            edx = t29;
        }
        t30 = rd32(rd32(COW_IMG(0x10666e58u)));
        g->eax = rd32(COW_IMG(0x10666e58u));
        g->ecx = t30;
        g->edx = edx;
        t31 = rd32(COW_IMG(0x10666e58u));
        g->esp = sp0 - 4u;
        t32 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t30);
        t33 = g->ecx;
        t34 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            ecx = t33;
        }
        else
        {
            eax = t32;
            edx = t34;
            t35 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t35, 2, 5u, 0xbu);
            t36 = g->ecx;
            ecx = t36;
        }
        t37 = rd32(rd32(COW_IMG(0x10666e5cu)));
        g->eax = rd32(COW_IMG(0x10666e5cu));
        g->ecx = ecx;
        g->edx = t37;
        t38 = rd32(COW_IMG(0x10666e5cu));
        g->esp = sp0 - 4u;
        t39 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t37);
        t40 = g->ecx;
        t41 = g->edx;
        if ((uint8_t)t39 != 0u)
        {
            ecx = t40;
            edx = t41;
        }
        else
        {
            eax = t39;
            edx = t41;
            g->edx = edx;
            t42 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t42, 2, 5u, 0xcu);
            t43 = g->ecx;
            t44 = g->edx;
            ecx = t43;
            edx = t44;
        }
        t45 = rd32(rd32(COW_IMG(0x10666e60u)));
        g->eax = t45;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t46 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t45);
        t47 = g->edx;
        if ((uint8_t)t46 != 0u)
        {
            edx = t47;
        }
        else
        {
            eax = t46;
            edx = t47;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xdu);
            t48 = g->edx;
            edx = t48;
        }
        t49 = rd32(rd32(COW_IMG(0x10666e64u)));
        g->eax = rd32(COW_IMG(0x10666e64u));
        g->ecx = t49;
        g->edx = edx;
        t50 = rd32(COW_IMG(0x10666e64u));
        g->esp = sp0 - 4u;
        t51 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t49);
        t52 = g->ecx;
        t53 = g->edx;
        if ((uint8_t)t51 != 0u)
        {
            ecx = t52;
        }
        else
        {
            eax = t51;
            edx = t53;
            t54 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t54, 2, 5u, 0xeu);
            t55 = g->ecx;
            ecx = t55;
        }
        t56 = rd32(rd32(COW_IMG(0x10666e68u)));
        g->eax = rd32(COW_IMG(0x10666e68u));
        g->edx = t56;
        t57 = rd32(COW_IMG(0x10666e68u));
        g->esp = sp0 - 4u;
        t58 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t56);
        t59 = g->edx;
        if ((uint8_t)t58 != 0u)
        {
            eax = t58;
            edx = t59;
        }
        else
        {
            eax = t58;
            edx = t59;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t60 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xfu);
            t61 = g->edx;
            eax = t60;
            edx = t61;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014eaf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014eaf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
