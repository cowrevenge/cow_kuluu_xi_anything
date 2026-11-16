/* f_0x100ea810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ea810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd8(arg3 + 5u);
    if (arg1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        goto L_100ea9e8;
    }
    eax = t1;
    edi = (t1 >> 6u) + 1u;
    if (rd16(arg3 + 0x9cu) - 1u > 5u)
    {
        edx = in_edx;
        goto L_100ea9e8;
    }
    ecx = rd16(arg3 + 0x9cu) - 1u;
    t2 = rd32(COW_IMG(0x100ea9f0u) + ecx * 4u);
    switch (t2 - RD)
    {
    case 0x100ea84au: goto L_100ea84a;
    case 0x100ea8c3u: goto L_100ea8c3;
    case 0x100ea967u: goto L_100ea967;
    case 0x100ea9b6u: goto L_100ea9b6;
    case 0x100ea9e8u: edx = in_edx; goto L_100ea9e8;
    default: rt_fatal(g, COW_IMG(0x100ea843u), "switch");
    }
    return 0;
L_100ea84a: ;
    if ((rd8(arg3 + 4u) & 0xfu) == 0u)
    {
        eax = rd8(arg3 + 4u) & 0xfu;
        ecx = (ecx & 0xffffff00u) | rd8(arg3 + 4u);
        goto L_100ea87f;
    }
    eax = rd8(arg3 + 4u) & 0xfu;
    ecx = (ecx & 0xffffff00u) | rd8(arg3 + 4u);
    if (eax == 3u)
    {
        eax = eax - 3u;
        goto L_100ea98a;
    }
    eax = eax - 3u;
    if (eax == 2u) goto L_100ea888;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 7u);
    g->esp = sp0 - 0x1cu;
    t21 = cow_call_regs(g, COW_IMG(0x100eab30u), g->eax, g->ecx, in_edx, 1, 5, 7u, 0u, 0u, 0u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_100ea87f: ;
    if ((ecx & 0x40u) == 0u)
    {
        edx = in_edx;
        goto L_100ea9e8;
    }
L_100ea888: ;
    wr32(sp0 - 0x20u, arg3 + 0xa0u);
    wr32(sp0 - 0x24u, 0x14u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100ed650u), arg3 + 0xa0u, 9, sp0 - 0x14u, 0x14u, arg3 + 0xa0u, in_edi, in_esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    wr32(sp0 - 0x2cu, arg3 + 8u);
    wr32(sp0 - 0x30u, arg3 + 0x8cu);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    t25 = rd32(arg3 + 0x88u);
    wr32(sp0 - 0x38u, t25);
    wr32(sp0 - 0x3cu, edi);
    g->esp = sp0 - 0x28u;
    t26 = cow_call_regs(g, COW_IMG(0x100eab30u), g->eax, g->ecx, sp0 - 0x14u, 1, 5, edi, t25, sp0 - 0x14u, arg3 + 0x8cu, arg3 + 8u);
    t27 = g->edx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
L_100ea8c3: ;
    if ((rd8(arg3 + 4u) & 0xfu) == 0u)
    {
        eax = (eax & 0xffffff00u) | (rd8(arg3 + 4u) & 0xfu);
        ecx = (ecx & 0xffffff00u) | rd8(arg3 + 4u);
        goto L_100ea923;
    }
    eax = (eax & 0xffffff00u) | (rd8(arg3 + 4u) & 0xfu);
    ecx = (ecx & 0xffffff00u) | rd8(arg3 + 4u);
    if ((uint8_t)eax == 5u) goto L_100ea8ea;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 7u);
    g->esp = sp0 - 0x1cu;
    t13 = cow_call_regs(g, COW_IMG(0x100eaaf0u), g->eax, ecx, in_edx, 1, 5, 7u, 0u, 0u, 0u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_100ea8ea: ;
    wr32(sp0 - 0x20u, arg3 + 0xa0u);
    wr32(sp0 - 0x24u, 0x14u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100ed650u), arg3 + 0xa0u, 9, sp0 - 0x14u, 0x14u, arg3 + 0xa0u, in_edi, in_esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg3 + 0x8cu);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    t15 = rd32(arg3 + 0x88u);
    wr32(sp0 - 0x38u, t15);
    wr32(sp0 - 0x3cu, edi);
    g->esp = sp0 - 0x28u;
    t16 = cow_call_regs(g, COW_IMG(0x100eaaf0u), g->eax, sp0 - 0x14u, t15, 1, 5, edi, t15, sp0 - 0x14u, arg3 + 0x8cu, 0u);
    t17 = g->edx;
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100ea923: ;
    if ((ecx & 0x40u) == 0u)
    {
        edx = in_edx;
        goto L_100ea9e8;
    }
    wr32(sp0 - 0x20u, arg3 + 0xa0u);
    wr32(sp0 - 0x24u, 0x14u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100ed650u), sp0 - 0x14u, 9, sp0 - 0x14u, 0x14u, arg3 + 0xa0u, in_edi, in_esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    wr32(sp0 - 0x2cu, arg3 + 8u);
    wr32(sp0 - 0x30u, arg3 + 0x8cu);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    t18 = rd32(arg3 + 0x88u);
    wr32(sp0 - 0x38u, t18);
    wr32(sp0 - 0x3cu, edi);
    g->esp = sp0 - 0x28u;
    t19 = cow_call_regs(g, COW_IMG(0x100eaaf0u), g->eax, sp0 - 0x14u, t18, 1, 5, edi, t18, sp0 - 0x14u, arg3 + 0x8cu, arg3 + 8u);
    t20 = g->edx;
    g->edx = t20;
    return (t19 & 0xffffff00u) | 1u;
L_100ea967: ;
    if ((rd8(arg3 + 4u) & 0xfu) == 0u) goto L_100ea998;
    ecx = (ecx & 0xffffff00u) | (rd8(arg3 + 4u) & 0xfu);
    if ((uint8_t)ecx == 3u) goto L_100ea98a;
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0xffffffffu);
    wr32(sp0 - 0x28u, 7u);
    g->esp = sp0 - 0x1cu;
    t8 = cow_call_regs(g, COW_IMG(0x100eaba0u), g->eax, g->ecx, in_edx, 1, 3, 7u, 0xffffffffu, 0xffffffffu);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_100ea98a: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t23 = cow_thiscall(g, rd32(COW_IMG(0x104ca3f4u)), ecx, 0);
    t24 = g->edx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_100ea998: ;
    t10 = eax >> 2u & 3u;
    wr32(sp0 - 0x20u, t10);
    wr32(sp0 - 0x24u, eax & 3u);
    wr32(sp0 - 0x28u, edi);
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x100eaba0u), g->eax, g->ecx, in_edx, 1, 3, edi, eax & 3u, t10);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_100ea9b6: ;
    if ((rd8(arg3 + 4u) & 0xfu) == 0u) goto L_100ea9d2;
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0xffffffffu);
    wr32(sp0 - 0x28u, 7u);
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x100eab80u), g->eax, g->ecx, in_edx, 1, 3, 7u, 0xffffffffu, 0xffffffffu);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_100ea9d2: ;
    t5 = eax >> 2u & 3u;
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 0x24u, eax & 3u);
    wr32(sp0 - 0x28u, edi);
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x100eab80u), g->eax, g->ecx, t5, 1, 3, edi, eax & 3u, t5);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_100ea9e8: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ea810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
