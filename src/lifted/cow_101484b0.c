/* f_0x101484b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101484b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
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
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101484c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x30u); goto E_101484c3;
    case 0x101484d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_101484d9;
    case 0x1014851eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); goto E_1014851e;
    case 0x10148523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); goto E_10148523;
    case 0x10148528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); goto E_10148528;
    case 0x1014852cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); goto E_1014852c;
    case 0x1014853eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); goto E_1014853e;
    case 0x1014855bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1014855b;
    case 0x1014856eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1014856e;
    case 0x1014857au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1014857a;
    case 0x101485fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101485fa;
    case 0x101485ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101485ff;
    case 0x10148610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10148610;
    case 0x1014862eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1014862e;
    case 0x10148631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10148631;
    default: break;
    }
#endif

    COW_AT(101484b0)
    wr32(sp0 - 0x30u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_30 = in_esi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101484c3)
        wr32(sp0 - 0x34u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t5 = g->edx;
        wr32(sp0 - 0x14u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_30 = in_esi;
        }
        else
        {
            eax = t4;
            loc_14 = t4;
    COW_AT(101484d9)
            wr32(sp0 - 0x34u, in_ebx);
            wr32(sp0 - 0x38u, in_ebp);
            wr32(sp0 - 0x3cu, in_edi);
            t6 = rd16(self + 0x18u);
            wr16(sp0 - 0x1cu, (uint16_t)(((eax & 0xffff0000u) | t6) + 0xau));
            wr16(sp0 - 0x2cu, (uint16_t)(((eax & 0xffff0000u) | t6) + 0x6eu));
            t7 = rd32(COW_IMG(0x10456a28u));
            wr16(sp0 - 0x1au, (uint16_t)(((eax & 0xffff0000u) | t6) + 0x82u));
            t8 = rd8(t7 + 0x18u);
            wr16(sp0 - 0x2au, (uint16_t)(((eax & 0xffff0000u) | t6) + 0xe6u));
            wr32(sp0 - 0x24u, 0u);
            if ((int8_t)t8 >= 0)
            {
                eax = (eax & 0xffff0000u) | t6;
                edx = rd32(t7 + 8u);
                goto L_10148528;
            }
            eax = (eax & 0xffff0000u) | t6;
            edx = rd32(t7 + 8u);
    COW_AT(1014851e)
            if (edx == 2u) goto L_1014852c;
    COW_AT(10148523)
            if (edx == 3u) goto L_1014852c;
L_10148528: ;
    COW_AT(10148528)
            if (edx == 0u) goto L_1014853e;
L_1014852c: ;
    COW_AT(1014852c)
            wr16(sp0 - 0x2cu, (uint16_t)(eax + 0x78u));
            wr16(sp0 - 0x2au, (uint16_t)(eax + 0xf0u));
L_1014853e: ;
    COW_AT(1014853e)
            wr32(sp0 - 0x18u, 0x344u);
            t9 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x13u);
            wr32(sp0 - 0x28u, t9);
            wr32(sp0 - 0x20u, COW_IMG(0x104856a6u));
            ecx = 0x344u;
            edx = t9;
            edi = in_edi;
            loc_34 = in_ebx;
            loc_38 = in_ebp;
            loc_3c = in_edi;
            loc_24 = 0u;
            loc_18 = 0x344u;
            loc_28 = t9;
            loc_20 = COW_IMG(0x104856a6u);
L_1014855b: ;
    COW_AT(1014855b)
            t10 = (edi & 0xffff0000u) | rd16(loc_20);
            if ((t10 & 0x8000u) == 0u)
            {
                eax = t10 & 0x8000u;
                edi = t10;
                goto L_1014857a;
            }
            eax = t10 & 0x8000u;
            edi = t10;
    COW_AT(1014856e)
            if ((edi & 0x7fffu) == 0u) goto L_10148610;
L_1014857a: ;
    COW_AT(1014857a)
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0x80808080u);
            t11 = (-((uint16_t)eax != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
            wr32(sp0 - 0x4cu, (uint32_t)(int16_t)edx);
            t12 = (uint32_t)(int16_t)rd16(sp0 + (uint32_t)(int16_t)(loc_24 & 1u) * 2u - 0x1cu);
            wr32(sp0 - 0x50u, t12);
            g->eax = rd32(loc_14);
            g->edx = loc_14;
            t13 = rd32(loc_14);
            g->esp = sp0 - 0x3cu;
            t14 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(ecx + t13), 5, t12, (uint32_t)(int16_t)edx, 0x80808080u, 0u, 0u);
            t15 = g->edx;
            wr32(sp0 - 0x40u, edi & 0x7fffu);
            wr32(sp0 - 0x44u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x48u, sp0 - 0x10u);
            g->ebx = t11;
            g->ecx = sp0 - 0x10u;
            g->esp = sp0 - 0x34u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), edi & 0x7fffu, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t16 = g->ecx;
            wr32(sp0 - 0x4cu, 0x3f800000u);
            wr32(sp0 - 0x50u, 0x3f800000u);
            wr32(sp0 - 0x54u, 1u);
            wr32(sp0 - 0x58u, t11);
            wr32(sp0 - 0x5cu, sp0 - 0x10u);
            t17 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t17);
            t18 = (t16 & 0xffff0000u) | rd16(sp0 + (uint32_t)(int16_t)(loc_24 & 1u) * 2u - 0x2cu);
            wr32(sp0 - 0x64u, t18);
            g->esp = sp0 - 0x48u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t18, 7, t18, t17, sp0 - 0x10u, t11, 1u, 0x3f800000u, 0x3f800000u);
            if (!(loc_24 & 1u))
            {
                edi = edi & 0x7fffu;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                edi = edi & 0x7fffu;
    COW_AT(101485fa)
                t19 = rd32(sp0 - 0x28u) + 0xeu;
                wr32(sp0 - 0x28u, t19);
                loc_28 = t19;
            }
    COW_AT(101485ff)
            t20 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t20);
            eax = t20;
            ecx = rd32(sp0 - 0x18u);
            edx = loc_28;
            loc_34 = rd32(sp0 - 0x34u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_24 = t20;
            loc_20 = rd32(sp0 - 0x20u);
L_10148610: ;
    COW_AT(10148610)
            wr32(sp0 - 0x18u, ecx + 4u);
            wr32(sp0 - 0x20u, loc_20 + 2u);
            if ((int32_t)(ecx + 4u) < 960)
            {
                loc_18 = ecx + 4u;
                ecx = ecx + 4u;
                loc_20 = loc_20 + 2u;
                goto L_1014855b;
            }
    COW_AT(1014862e)
            ebx = loc_34;
            ebp = loc_38;
            edi = loc_3c;
            loc_30 = rd32(sp0 - 0x30u);
        }
    }
    COW_AT(10148631)
    g->ebx = ebx;
    g->esi = loc_30;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101484b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101484c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101484d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1014851eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, in_edi);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10148523u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, in_edi);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10148528u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, in_edi);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014852cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, in_edi);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014853eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, in_edi);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014855bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014856eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014857au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101485fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101485ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10148610u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014862eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10148631u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101484b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101484b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
