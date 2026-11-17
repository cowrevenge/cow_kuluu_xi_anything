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
    uint32_t t64;
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
    g->eax = (uint8_t)eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, edx, 1, 3, t4, in_edi, in_esi);
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
        t10 = cow_cdecl(g, COW_IMG(0x1011b5f0u), 7, ebp - 2u, esi, 2u, ebp - 4u, esi, 2u, in_edi);
        t11 = g->ecx;
        g->ecx = t11;
        g->edx = rd32(esi);
        t12 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t13 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t12, COW_IMG(0x1036c1e4u), 0xeu, ebp - 2u, esi);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 != 0u)
        {
            eax = t13;
            edx = t15;
        }
        else
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t16 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, eax);
            t17 = rd32(esi);
            wr32(t17, rd32(t16));
            t18 = rd32(t16 + 4u);
            wr32(t17 + 4u, t18);
            t19 = rd32(t16 + 8u);
            wr32(t17 + 8u, t19);
            t20 = rd32(t16 + 0xcu);
            wr32(t17 + 0xcu, t20);
            eax = t20;
            edx = t19;
        }
        g->eax = eax;
        g->ecx = rd32(esi);
        g->edx = edx;
        t21 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t22 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t21, COW_IMG(0x1036c1d4u), 0xeu, in_edi, in_esi);
        t23 = g->ecx;
        t24 = g->edx;
        if (t22 != 0u)
        {
            eax = t22;
            edx = t24;
        }
        else
        {
            eax = t22;
            ecx = t23;
            edx = t24;
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t25 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 1u);
            t26 = rd32(esi);
            wr32(t26, rd32(t25));
            t27 = rd32(t25 + 4u);
            wr32(t26 + 4u, t27);
            t28 = rd32(t25 + 8u);
            wr32(t26 + 8u, t28);
            t29 = rd32(t25 + 0xcu);
            wr32(t26 + 0xcu, t29);
            eax = t29;
            edx = t26;
        }
        g->eax = eax;
        g->ecx = rd32(esi);
        g->edx = edx;
        t30 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t31 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t30, COW_IMG(0x1036c1c4u), 0xfu, in_edi, in_esi);
        t32 = g->ecx;
        t33 = g->edx;
        if (t31 != 0u)
        {
            eax = t31;
            edx = t33;
        }
        else
        {
            eax = t31;
            ecx = t32;
            edx = t33;
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t34 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 5u);
            t35 = rd32(esi);
            wr32(t35, rd32(t34));
            t36 = rd32(t34 + 4u);
            wr32(t35 + 4u, t36);
            t37 = rd32(t34 + 8u);
            wr32(t35 + 8u, t37);
            t38 = rd32(t34 + 0xcu);
            wr32(t35 + 0xcu, t38);
            eax = t38;
            edx = t35;
        }
        g->eax = eax;
        g->ecx = rd32(esi);
        g->edx = edx;
        t39 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t40 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t39, COW_IMG(0x1036c1b0u), 0x10u, in_edi, in_esi);
        t41 = g->ecx;
        t42 = g->edx;
        if (t40 != 0u)
        {
            eax = t40;
            ecx = t41;
            edx = t42;
        }
        else
        {
            t43 = rd32(esi);
            wr32(t43, rd32(COW_IMG(0x1036c19cu)));
            wr32(t43 + 4u, rd32(COW_IMG(0x1036c1a0u)));
            t44 = rd32(COW_IMG(0x1036c1a4u));
            wr32(t43 + 8u, t44);
            t45 = rd32(COW_IMG(0x1036c1a8u));
            wr32(t43 + 0xcu, t45);
            eax = t44;
            ecx = t45;
            edx = t43;
        }
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1011b5f0u), 7, ebp, esi, 0x10u, in_edi, in_esi, in_ebp, in_ebx);
        t46 = g->ecx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(rd32(self) + 0x1bu))
        {
            ecx = t46;
            edx = rd32(self);
            ebx = ebx + 1u;
            ebp = ebp + 0x1cu;
            goto L_1011b741;
        }
        eax = rd8(rd32(self) + 0x1bu);
    }
L_1011b858: ;
    t47 = rd32(sp0 + 4u);
    t48 = rd32(self);
    wr32(self + 4u, t47);
    wr32(self + 0x10u, 0u);
    wr32(self + 8u, 0u);
    if (rd8(t48 + 0x1du) != 0u)
    {
        ecx = t47;
        edx = t48;
        g->eax = rd32(esi);
        g->edx = edx;
        t49 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t50 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t49);
        t51 = g->ecx;
        t52 = g->edx;
        if ((int32_t)t50 >= 0)
        {
            eax = t50;
            ecx = t51;
            edx = t52;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t53 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, eax);
            wr32(self + 8u, t53);
        }
    }
    t54 = rd32(esi) + rd8(rd32(self) + 0x1du) + 1u;
    t55 = rd32(self);
    t56 = rd8(rd32(self) + 0x1du);
    wr32(esi, t54);
    t57 = rd32(self);
    wr32(self + 0xcu, 0u);
    if (rd8(t57 + 0x1eu) != 0u)
    {
        eax = t57;
        edx = t56 + 1u;
        g->eax = eax;
        g->edx = edx;
        t58 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t59 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t58, 1, t58);
        t60 = g->ecx;
        t61 = g->edx;
        if ((int32_t)t59 >= 0)
        {
            eax = t59;
            ecx = t60;
            edx = t61;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t62 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, eax);
            wr32(self + 0xcu, t62);
        }
    }
    t63 = rd32(esi) + rd8(rd32(self) + 0x1eu) + 1u;
    wr32(esi, t63);
    t64 = loc_4 + (uint32_t)(int16_t)rd16(rd32(self));
    wr32(esi, t64);
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
