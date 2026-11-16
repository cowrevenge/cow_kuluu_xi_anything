/* f_0x100a21c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a21c0(Guest* g)
{
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 552u);

    wr32(sp0 - 0x214u, in_esi);
    g->esp = sp0 - 0x214u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = rd16(arg3 + 4u);
    if ((t2 & 0x3fu) != 1u)
    {
        eax = t1;
        edx = (t2 & 0x3fu) - 1u;
        goto L_100a2387;
    }
    eax = t1;
    ecx = t2;
    edx = (t2 & 0x3fu) - 1u;
    if (ecx >> 6u == 1u) goto L_100a236e;
    ecx = (ecx >> 6u) - 1u;
    if (ecx == 1u) goto L_100a22cb;
    ecx = ecx - 1u;
    if (ecx != 1u) goto L_100a2387;
    if (rd16(COW_IMG(0x10485f7au)) == 0u) goto L_100a22b1;
    if (eax == 0u) goto L_100a22b1;
    if (rd32(arg3 + 8u) == 0u) goto L_100a22b1;
    t3 = rd32(arg3 + 0x10u);
    wr32(sp0 - 0x210u, t3);
    t4 = rd32(arg3 + 0x18u);
    wr32(sp0 - 0x208u, t4);
    t5 = rd32(arg3 + 0x14u);
    wr32(sp0 - 0x20cu, t5);
    wr32(sp0 - 0x218u, sp0 - 0x210u);
    wr32(sp0 - 0x21cu, eax + 4u);
    t6 = rd32(arg3 + 0x1cu);
    wr32(sp0 - 0x204u, t6);
    g->edx = t6;
    g->esp = sp0 - 0x20cu;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100a23a0u), sp0 - 0x210u, 4, eax + 4u, sp0 - 0x210u, in_esi, t3);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)(t7 & 0xfu) >= 0)
    {
        eax = t7 & 0xfu;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7 & 0xfu;
        ecx = t8;
        edx = t9;
        eax = (eax - 1u | 0xfffffff0u) + 1u;
    }
    wr32(sp0 - 0x220u, eax + 8u);
    wr32(sp0 - 0x224u, 0xfu);
    g->eax = eax + 8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xfu, eax + 8u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x218u, t10);
    g->ecx = t11;
    g->edx = t12;
    d13 = fr(g, fr(g, (double)rdf32(arg3 + 0x20u) * (double)rdf32(COW_IMG(0x1032d6c8u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d13);
    g->esp = sp0 - 0x218u;
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x21cu, t14);
    wr32(sp0 - 0x220u, 0x39u);
    wr32(sp0 - 0x224u, 0xau);
    g->ecx = t15;
    g->esp = sp0 - 0x21cu;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x39u);
    t18 = g->ecx;
    wr32(sp0 - 0x220u, t17);
    wr32(sp0 - 0x224u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t17, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
    t19 = g->edx;
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t19;
    g->esp = sp0 - 0x214u;
    t20 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t21 = g->edx;
    g->esi = rd32(sp0 - 0x214u);
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_100a22b1: ;
    wr32(sp0 - 0x218u, 0xdfu);
    g->edx = edx;
    g->esp = sp0 - 0x214u;
    t22 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xdfu);
    t23 = g->edx;
    g->edx = t23;
    return (t22 & 0xffffff00u) | 1u;
L_100a22cb: ;
    if (rd16(COW_IMG(0x10485f7au)) == 0u) goto L_100a2387;
    if (eax == 0u) goto L_100a2387;
    t24 = rd32(arg3 + 8u);
    wr32(eax + 0x27cu, t24);
    if (rd16(arg3 + 0x18u) >= 3u)
    {
        ecx = 2u;
    }
    else
    {
        ecx = (t24 & 0xffff0000u) | rd16(arg3 + 0x18u);
        ecx = (uint16_t)ecx;
    }
    wr16(eax + 0x28cu, (uint16_t)ecx);
    wr16(eax + 0x28eu, rd16(arg3 + 0x1au));
    t25 = rd32(arg3 + 0xcu);
    wr32(eax + 0x280u, t25);
    t26 = rd32(arg3 + 0x10u);
    wr32(eax + 0x284u, t26);
    t27 = rd32(arg3 + 0x14u);
    wr32(eax + 0x288u, t27);
    t28 = rd8(arg3 + 0x1cu);
    wr8(eax + 0x290u, (uint8_t)t28);
    t29 = rd8(arg3 + 0x1du);
    wr8(eax + 0x291u, (uint8_t)t29);
    wr8(eax + 0x292u, rd8(arg3 + 0x1eu));
    wr8(eax + 0x293u, rd8(arg3 + 0x1fu));
    t30 = rd32(arg3 + 0x20u);
    wr32(eax + 0x298u, t30);
    t31 = rd32(arg3 + 0x24u);
    wr32(eax + 0x29cu, t31);
    g->edx = t30;
    return (eax & 0xffffff00u) | 1u;
L_100a236e: ;
    t32 = rd32(arg3 + 8u);
    wr32(arg1 + 0x40e2eu, t32);
    t33 = rd32(arg3 + 0xcu);
    wr32(arg1 + 0x40e32u, t33);
    eax = arg1;
    edx = t32;
L_100a2387: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a21c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a21c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
