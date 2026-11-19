/* f_0x101486b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101486b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t2;
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
    case 0x101486c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x30u); goto E_101486c3;
    case 0x101486dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_101486db;
    case 0x10148728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_10148728;
    case 0x1014873bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_1014873b;
    case 0x10148747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_10148747;
    case 0x101487c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101487c5;
    case 0x101487c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101487c8;
    case 0x101487d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_101487d9;
    case 0x101487f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_101487f7;
    case 0x101487fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_101487fa;
    default: break;
    }
#endif

    COW_AT(101486b0)
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
    COW_AT(101486c3)
        wr32(sp0 - 0x34u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        wr32(sp0 - 0x14u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t4;
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_30 = in_esi;
        }
        else
        {
            eax = t4;
            edx = t4;
            loc_14 = t4;
    COW_AT(101486db)
            wr32(sp0 - 0x34u, in_ebx);
            wr32(sp0 - 0x38u, in_ebp);
            wr32(sp0 - 0x3cu, in_edi);
            t5 = rd16(self + 0x18u);
            t6 = rd16(self + 0x1au);
            wr16(sp0 - 0x24u, (uint16_t)(((eax & 0xffff0000u) | t5) + 0xau));
            wr16(sp0 - 0x22u, (uint16_t)(((eax & 0xffff0000u) | t5) + 0x82u));
            wr16(sp0 - 0x20u, (uint16_t)(((eax & 0xffff0000u) | t5) + 0x6eu));
            wr32(sp0 - 0x2cu, 0u);
            wr16(sp0 - 0x1eu, (uint16_t)(((eax & 0xffff0000u) | t5) + 0xe6u));
            wr32(sp0 - 0x1cu, 0x3c0u);
            wr32(sp0 - 0x28u, COW_IMG(0x104856e4u));
            ecx = 0x3c0u;
            ebx = ((in_ebx | t6) & 0xffff0000u) | (uint16_t)((uint16_t)t6 + 0x13u);
            edi = in_edi;
            loc_34 = in_ebx;
            loc_38 = in_ebp;
            loc_3c = in_edi;
            loc_2c = 0u;
            loc_1c = 0x3c0u;
            loc_28 = COW_IMG(0x104856e4u);
L_10148728: ;
    COW_AT(10148728)
            t7 = (edi & 0xffff0000u) | rd16(loc_28);
            if ((t7 & 0x8000u) == 0u)
            {
                eax = t7 & 0x8000u;
                edi = t7;
                goto L_10148747;
            }
            eax = t7 & 0x8000u;
            edi = t7;
    COW_AT(1014873b)
            if ((edi & 0x7fffu) == 0u) goto L_101487d9;
L_10148747: ;
    COW_AT(10148747)
            wr32(sp0 - 0x40u, 0u);
            t8 = (-((uint16_t)eax != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
            wr32(sp0 - 0x18u, t8);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0x80808080u);
            wr32(sp0 - 0x4cu, (uint32_t)(int16_t)ebx);
            t9 = (uint32_t)(int16_t)rd16(sp0 + (uint32_t)(int16_t)(loc_2c & 1u) * 2u - 0x24u);
            wr32(sp0 - 0x50u, t9);
            g->edx = rd32(edx);
            t10 = rd32(ecx + rd32(edx));
            t11 = rd32(edx);
            g->esp = sp0 - 0x3cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t10, 5, t9, (uint32_t)(int16_t)ebx, 0x80808080u, 0u, 0u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x40u, edi & 0x7fffu);
            wr32(sp0 - 0x44u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x48u, sp0 - 0x10u);
            g->ebx = ebx;
            g->eax = sp0 - 0x10u;
            g->esp = sp0 - 0x34u;
            t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), edi & 0x7fffu, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            wr32(sp0 - 0x4cu, 0x3f800000u);
            wr32(sp0 - 0x50u, 0x3f800000u);
            wr32(sp0 - 0x54u, 1u);
            t15 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x58u, t15);
            wr32(sp0 - 0x5cu, sp0 - 0x10u);
            wr32(sp0 - 0x60u, ebx);
            t16 = (t14 & 0xffff0000u) | rd16(sp0 + (uint32_t)(int16_t)(loc_2c & 1u) * 2u - 0x20u);
            wr32(sp0 - 0x64u, t16);
            g->esp = sp0 - 0x48u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t15, 7, t16, ebx, sp0 - 0x10u, t15, 1u, 0x3f800000u, 0x3f800000u);
            if (!(loc_2c & 1u))
            {
                edi = edi & 0x7fffu;
            }
            else
            {
                edi = edi & 0x7fffu;
    COW_AT(101487c5)
                ebx = ebx + 0xeu;
            }
    COW_AT(101487c8)
            t17 = rd32(sp0 - 0x2cu) + 1u;
            wr32(sp0 - 0x2cu, t17);
            eax = t17;
            ecx = rd32(sp0 - 0x1cu);
            edx = rd32(sp0 - 0x14u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_2c = t17;
            loc_28 = rd32(sp0 - 0x28u);
L_101487d9: ;
    COW_AT(101487d9)
            wr32(sp0 - 0x1cu, ecx + 4u);
            wr32(sp0 - 0x28u, loc_28 + 2u);
            if ((int32_t)(ecx + 4u) < 1024)
            {
                loc_1c = ecx + 4u;
                ecx = ecx + 4u;
                loc_28 = loc_28 + 2u;
                goto L_10148728;
            }
    COW_AT(101487f7)
            ebx = loc_34;
            ebp = loc_38;
            edi = loc_3c;
            loc_30 = rd32(sp0 - 0x30u);
        }
    }
    COW_AT(101487fa)
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
int cow_entry_fix_101486b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101486c3u:
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
    case 0x101486dbu:
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
    case 0x10148728u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014873bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10148747u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101487c5u:
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
    case 0x101487c8u:
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
    case 0x101487d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101487f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101487fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
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
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
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
void cow_adapter_101486b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101486b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
