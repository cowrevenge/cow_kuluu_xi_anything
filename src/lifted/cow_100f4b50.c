/* f_0x100f4b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f4b50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f4b62u: in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4b62;
    case 0x100f4b69u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4b69;
    case 0x100f4b74u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4b74;
    case 0x100f4b82u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4b82;
    case 0x100f4ba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4ba6;
    case 0x100f4bb1u: ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bb1;
    case 0x100f4bbfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bbf;
    case 0x100f4bcau: ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bca;
    case 0x100f4bd1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bd1;
    case 0x100f4bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bdc;
    case 0x100f4be7u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4be7;
    case 0x100f4beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bee;
    case 0x100f4bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4bf5;
    case 0x100f4c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4c00;
    case 0x100f4c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4c0e;
    case 0x100f4c33u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4c33;
    case 0x100f4c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c49;
    case 0x100f4c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c62;
    case 0x100f4c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c64;
    case 0x100f4c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c6b;
    case 0x100f4c79u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c79;
    case 0x100f4c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c80;
    case 0x100f4c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c8e;
    case 0x100f4c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4c9d;
    case 0x100f4cabu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4cab;
    case 0x100f4cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4cba;
    case 0x100f4cc5u: eax = g->eax; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4cc5;
    case 0x100f4cd0u: eax = g->eax; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4cd0;
    case 0x100f4ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4ce0;
    case 0x100f4cebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100f4ceb;
    default: break;
    }
#endif

    COW_AT(100f4b50)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (arg2 > 3u) goto L_100f4ceb;
    COW_AT(100f4b62)
    t1 = rd32(COW_IMG(0x100f4cf8u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4b69u: goto L_100f4b69;
    case 0x100f4b74u: goto L_100f4b74;
    case 0x100f4bb1u: goto L_100f4bb1;
    case 0x100f4cc5u: goto L_100f4cc5;
    default: rt_fatal(g, COW_IMG(0x100f4b62u), "switch");
    }
    return 0;
L_100f4b69: ;
    COW_AT(100f4b69)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 3u;
L_100f4b74: ;
    COW_AT(100f4b74)
    if (rd8(arg1 + 0xcdu) != 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(100f4b82)
        t16 = rd32(arg1 + 0x3cu);
        wr32(sp0 - 0x14u, t16);
        wr32(sp0 - 0x18u, 0u);
        t17 = rd32(arg1 + 0x38u);
        wr32(sp0 - 0x1cu, t17);
        g->eax = t16;
        g->ecx = t17;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t18 = cow_stdcall(g, COW_IMG(0x1031012bu), 0);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(sp0 - 0x20u, t18);
        g->edx = t20;
        g->esp = sp0 - 0x20u;
        t21 = cow_stdcall(g, COW_IMG(0x10310136u), 0);
        t22 = g->edx;
        wr32(arg1 + 0xcu, t21);
        wr16(arg1 + 0x10u, 0u);
        wr8(arg1 + 0x12u, 0u);
        wr8(arg1 + 0x13u, 0u);
        edx = t22;
    }
    COW_AT(100f4ba6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return 0x16u;
L_100f4bb1: ;
    COW_AT(100f4bb1)
    if (rd8(arg1 + 0xcdu) == 0u) goto L_100f4bca;
    COW_AT(100f4bbf)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 0x17u;
L_100f4bca: ;
    COW_AT(100f4bca)
    if (rd8(arg1 + 0x12u) == 0u)
    {
        edx = in_edx;
        goto L_100f4bee;
    }
    eax = (arg2 & 0xffffff00u) | rd8(arg1 + 0x12u);
    COW_AT(100f4bd1)
    wr8(arg1 + 0x12u, (uint8_t)((uint8_t)eax + 1u));
    if ((uint8_t)eax >= 0x3cu)
    {
        edx = (in_edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
        goto L_100f4be7;
    }
    edx = (in_edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    COW_AT(100f4bdc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return 0x16u;
L_100f4be7: ;
    COW_AT(100f4be7)
    wr8(arg1 + 0x12u, 0u);
    wr16(arg1 + 0x10u, 0u);
L_100f4bee: ;
    COW_AT(100f4bee)
    if ((int32_t)rd32(arg1 + 0xcu) >= 0)
    {
        eax = rd32(arg1 + 0xcu);
        goto L_100f4c33;
    }
    eax = rd32(arg1 + 0xcu);
    COW_AT(100f4bf5)
    wr16(arg1 + 0x10u, (uint16_t)(rd16(arg1 + 0x10u) + 1u));
    if (rd16(arg1 + 0x10u) <= 0x3cu) goto L_100f4c0e;
    COW_AT(100f4c00)
    wr32(arg1 + 8u, eax);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return 5u;
L_100f4c0e: ;
    COW_AT(100f4c0e)
    t3 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x14u, t3);
    wr32(sp0 - 0x18u, 0u);
    t4 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0x1cu, t4);
    g->eax = t3;
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_stdcall(g, COW_IMG(0x1031012bu), 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x20u, t5);
    g->edx = t7;
    g->esp = sp0 - 0x20u;
    t8 = cow_stdcall(g, COW_IMG(0x10310136u), 0);
    t9 = g->edx;
    wr32(arg1 + 0xcu, t8);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t9;
    return 0x16u;
L_100f4c33: ;
    COW_AT(100f4c33)
    wr32(sp0 - 0x14u, arg1 + 0x40u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->ecx = sp0 - 8u;
    g->edx = arg1 + 0x40u;
    g->esp = sp0 - 0x1cu;
    t10 = cow_stdcall(g, COW_IMG(0x10310141u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 <= 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        sf = (int32_t)t10 < 0;
        goto L_100f4c62;
    }
    COW_AT(100f4c49)
    t13 = rd32(sp0 - 8u);
    t14 = rd32(sp0 - 4u);
    wr32(arg1 + 0x38u, t13);
    wr32(arg1 + 0x3cu, t14);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = t13;
    return 0x17u;
L_100f4c62: ;
    COW_AT(100f4c62)
    if (!sf) goto L_100f4cba;
    COW_AT(100f4c64)
    if (eax != 0xffffeb35u) goto L_100f4c79;
    COW_AT(100f4c6b)
    wr32(arg1 + 8u, eax);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 8u;
L_100f4c79: ;
    COW_AT(100f4c79)
    if (eax != 0xffffe3eeu) goto L_100f4c8e;
    COW_AT(100f4c80)
    wr32(arg1 + 8u, eax);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0xbu;
L_100f4c8e: ;
    COW_AT(100f4c8e)
    t15 = rd8(arg1 + 0x13u);
    wr8(arg1 + 0x13u, (uint8_t)(t15 + 1u));
    if ((uint8_t)(t15 + 1u) <= 3u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(t15 + 1u);
        goto L_100f4cab;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)(t15 + 1u);
    COW_AT(100f4c9d)
    wr32(arg1 + 8u, eax);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 5u;
L_100f4cab: ;
    COW_AT(100f4cab)
    wr8(arg1 + 0x12u, 1u);
    wr16(arg1 + 0x10u, 0u);
    wr32(arg1 + 0xcu, 0xffffffffu);
L_100f4cba: ;
    COW_AT(100f4cba)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x16u;
L_100f4cc5: ;
    COW_AT(100f4cc5)
    if ((int32_t)rd32(arg1 + 0xcu) < 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
    COW_AT(100f4cd0)
        wr32(sp0 - 0x14u, eax);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        cow_stdcall(g, COW_IMG(0x103100d3u), 0);
        t2 = g->edx;
        wr32(arg1 + 0xcu, 0xffffffffu);
        edx = t2;
    }
    COW_AT(100f4ce0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return 6u;
L_100f4ceb: ;
    COW_AT(100f4ceb)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f4b50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f4b62u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4b69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4b74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4b82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4ba6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4bb1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4bbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4bcau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4bd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4bdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4be7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4beeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4bf5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4c00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4c0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4c33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4c49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4c9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4cabu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4cbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f4cc5u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4cd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4ce0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f4cebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4b50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f4b50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
