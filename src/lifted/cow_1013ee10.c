/* f_0x1013ee10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013ee10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013ee3du: ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x38u); goto E_1013ee3d;
    case 0x1013ee43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1013ee43;
    case 0x1013ee4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1013ee4d;
    case 0x1013ee54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1013ee54;
    case 0x1013ee65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1013ee65;
    case 0x1013ee7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ee7c;
    case 0x1013ee9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ee9d;
    case 0x1013eeb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013eeb8;
    case 0x1013eee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013eee6;
    case 0x1013eef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013eef2;
    case 0x1013ef02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef02;
    case 0x1013ef07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef07;
    case 0x1013ef0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef0c;
    case 0x1013ef10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef10;
    case 0x1013ef1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef1c;
    case 0x1013ef23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef23;
    case 0x1013ef5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef5f;
    case 0x1013ef68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013ef68;
    case 0x1013efc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1013efc2;
    case 0x1013efdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1013efdf;
    case 0x1013efe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1013efe2;
    default: break;
    }
#endif

    COW_AT(1013ee10)
    wr32(sp0 - 0x38u, in_ebx);
    t1 = rd16(self + 0x15cu);
    wr16(sp0 - 0x30u, 0u);
    wr16(sp0 - 0x2eu, 0u);
    wr16(sp0 - 0x2cu, 0u);
    wr16(sp0 - 0x2au, 0u);
    wr32(sp0 - 0x34u, 0u);
    if ((uint16_t)t1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        loc_38 = in_ebx;
    }
    else
    {
    COW_AT(1013ee3d)
        wr32(sp0 - 0x3cu, in_ebp);
        wr32(sp0 - 0x40u, in_esi);
        wr32(sp0 - 0x44u, in_edi);
        eax = 0u;
        edx = in_edx;
        edi = self + 0x1cu;
        loc_38 = in_ebx;
        loc_34 = 0u;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
L_1013ee43: ;
    COW_AT(1013ee43)
        if (rd16(edi + 4u) != 0xffffu)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 4u);
    COW_AT(1013ee54)
            t2 = (-((uint16_t)eax != 0u) & 0xffffbfa0u) - 0x7f7f7f80u;
            ebp = t2;
        }
        else
        {
    COW_AT(1013ee4d)
            ebp = 0x80404040u;
        }
    COW_AT(1013ee65)
        wr32(sp0 - 0x48u, rd16(edi));
        g->eax = rd16(edi);
        t3 = rd16(edi);
        t4 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x44u;
        t5 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t4, 1, t3);
        t6 = g->ecx;
        if (t5 == 0u)
        {
            ecx = t6;
            esi = t5;
        }
        else
        {
            eax = t5;
            esi = t5;
    COW_AT(1013ee7c)
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, 1u);
            t7 = rd32(sp0 - 0x34u) + 1u;
            wr32(sp0 - 0x50u, t7);
            wr32(sp0 - 0x54u, sp0 - 0x30u);
            g->ebx = self;
            g->edi = edi;
            g->edx = sp0 - 0x30u;
            t8 = rd32(self + 8u);
            g->esp = sp0 - 0x44u;
            cow_thiscall(g, COW_IMG(0x10118900u), t8, 4, sp0 - 0x30u, t7, 1u, 1u);
            t9 = g->ecx;
            t10 = g->edx;
            if (rd32(esi + 0x14c8u) == 0u)
            {
                ecx = t9;
            }
            else
            {
                eax = rd32(esi + 0x14c8u);
                edx = t10;
    COW_AT(1013ee9d)
                wr32(sp0 - 0x48u, ebp);
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, eax);
                t11 = (uint32_t)(int16_t)rd16(sp0 - 0x2eu);
                wr32(sp0 - 0x54u, t11);
                t12 = (uint32_t)(int16_t)rd16(sp0 - 0x30u) + 0x14u;
                wr32(sp0 - 0x58u, t12);
                g->ecx = t12;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10129f00u), 11, t12, t11, eax, 0u, ebp, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t13 = g->ecx;
                ecx = t13;
            }
        }
    COW_AT(1013eeb8)
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, 0x80808080u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 0x3f000000u);
        t14 = rd32(sp0 - 0x2eu);
        wr32(sp0 - 0x58u, t14);
        t15 = rd32(sp0 - 0x30u) + 2u;
        wr32(sp0 - 0x5cu, t15);
        t16 = (ecx & 0xffff0000u) | rd16(edi);
        wr32(sp0 - 0x60u, t16);
        g->eax = t15;
        g->edx = t14;
        t17 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x44u;
        t18 = cow_thiscall(g, COW_IMG(0x1015bd70u), t17, 7, t16, t15, t14, 0x3f000000u, 0u, 0x80808080u, 0u);
        t19 = g->ecx;
        t20 = g->edx;
        if (esi == 0u)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
        }
        else
        {
            eax = t18;
            ecx = t19;
    COW_AT(1013eee6)
            if (rd16(rd32(esi + 0x14c0u)) <= 1u)
            {
                edx = rd32(esi + 0x14c0u);
            }
            else
            {
                edx = rd32(esi + 0x14c0u);
    COW_AT(1013eef2)
                if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
                {
                    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
                    goto L_1013ef0c;
                }
                eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1013ef02)
                if (eax == 2u) goto L_1013ef1c;
    COW_AT(1013ef07)
                if (eax == 3u) goto L_1013ef1c;
L_1013ef0c: ;
    COW_AT(1013ef0c)
                if (eax != 0u) goto L_1013ef1c;
    COW_AT(1013ef10)
                esi = (uint32_t)(int16_t)rd16(self + 0x14u) + 0xa6u;
L_1013ef23: ;
    COW_AT(1013ef23)
                t21 = rd8(edi + 2u);
                wr32(sp0 - 0x48u, t21);
                wr32(sp0 - 0x4cu, COW_IMG(0x1036f9fcu));
                wr32(sp0 - 0x50u, sp0 - 0x28u);
                g->ebx = self;
                g->ecx = sp0 - 0x28u;
                g->esp = sp0 - 0x3cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x28u, COW_IMG(0x1036f9fcu), t21, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
                t22 = g->ecx;
                wr32(sp0 - 0x54u, 0x3f800000u);
                wr32(sp0 - 0x58u, 0x3f800000u);
                wr32(sp0 - 0x5cu, 1u);
                wr32(sp0 - 0x60u, 0x80808080u);
                wr32(sp0 - 0x64u, sp0 - 0x28u);
                t23 = rd32(sp0 - 0x2eu) + 2u;
                wr32(sp0 - 0x68u, t23);
                wr32(sp0 - 0x6cu, esi);
                g->eax = t23;
                g->edx = sp0 - 0x28u;
                g->esp = sp0 - 0x50u;
                t24 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t22, 7, esi, t23, sp0 - 0x28u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t25 = g->ecx;
                t26 = g->edx;
                eax = t24;
                ecx = t25;
                edx = t26;
            }
        }
    COW_AT(1013ef5f)
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t27 = cow_call_regs(g, COW_IMG(0x101cc330u), eax, g->ecx, g->edx, 1, 0);
        t28 = g->edx;
        if ((uint8_t)t27 == 0u)
        {
            edx = t28;
        }
        else
        {
            eax = t27;
    COW_AT(1013ef68)
            t29 = (uint32_t)(int16_t)rd16(edi + 0x1cu);
            wr32(sp0 - 0x48u, t29);
            wr32(sp0 - 0x4cu, COW_IMG(0x1036ff24u));
            wr32(sp0 - 0x50u, sp0 - 0x20u);
            g->ebx = self;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036ff24u), t29, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            wr32(sp0 - 0x54u, 0x80808080u);
            wr32(sp0 - 0x58u, sp0 - 0x20u);
            t30 = rd32(sp0 - 0x2eu) + 2u;
            wr32(sp0 - 0x5cu, t30);
            t31 = rd32(sp0 - 0x30u) + 0xb4u;
            wr32(sp0 - 0x60u, t31);
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t31, t30, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x1036ff24u), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            wr32(sp0 - 0x64u, 0x80808080u);
            wr32(sp0 - 0x68u, edi + 0xcu);
            t32 = rd32(sp0 - 0x2eu) + 2u;
            wr32(sp0 - 0x6cu, t32);
            t33 = rd32(sp0 - 0x30u) + 0xd7u;
            wr32(sp0 - 0x70u, t33);
            g->edx = t33;
            g->esp = sp0 - 0x60u;
            cow_cdecl(g, COW_IMG(0x101ca180u), 4, t33, t32, edi + 0xcu, 0x80808080u);
            t34 = g->edx;
            edx = t34;
        }
    COW_AT(1013efc2)
        t35 = rd32(sp0 - 0x34u) + 1u;
        t36 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x34u, t35);
        if ((int32_t)(t36 + 1u) < (int32_t)rd16(self + 0x15cu))
        {
            eax = t35;
            edi = edi + 0x20u;
            loc_38 = rd32(sp0 - 0x38u);
            loc_34 = t35;
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            goto L_1013ee43;
        }
        eax = t35;
    COW_AT(1013efdf)
        ebp = rd32(sp0 - 0x3cu);
        esi = rd32(sp0 - 0x40u);
        edi = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
    }
    COW_AT(1013efe2)
    g->ebx = loc_38;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1013ef1c: ;
    COW_AT(1013ef1c)
    esi = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x12u;
    goto L_1013ef23;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013ee10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013ee3du:
    {
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->eax = 0u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1013ee43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ee4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ee54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ee65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ee7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ee9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1013eeb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013eee6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013eef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013ef68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013efc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013efdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1013efe2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ee10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013ee10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
