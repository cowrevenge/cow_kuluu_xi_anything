/* f_0x10241e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10241e20(Guest* g)
{
    double d1;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    uint32_t loc_11c;
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
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 348u);

    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, 1u);
    g->esp = sp0 - 0x114u;
    cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 1u);
    d1 = cow_take_float(g);
    t2 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x104u, t2);
    g->ecx = t2;
    t3 = rd32(COW_IMG(0x106218b8u));
    t4 = rd32(COW_IMG(0x106218b4u));
    d5 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d1) * (double)(int32_t)t2) - (double)rdf32(COW_IMG(0x1033cb64u)));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3 - t4, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = (t7 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        ebx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        esi = t6;
    }
    else
    {
        ecx = (t7 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        ebx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        esi = t6;
        if (ebx == 2u) goto L_10241e8a;
        if (ebx != 3u) goto L_10241e8f;
L_10241e8a: ;
        ebx = 1u;
    }
L_10241e8f: ;
    if (ebx == 1u)
    {
        edi = COW_IMG(0x10388700u) + ebx * 6u;
        goto L_10241fa4;
    }
    edx = ebx * 3u;
    edi = COW_IMG(0x10388700u) + ebx * 6u;
    wr32(sp0 - 0x118u, arg2);
    wr32(sp0 - 0x11cu, COW_IMG(0x1036f9fcu));
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0x10cu;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036f9fcu), arg2, in_edi, in_esi);
    t9 = g->ecx;
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, 0x23u);
    t10 = (t8 & 0xffff0000u) | (uint16_t)(rd16(edi) + (uint16_t)esi);
    wr32(sp0 - 0x130u, t10);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t10, 0x23u, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x1036f9fcu), arg2, in_edi, in_esi);
    wr32(sp0 - 0x134u, arg3);
    wr32(sp0 - 0x138u, COW_IMG(0x1036f9fcu));
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = arg3;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036f9fcu), arg3, rd32(sp0 - 0x130u), 0x23u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x140u, 0x80808080u);
    wr32(sp0 - 0x144u, sp0 - 0x100u);
    wr32(sp0 - 0x148u, 0x33u);
    t13 = (t11 & 0xffff0000u) | (uint16_t)((uint16_t)esi + rd16(edi + 2u));
    wr32(sp0 - 0x14cu, t13);
    g->ecx = t13;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t13, 0x33u, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x1036f9fcu), arg3, rd32(sp0 - 0x130u), 0x23u);
    t14 = g->ecx;
    wr32(sp0 - 0x150u, arg2 - arg3);
    wr32(sp0 - 0x154u, COW_IMG(0x1036f9fcu));
    wr32(sp0 - 0x158u, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = t14;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x144u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036f9fcu), arg2 - arg3, rd32(sp0 - 0x14cu), 0x33u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x118u, 0x80808080u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, 0x43u);
    t17 = (t15 & 0xffff0000u) | (uint16_t)((uint16_t)esi + rd16(edi + 4u));
    wr32(sp0 - 0x124u, t17);
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t17, 0x43u, sp0 - 0x100u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x104u));
    if (ebx == 2u)
    {
        eax = arg2 - arg3 != 1u;
    }
    else
    {
        eax = ebx - 2u;
        if (eax == 1u)
        {
            eax = (int32_t)(arg2 - arg3) > 1;
        }
        else
        {
            eax = 0u;
        }
    }
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, 0x3f800000u);
    wr32(sp0 - 0x12cu, 0x3f800000u);
    t18 = (uint32_t)(int16_t)rd16(COW_IMG(0x10388730u) + ebx * 2u);
    wr32(sp0 - 0x130u, t18);
    t19 = esi + (uint32_t)(int16_t)rd16(COW_IMG(0x10388728u) + ebx * 2u);
    wr32(sp0 - 0x134u, t19);
    g->esp = sp0 - 0x114u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(rd32(rd32(arg1)) + (uint32_t)(int16_t)rd16(COW_IMG(0x10388718u) + eax * 2u + ebx * 4u) * 4u), 8, t19, t18, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return;
L_10241fa4: ;
    wr32(sp0 - 0x118u, arg2);
    wr32(sp0 - 0x11cu, COW_IMG(0x10388864u));
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->ebx = ebx;
    g->edx = arg2;
    g->esp = sp0 - 0x10cu;
    t20 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10388864u), arg2, in_edi, in_esi);
    t21 = g->edx;
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, 0x23u);
    t22 = (t21 & 0xffff0000u) | (uint16_t)(rd16(edi) + (uint16_t)esi);
    wr32(sp0 - 0x130u, t22);
    g->edx = t22;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t22, 0x23u, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x10388864u), arg2, in_edi, in_esi);
    t23 = g->edx;
    wr32(sp0 - 0x134u, arg3);
    wr32(sp0 - 0x138u, COW_IMG(0x10388840u));
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0x128u;
    t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10388840u), arg3, rd32(sp0 - 0x130u), 0x23u);
    t25 = g->ecx;
    wr32(sp0 - 0x140u, 0x80808080u);
    wr32(sp0 - 0x144u, sp0 - 0x100u);
    wr32(sp0 - 0x148u, 0x33u);
    t26 = (t24 & 0xffff0000u) | (uint16_t)((uint16_t)esi + rd16(edi + 2u));
    wr32(sp0 - 0x14cu, t26);
    g->ecx = t25;
    g->edx = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t26, 0x33u, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x10388840u), arg3, rd32(sp0 - 0x130u), 0x23u);
    t27 = g->ecx;
    t28 = g->edx;
    if (arg2 - arg3 == 1u)
    {
        ecx = t27;
        wr32(sp0 - 0x118u, 1u);
        wr32(sp0 - 0x11cu, COW_IMG(0x103887f8u));
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        edx = sp0 - 0x100u;
        loc_118 = 1u;
        loc_11c = COW_IMG(0x103887f8u);
    }
    else
    {
        edx = t28;
        wr32(sp0 - 0x118u, arg2 - arg3);
        wr32(sp0 - 0x11cu, COW_IMG(0x1038881cu));
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        ecx = sp0 - 0x100u;
        loc_118 = arg2 - arg3;
        loc_11c = COW_IMG(0x1038881cu);
    }
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_11c, loc_118, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x118u, 0x80808080u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, 0x43u);
    t31 = (t29 & 0xffff0000u) | (uint16_t)((uint16_t)esi + rd16(edi + 4u));
    wr32(sp0 - 0x124u, t31);
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t31, 0x43u, sp0 - 0x100u, 0x80808080u, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10241e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10241e20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
