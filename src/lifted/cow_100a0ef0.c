/* f_0x100a0ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a0ef0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    if ((rd16(arg3 + 0xau) & 0x8000u) != 0u)
    {
        loc_4c = ((rd32(sp0 - 0x4cu) & 0xffff00ffu) | 0x200u) & 0xff00ff00u;
        goto L_100a0f69;
    }
    loc_4c = ((rd32(sp0 - 0x4cu) & 0xffff00ffu) | 0x200u) & 0xff00ff00u;
    t1 = (in_edx & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x60u, (uint16_t)t1);
    g->ecx = (uint16_t)t1;
    g->edx = t1;
    g->esp = sp0 - 0x5cu;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_100a0f36;
    }
    eax = t2;
    edx = t4;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax;
L_100a0f36: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a0f4b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0f4b: ;
    t5 = rd32(eax + 0x74u);
    wr32(sp0 - 0x48u, t5);
    if (rd32(eax + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(eax + 0x78u);
        goto L_100a0fd7;
    }
    eax = rd32(eax + 0x78u);
    ecx = rd32(arg3 + 4u);
    if (eax == 0u) goto L_100a0fd7;
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
L_100a0f70: ;
    t6 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x60u, t6);
    wr32(sp0 - 0x64u, 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x5cu;
    t7 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t6, 1, 2, 8u, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebp = t7;
        goto L_100a0f95;
    }
    eax = t7;
    edx = t9;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0f69: ;
    wr16(COW_IMG(0x104804ccu), 0u);
    ecx = self;
    edx = in_edx;
    loc_50 = in_ebx;
    loc_54 = in_ebp;
    loc_58 = in_esi;
    loc_5c = in_edi;
    goto L_100a0f70;
L_100a0f95: ;
    t10 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t10);
    t11 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t11);
    if (rd8(arg3 + 0xcu) >= 8u)
    {
        eax = (((eax & 0xffff0000u) | t10) & 0xffffff00u) | rd8(arg3 + 0xcu);
        ecx = (ecx & 0xffff0000u) | t11;
    }
    else
    {
        eax = (((eax & 0xffff0000u) | t10) & 0xffffff00u) | rd8(arg3 + 0xcu);
        ecx = (ecx & 0xffff0000u) | t11;
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1035b944u) + (uint8_t)eax);
        eax = (uint8_t)eax;
    }
    if (((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x40u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
        goto L_100a0fe1;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
L_100a0fd7: ;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0fe1: ;
    if ((rd16(arg3 + 0xau) & 0x8000u) != 0u) goto L_100a1046;
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x210u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
        edi = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x214u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
        edi = eax + 0x7cu;
    }
    if (edi == 0u) goto L_100a105e;
    if (rd8(edi) == 0u) goto L_100a105e;
    wr32(sp0 - 0x60u, edi);
    wr32(sp0 - 0x64u, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->ebx = 0u;
    g->esp = sp0 - 0x54u;
    t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), edi, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    wr32(sp0 - 0x6cu, edi);
    t13 = (t12 & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x70u, t13);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, sp0 - 0x4cu);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, ebp);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    g->esp = sp0 - 0x68u;
    t14 = cow_call_regs(g, COW_IMG(0x100ad5e0u), t13, sp0 - 0x4cu, sp0 - 0x40u, 1, 8, sp0 - 0x40u, ebp, 1u, sp0 - 0x4cu, 0u, 1u, t13, edi);
    t15 = g->edx;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_100a1046: ;
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, sp0 - 0x4cu);
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, ebp);
    wr32(sp0 - 0x78u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x5cu;
    t16 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x4cu, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), ebp, 1u, sp0 - 0x4cu, 0u, 0u, 0u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_100a105e: ;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
