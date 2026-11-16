/* f_0x10265500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327dd8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (self == 0u)
    {
        eax = t1;
        loc_c = t1;
        ebp = 0u;
    }
    else
    {
        eax = t1;
        loc_c = t1;
        ebp = self + 0x10u;
    }
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x10u, ebp);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, ebp);
    t2 = g->edx;
    wr32(sp0 - 4u, 0u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10265270u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        edi = t3;
        goto L_10265563;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    edi = t3;
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebp);
    t6 = g->edx;
    t7 = rd32(sp0 - 0xcu);
    t8 = rd32(sp0 - 0x14u);
    t9 = rd32(sp0 - 0x18u);
    t10 = rd32(sp0 - 0x1cu);
    t11 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t7);
    g->ebx = t8;
    g->esi = t10;
    g->edi = t11;
    g->ebp = t9;
    g->edx = t6;
    return edi;
L_10265563: ;
    if (edi == 1u) goto L_1026562f;
    if (rd32(self + 0x60u) != 0u)
    {
        eax = rd32(self + 0x60u);
        g->esp = sp0 - 0x20u;
        cow_fastcall(g, COW_IMG(0x10265660u), self, edx, 0);
        t12 = g->edx;
        edx = t12;
    }
    if ((int32_t)rd32(self + 0x44u) <= 1)
    {
        ecx = rd32(self + 0x44u);
        edi = rd32(self + 0x40u) + rd32(self + 0x48u);
    }
    else
    {
        ecx = rd32(self + 0x44u);
        edi = rd32(self + 0x40u) + rd32(self + 0x48u);
        t13 = cow_divs(g, edi, ecx);
        t14 = cow_mods(g, edi, ecx);
        if (t14 == 0u)
        {
            edx = t14;
        }
        else
        {
            edx = t14;
            edi = ecx + edi - edx;
            ecx = ecx - edx;
        }
    }
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 0x1000u);
    t15 = rd32(self + 0x38u) * edi;
    wr32(sp0 - 0x2cu, t15);
    wr32(sp0 - 0x30u, 0u);
    g->eax = t15;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x10329228u)), ecx, 4, 0u, t15, 0x1000u, 4u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(self + 0x60u, t16);
    if (t16 != 0u)
    {
        eax = t16;
        edx = t18;
        goto L_102655d3;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
L_102655b4: ;
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebp);
    t32 = g->edx;
    t33 = rd32(sp0 - 0xcu);
    t34 = rd32(sp0 - 0x14u);
    t35 = rd32(sp0 - 0x18u);
    t36 = rd32(sp0 - 0x1cu);
    t37 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t33);
    g->ebx = t34;
    g->esi = t36;
    g->edi = t37;
    g->ebp = t35;
    g->edx = t32;
    return 0x8007000eu;
L_102655d3: ;
    if ((int32_t)rd32(self + 0x3cu) >= (int32_t)rd32(self + 0x38u))
    {
        ecx = rd32(self + 0x3cu);
        goto L_10265628;
    }
    ecx = rd32(self + 0x3cu);
    ebx = eax;
L_102655dd: ;
    wr32(sp0 - 0x24u, 0x48u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x48u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_102655b4;
    }
    eax = t19;
    t22 = rd32(self + 0x40u);
    wr32(sp0 - 0x24u, t22);
    t23 = ebx + rd32(self + 0x48u);
    wr32(sp0 - 0x28u, t23);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, self);
    wr32(sp0 - 0x34u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t24 = cow_thiscall(g, COW_IMG(0x102639a0u), eax, 5, 0u, self, sp0 - 0x10u, t23, t22);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        goto L_102655b4;
    }
    eax = t24;
    edx = t26;
    t27 = rd32(self + 0x28u);
    wr32(eax + 0x1cu, t27);
    t28 = rd32(self + 0x2cu);
    wr32(self + 0x28u, eax);
    wr32(self + 0x2cu, t28 + 1u);
    t29 = rd32(self + 0x3cu) + 1u;
    t30 = rd32(self + 0x38u);
    t31 = rd32(self + 0x3cu);
    wr32(self + 0x3cu, t29);
    if ((int32_t)(t31 + 1u) < (int32_t)t30)
    {
        ecx = t30;
        ebx = ebx + edi;
        goto L_102655dd;
    }
    eax = t29;
    ecx = t30;
L_10265628: ;
    wr32(self + 0x4cu, 0u);
L_1026562f: ;
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebp);
    t38 = g->edx;
    t39 = rd32(sp0 - 0xcu);
    t40 = rd32(sp0 - 0x14u);
    t41 = rd32(sp0 - 0x18u);
    t42 = rd32(sp0 - 0x1cu);
    t43 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t39);
    g->ebx = t40;
    g->esi = t42;
    g->edi = t43;
    g->ebp = t41;
    g->edx = t38;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
