/* f_0x102c58bd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c58bd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c58d1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58d1;
    case 0x102c58deu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58de;
    case 0x102c58e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58e8;
    case 0x102c58edu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58ed;
    case 0x102c58f1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58f1;
    case 0x102c58f8u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c58f8;
    case 0x102c5901u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5901;
    case 0x102c5905u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5905;
    case 0x102c590cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c590c;
    case 0x102c5910u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5910;
    case 0x102c5916u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5916;
    case 0x102c591du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c591d;
    case 0x102c5927u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5927;
    case 0x102c592cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c592c;
    case 0x102c5931u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5931;
    case 0x102c5948u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c5948;
    case 0x102c5966u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5966;
    case 0x102c5970u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5970;
    case 0x102c5986u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5986;
    case 0x102c598fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c598f;
    case 0x102c59a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c59a1;
    case 0x102c59cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c59cd;
    case 0x102c59d5u: ecx = g->ecx; edx = g->edx; goto E_102c59d5;
    case 0x102c59f2u: ecx = g->ecx; edx = g->edx; goto E_102c59f2;
    case 0x102c5a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102c5a1a;
    case 0x102c5a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102c5a21;
    case 0x102c5a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102c5a32;
    default: break;
    }
#endif

    COW_AT(102c58bd)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c58ed;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c58d1)
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f70u));
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8f70u), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    ecx = COW_IMG(0x103c8f70u);
    edx = t2;
L_102c58de: ;
    COW_AT(102c58de)
    if (rd8(arg1 + 0x126u) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
    COW_AT(102c591d)
        eax = ((eax & 2u) | 1u) * 2u;
    }
    else
    {
    COW_AT(102c58e8)
        eax = 1u;
    }
    COW_AT(102c5927)
    if (arg3 == eax) goto L_102c5948;
    COW_AT(102c592c)
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f08u));
    loc_18 = COW_IMG(0x103c8f08u);
L_102c5931: ;
    COW_AT(102c5931)
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_18);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x18u), in_edi);
L_102c5a32: ;
    COW_AT(102c5a32)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c58ed: ;
    COW_AT(102c58ed)
    if ((eax & 4u) == 0u) goto L_102c58f8;
    COW_AT(102c58f1)
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f58u));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f58u);
    goto L_102c5931;
L_102c58f8: ;
    COW_AT(102c58f8)
    if (rd8(arg1 + 0x126u) != 3u) goto L_102c590c;
    COW_AT(102c5901)
    if ((eax & 2u) != 0u) goto L_102c590c;
    COW_AT(102c5905)
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f3cu));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f3cu);
    goto L_102c5931;
L_102c590c: ;
    COW_AT(102c590c)
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c58de;
    }
    COW_AT(102c5910)
    if ((rd8(arg2 + 8u) & 0x20u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c58de;
    }
    COW_AT(102c5916)
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f24u));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f24u);
    goto L_102c5931;
L_102c5948: ;
    COW_AT(102c5948)
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0xcu, eax, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, arg1);
    g->ecx = t7;
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t8, 1, 5, arg1, 0u, arg1, sp0 - 0xcu, rd32(sp0 - 0x18u));
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(102c5966)
        if (rd8(arg1 + 0x126u) != 3u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
            goto L_102c59cd;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
    COW_AT(102c5970)
        t12 = rd8(sp0 - 0xcu);
        wr8(arg1 + 0x138u, (uint8_t)t12);
        if (rd16(arg2 + 0x14u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | t12;
            goto L_102c5a21;
        }
        eax = (eax & 0xffff0000u) | rd16(arg2 + 0x14u);
        ecx = (ecx & 0xffffff00u) | t12;
    COW_AT(102c5986)
        if ((uint8_t)ecx <= (uint16_t)eax)
        {
            edx = (edx & 0xffff0000u) | (uint8_t)ecx;
            goto L_102c59a1;
        }
        edx = (edx & 0xffff0000u) | (uint8_t)ecx;
    COW_AT(102c598f)
        wr32(sp0 - 0x18u, COW_IMG(0x103c8ee4u));
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8ee4u));
    }
    goto L_102c5a32;
L_102c59a1: ;
    COW_AT(102c59a1)
    t13 = rd32(arg1 + 0x114u);
    t14 = rd8((uint8_t)ecx * 3u + rd32(arg1 + 0x114u));
    wr16(arg1 + 0x13au, (uint16_t)t14);
    t15 = rd8((uint8_t)ecx * 3u + t13 + 1u);
    wr16(arg1 + 0x13cu, (uint16_t)t15);
    eax = ((uint8_t)ecx * 3u + t13 & 0xffff0000u) | rd8((uint8_t)ecx * 3u + t13 + 2u);
    ecx = ((t13 | t14) & 0xffff0000u) | t15;
L_102c5a1a: ;
    COW_AT(102c5a1a)
    wr16(arg1 + 0x13eu, (uint16_t)eax);
L_102c5a21: ;
    COW_AT(102c5a21)
    wr32(sp0 - 0x18u, arg1 + 0x138u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102c7b06u), 3, arg1, arg2, arg1 + 0x138u);
    goto L_102c5a32;
L_102c59cd: ;
    COW_AT(102c59cd)
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    if ((eax & 2u) != 0u)
    {
    COW_AT(102c59f2)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t18 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
        t19 = g->ecx;
        t20 = g->edx;
        wr16(arg1 + 0x13au, (uint16_t)t18);
        wr32(sp0 - 0x1cu, sp0 - 0xau);
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp0 - 0x18u;
        t21 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xau, g->ecx, g->edx, 1, 1, sp0 - 0xau);
        t22 = g->ecx;
        t23 = g->edx;
        wr16(arg1 + 0x13cu, (uint16_t)t21);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ecx = t22;
        g->edx = t23;
        g->esp = sp0 - 0x1cu;
        t24 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 8u, g->ecx, g->edx, 1, 1, sp0 - 8u);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    else
    {
    COW_AT(102c59d5)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
        t17 = g->edx;
        wr16(arg1 + 0x140u, (uint16_t)t16);
        wr16(arg1 + 0x13cu, (uint16_t)t16);
        wr16(arg1 + 0x13au, (uint16_t)t16);
        eax = t16;
        ecx = sp0 - 0xcu;
        edx = t17;
    }
    goto L_102c5a1a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c58bd(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c58d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c58deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c58e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c58edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c58f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c58f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c5901u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c5905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c590cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c5910u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102c5916u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c591du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5927u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c592cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5931u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5948u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5966u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5970u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5986u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c598fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c59a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c59cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c59d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->eax = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c59f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->eax = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5a1au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5a21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5a32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c58bd(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c58bd(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
