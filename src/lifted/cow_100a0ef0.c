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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a0f15u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100a0f15;
    case 0x100a0f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a0f2e;
    case 0x100a0f36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0f36;
    case 0x100a0f41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a0f41;
    case 0x100a0f4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0f4b;
    case 0x100a0f5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0f5c;
    case 0x100a0f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0f60;
    case 0x100a0f69u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100a0f69;
    case 0x100a0f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_100a0f70;
    case 0x100a0f8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a0f8b;
    case 0x100a0f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0f95;
    case 0x100a0fb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0fb1;
    case 0x100a0fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0fc2;
    case 0x100a0fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0fc6;
    case 0x100a0fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a0fd7;
    case 0x100a0fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a0fe1;
    case 0x100a0fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a0fe7;
    case 0x100a1003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a1003;
    case 0x100a1006u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a1006;
    case 0x100a100au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a100a;
    case 0x100a100eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a100e;
    case 0x100a1046u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a1046;
    case 0x100a105eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a105e;
    default: break;
    }
#endif

    COW_AT(100a0ef0)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr8(sp0 - 0x4bu, 2u);
    t1 = rd16(arg3 + 0xau);
    wr8(sp0 - 0x4cu, 0u);
    wr8(sp0 - 0x4au, 0u);
    if ((t1 & 0x8000u) != 0u) goto L_100a0f69;
    COW_AT(100a0f15)
    t2 = (in_edx & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x60u, (uint16_t)t2);
    g->ecx = (uint16_t)t2;
    g->edx = t2;
    g->esp = sp0 - 0x5cu;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_100a0f36;
    }
    eax = t3;
    edx = t5;
    COW_AT(100a0f2e)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax;
L_100a0f36: ;
    COW_AT(100a0f36)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a0f4b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(100a0f41)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0f4b: ;
    COW_AT(100a0f4b)
    t6 = rd32(eax + 0x74u);
    wr32(sp0 - 0x48u, t6);
    if (rd32(eax + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(eax + 0x78u);
        goto L_100a0fd7;
    }
    eax = rd32(eax + 0x78u);
    ecx = rd32(arg3 + 4u);
    COW_AT(100a0f5c)
    if (eax == 0u) goto L_100a0fd7;
    COW_AT(100a0f60)
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
L_100a0f70: ;
    COW_AT(100a0f70)
    t7 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x60u, t7);
    wr32(sp0 - 0x64u, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x5cu;
    t8 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t7, 1, 2, 8u, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        ebp = t8;
        goto L_100a0f95;
    }
    eax = t8;
    edx = t10;
    COW_AT(100a0f8b)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0f69: ;
    COW_AT(100a0f69)
    wr16(COW_IMG(0x104804ccu), 0u);
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    loc_50 = in_ebx;
    loc_54 = in_ebp;
    loc_58 = in_esi;
    loc_5c = in_edi;
    goto L_100a0f70;
L_100a0f95: ;
    COW_AT(100a0f95)
    t11 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t11);
    t12 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t12);
    if (rd8(arg3 + 0xcu) >= 8u)
    {
        eax = (((eax & 0xffff0000u) | t11) & 0xffffff00u) | rd8(arg3 + 0xcu);
        ecx = (ecx & 0xffff0000u) | t12;
    COW_AT(100a0fc2)
        wr8(sp0 - 0x4cu, 0u);
    }
    else
    {
        eax = (((eax & 0xffff0000u) | t11) & 0xffffff00u) | rd8(arg3 + 0xcu);
        ecx = (ecx & 0xffff0000u) | t12;
    COW_AT(100a0fb1)
        t13 = rd8(COW_IMG(0x1035b944u) + (uint8_t)eax);
        wr8(sp0 - 0x4cu, (uint8_t)t13);
        eax = (uint8_t)eax;
        edx = (edx & 0xffffff00u) | t13;
    }
    COW_AT(100a0fc6)
    if (((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x40u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
        goto L_100a0fe1;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
L_100a0fd7: ;
    COW_AT(100a0fd7)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0fe1: ;
    COW_AT(100a0fe1)
    if ((rd16(arg3 + 0xau) & 0x8000u) != 0u) goto L_100a1046;
    COW_AT(100a0fe7)
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
    COW_AT(100a1003)
        edi = eax + 0x7cu;
    }
    COW_AT(100a1006)
    if (edi == 0u) goto L_100a105e;
    COW_AT(100a100a)
    if (rd8(edi) == 0u) goto L_100a105e;
    COW_AT(100a100e)
    wr32(sp0 - 0x60u, edi);
    wr32(sp0 - 0x64u, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), edi, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    wr32(sp0 - 0x6cu, edi);
    t15 = (t14 & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x70u, t15);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, sp0 - 0x4cu);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, ebp);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    g->esp = sp0 - 0x68u;
    t16 = cow_call_regs(g, COW_IMG(0x100ad5e0u), t15, sp0 - 0x4cu, sp0 - 0x40u, 1, 8, sp0 - 0x40u, ebp, 1u, sp0 - 0x4cu, 0u, 1u, t15, edi);
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100a1046: ;
    COW_AT(100a1046)
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, sp0 - 0x4cu);
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, ebp);
    wr32(sp0 - 0x78u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x5cu;
    t18 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x4cu, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), ebp, 1u, sp0 - 0x4cu, 0u, 0u, 0u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_100a105e: ;
    COW_AT(100a105e)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a0ef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a0f15u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100a0f36u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100a0f4bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f5cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f60u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f69u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f70u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0f8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100a0f95u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0fb1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0fc2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0fc6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0fd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100a0fe1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x100a0fe7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1003u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1006u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a100au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a100eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1046u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a105eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0ef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a0ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
