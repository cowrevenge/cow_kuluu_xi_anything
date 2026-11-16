/* f_0x100a1600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1600(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    t1 = (in_edx & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x58u, (uint16_t)t1);
    g->ecx = (uint16_t)t1;
    g->edx = t1;
    g->esp = sp0 - 0x54u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_100a1749;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_100a1749;
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    t5 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x48u, t5);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        goto L_100a1749;
    }
    eax = rd32(arg3 + 4u);
    ecx = rd32(ecx + 0x78u);
    if (ecx == 0u) goto L_100a1749;
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
    t6 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x58u, t6);
    wr32(sp0 - 0x5cu, 8u);
    g->ecx = t6;
    g->esp = sp0 - 0x54u;
    t7 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 8u, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t9;
        goto L_100a1749;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    edi = t7;
    t10 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t10);
    wr16(COW_IMG(0x104855aau), rd16(arg3 + 8u));
    wr8(COW_IMG(0x10488208u), 1u);
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
        edx = (edx & 0xffff0000u) | t10;
        goto L_100a1726;
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
        eax = eax + 0x214u;
    }
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), eax, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t11 = (arg3 & 0xffff0000u) | rd16(arg3 + 8u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u);
        esi = t11;
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u);
        esi = t11;
        eax = eax + 0x214u;
    }
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    g->esp = sp0 - 0x54u;
    t12 = cow_call_regs(g, COW_IMG(0x100ad5e0u), eax, sp0 - 0x4cu, sp0 - 0x40u, 1, 8, sp0 - 0x40u, edi, 1u, sp0 - 0x4cu, 0u, 1u, esi, eax);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_100a1726: ;
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, sp0 - 0x4cu);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x54u;
    t14 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x4cu, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), edi, 1u, sp0 - 0x4cu, 0u, 0u, 0u);
    t15 = g->edx;
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_100a1749: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
