/* f_0x10145ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10145ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

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
        edx = t3;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 4u;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 5u;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    t6 = rd32(rd32(COW_IMG(0x10666e44u)));
    g->eax = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        ecx = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 5u;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 6u;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
    }
    else
    {
        eax = rd32(self + 0x14u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
        t13 = g->edx;
        if ((uint8_t)t12 != 0u)
        {
            eax = t12;
            edx = t13;
        }
        else
        {
            eax = t12;
            edx = t13;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
    }
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = edx;
    t16 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x100f97a0u), 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        ecx = t18;
    }
    else
    {
        edx = t19;
        t20 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t20, 2, 5u, 2u);
        t21 = g->ecx;
        ecx = t21;
    }
    t22 = rd32(rd32(COW_IMG(0x10666e50u)));
    g->eax = rd32(COW_IMG(0x10666e50u));
    g->ecx = ecx;
    g->edx = t22;
    t23 = rd32(COW_IMG(0x10666e50u));
    g->esp = sp0 - 4u;
    t24 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t22);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        ecx = t25;
        edx = t26;
    }
    else
    {
        edx = t26;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 8u;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 9u;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
    }
    t29 = rd32(rd32(COW_IMG(0x10666e54u)));
    g->eax = t29;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t30 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t29);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        edx = t31;
    }
    else
    {
        edx = t31;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 9u;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xau;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t32 = g->edx;
        edx = t32;
    }
    t33 = rd32(rd32(COW_IMG(0x10666e58u)));
    g->eax = rd32(COW_IMG(0x10666e58u));
    g->ecx = t33;
    g->edx = edx;
    t34 = rd32(COW_IMG(0x10666e58u));
    g->esp = sp0 - 4u;
    t35 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t33);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        ecx = t36;
    }
    else
    {
        edx = t37;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xau;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xbu;
        }
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t38 = g->ecx;
        ecx = t38;
    }
    t39 = rd32(rd32(COW_IMG(0x10666e5cu)));
    g->eax = rd32(COW_IMG(0x10666e5cu));
    g->ecx = ecx;
    g->edx = t39;
    t40 = rd32(COW_IMG(0x10666e5cu));
    g->esp = sp0 - 4u;
    t41 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t39);
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        ecx = t42;
        edx = t43;
    }
    else
    {
        edx = t43;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xbu;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xcu;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t44 = g->ecx;
        t45 = g->edx;
        ecx = t44;
        edx = t45;
    }
    t46 = rd32(rd32(COW_IMG(0x10666e60u)));
    g->eax = t46;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t46);
    t48 = g->edx;
    if ((uint8_t)t47 != 0u)
    {
        edx = t48;
    }
    else
    {
        edx = t48;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xcu;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xdu;
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
        t49 = g->edx;
        edx = t49;
    }
    t50 = rd32(rd32(COW_IMG(0x10666e64u)));
    g->eax = rd32(COW_IMG(0x10666e64u));
    g->ecx = t50;
    g->edx = edx;
    t51 = rd32(COW_IMG(0x10666e64u));
    g->esp = sp0 - 4u;
    t52 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t50);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        ecx = t53;
    }
    else
    {
        edx = t54;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xdu;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = rd32(self + 8u);
            loc_8 = 0xeu;
        }
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_8);
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
        goto L_10145e60;
    }
    edx = t59;
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        ecx = rd32(self + 8u);
        goto L_10145e57;
    }
    eax = rd32(self + 0x14u);
    ecx = rd32(self + 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, 0xfu);
    t61 = g->edx;
    g->edx = t61;
    return t60;
L_10145e57: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t62 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, 0xeu);
    t63 = g->edx;
    eax = t62;
    edx = t63;
L_10145e60: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145ca0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
