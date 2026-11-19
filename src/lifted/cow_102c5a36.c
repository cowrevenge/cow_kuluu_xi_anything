/* f_0x102c5a36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5a36(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_208;
    uint32_t loc_20c;
    uint32_t loc_210;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c5a4bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a4b;
    case 0x102c5a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102c5a56;
    case 0x102c5a58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5a58;
    case 0x102c5a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5a6d;
    case 0x102c5a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5a72;
    case 0x102c5a78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102c5a78;
    case 0x102c5a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102c5a81;
    case 0x102c5a86u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a86;
    case 0x102c5a8au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a8a;
    case 0x102c5a91u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a91;
    case 0x102c5a95u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a95;
    case 0x102c5a9cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5a9c;
    case 0x102c5aa3u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5aa3;
    case 0x102c5aa9u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_102c5aa9;
    case 0x102c5ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5ab0;
    case 0x102c5ab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5ab7;
    case 0x102c5ac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102c5ac3;
    case 0x102c5accu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102c5acc;
    case 0x102c5adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_4 = rd32(sp0 - 4u); goto E_102c5adc;
    case 0x102c5ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102c5ae4;
    case 0x102c5aebu: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102c5aeb;
    case 0x102c5afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102c5afb;
    case 0x102c5afeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); goto E_102c5afe;
    default: break;
    }
#endif

    COW_AT(102c5a36)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5a86;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c5a4b)
    wr32(sp0 - 0x210u, COW_IMG(0x103c8ff4u));
    wr32(sp0 - 0x214u, arg1);
    g->esp = sp0 - 0x204u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8ff4u), in_edi, in_esi);
    COW_AT(102c5a56)
    ecx = COW_IMG(0x103c8ff4u);
    loc_4 = rd32(sp0 - 4u);
    loc_208 = rd32(sp0 - 0x208u);
    loc_20c = rd32(sp0 - 0x20cu);
L_102c5a58: ;
    COW_AT(102c5a58)
    t1 = rd32(sp0 + 0xcu) - (uint32_t)((int32_t)rd32(sp0 + 0xcu) >> 0x1fu);
    if ((uint32_t)((int32_t)t1 >> 1u) == rd16(arg1 + 0x118u))
    {
        eax = rd16(arg1 + 0x118u);
        edx = (uint32_t)((int32_t)rd32(sp0 + 0xcu) >> 0x1fu);
        edi = (uint32_t)((int32_t)t1 >> 1u);
        goto L_102c5ab0;
    }
    eax = rd16(arg1 + 0x118u);
    edx = (uint32_t)((int32_t)rd32(sp0 + 0xcu) >> 0x1fu);
    COW_AT(102c5a6d)
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fd8u));
    loc_210 = COW_IMG(0x103c8fd8u);
L_102c5a72: ;
    COW_AT(102c5a72)
    wr32(sp0 - 0x214u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20cu;
    t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_210);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(102c5a78)
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x218u, t5);
    wr32(sp0 - 0x21cu, arg1);
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, t5, rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    COW_AT(102c5a81)
    ebx = in_ebx;
L_102c5afe: ;
    COW_AT(102c5afe)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5a86: ;
    COW_AT(102c5a86)
    if ((eax & 4u) == 0u) goto L_102c5a91;
    COW_AT(102c5a8a)
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fc0u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_208 = in_esi;
    loc_20c = in_edi;
    loc_210 = COW_IMG(0x103c8fc0u);
    goto L_102c5a72;
L_102c5a91: ;
    COW_AT(102c5a91)
    if ((eax & 2u) != 0u) goto L_102c5a9c;
    COW_AT(102c5a95)
    wr32(sp0 - 0x210u, COW_IMG(0x103c8fa4u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_208 = in_esi;
    loc_20c = in_edi;
    loc_210 = COW_IMG(0x103c8fa4u);
    goto L_102c5a72;
L_102c5a9c: ;
    COW_AT(102c5a9c)
    if (arg2 == 0u)
    {
        ecx = self;
        loc_4 = in_ebp;
        loc_208 = in_esi;
        loc_20c = in_edi;
        goto L_102c5a58;
    }
    COW_AT(102c5aa3)
    if ((rd8(arg2 + 8u) & 0x40u) == 0u)
    {
        ecx = self;
        loc_4 = in_ebp;
        loc_208 = in_esi;
        loc_20c = in_edi;
        goto L_102c5a58;
    }
    COW_AT(102c5aa9)
    wr32(sp0 - 0x210u, COW_IMG(0x103c8f8cu));
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_208 = in_esi;
    loc_20c = in_edi;
    loc_210 = COW_IMG(0x103c8f8cu);
    goto L_102c5a72;
L_102c5ab0: ;
    COW_AT(102c5ab0)
    wr32(sp0 - 0x210u, in_ebx);
    if ((int32_t)edi <= 0)
    {
        loc_210 = in_ebx;
        goto L_102c5adc;
    }
    ebx = 0u;
    loc_210 = in_ebx;
L_102c5ab7: ;
    COW_AT(102c5ab7)
    wr32(sp0 - 0x214u, 2u);
    wr32(sp0 - 0x218u, sp0 + 0xeu);
    wr32(sp0 - 0x21cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 0xeu, 2u, loc_210, loc_20c);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    COW_AT(102c5ac3)
    wr32(sp0 - 0x220u, sp0 + 0xeu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t8 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 + 0xeu, g->ecx, g->edx, 1, 1, sp0 + 0xeu);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(102c5acc)
    wr16(ebx * 2u + sp0 - 0x204u, (uint16_t)eax);
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        ebx = ebx + 1u;
        loc_210 = rd32(sp0 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        loc_208 = rd32(sp0 - 0x208u);
        loc_20c = rd32(sp0 - 0x20cu);
        goto L_102c5ab7;
    }
    loc_210 = rd32(sp0 - 0x210u);
    loc_4 = rd32(sp0 - 4u);
    loc_208 = rd32(sp0 - 0x208u);
    loc_20c = rd32(sp0 - 0x20cu);
L_102c5adc: ;
    COW_AT(102c5adc)
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t11 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, loc_210, loc_20c, loc_208);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(102c5ae4)
    if (eax != 0u)
    {
        ebx = rd32(sp0 - 0x210u);
    }
    else
    {
        ebx = rd32(sp0 - 0x210u);
    COW_AT(102c5aeb)
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        wr32(sp0 - 0x214u, arg2);
        wr32(sp0 - 0x218u, arg1);
        g->esp = sp0 - 0x204u;
        cow_call_regs(g, COW_IMG(0x102c801du), g->eax, 0u, edx, 1, 5, arg1, arg2, sp0 - 0x204u, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    COW_AT(102c5afb)
    }
    goto L_102c5afe;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c5a36(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c5a4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x214u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x210u, COW_IMG(0x103c8ff4u));
        (void)sp0;
        return 1;
    }
    case 0x102c5a58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x214u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5a86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5a9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5aa3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5aa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5ab0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5ab7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5ac3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x218u, sp0 + 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x102c5accu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 + 0xeu);
        wr32(sp0 - 0x218u, sp0 + 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x102c5adcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x210u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5ae4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102c5aebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5afbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102c5afeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_210;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x20cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5a36(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c5a36(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
