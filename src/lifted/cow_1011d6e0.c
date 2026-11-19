/* f_0x1011d6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1011d6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011d6f1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x1cu); goto E_1011d6f1;
    case 0x1011d708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1011d708;
    case 0x1011d722u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d722;
    case 0x1011d731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d731;
    case 0x1011d736u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d736;
    case 0x1011d73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d73b;
    case 0x1011d73fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d73f;
    case 0x1011d746u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d746;
    case 0x1011d74eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d74e;
    case 0x1011d753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d753;
    case 0x1011d756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d756;
    case 0x1011d758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d758;
    case 0x1011d75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d75f;
    case 0x1011d761u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d761;
    case 0x1011d768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d768;
    case 0x1011d797u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d797;
    case 0x1011d7c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d7c1;
    case 0x1011d7dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011d7dc;
    case 0x1011d7dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1011d7df;
    default: break;
    }
#endif

    COW_AT(1011d6e0)
    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(arg3) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        loc_1c = in_edi;
    }
    else
    {
    COW_AT(1011d6f1)
        wr32(sp0 - 0x20u, in_ebx);
        wr32(sp0 - 0x24u, in_ebp);
        wr32(sp0 - 0x28u, in_esi);
        t1 = rd16(sp0 + 4u);
        wr32(sp0 + 4u, arg5 + 0x10u);
        eax = arg5 + 0x10u;
        ecx = self;
        edx = in_edx;
        ebx = (uint32_t)(int16_t)t1;
        ebp = arg2;
        edi = arg3;
        loc_1c = in_edi;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
L_1011d708: ;
    COW_AT(1011d708)
        wr32(sp0 - 0x2cu, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x1011d350u), ecx, 3, edi, loc_28, loc_24);
        t3 = g->edx;
        wr32(sp0 - 0x30u, arg4);
        wr32(sp0 - 0x34u, edi);
        g->esp = sp0 - 0x2cu;
        t4 = cow_call_regs(g, COW_IMG(0x1011d440u), g->eax, g->ecx, t3, 1, 2, edi, arg4);
        t5 = g->edx;
        if ((int32_t)t4 >= (int32_t)t2)
        {
            eax = t4;
            edx = t5;
            esi = t2;
        }
        else
        {
            eax = t4;
    COW_AT(1011d722)
            if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                edx = rd32(COW_IMG(0x10456a28u));
                goto L_1011d73b;
            }
            ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = rd32(COW_IMG(0x10456a28u));
    COW_AT(1011d731)
            if (ecx == 2u) goto L_1011d73f;
    COW_AT(1011d736)
            if (ecx == 3u) goto L_1011d73f;
L_1011d73b: ;
    COW_AT(1011d73b)
            if (ecx == 0u) goto L_1011d75f;
L_1011d73f: ;
    COW_AT(1011d73f)
            if ((int32_t)(eax - 1u) < 0) goto L_1011d75f;
            ecx = eax - 1u;
L_1011d746: ;
    COW_AT(1011d746)
            if (rd8(ecx + edi) == 0x20u)
            {
                edx = (edx & 0xffffff00u) | rd8(ecx + edi);
                goto L_1011d758;
            }
            edx = (edx & 0xffffff00u) | rd8(ecx + edi);
    COW_AT(1011d74e)
            if ((uint8_t)edx == 0x2du) goto L_1011d758;
    COW_AT(1011d753)
            if ((int32_t)(ecx - 1u) >= 0)
            {
                ecx = ecx - 1u;
                goto L_1011d746;
            }
    COW_AT(1011d756)
L_1011d75f: ;
    COW_AT(1011d75f)
            esi = eax;
        }
L_1011d761: ;
    COW_AT(1011d761)
        if (rd8(edi + esi - 1u) != 0xau)
        {
    COW_AT(1011d797)
            wr32(sp0 - 0x2cu, esi);
            wr32(sp0 - 0x30u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t13 = cow_thiscall(g, COW_IMG(0x1018d330u), sp0 - 0xcu, 2, edi, esi);
            t14 = g->edx;
            wr32(sp0 - 0x2cu, 0x80808080u);
            wr32(sp0 - 0x30u, 0u);
            g->edx = t14;
            t15 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 2, 0u, 0x80808080u);
            t16 = g->edx;
            wr32(sp0 - 0x34u, t15);
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
            wr32(sp0 - 0x3cu, ebx);
            g->edx = t16;
            g->esp = sp0 - 0x10u;
            t17 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, ebx, (uint32_t)(int16_t)ebp, t15, 0u, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t18 = g->edx;
            eax = t17;
            ecx = sp0 - 0xcu;
            edx = t18;
        }
        else
        {
    COW_AT(1011d768)
            wr32(sp0 - 0x2cu, esi - 1u);
            wr32(sp0 - 0x30u, edi);
            g->eax = eax;
            g->edx = esi - 1u;
            g->esp = sp0 - 0x28u;
            t6 = cow_thiscall(g, COW_IMG(0x1018d330u), sp0 - 0x18u, 2, edi, esi - 1u);
            t7 = g->edx;
            wr32(sp0 - 0x2cu, 0x80808080u);
            wr32(sp0 - 0x30u, 0u);
            g->edx = t7;
            t8 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x18u, 2, 0u, 0x80808080u);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(sp0 - 0x34u, t8);
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
            wr32(sp0 - 0x3cu, ebx);
            g->eax = (uint32_t)(int16_t)ebp;
            g->edx = t10;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, ebx, (uint32_t)(int16_t)ebp, t8, 0u, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t12 = g->edx;
            eax = t11;
            ecx = sp0 - 0x18u;
            edx = t12;
        }
    COW_AT(1011d7c1)
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t19 = cow_fastcall(g, COW_IMG(0x1018d250u), ecx, edx, 0);
        t20 = g->edx;
        if (rd8(edi + esi) != 0u)
        {
            eax = (t19 & 0xffffff00u) | rd8(edi + esi);
            ecx = rd32(sp0 + 4u);
            edx = t20;
            ebp = ebp + rd32(sp0 + 4u);
            edi = edi + esi;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            goto L_1011d708;
        }
    COW_AT(1011d7dc)
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1011d7df)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_1c;
    g->ebp = ebp;
    return;
L_1011d758: ;
    COW_AT(1011d758)
    if ((int32_t)ecx >= 0)
    {
        esi = ecx + 1u;
        goto L_1011d761;
    }
    goto L_1011d75f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011d6e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011d6f1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1011d708u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d722u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d731u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d736u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d73bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d73fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d746u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d74eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d753u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d756u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d758u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d75fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d761u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d768u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d797u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d7c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1011d7dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011d7dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d6e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1011d6e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
