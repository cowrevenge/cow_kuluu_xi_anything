/* f_0x102dbba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dbba0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_27c;
    uint32_t loc_280;
    uint32_t loc_284;
    uint32_t loc_4;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 680u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x27cu, in_ebx);
    wr32(sp0 - 0x280u, in_esi);
    wr32(sp0 - 0x284u, in_edi);
    wr32(sp0 - 0x288u, sp0 - 0x278u);
    wr32(sp0 - 0xcu, self);
    g->eax = sp0 - 0x278u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x284u;
    t1 = cow_cdecl(g, COW_IMG(0x102ef132u), 1, sp0 - 0x278u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1b4u, t1);
    wr32(sp0 - 0x28cu, 0u);
    wr32(sp0 - 0x290u, sp0 - 0x1f4u);
    wr32(sp0 - 0x278u, COW_IMG(0x102dbb3eu));
    wr32(sp0 - 0x270u, COW_IMG(0x102dbb5au));
    g->esi = 0u;
    g->ebp = sp0 - 4u;
    g->eax = sp0 - 0x1f4u;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x28cu;
    t4 = cow_cdecl(g, COW_IMG(0x10316224u), 1, sp0 - 0x1f4u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_102dbbf5;
    }
    ecx = t5;
    edx = t6;
    loc_4 = in_ebp;
    loc_27c = in_ebx;
    loc_280 = in_esi;
    loc_284 = in_edi;
L_102dbbeb: ;
    esi = 0x80004005u;
L_102dbdfa: ;
    wr32(sp0 - 0x288u, sp0 - 0x1b4u);
    g->esp = sp0 - 0x284u;
    cow_call_regs(g, COW_IMG(0x102ed1eau), g->eax, ecx, edx, 1, 1, sp0 - 0x1b4u);
    t40 = g->edx;
    g->ebx = rd32(sp0 - 0x27cu);
    g->esi = rd32(sp0 - 0x280u);
    g->edi = rd32(sp0 - 0x284u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t40;
    return esi;
L_102dbbf5: ;
    wr32(sp0 - 0x288u, 0x1a8u);
    wr32(sp0 - 0x28cu, 0x3du);
    wr32(sp0 - 0x290u, sp0 - 0x1b4u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102ed12au), 5, sp0 - 0x1b4u, 0x3du, 0x1a8u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x294u, 0x24u);
    wr32(sp0 - 0x298u, 0u);
    wr32(sp0 - 0x29cu, sp0 - 0x1b4u);
    g->eax = rd32(sp0 - 0x1b0u);
    g->edx = t8;
    t9 = rd32(sp0 - 0x1b0u);
    g->esp = sp0 - 0x290u;
    t10 = cow_thiscall_cdecl(g, rd32(t9), t7, 3, sp0 - 0x1b4u, 0u, 0x24u);
    t11 = g->edx;
    wr32(sp0 - 0x1a0u, t10);
    wr32(t10 + 0x20u, arg2);
    wr32(t10 + 8u, COW_IMG(0x102dbb78u));
    wr32(t10 + 0xcu, COW_IMG(0x102dbb79u));
    wr32(t10 + 0x10u, COW_IMG(0x102dbb8eu));
    wr32(t10 + 0x14u, COW_IMG(0x102eee8bu));
    wr32(t10 + 0x18u, COW_IMG(0x102dbb9fu));
    wr32(t10 + 4u, 0u);
    wr32(t10, 0u);
    wr32(t10 + 0x1cu, arg1);
    wr32(sp0 - 0x2a0u, 1u);
    wr32(sp0 - 0x2a4u, sp0 - 0x1b4u);
    g->eax = sp0 - 0x1b4u;
    g->esp = sp0 - 0x298u;
    t12 = cow_call_regs(g, COW_IMG(0x102ed575u), g->eax, arg1, t11, 1, 3, sp0 - 0x1b4u, 1u, sp0 - 0x1b4u);
    t13 = g->ecx;
    t14 = g->edx;
    g->esi = 0u;
    g->esp = sp0 - 0x284u;
    t15 = cow_fastcall(g, COW_IMG(0x102e7446u), t13, t14, 0);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        ecx = t16;
        edx = t17;
    }
    else
    {
        ecx = t16;
        edx = t17;
        wr32(sp0 - 0x170u, 1u);
    }
    wr32(sp0 - 0x288u, sp0 - 0x1b4u);
    wr32(sp0 - 0x270u, COW_IMG(0x102dbb5bu));
    g->esp = sp0 - 0x27cu;
    cow_call_regs(g, COW_IMG(0x102ed879u), g->eax, ecx, edx, 1, 3, sp0 - 0x1b4u, rd32(sp0 - 0x284u), rd32(sp0 - 0x280u));
    t18 = g->edx;
    wr32(sp0 - 0x288u, 0x32u);
    if (rd32(sp0 - 0x14cu) == 1u)
    {
        edx = t18;
        goto L_102dbcba;
    }
    eax = rd32(sp0 - 0x14cu) - 1u;
    edx = t18;
    if (eax != 2u)
    {
        ecx = sp0 - 0x1b4u;
        loc_4 = rd32(sp0 - 4u);
        loc_27c = rd32(sp0 - 0x27cu);
        loc_280 = rd32(sp0 - 0x280u);
        loc_284 = rd32(sp0 - 0x284u);
        goto L_102dbbeb;
    }
    t19 = rd32(sp0 - 0x158u);
    t20 = rd32(sp0 - 0xcu);
    wr32(t20, 0x16u);
    wr32(t20 + 0x30u, t19 << 2u);
    eax = t19;
    ecx = t19 << 2u;
    esi = t20;
L_102dbcc8: ;
    wr32(esi + 0x34u, 0u);
    t23 = rd32(esi + 0x40u);
    wr32(esi + 0xcu, eax);
    t24 = rd32(sp0 - 0x154u);
    wr32(esi + 0x10u, t24);
    wr32(esi + 0x14u, 1u);
    if (t23 == 0u) goto L_102dbdf8;
    eax = t24;
    t25 = rd32(esi + 0x30u) * eax;
    wr32(sp0 - 0x288u, t25);
    wr32(esi + 0x38u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x27cu;
    t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t25, edx, 1, 3, t25, rd32(sp0 - 0x284u), rd32(sp0 - 0x280u));
    t27 = g->edx;
    t28 = rd32(sp0 - 0x288u);
    wr32(esi + 4u, t26);
    if (t26 != 0u)
    {
        ecx = t28;
        edx = t27;
        goto L_102dbd06;
    }
    ecx = t28;
    edx = t27;
L_102dbcfc: ;
    esi = 0x8007000eu;
    loc_4 = rd32(sp0 - 4u);
    loc_27c = rd32(sp0 - 0x27cu);
    loc_280 = rd32(sp0 - 0x280u);
    loc_284 = rd32(sp0 - 0x284u);
    goto L_102dbdfa;
L_102dbcba: ;
    t21 = rd32(sp0 - 0x158u);
    t22 = rd32(sp0 - 0xcu);
    wr32(t22, 0x32u);
    wr32(t22 + 0x30u, t21);
    eax = t21;
    ecx = sp0 - 0x1b4u;
    esi = t22;
    goto L_102dbcc8;
L_102dbd06: ;
    wr32(sp0 - 0x288u, 1u);
    t29 = rd32(sp0 - 0x158u) * rd32(sp0 - 0x14cu);
    wr32(sp0 - 0x28cu, t29);
    wr32(sp0 - 0x290u, 1u);
    wr32(sp0 - 0x294u, sp0 - 0x1b4u);
    g->eax = rd32(sp0 - 0x1b0u);
    g->edx = edx;
    t30 = rd32(sp0 - 0x1b0u);
    g->esp = sp0 - 0x284u;
    t31 = cow_thiscall_cdecl(g, rd32(t30 + 8u), ecx, 4, sp0 - 0x1b4u, 1u, t29, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 8u, t31);
    if (t31 == 0u)
    {
        ecx = t32;
        edx = t33;
        goto L_102dbcfc;
    }
    ecx = t32;
    edx = t33;
    loc_8 = t31;
    if (rd32(esi) != 0x32u)
    {
        eax = rd32(esi);
        if (eax == 0x16u)
        {
            esi = rd32(esi + 4u);
L_102dbddd: ;
            if (rd32(sp0 - 0x13cu) < rd32(sp0 - 0x154u)) goto L_102dbd9e;
        }
    }
    else
    {
        if (rd32(sp0 - 0x13cu) < rd32(sp0 - 0x154u))
        {
            ebx = rd32(esi + 4u);
L_102dbd50: ;
            wr32(sp0 - 0x288u, 1u);
            wr32(sp0 - 0x28cu, loc_8);
            wr32(sp0 - 0x290u, sp0 - 0x1b4u);
            g->esp = sp0 - 0x284u;
            cow_call_regs(g, COW_IMG(0x102ed681u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x1b4u, loc_8, 1u);
            t34 = g->edx;
            t35 = rd32(sp0 - 0x158u);
            t36 = rd32(rd32(sp0 - 8u));
            esi = t36;
            edi = ebx;
            ecx = t35 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t35 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (rd32(sp0 - 0x13cu) < rd32(sp0 - 0x154u))
            {
                edx = t34;
                ebx = ebx + rd32(sp0 - 0x158u);
                goto L_102dbd4d;
            }
            edx = t34;
        }
    }
    wr32(sp0 - 0x288u, sp0 - 0x1b4u);
    g->esp = sp0 - 0x27cu;
    cow_call_regs(g, COW_IMG(0x102ed4ceu), g->eax, ecx, edx, 1, 3, sp0 - 0x1b4u, rd32(sp0 - 0x284u), rd32(sp0 - 0x280u));
    t39 = g->edx;
    ecx = sp0 - 0x1b4u;
    edx = t39;
L_102dbdf8: ;
    esi = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_27c = rd32(sp0 - 0x27cu);
    loc_280 = rd32(sp0 - 0x280u);
    loc_284 = rd32(sp0 - 0x284u);
    goto L_102dbdfa;
L_102dbd4d: ;
    loc_8 = rd32(sp0 - 8u);
    goto L_102dbd50;
L_102dbd9e: ;
    wr32(sp0 - 0x288u, 1u);
    wr32(sp0 - 0x28cu, loc_8);
    wr32(sp0 - 0x290u, sp0 - 0x1b4u);
    g->esp = sp0 - 0x284u;
    cow_call_regs(g, COW_IMG(0x102ed681u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x1b4u, loc_8, 1u);
    t37 = g->edx;
    eax = rd32(rd32(sp0 - 8u));
    ecx = esi + rd32(sp0 - 0x158u) * 4u;
    edx = t37;
L_102dbdd9: ;
    if (esi < ecx) goto L_102dbdc1;
    loc_8 = rd32(sp0 - 8u);
    goto L_102dbddd;
L_102dbdc1: ;
    t38 = (rd8(eax) << 8u | rd8(eax + 1u)) << 8u | rd8(eax + 2u);
    wr32(esi, t38);
    eax = eax + 3u;
    edx = t38;
    esi = esi + 4u;
    goto L_102dbdd9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dbba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dbba0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
