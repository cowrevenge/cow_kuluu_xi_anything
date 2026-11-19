/* f_0x1018b3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018b3a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018b3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3af;
    case 0x1018b3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3b1;
    case 0x1018b3ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3ce;
    case 0x1018b3d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3d6;
    case 0x1018b3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3de;
    case 0x1018b3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b3f5;
    case 0x1018b404u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b404;
    case 0x1018b411u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b411;
    case 0x1018b413u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b413;
    case 0x1018b41du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b41d;
    case 0x1018b422u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b422;
    case 0x1018b42fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b42f;
    case 0x1018b437u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b437;
    case 0x1018b444u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b444;
    case 0x1018b44cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b44c;
    case 0x1018b45du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b45d;
    case 0x1018b462u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b462;
    case 0x1018b472u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b472;
    case 0x1018b484u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b484;
    case 0x1018b48cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b48c;
    case 0x1018b496u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b496;
    case 0x1018b4a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b4a8;
    case 0x1018b4b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b4b0;
    case 0x1018b4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b4ba;
    default: break;
    }
#endif

    COW_AT(1018b3a0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x1009f410u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)arg1 < 42)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1018b3af)
        if (!(arg1 != 0x2au && (int32_t)(arg1 - 0x2au) < 0 == ((arg1 ^ 0x2au) & (arg1 ^ arg1 - 0x2au)) >> 0x1fu))
        {
    COW_AT(1018b3b1)
            t4 = rd32(COW_IMG(0x10377a44u) + arg1 * 4u);
            g->eax = t4;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_cdecl(g, COW_IMG(0x101814b0u), 1, t4);
            t6 = g->edx;
            t7 = rd32(COW_IMG(0x10377a48u) + arg1 * 4u);
            g->ecx = t7;
            g->edx = t6;
            g->esp = sp0 - 8u;
            t8 = cow_cdecl(g, COW_IMG(0x101812f0u), 1, t7);
            t9 = g->ecx;
            t10 = g->edx;
            eax = t8;
            ecx = t9;
            edx = t10;
        }
    }
    COW_AT(1018b3ce)
    if ((int32_t)arg1 < 185) goto L_1018b3f5;
    COW_AT(1018b3d6)
    if ((int32_t)arg1 > 188) goto L_1018b3f5;
    COW_AT(1018b3de)
    t11 = rd32(COW_IMG(0x10377810u) + arg1 * 4u);
    g->ecx = ecx;
    g->edx = t11;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101814b0u), 1, t11);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd32(COW_IMG(0x10377820u) + arg1 * 4u);
    eax = t14;
    ecx = t12;
    edx = t13;
    loc_c = t14;
L_1018b404: ;
    COW_AT(1018b404)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x101812f0u), 1, loc_c);
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)arg1 < 5)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1018b41d;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1018b411)
    if (arg1 != 5u && (int32_t)(arg1 - 5u) < 0 == ((arg1 ^ 5u) & (arg1 ^ arg1 - 5u)) >> 0x1fu) goto L_1018b41d;
    COW_AT(1018b413)
    t21 = rd32(COW_IMG(0x10377b00u) + arg1 * 4u);
    ecx = t21;
    loc_8 = t21;
L_1018b422: ;
    COW_AT(1018b422)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_cdecl(g, COW_IMG(0x101814c0u), 1, loc_8);
    t23 = g->ecx;
    t24 = g->edx;
    if ((int32_t)arg1 < 100)
    {
        eax = t22;
        ecx = t23;
        goto L_1018b437;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1018b42f)
    if ((int32_t)arg1 < 540) goto L_1018b444;
L_1018b437: ;
    COW_AT(1018b437)
    t25 = rd32(COW_IMG(0x1065cb04u));
    wr8(t25 + 0x1ceu, 1u);
    edx = t25;
L_1018b444: ;
    COW_AT(1018b444)
    if (arg1 != 0xc1u)
    {
    COW_AT(1018b45d)
        if (arg1 == 0x32u)
        {
    COW_AT(1018b462)
            t27 = rd32(COW_IMG(0x1065cb04u));
            wr32(t27 + 0x1d4u, 0x3f333333u);
            ecx = t27;
        }
    }
    else
    {
    COW_AT(1018b44c)
        t26 = rd32(COW_IMG(0x1065cb04u));
        wr32(t26 + 0x1d0u, 0u);
        eax = t26;
    }
    COW_AT(1018b472)
    wr32(COW_IMG(0x1035818cu), 0xbf800000u);
    if ((int32_t)arg1 <= 700)
    {
    COW_AT(1018b484)
        if ((int32_t)arg1 >= 701)
        {
    COW_AT(1018b48c)
            wr32(COW_IMG(0x1035818cu), 0xc0000000u);
        }
    }
    COW_AT(1018b496)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_call_regs(g, COW_IMG(0x101815c0u), eax, g->ecx, g->edx, 1, 1, 0u);
    t29 = g->ecx;
    t30 = g->edx;
    if ((int32_t)arg1 < 702)
    {
        eax = t28;
    }
    else
    {
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(1018b4a8)
        if ((int32_t)arg1 <= 703)
        {
    COW_AT(1018b4b0)
            g->esp = sp0 - 4u;
            t31 = cow_call_regs(g, COW_IMG(0x101815c0u), eax, g->ecx, g->edx, 1, 1, 1u);
            eax = t31;
        }
    }
    COW_AT(1018b4ba)
    t32 = rd32(COW_IMG(0x1065cb04u));
    wr32(t32 + 0x1b4u, arg1);
    g->eax = eax;
    g->edx = t32;
    t33 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 4u;
    t34 = cow_thiscall(g, COW_IMG(0x1018bae0u), t33, 1, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    t37 = cow_stdcall(g, COW_IMG(0x10081a50u), 0);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    t40 = cow_cdecl(g, COW_IMG(0x1018b500u), 1, arg1);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    t43 = cow_stdcall(g, COW_IMG(0x1001e2b0u), 0);
    t44 = g->edx;
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = t44;
    return cow_tailcall(g, COW_IMG(0x1017a3d0u), t43, rd32(COW_IMG(0x10631f24u)), t44);
L_1018b3f5: ;
    COW_AT(1018b3f5)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x101814b0u), 1, 0x42200000u);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    loc_c = 0x42480000u;
    goto L_1018b404;
L_1018b41d: ;
    COW_AT(1018b41d)
    loc_8 = 0x3ecccccdu;
    goto L_1018b422;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018b3a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018b3afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        g->zf = (uint8_t)(arg1 == 0x2au);
        g->sf = (uint8_t)((int32_t)(arg1 - 0x2au) < 0);
        g->of = (uint8_t)(((arg1 ^ 0x2au) & (arg1 ^ arg1 - 0x2au)) >> 0x1fu);
        (void)sp0;
        return 1;
    }
    case 0x1018b3b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b3ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b3d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b3deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b3f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b404u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b411u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        g->zf = (uint8_t)(arg1 == 5u);
        g->sf = (uint8_t)((int32_t)(arg1 - 5u) < 0);
        g->of = (uint8_t)(((arg1 ^ 5u) & (arg1 ^ arg1 - 5u)) >> 0x1fu);
        (void)sp0;
        return 1;
    }
    case 0x1018b413u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b41du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b422u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b42fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b437u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b444u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b44cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b45du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b462u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b472u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b484u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b48cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b496u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b4a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b4b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b4bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b3a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018b3a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
