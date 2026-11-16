/* f_0x1025f020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025f020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103276b0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0x7cu);
    wr32(sp0 - 0x10u, self + 0x7cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x7cu);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t4);
    t5 = rd32(self + 0x78u) + 0x98u;
    wr32(sp0 - 0x28u, t5);
    wr32(sp0 - 4u, 0u);
    wr32(self + 0xb4u, 1u);
    g->ecx = t2;
    t6 = cow_call_regs(g, COW_IMG(0x10263590u), g->eax, g->ecx, t3, 0, 2, t5, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        edx = t8;
        ebx = t4;
        if (rd32(rd32(self + 0x78u) + 0xccu) == 0u)
        {
            eax = rd32(rd32(self + 0x78u) + 0xccu);
            ecx = rd32(self + 0x78u);
            goto L_1025f0b9;
        }
        eax = rd32(rd32(self + 0x78u) + 0xccu);
        ecx = rd32(self + 0x78u);
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 0x20u;
        t11 = cow_thiscall(g, rd32(t10 + 0x24u), ecx, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        if ((int32_t)t11 >= 0)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_1025f0b9;
        }
        eax = t11;
        ecx = t12;
        edx = t13;
        ebp = t11;
        wr32(sp0 - 0x24u, self + 0x7cu);
        wr32(self + 0xb4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x7cu);
        t14 = g->edx;
        eax = ebp;
        edx = t14;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        wr32(sp0 - 0x24u, self + 0x7cu);
        wr32(self + 0xb4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x7cu);
        t9 = g->edx;
        eax = 0x80004005u;
        edx = t9;
    }
L_1025f18d: ;
    t50 = rd32(sp0 - 0xcu);
    t51 = rd32(sp0 - 0x14u);
    t52 = rd32(sp0 - 0x18u);
    t53 = rd32(sp0 - 0x1cu);
    t54 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t50);
    g->ebx = t51;
    g->esi = t53;
    g->edi = t54;
    g->ebp = t52;
    g->edx = edx;
    return eax;
L_1025f0b9: ;
    wr32(sp0 - 0x24u, self + 0x94u);
    wr32(sp0 + 4u, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), ecx, 1, self + 0x94u);
    t15 = g->ecx;
    t16 = g->edx;
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        ecx = t15;
        goto L_1025f168;
    }
    ecx = t15;
    edx = t16;
    if (rd32(self + 0x70u) != 0u)
    {
        eax = rd32(self + 0x70u);
        goto L_1025f168;
    }
    if (rd32(self + 0x60u) != 0u)
    {
        eax = rd32(self + 0x60u);
        goto L_1025f168;
    }
    if (rd32(self + 0x50u) != 0u)
    {
        ecx = rd32(self + 0x50u);
        wr32(sp0 - 0x24u, ebx);
        g->esp = sp0 - 0x20u;
        cow_fastcall(g, COW_IMG(0x10267be0u), ecx, edx, 1, ebx);
        t17 = g->edx;
        edx = t17;
    }
    if (rd32(self + 0x64u) != 1u) goto L_1025f124;
    wr32(sp0 - 0x24u, ebx);
    g->eax = rd32(self);
    g->edx = edx;
    t18 = rd32(self);
    g->esp = sp0 - 0x20u;
    t19 = cow_thiscall(g, rd32(t18 + 0x54u), self, 1, ebx);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 != 0u) goto L_1025f124;
    eax = t19;
    ecx = t20;
    edx = t21;
    wr32(self + 0xb4u, eax);
    wr32(sp0 - 0x24u, self + 0x94u);
    g->eax = eax;
    g->edx = edx;
    t22 = rd32(COW_IMG(0x10329188u));
    g->esp = sp0 - 0x20u;
    t23 = cow_thiscall(g, t22, ecx, 1, self + 0x94u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t25;
    cow_thiscall(g, t22, t24, 1, self + 0x7cu);
    t26 = g->edx;
    eax = 0x8004022bu;
    edx = t26;
    goto L_1025f18d;
L_1025f124: ;
    wr32(sp0 - 0x24u, ebx);
    t27 = rd32(rd32(self + 0x78u) + 0xc0u);
    t28 = rd32(self + 0x78u);
    wr32(self + 0xb8u, t27);
    t29 = rd32(t28 + 0xc4u);
    wr32(self + 0x6cu, ebx);
    wr32(self + 0xbcu, t29);
    g->edx = t27;
    t30 = rd32(ebx);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(t30 + 4u), t30, 1, ebx);
    t31 = g->ecx;
    t32 = g->edx;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        ecx = t31;
        edx = t32;
    }
    else
    {
        eax = rd32(self + 0x64u);
        edx = t32;
        wr32(sp0 - 0x24u, 1u);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t33 = cow_fastcall(g, COW_IMG(0x1025f6d0u), self, edx, 1, 1u);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    wr32(sp0 - 0x24u, self + 0x94u);
    g->eax = eax;
    g->edx = edx;
    t36 = rd32(COW_IMG(0x10329188u));
    g->esp = sp0 - 0x20u;
    t37 = cow_thiscall(g, t36, ecx, 1, self + 0x94u);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t39;
    cow_thiscall(g, t36, t38, 1, self + 0x7cu);
    t40 = g->edx;
    eax = 0u;
    edx = t40;
    goto L_1025f18d;
L_1025f168: ;
    t41 = rd32(self + 0x5cu);
    wr32(sp0 - 0x24u, t41);
    g->eax = eax;
    g->edx = t41;
    g->esp = sp0 - 0x20u;
    t42 = cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), ecx, 1, t41);
    t43 = g->ecx;
    t44 = g->edx;
    wr32(self + 0xb4u, 0u);
    wr32(sp0 - 0x24u, self + 0x94u);
    g->edx = t44;
    t45 = rd32(COW_IMG(0x10329188u));
    t46 = cow_thiscall(g, t45, t43, 1, self + 0x94u);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t48;
    cow_thiscall(g, t45, t47, 1, self + 0x7cu);
    t49 = g->edx;
    eax = 0x8000ffffu;
    edx = t49;
    goto L_1025f18d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f020(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
