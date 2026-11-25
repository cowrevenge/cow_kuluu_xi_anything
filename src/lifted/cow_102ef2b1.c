/* f_0x102ef2b1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102ef2b1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ef2bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102ef2bd;
    case 0x102ef2c5u: eax = g->eax; edx = g->edx; in_esi = g->esi; loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102ef2c5;
    case 0x102ef2cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef2cd;
    case 0x102ef2d6u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102ef2d6;
    case 0x102ef2e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef2e2;
    case 0x102ef2e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef2e8;
    case 0x102ef2ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef2eb;
    case 0x102ef2f2u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102ef2f2;
    case 0x102ef301u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef301;
    case 0x102ef30bu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef30b;
    case 0x102ef310u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef310;
    case 0x102ef31du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef31d;
    case 0x102ef32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef32f;
    case 0x102ef35fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef35f;
    case 0x102ef367u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef367;
    case 0x102ef36cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef36c;
    case 0x102ef371u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef371;
    case 0x102ef375u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef375;
    case 0x102ef37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef37c;
    case 0x102ef383u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef383;
    case 0x102ef388u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef388;
    case 0x102ef390u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef390;
    case 0x102ef3acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102ef3ac;
    case 0x102ef3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef3b1;
    default: break;
    }
#endif

    COW_AT(102ef2b1)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x102ef2bdu);
    t1 = cow_cdecl(g, COW_IMG(0x102f75e8u), 1, 1u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102ef2bd)
    wr32(sp0 - 8u, eax);
    if (eax == 0u)
    {
        loc_4 = in_ebp;
        loc_c = in_esi;
        goto L_102ef2eb;
    }
    loc_8 = eax;
    COW_AT(102ef2c5)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, eax);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102ef2cdu);
    t3 = cow_cdecl(g, COW_IMG(0x10316224u), 1, eax);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(102ef2cd)
    if (eax == 0u)
    {
        esi = rd32(sp0 - 8u);
        goto L_102ef2f2;
    }
    esi = rd32(sp0 - 8u);
    COW_AT(102ef2d6)
    t5 = rd32(esi + 0x9cu);
    wr32(sp0 - 0x10u, t5);
    wr32(sp0 - 0x14u, esi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    COW_RET(0x102ef2e2u);
    t6 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, 0u, edx, 1, 2, esi, t5);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(102ef2e2)
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x14u;
    COW_RET(0x102ef2e8u);
    cow_call_regs(g, COW_IMG(0x102f762au), g->eax, ecx, edx, 1, 1, esi);
    t9 = g->edx;
    edx = t9;
    COW_AT(102ef2e8)
    loc_4 = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
L_102ef2eb: ;
    COW_AT(102ef2eb)
    eax = 0u;
L_102ef3b1: ;
    COW_AT(102ef3b1)
    g->esi = loc_c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102ef2f2: ;
    COW_AT(102ef2f2)
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x102ef301u);
    cow_cdecl(g, COW_IMG(0x102ef212u), 4, esi, arg2, arg3, arg4);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    COW_AT(102ef301)
    if (arg1 == 0u) goto L_102ef310;
    COW_AT(102ef30b)
    t12 = rd8(arg1);
    if ((uint8_t)t12 == 0x31u) goto L_102ef31d;
L_102ef310: ;
    COW_AT(102ef310)
    wr32(sp0 - 0x10u, COW_IMG(0x10347f50u));
    wr32(sp0 - 0x14u, esi);
    g->esi = esi;
    g->esp = sp0 - 0xcu;
    COW_RET(0x102ef31bu);
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10347f50u));
    rt_fatal(g, COW_IMG(0x102ef316u), "no way on");
    return 0;
L_102ef31d: ;
    COW_AT(102ef31d)
    wr32(sp0 - 0x10u, 0x2000u);
    wr32(sp0 - 0x14u, esi);
    wr32(esi + 0xa0u, 0x2000u);
    g->eax = 0x2000u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x102ef32fu);
    t13 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(102ef32f)
    wr32(esi + 0x9cu, eax);
    wr32(sp0 - 0x18u, 0x38u);
    wr32(esi + 0x84u, COW_IMG(0x102f2089u));
    wr32(sp0 - 0x1cu, COW_IMG(0x10347f48u));
    wr32(esi + 0x88u, COW_IMG(0x102f20dcu));
    wr32(sp0 - 0x20u, esi + 0x64u);
    wr32(esi + 0x8cu, esi);
    g->eax = esi + 0x64u;
    g->esp = sp0 - 4u;
    COW_RET(0x102ef35fu);
    t16 = cow_call_regs(g, COW_IMG(0x102f7121u), g->eax, ecx, edx, 1, 7, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(102ef35f)
    if (eax == 0xfffffffau) goto L_102ef383;
    COW_AT(102ef367)
    if (eax == 0xfffffffcu) goto L_102ef37c;
    COW_AT(102ef36c)
    if (eax == 0xfffffffeu) goto L_102ef37c;
    COW_AT(102ef371)
    if (eax == 0u) goto L_102ef390;
    COW_AT(102ef375)
    wr32(sp0 - 0x10u, COW_IMG(0x10347f34u));
L_102ef388: ;
    COW_AT(102ef388)
    wr32(sp0 - 0x14u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102ef38eu);
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 1, esi);
    rt_fatal(g, COW_IMG(0x102ef389u), "no way on");
    return 0;
L_102ef37c: ;
    COW_AT(102ef37c)
    wr32(sp0 - 0x10u, COW_IMG(0x10347f20u));
    goto L_102ef388;
L_102ef383: ;
    COW_AT(102ef383)
    wr32(sp0 - 0x10u, COW_IMG(0x10347f0cu));
    goto L_102ef388;
L_102ef390: ;
    COW_AT(102ef390)
    wr32(sp0 - 0x10u, 0u);
    t19 = rd32(esi + 0x9cu);
    wr32(esi + 0x70u, t19);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, esi);
    t20 = rd32(esi + 0xa0u);
    wr32(esi + 0x74u, t20);
    g->esp = sp0 - 4u;
    COW_RET(0x102ef3acu);
    cow_call_regs(g, COW_IMG(0x102f1fb7u), g->eax, g->ecx, edx, 1, 5, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t21 = g->edx;
    edx = t21;
    COW_AT(102ef3ac)
    eax = esi;
    loc_4 = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
    goto L_102ef3b1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ef2b1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ef2bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 1u);
        wr32(sp0 - 0xcu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102ef2c5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102ef2cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102ef2d6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef2e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef2e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef2ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef2f2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef301u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef30bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef310u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef31du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef32fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef35fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef367u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef36cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef371u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef375u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef37cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef383u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef388u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef390u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef3acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ef3b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef2b1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ef2b1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
