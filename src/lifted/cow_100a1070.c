/* f_0x100a1070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1070(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24c;
    uint32_t loc_250;
    uint32_t loc_254;
    uint32_t loc_258;
    uint32_t loc_25c;
    uint32_t loc_260;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 640u);

    wr32(sp0 - 0x250u, in_ebx);
    wr32(sp0 - 0x254u, in_ebp);
    wr32(sp0 - 0x258u, in_esi);
    wr32(sp0 - 0x25cu, in_edi);
    esi = COW_IMG(0x10488d08u);
    edi = sp0 - 0x200u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(arg3 + 0x10u);
    t2 = rd32(sp0 - 0x24cu);
    wr32(COW_IMG(0x10488d08u), t1);
    t3 = rd32(arg3 + 0x14u);
    wr32(COW_IMG(0x10488d0cu), t3);
    t4 = rd32(arg3 + 0x18u);
    wr32(COW_IMG(0x10488d10u), t4);
    t5 = rd32(arg3 + 0x1cu);
    wr32(COW_IMG(0x10488d14u), t5);
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
        ecx = t4;
        edx = t5;
        loc_24c = ((t2 & 0xffff0000u) | 0x200u) & 0xff00ffffu;
        goto L_100a112c;
    }
    edx = t5;
    loc_24c = ((t2 & 0xffff0000u) | 0x200u) & 0xff00ffffu;
    t6 = (edx & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x260u, (uint16_t)t6);
    g->ecx = (uint16_t)t6;
    g->edx = t6;
    g->esp = sp0 - 0x25cu;
    t7 = cow_call_regs(g, COW_IMG(0x10086fc0u), arg3 + 0x10u, g->ecx, g->edx, 1, 1, (uint16_t)t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_100a10f2;
    }
    eax = t7;
    edx = t9;
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax;
L_100a10f2: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a110a;
    }
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a110a: ;
    t10 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x248u, t10);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        goto L_100a119f;
    }
    eax = rd32(arg3 + 4u);
    ecx = rd32(ecx + 0x78u);
    if (ecx == 0u) goto L_100a119f;
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
L_100a1133: ;
    t11 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x260u, t11);
    wr32(sp0 - 0x264u, 8u);
    g->ecx = t11;
    g->esp = sp0 - 0x25cu;
    t12 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 8u, t11);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        ebp = t12;
        goto L_100a115b;
    }
    eax = t12;
    edx = t14;
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a112c: ;
    wr16(COW_IMG(0x104804ccu), 0u);
    loc_250 = in_ebx;
    loc_254 = in_ebp;
    loc_258 = in_esi;
    loc_25c = in_edi;
    goto L_100a1133;
L_100a115b: ;
    t15 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t15);
    t16 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t16);
    if (rd8(arg3 + 0xcu) >= 8u)
    {
        eax = (((eax & 0xffff0000u) | t16) & 0xffffff00u) | rd8(arg3 + 0xcu);
        edx = (edx & 0xffff0000u) | t15;
    }
    else
    {
        eax = (((eax & 0xffff0000u) | t16) & 0xffffff00u) | rd8(arg3 + 0xcu);
        edx = (edx & 0xffff0000u) | t15;
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1035b944u) + (uint8_t)eax);
        eax = (uint8_t)eax;
    }
    if (((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x40u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
        goto L_100a11ac;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
L_100a119f: ;
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a11ac: ;
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
        if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            edx = rd16(arg3 + 8u);
            t20 = -(rd8(arg3 + 0x10u) != 0u) & arg3 + 0x10u;
            wr32(sp0 - 0x260u, t20);
            wr32(sp0 - 0x264u, 0u);
            wr32(sp0 - 0x268u, 0u);
            wr32(sp0 - 0x26cu, sp0 - 0x24cu);
            eax = t20;
            ecx = sp0 - 0x24cu;
            loc_260 = t20;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            edx = rd16(arg3 + 8u);
            if (rd16(eax + 0x210u) == 0u)
            {
                wr32(sp0 - 0x260u, eax + 0x7cu);
                wr32(sp0 - 0x264u, 0u);
                wr32(sp0 - 0x268u, 0u);
                wr32(sp0 - 0x26cu, sp0 - 0x24cu);
                loc_260 = eax + 0x7cu;
                eax = sp0 - 0x24cu;
            }
            else
            {
                wr32(sp0 - 0x260u, eax + 0x214u);
                wr32(sp0 - 0x264u, 0u);
                wr32(sp0 - 0x268u, 0u);
                wr32(sp0 - 0x26cu, sp0 - 0x24cu);
                loc_260 = eax + 0x214u;
                eax = sp0 - 0x24cu;
            }
        }
        wr32(sp0 - 0x270u, 1u);
        wr32(sp0 - 0x274u, ebp);
        wr32(sp0 - 0x278u, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x25cu;
        t21 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), ebp, 1u, sp0 - 0x24cu, 0u, 0u, loc_260);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    else
    {
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x210u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            eax = eax + 0x7cu;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            eax = eax + 0x214u;
        }
        wr32(sp0 - 0x260u, eax);
        wr32(sp0 - 0x264u, COW_IMG(0x1035bb48u));
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        g->ebx = 0u;
        g->esp = sp0 - 0x254u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1035bb48u), eax, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
        t17 = (arg3 & 0xffff0000u) | rd16(arg3 + 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u) + 0x210u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u);
            edx = (uint16_t)t17;
            esi = t17;
            eax = eax + 0x7cu;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u);
            edx = (uint16_t)t17;
            esi = t17;
            eax = eax + 0x214u;
        }
        wr32(sp0 - 0x260u, eax);
        wr32(sp0 - 0x264u, esi);
        wr32(sp0 - 0x268u, 1u);
        wr32(sp0 - 0x26cu, 0u);
        wr32(sp0 - 0x270u, sp0 - 0x24cu);
        wr32(sp0 - 0x274u, 1u);
        wr32(sp0 - 0x278u, ebp);
        wr32(sp0 - 0x27cu, sp0 - 0x240u);
        g->esp = sp0 - 0x25cu;
        t18 = cow_call_regs(g, COW_IMG(0x100ad5e0u), sp0 - 0x24cu, sp0 - 0x240u, edx, 1, 8, sp0 - 0x240u, ebp, 1u, sp0 - 0x24cu, 0u, 1u, esi, eax);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    esi = sp0 - 0x200u;
    edi = COW_IMG(0x10488d08u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
