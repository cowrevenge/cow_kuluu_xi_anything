/* f_0x1025f1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025f1b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    wr32(sp0 - 8u, COW_IMG(0x103276e0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t2);
    g->eax = rd32(self);
    g->edx = in_edx;
    t3 = rd32(self);
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, rd32(t3 + 0x98u), self, 1, t2);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        if (rd32(self + 0x14u) != 1u)
        {
            eax = rd32(self + 0x14u);
            ebx = rd32(COW_IMG(0x1032918cu));
            ebp = rd32(COW_IMG(0x10329188u));
            loc_18 = in_ebx;
            loc_1c = in_ebp;
            loc_20 = in_esi;
            loc_24 = in_edi;
            goto L_1025f27d;
        }
        eax = rd32(self + 0x14u);
        ebx = rd32(COW_IMG(0x1032918cu));
        ebp = rd32(COW_IMG(0x10329188u));
        g->eax = eax;
        g->edx = rd32(self);
        t6 = rd32(self);
        g->esp = sp0 - 0x24u;
        t7 = cow_thiscall(g, rd32(t6 + 0x50u), self, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0xb4u, 0u);
        wr32(sp0 - 0x28u, self + 0x7cu);
        wr32(sp0 - 0x14u, self + 0x7cu);
        g->edx = t9;
        cow_thiscall(g, ebx, t8, 1, self + 0x7cu);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 4u, 0u);
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = t10;
            edx = t11;
            goto L_1025f237;
        }
        eax = rd32(self + 0x14u);
        ecx = t10;
        edx = t11;
        wr32(sp0 - 0x28u, self + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebp, ecx, 1, self + 0x7cu);
        t12 = g->edx;
        edx = t12;
L_1025f2f8: ;
        eax = 0u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = t4;
        ecx = t4;
        edx = t5;
        eax = -(eax + 0x7ffbfdd5u != 0u) & ecx;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    t50 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t50);
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = loc_24;
    g->ebp = loc_1c;
    g->edx = edx;
    return eax;
L_1025f237: ;
    wr32(self + 0xb4u, 1u);
    wr32(sp0 - 0x28u, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, ebx, ecx, 1, self + 0x94u);
    t13 = g->edx;
    t14 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t14);
    t15 = rd32(self);
    wr8(sp0 - 4u, 1u);
    g->eax = t15;
    g->edx = t13;
    t16 = cow_thiscall(g, rd32(t15 + 0x34u), self, 1, t14);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x28u, self + 0x94u);
    t19 = cow_thiscall(g, ebp, t17, 1, self + 0x94u);
    t20 = g->ecx;
    wr32(sp0 - 4u, 0xffffffffu);
    t21 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x28u, t21);
    g->edx = t21;
    cow_thiscall(g, ebp, t20, 1, t21);
    t22 = g->ecx;
    t23 = g->edx;
    t24 = rd32(self + 0x5cu);
    wr32(sp0 - 0x28u, t24);
    g->eax = t24;
    t25 = cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t24);   /* kernel32.dll!SetEvent */
    eax = t25;
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_1025f27d: ;
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall(g, rd32(t26 + 0x2cu), self, 0);
    t28 = g->edx;
    if ((int32_t)t27 >= 0)
    {
        edx = t28;
        g->eax = rd32(self);
        g->edx = edx;
        t29 = rd32(self);
        g->esp = sp0 - 0x24u;
        t30 = cow_thiscall(g, rd32(t29 + 0x50u), self, 0);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(self + 0xb4u, 0u);
        wr32(sp0 - 0x28u, self + 0x7cu);
        wr32(sp0 + 4u, self + 0x7cu);
        g->edx = t32;
        cow_thiscall(g, ebx, t31, 1, self + 0x7cu);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(sp0 - 4u, 2u);
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            ecx = t33;
            edx = t34;
            wr32(sp0 - 0x28u, self + 0x94u);
            wr32(sp0 - 0x10u, self + 0x94u);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, ebx, ecx, 1, self + 0x94u);
            t35 = rd32(self + 0x6cu);
            wr32(sp0 - 0x28u, t35);
            t36 = rd32(self);
            wr8(sp0 - 4u, 3u);
            g->eax = t35;
            t37 = cow_thiscall(g, rd32(t36 + 0xa8u), self, 1, t35);
            g->edx = rd32(self);
            t38 = rd32(self);
            cow_thiscall(g, rd32(t38 + 0x70u), self, 0);
            t39 = g->edx;
            g->eax = rd32(self);
            t40 = rd32(self);
            t41 = cow_thiscall(g, rd32(t40 + 0x60u), self, 0);
            g->edx = rd32(self);
            t42 = rd32(self);
            t43 = cow_thiscall(g, rd32(t42 + 0x6cu), self, 0);
            t44 = g->ecx;
            t45 = g->edx;
            wr32(sp0 - 0x28u, self + 0x94u);
            g->edx = t45;
            cow_thiscall(g, ebp, t44, 1, self + 0x94u);
            t46 = g->ecx;
            t47 = g->edx;
            t48 = rd32(sp0 + 4u);
            wr32(sp0 - 0x28u, t48);
            eax = t48;
            ecx = t46;
            edx = t47;
            loc_28 = t48;
        }
        else
        {
            eax = rd32(self + 0x14u);
            ecx = t33;
            edx = t34;
            wr32(sp0 - 0x28u, self + 0x7cu);
            loc_28 = self + 0x7cu;
        }
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebp, ecx, 1, loc_28);
        t49 = g->edx;
        edx = t49;
    }
    else
    {
        edx = t28;
        wr32(self + 0xb4u, 0u);
    }
    goto L_1025f2f8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f1b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
