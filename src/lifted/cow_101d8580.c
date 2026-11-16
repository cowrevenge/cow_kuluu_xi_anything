/* f_0x101d8580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d8580(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x58u, in_esi);
    if (rd8(self + 0x89au) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x89au);
        goto L_101d859e;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x89au);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_101d859e: ;
    if (rd8(self + 0x898u) != 1u) goto L_101d85cb;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t3 = cow_thiscall(g, COW_IMG(0x101d7df0u), self, 0);
    t4 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    if (t3 == 0u)
    {
        eax = t3;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = t4;
        goto L_101d8602;
    }
    eax = t3;
    ecx = rd32(COW_IMG(0x10578204u));
    edx = t4;
    wr32(sp0 - 0x64u, 0u);
    t5 = (eax & 0xffff0000u) | rd16(eax + 0x14u);
    wr32(sp0 - 0x68u, t5);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t6 = cow_call_regs(g, COW_IMG(0x1013e260u), t5, ecx, g->edx, 0, 4, t5, 0u, 0u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_101d8607: ;
    if (rd8(COW_IMG(0x1066344eu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1066344eu));
        goto L_101d8626;
    }
    wr32(sp0 - 0x5cu, 0x6eu);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t15 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x6eu);
    t16 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edx = t16;
    return t15 & 0xffffff00u;
L_101d85cb: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t8 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_101d85f8;
    }
    eax = t8;
    edx = t9;
    if (rd32(eax) == 3u)
    {
        ecx = rd32(eax);
        goto L_101d85e0;
    }
    ecx = rd32(eax);
    if (ecx != 4u) goto L_101d85f8;
L_101d85e0: ;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0u);
    t10 = (ecx & 0xffff0000u) | rd16(eax + 4u);
    wr32(sp0 - 0x68u, t10);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t11 = cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, t10, 0u, 0u, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_101d8607;
L_101d85f8: ;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    ecx = rd32(COW_IMG(0x10578204u));
L_101d8602: ;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t13 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    goto L_101d8607;
L_101d8626: ;
    wr32(sp0 - 0x5cu, in_edi);
    if (rd8(self + 0x898u) != 1u) goto L_101d8748;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t17 = cow_thiscall(g, COW_IMG(0x101d7da0u), self, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_101d8739;
    }
    esi = t17;
    if (rd8(esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu) - 3u > 0x13u)
    {
        eax = rd8(esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu) - 3u;
        edx = esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
        goto L_101d8764;
    }
    eax = rd8(esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu) - 3u;
    edx = esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
    t20 = rd32(COW_IMG(0x101d8770u) + rd8(COW_IMG(0x101d8780u) + eax) * 4u);
    switch (t20 - RD)
    {
    case 0x101d8674u: goto L_101d8674;
    case 0x101d86c8u: goto L_101d86c8;
    case 0x101d871cu: goto L_101d871c;
    case 0x101d8764u: goto L_101d8764;
    default: rt_fatal(g, COW_IMG(0x101d866du), "switch");
    }
    return 0;
L_101d8674: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t29 = rd8(edx + 0x16u);
    wr32(sp0 - 0x44u, t29);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    t30 = rd16(edx + 0x14u);
    wr32(sp0 - 0x48u, t30);
    g->ecx = t30;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 0x64u, esi);
    g->edx = t32;
    g->esp = sp0 - 0x58u;
    t33 = cow_cdecl(g, COW_IMG(0x100dfcb0u), 3, esi, sp0 - 0x54u, rd32(sp0 - 0x5cu));
    t34 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = t34;
    return (t33 & 0xffffff00u) | 1u;
L_101d86c8: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t23 = rd8(edx + 0x16u);
    wr32(sp0 - 0x44u, t23);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    t24 = rd16(edx + 0x14u);
    wr32(sp0 - 0x48u, t24);
    g->ecx = t24;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x64u, esi);
    g->edx = t26;
    g->esp = sp0 - 0x58u;
    t27 = cow_cdecl(g, COW_IMG(0x100dfcb0u), 3, esi, sp0 - 0x54u, rd32(sp0 - 0x5cu));
    t28 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_101d871c: ;
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, COW_IMG(0x1037ee78u));
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t21 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ee78u), 1u, 0u);
    t22 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_101d8739: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t35 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t36 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = t36;
    return (t35 & 0xffffff00u) | 1u;
L_101d8748: ;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t37 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t38 = g->edx;
    if (t37 == 0u)
    {
        eax = t37;
        edx = t38;
    }
    else
    {
        edx = t38;
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, COW_IMG(0x1037ee8cu));
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t39 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ee8cu), 1u, 0u);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    }
L_101d8764: ;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d8580(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
