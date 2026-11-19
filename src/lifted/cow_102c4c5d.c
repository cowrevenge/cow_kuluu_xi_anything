/* f_0x102c4c5d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c4c5d(Guest* g)
{
    double d20;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c4c70u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4c70;
    case 0x102c4c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102c4c7b;
    case 0x102c4c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c4c7d;
    case 0x102c4c83u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c4c83;
    case 0x102c4c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c4c88;
    case 0x102c4c9fu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4c9f;
    case 0x102c4ca3u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4ca3;
    case 0x102c4caau: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4caa;
    case 0x102c4caeu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4cae;
    case 0x102c4cbbu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4cbb;
    case 0x102c4cbfu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4cbf;
    case 0x102c4cc6u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4cc6;
    case 0x102c4ccbu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c4ccb;
    case 0x102c4cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c4cd2;
    case 0x102c4cedu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102c4ced;
    case 0x102c4d00u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d00;
    case 0x102c4d0fu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d0f;
    case 0x102c4d15u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d15;
    case 0x102c4d1du: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d1d;
    case 0x102c4d25u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d25;
    case 0x102c4d45u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102c4d45;
    case 0x102c4d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102c4d6b;
    default: break;
    }
#endif

    COW_AT(102c4c5d)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c4c9f;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c4c70)
    wr32(sp0 - 0x14u, COW_IMG(0x103c8a0cu));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8a0cu), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    loc_14 = COW_IMG(0x103c8a0cu);
L_102c4c7b: ;
    COW_AT(102c4c7b)
    ecx = loc_14;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102c4c7d: ;
    COW_AT(102c4c7d)
    if (rd32(sp0 + 0xcu) == 4u) goto L_102c4cd2;
    COW_AT(102c4c83)
    wr32(sp0 - 0x14u, COW_IMG(0x103c89f0u));
    loc_14 = COW_IMG(0x103c89f0u);
L_102c4c88: ;
    COW_AT(102c4c88)
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_14);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x1cu, t8);
    wr32(sp0 - 0x20u, arg1);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t7, 1, 5, arg1, t8, arg1, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
L_102c4d6b: ;
    COW_AT(102c4d6b)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c4c9f: ;
    COW_AT(102c4c9f)
    if ((eax & 4u) == 0u) goto L_102c4caa;
    COW_AT(102c4ca3)
    wr32(sp0 - 0x14u, COW_IMG(0x103c89d8u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
    loc_14 = COW_IMG(0x103c89d8u);
    goto L_102c4c88;
L_102c4caa: ;
    COW_AT(102c4caa)
    if ((eax & 2u) == 0u) goto L_102c4cbb;
    COW_AT(102c4cae)
    wr32(sp0 - 0x14u, COW_IMG(0x103c89c0u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c89c0u));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    loc_14 = COW_IMG(0x103c89c0u);
    goto L_102c4c7b;
L_102c4cbb: ;
    COW_AT(102c4cbb)
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102c4c7d;
    }
    COW_AT(102c4cbf)
    if (!(rd32(arg2 + 8u) & 1u))
    {
        eax = rd32(arg2 + 8u);
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102c4c7d;
    }
    eax = rd32(arg2 + 8u);
    COW_AT(102c4cc6)
    if ((eax >> 8u & 8u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102c4c7d;
    }
    COW_AT(102c4ccb)
    wr32(sp0 - 0x14u, COW_IMG(0x103c89a8u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
    loc_14 = COW_IMG(0x103c89a8u);
    goto L_102c4c88;
L_102c4cd2: ;
    COW_AT(102c4cd2)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, loc_10, loc_c);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t10;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t11, 1, 5, arg1, 0u, arg1, sp0 + 4u, 4u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
    COW_AT(102c4ced)
        wr32(sp0 - 0x14u, sp0 + 4u);
        g->eax = sp0 + 4u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
        t16 = g->edx;
        wr32(sp0 + 0xcu, t15);
        if (t15 != 0u)
        {
            eax = t15;
            edx = t16;
            edi = t15;
    COW_AT(102c4d0f)
            if ((rd8(arg2 + 9u) & 8u) == 0u) goto L_102c4d45;
    COW_AT(102c4d15)
            if ((int32_t)edi < 45000) goto L_102c4d25;
    COW_AT(102c4d1d)
            if ((int32_t)edi <= 46000) goto L_102c4d45;
L_102c4d25: ;
    COW_AT(102c4d25)
            wr32(sp0 - 0x14u, COW_IMG(0x103c894cu));
            wr32(sp0 - 0x18u, arg1);
            g->eax = eax;
            g->ecx = sp0 + 4u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t17 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c894cu));
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x1cu, edi);
            wr32(sp0 - 0x20u, COW_IMG(0x103c8934u));
            wr32(sp0 - 0x24u, COW_IMG(0x103d03e0u));
            g->ebx = arg2;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c8934u), edi, arg1, COW_IMG(0x103c894cu));
        }
        else
        {
            eax = t15;
            edx = t16;
    COW_AT(102c4d00)
            wr32(sp0 - 0x14u, COW_IMG(0x103c8984u));
            wr32(sp0 - 0x18u, arg1);
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8984u));
        }
    }
    goto L_102c4d6b;
L_102c4d45: ;
    COW_AT(102c4d45)
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    d20 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(arg1 + 0x15cu, (float)d20);
    wrf64(sp0 - 0x18u, d20);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x102c7f2du), eax, g->ecx, g->edx, 1, 3, arg1, arg2, cow_dlo(d20));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102c7fa7u), 3, arg1, arg2, edi);
    goto L_102c4d6b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c4c5d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c4c70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4c7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4c7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4c83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4c88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4c9fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4ca3u:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4caau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4caeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4cbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4cbfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4cc6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4ccbu:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4cd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c4cedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = sp0 + 4u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c4d6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4c5d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c4c5d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
