/* f_0x10162140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_10162140(Guest* g)
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
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10162153u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10162153;
    case 0x10162158u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10162158;
    case 0x1016216au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1016216a;
    case 0x1016218eu: ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1016218e;
    case 0x10162193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162193;
    case 0x1016219cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1016219c;
    case 0x101621abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101621ab;
    case 0x101621c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101621c6;
    case 0x101621d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101621d5;
    case 0x101621dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101621da;
    case 0x101621e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101621e0;
    case 0x101621e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101621e6;
    case 0x101621f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101621f6;
    case 0x10162203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10162203;
    case 0x10162212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162212;
    case 0x10162218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162218;
    case 0x10162223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10162223;
    case 0x1016222eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_1016222e;
    case 0x10162236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10162236;
    case 0x1016223cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1016223c;
    case 0x10162241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10162241;
    case 0x10162244u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162244;
    case 0x1016224du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1016224d;
    case 0x1016224eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1016224e;
    case 0x10162259u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162259;
    case 0x10162261u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162261;
    case 0x10162270u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162270;
    case 0x10162276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162276;
    case 0x1016227bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1016227b;
    case 0x10162291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10162291;
    case 0x10162294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162294;
    default: break;
    }
#endif

    COW_AT(10162140)
    wr32(sp0 - 0xcu, arg3);
    if (rd8(sp0 + 0x18u) != 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(sp0 + 0x18u);
    }
    else
    {
        eax = (arg3 & 0xffffff00u) | rd8(sp0 + 0x18u);
    COW_AT(10162153)
        wr8(sp0 + 0x18u, 0x80u);
    }
    COW_AT(10162158)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    t1 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10161ff0u), 2, sp0 - 0xcu, t1);
    t2 = g->ecx;
    ecx = t2;
    ebx = t1;
    COW_AT(1016216a)
    wr32(sp0 - 8u, (uint32_t)(int16_t)arg4);
    wr32(sp0 - 4u, (uint32_t)(int16_t)arg5);
    if ((int16_t)arg2 <= 0)
    {
        eax = (uint32_t)(int16_t)arg5;
        edx = (uint32_t)(int16_t)arg4;
        edi = in_edi;
        loc_8 = (uint32_t)(int16_t)arg4;
        loc_4 = (uint32_t)(int16_t)arg5;
    }
    else
    {
    COW_AT(1016218e)
        wr32(sp0 - 0x1cu, in_edi);
        eax = (uint32_t)(int16_t)arg5;
        edx = (uint32_t)(int16_t)arg4;
        esi = 0u;
        loc_1c = in_edi;
        loc_8 = (uint32_t)(int16_t)arg4;
        loc_4 = (uint32_t)(int16_t)arg5;
L_10162193: ;
    COW_AT(10162193)
        if ((int16_t)rd16(arg1 + esi * 2u) < 0)
        {
            eax = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
    COW_AT(101621da)
            if ((int16_t)eax > -512) goto L_10162212;
    COW_AT(101621e0)
            if ((uint16_t)eax != 0x200u)
            {
    COW_AT(101621f6)
                wr32(sp0 - 0x20u, 0xfffffe00u - eax);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x1cu;
                t13 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, 0xfffffe00u - eax, 1, 1, 0xfffffe00u - eax);
                t14 = g->ecx;
                t15 = g->edx;
                eax = t13;
                ecx = t14;
                edx = t15;
    COW_AT(10162203)
                wr32(sp0 - 0xcu, eax);
                wr32(sp0 - 0x20u, ebx);
                wr32(sp0 - 0x24u, sp0 - 0xcu);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = ebx;
                loc_8 = rd32(sp0 - 8u);
                loc_4 = rd32(sp0 - 4u);
                loc_c = eax;
                eax = sp0 - 0xcu;
            }
            else
            {
    COW_AT(101621e6)
                wr32(sp0 - 0x20u, ebx);
                wr32(sp0 - 0xcu, arg3);
                wr32(sp0 - 0x24u, sp0 - 0xcu);
                eax = sp0 - 0xcu;
                ecx = arg3;
                loc_20 = ebx;
                loc_c = arg3;
            }
L_1016223c: ;
    COW_AT(1016223c)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t18 = cow_cdecl(g, COW_IMG(0x10161ff0u), 2, sp0 - 0xcu, loc_20);
            t19 = g->ecx;
            t20 = g->edx;
            eax = t18;
            ecx = t19;
            edx = t20;
    COW_AT(10162241)
            loc_1c = rd32(sp0 - 0x1cu);
            loc_8 = rd32(sp0 - 8u);
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
    COW_AT(1016219c)
            wr32(sp0 - 0x20u, loc_4);
            wr32(sp0 - 0x24u, loc_8);
            g->ecx = loc_4;
            g->edx = loc_8;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x1011bf20u), 2, loc_8, loc_4);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
    COW_AT(101621ab)
            wr32(sp0 - 0x28u, 0x3f800000u);
            wr32(sp0 - 0x2cu, 0x3f800000u);
            wr32(sp0 - 0x30u, 0x44u);
            t5 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x34u, t5);
            t6 = (ecx & 0xffff0000u) | rd16(arg1 + esi * 2u);
            wr32(sp0 - 0x38u, t6);
            g->ebx = ebx;
            g->eax = t5;
            g->ecx = t6;
            g->esp = sp0 - 0x24u;
            t7 = cow_call_regs(g, COW_IMG(0x1011bf40u), g->eax, g->ecx, edx, 1, 5, t6, t5, 0x44u, 0x3f800000u, 0x3f800000u);
            t8 = g->ecx;
            eax = t7;
            ecx = t8;
    COW_AT(101621c6)
            wr32(sp0 - 0x3cu, sp0 - 8u);
            t9 = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
            wr32(sp0 - 0x40u, t9);
            g->ecx = ecx;
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0x38u;
            t10 = cow_call_regs(g, COW_IMG(0x1011d840u), t9, g->ecx, g->edx, 1, 2, t9, sp0 - 8u);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
    COW_AT(101621d5)
            loc_1c = rd32(sp0 - 0x1cu);
            loc_8 = rd32(sp0 - 8u);
            loc_4 = rd32(sp0 - 4u);
        }
L_10162244: ;
    COW_AT(10162244)
        if ((int32_t)(esi + 1u) < (int16_t)arg2)
        {
            esi = esi + 1u;
            goto L_10162193;
        }
    COW_AT(1016224d)
        edi = loc_1c;
    }
    COW_AT(1016224e)
    if ((uint8_t)arg7 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg7;
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(sp0 - 0x18u);
    }
    else
    {
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(sp0 - 0x18u);
    COW_AT(10162259)
        if (arg8 == 0u) goto L_10162276;
    COW_AT(10162261)
        if ((int32_t)((uint32_t)(int16_t)rd16(arg8 + 4u) - 0xcu) >= (int32_t)loc_8) goto L_10162276;
        eax = (uint32_t)(int16_t)rd16(arg8 + 4u) - 0xcu;
    COW_AT(10162270)
        wr32(sp0 - 8u, eax);
        loc_8 = eax;
L_1016227b: ;
    COW_AT(1016227b)
        wr32(sp0 - 0x10u, loc_4 + 4u);
        wr32(sp0 - 0x14u, loc_8);
        wr32(sp0 - 4u, loc_4 + 4u);
        g->eax = loc_4 + 4u;
        g->ecx = loc_8;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_cdecl(g, COW_IMG(0x101622a0u), 2, loc_8, loc_4 + 4u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(10162291)
    }
    COW_AT(10162294)
    g->esp = sp0;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101620d0u), eax, ecx, edx);
L_10162212: ;
    COW_AT(10162212)
    if ((int16_t)eax > -256) goto L_10162244;
    COW_AT(10162218)
    wr32(sp0 - 0x20u, eax + 0x100u);
    g->eax = eax + 0x100u;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x10161fd0u), 1, eax + 0x100u);
    t17 = g->ecx;
    eax = t16;
    ecx = t17;
    COW_AT(10162223)
    wr32(sp0 - 0xcu, eax);
    if (eax != 0u)
    {
        loc_c = eax;
    }
    else
    {
    COW_AT(1016222e)
        wr32(sp0 - 0xcu, arg3);
        ecx = arg3;
        loc_c = arg3;
    }
    COW_AT(10162236)
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    edx = sp0 - 0xcu;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = ebx;
    loc_8 = rd32(sp0 - 8u);
    loc_4 = rd32(sp0 - 4u);
    goto L_1016223c;
L_10162276: ;
    COW_AT(10162276)
    wr32(sp0 - 8u, loc_8 - 9u);
    loc_8 = loc_8 - 9u;
    goto L_1016227b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10162140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10162153u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, arg3);
        (void)sp0;
        return 1;
    }
    case 0x10162158u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, arg3);
        (void)sp0;
        return 1;
    }
    case 0x1016216au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1016218eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t loc_1c;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->eax = (uint32_t)(int16_t)arg5;
        g->edx = (uint32_t)(int16_t)arg4;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->esi = 0u;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr32(sp0 - 8u, (uint32_t)(int16_t)arg4);
        wr32(sp0 - 4u, (uint32_t)(int16_t)arg5);
        (void)sp0;
        return 1;
    }
    case 0x10162193u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016219cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        wr32(sp0 - 0x3cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101621dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101621f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162203u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162212u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162218u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162223u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016222eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162236u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016223cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10162241u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10162244u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = (uint32_t)(int16_t)arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016224du:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1016224eu:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10162259u:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10162261u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg8;
        (void)sp0;
        return 1;
    }
    case 0x10162270u:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10162276u:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1016227bu:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10162291u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162294u:
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
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10162140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10162140(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
