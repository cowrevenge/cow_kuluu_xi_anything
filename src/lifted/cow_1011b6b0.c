/* f_0x1011b6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011b6b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    wr32(self, t1);
    t3 = rd32(t2) + 0x20u;
    wr32(t2, t3);
    if (rd8(rd32(self) + 0x1bu) == 0u)
    {
        eax = (rd32(self) & 0xffffff00u) | rd8(rd32(self) + 0x1bu);
        esi = t2;
        loc_4 = t1;
        goto L_1011b858;
    }
    eax = (rd32(self) & 0xffffff00u) | rd8(rd32(self) + 0x1bu);
    edx = t3;
    esi = t2;
    loc_4 = t1;
    t4 = (uint8_t)eax * 0x1cu;
    g->ecx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t4, in_edi, in_esi);
    t6 = g->ecx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_1011b8e9;
    }
    ecx = t6;
    ebp = (uint8_t)eax;
    eax = t5;
    if ((int32_t)(ebp - 1u) >= 0)
    {
        edx = ebp - 1u;
        ecx = eax + 0x18u;
        edx = edx + 1u;
L_1011b70e: ;
        wr32(ecx - 0x14u, 0u);
        wr32(ecx - 0x10u, 0u);
        wr32(ecx - 0xcu, 0u);
        wr32(ecx - 8u, 0u);
        wr32(ecx - 4u, 0u);
        wr32(ecx, 0u);
        if (edx != 1u)
        {
            ecx = ecx + 0x1cu;
            edx = edx - 1u;
            goto L_1011b70e;
        }
        ecx = ecx + 0x1cu;
    }
    t7 = rd32(self);
    wr32(sp0 + 4u, eax);
    if (rd8(t7 + 0x1bu) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(t7 + 0x1bu);
        edx = t7;
        ebx = 0u;
        ebp = eax + 4u;
L_1011b741: ;
        g->eax = ebp - 4u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x1011b5f0u), 7, ebp - 4u, esi, 2u, in_edi, in_esi, in_ebp, in_ebx);
        t9 = g->edx;
        g->ecx = ebp - 2u;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1011b5f0u), 7, ebp - 2u, esi, 2u, ebp - 4u, esi, 2u, in_edi);
        t10 = g->ecx;
        g->ecx = t10;
        g->edx = rd32(esi);
        t11 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t12 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t11, COW_IMG(0x1036c1e4u), 0xeu, ebp - 2u, esi);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 != 0u)
        {
            edx = t14;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            g->ebx = ebx;
            g->esp = sp0 - 0x14u;
            t15 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, eax);
            t16 = rd32(esi);
            wr32(t16, rd32(t15));
            t17 = rd32(t15 + 4u);
            wr32(t16 + 4u, t17);
            t18 = rd32(t15 + 8u);
            wr32(t16 + 8u, t18);
            t19 = rd32(t15 + 0xcu);
            wr32(t16 + 0xcu, t19);
            edx = t18;
        }
        g->ecx = rd32(esi);
        g->edx = edx;
        t20 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t21 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t20, COW_IMG(0x1036c1d4u), 0xeu, in_edi, in_esi);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 != 0u)
        {
            edx = t23;
        }
        else
        {
            ecx = t22;
            edx = t23;
            g->ebx = ebx;
            g->esp = sp0 - 0x14u;
            t24 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 1u);
            t25 = rd32(esi);
            wr32(t25, rd32(t24));
            t26 = rd32(t24 + 4u);
            wr32(t25 + 4u, t26);
            t27 = rd32(t24 + 8u);
            wr32(t25 + 8u, t27);
            t28 = rd32(t24 + 0xcu);
            wr32(t25 + 0xcu, t28);
            edx = t25;
        }
        g->ecx = rd32(esi);
        g->edx = edx;
        t29 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t30 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t29, COW_IMG(0x1036c1c4u), 0xfu, in_edi, in_esi);
        t31 = g->ecx;
        t32 = g->edx;
        if (t30 != 0u)
        {
            edx = t32;
        }
        else
        {
            ecx = t31;
            edx = t32;
            g->ebx = ebx;
            g->esp = sp0 - 0x14u;
            t33 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 5u);
            t34 = rd32(esi);
            wr32(t34, rd32(t33));
            t35 = rd32(t33 + 4u);
            wr32(t34 + 4u, t35);
            t36 = rd32(t33 + 8u);
            wr32(t34 + 8u, t36);
            t37 = rd32(t33 + 0xcu);
            wr32(t34 + 0xcu, t37);
            edx = t34;
        }
        g->ecx = rd32(esi);
        g->edx = edx;
        t38 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t39 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t38, COW_IMG(0x1036c1b0u), 0x10u, in_edi, in_esi);
        t40 = g->ecx;
        t41 = g->edx;
        if (t39 != 0u)
        {
            eax = t39;
            ecx = t40;
            edx = t41;
        }
        else
        {
            t42 = rd32(esi);
            wr32(t42, rd32(COW_IMG(0x1036c19cu)));
            wr32(t42 + 4u, rd32(COW_IMG(0x1036c1a0u)));
            t43 = rd32(COW_IMG(0x1036c1a4u));
            wr32(t42 + 8u, t43);
            t44 = rd32(COW_IMG(0x1036c1a8u));
            wr32(t42 + 0xcu, t44);
            eax = t43;
            ecx = t44;
            edx = t42;
        }
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1011b5f0u), 7, ebp, esi, 0x10u, in_edi, in_esi, in_ebp, in_ebx);
        t45 = g->ecx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(rd32(self) + 0x1bu))
        {
            ecx = t45;
            edx = rd32(self);
            ebx = ebx + 1u;
            ebp = ebp + 0x1cu;
            goto L_1011b741;
        }
        eax = rd8(rd32(self) + 0x1bu);
    }
L_1011b858: ;
    t46 = rd32(sp0 + 4u);
    t47 = rd32(self);
    wr32(self + 4u, t46);
    wr32(self + 0x10u, 0u);
    wr32(self + 8u, 0u);
    if (rd8(t47 + 0x1du) != 0u)
    {
        ecx = t46;
        edx = t47;
        g->eax = rd32(esi);
        g->edx = edx;
        t48 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t49 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t48);
        t50 = g->ecx;
        t51 = g->edx;
        if ((int32_t)t49 >= 0)
        {
            eax = t49;
            ecx = t50;
            edx = t51;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, eax);
            wr32(self + 8u, t52);
        }
    }
    t53 = rd32(esi) + rd8(rd32(self) + 0x1du) + 1u;
    t54 = rd32(self);
    t55 = rd8(rd32(self) + 0x1du);
    wr32(esi, t53);
    t56 = rd32(self);
    wr32(self + 0xcu, 0u);
    if (rd8(t56 + 0x1eu) != 0u)
    {
        eax = t56;
        edx = t55 + 1u;
        g->eax = eax;
        g->edx = edx;
        t57 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t58 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t57, 1, t57);
        t59 = g->ecx;
        t60 = g->edx;
        if ((int32_t)t58 >= 0)
        {
            eax = t58;
            ecx = t59;
            edx = t60;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t61 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, eax);
            wr32(self + 0xcu, t61);
        }
    }
    t62 = rd32(esi) + rd8(rd32(self) + 0x1eu) + 1u;
    wr32(esi, t62);
    t63 = loc_4 + (uint32_t)(int16_t)rd16(rd32(self));
    wr32(esi, t63);
    g->ebx = in_ebx;
    return (loc_4 & 0xffffff00u) | 1u;
L_1011b8e9: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011b6b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
