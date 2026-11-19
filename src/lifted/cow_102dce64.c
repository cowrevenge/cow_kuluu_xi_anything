/* f_0x102dce64 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102dce64(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_94;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    cow_frame(g, sp0, 188u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dce82u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dce82;
    case 0x102dce8cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dce8c;
    case 0x102dce9au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dce9a;
    case 0x102dce9cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dce9c;
    case 0x102dcea0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dcea0;
    case 0x102dcea9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dcea9;
    case 0x102dceadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dcead;
    case 0x102dceb7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_102dceb7;
    case 0x102dcf22u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102dcf22;
    case 0x102dcf29u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102dcf29;
    case 0x102dcf2du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102dcf2d;
    case 0x102dcf31u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102dcf31;
    case 0x102dcf3bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf3b;
    case 0x102dcf4fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf4f;
    case 0x102dcf54u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf54;
    case 0x102dcf5cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf5c;
    case 0x102dcf64u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf64;
    case 0x102dcf6fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_30 = rd32(sp0 - 0x30u); goto E_102dcf6f;
    case 0x102dcf8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102dcf8d;
    case 0x102dcf9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102dcf9f;
    case 0x102dcfa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfa2;
    case 0x102dcfaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfaa;
    case 0x102dcfb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102dcfb6;
    case 0x102dcfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfb9;
    case 0x102dcfc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfc3;
    case 0x102dcfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfd3;
    case 0x102dcfdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfda;
    case 0x102dcfe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfe1;
    case 0x102dcfe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfe8;
    case 0x102dcfefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcfef;
    case 0x102dcff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcff6;
    case 0x102dcffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcffd;
    case 0x102dd02au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd02a;
    case 0x102dd056u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd056;
    case 0x102dd087u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd087;
    case 0x102dd0b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0b4;
    case 0x102dd0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0ba;
    case 0x102dd0d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0d3;
    case 0x102dd0e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0e2;
    case 0x102dd0e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0e7;
    case 0x102dd0efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd0ef;
    case 0x102dd100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dd100;
    case 0x102dd102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dd102;
    default: break;
    }
#endif

    COW_AT(102dce64)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 8u, 0u);
    if (self == 0u)
    {
        loc_8 = 0u;
        goto L_102dce8c;
    }
    eax = self;
    loc_8 = 0u;
L_102dce82: ;
    COW_AT(102dce82)
    wr32(sp0 - 8u, loc_8 + 1u);
    if (rd32(eax + 0x4cu) != 0u)
    {
        eax = rd32(eax + 0x4cu);
        loc_8 = loc_8 + 1u;
        goto L_102dce82;
    }
    loc_8 = loc_8 + 1u;
L_102dce8c: ;
    COW_AT(102dce8c)
    if (rd32(COW_IMG(0x103cc680u)) == 0u)
    {
        eax = rd32(COW_IMG(0x103cc680u));
        ecx = self;
        ebx = COW_IMG(0x103cc680u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103cc680u));
    COW_AT(102dce9a)
        ecx = rd32(self);
        ebx = COW_IMG(0x103cc680u);
L_102dce9c: ;
    COW_AT(102dce9c)
        if (eax == ecx) goto L_102dcea9;
    COW_AT(102dcea0)
        if (rd32(ebx + 0x24u) != 0u)
        {
            eax = rd32(ebx + 0x24u);
            ebx = ebx + 0x24u;
            goto L_102dce9c;
        }
        eax = rd32(ebx + 0x24u);
        ebx = ebx + 0x24u;
    }
L_102dcea9: ;
    COW_AT(102dcea9)
    if (rd32(ebx) != 0u)
    {
    COW_AT(102dceb7)
        wr32(sp0 - 0xa8u, rd32(self));
        g->eax = eax;
        g->edx = in_edx;
        t1 = rd32(self);
        g->esp = sp0 - 0xa4u;
        t2 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, t1);
        t3 = g->edx;
        wr32(sp0 - 0xcu, t2);
        t4 = rd32(sp0 - 0xa8u);
        wr32(sp0 - 0xa8u, 0u);
        t5 = rd32(t2 + 8u) >> 3u;
        wr32(sp0 - 0x14u, t5);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, 4u);
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xb8u, arg1);
        wr32(sp0 - 0x1cu, 0x20534444u);
        cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, sp0 - 0x1cu, 4u, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
        wr32(sp0 - 0xa8u, 0x1fu);
        edi = sp0 - 0x98u;
        eax = 0u;
        ecx = 0x1fu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa8u, 0x7cu);
        t6 = rd32(self + 0x10u);
        wr32(sp0 - 0x90u, t6);
        t7 = rd32(self + 0xcu);
        wr32(sp0 - 0x8cu, t7);
        wr32(sp0 - 0xa8u, 8u);
        wr32(sp0 - 0x98u, 0x7cu);
        wr32(sp0 - 0x94u, 0x1007u);
        t8 = rd32(ebx + 8u);
        esi = ebx + 4u;
        edi = sp0 - 0x50u;
        ecx = 8u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x30u, 0x1000u);
        if ((t8 & 3u) == 0u)
        {
            eax = t8;
            loc_30 = 0x1000u;
        }
        else
        {
            eax = t8;
    COW_AT(102dcf22)
            wr32(sp0 - 0x30u, 0x1002u);
            loc_30 = 0x1002u;
        }
    COW_AT(102dcf29)
        if ((eax & 0x20u) != 0u)
        {
    COW_AT(102dcf2d)
            wr8(sp0 - 0x2fu, (uint8_t)(loc_30 >> 8u | 1u));
            loc_30 = rd32(sp0 - 0x30u);
        }
    COW_AT(102dcf31)
        if (rd32(rd32(sp0 - 0x18u) + 0x4cu) == 0u)
        {
            esi = rd32(sp0 - 0x18u);
            loc_94 = 0x1007u;
        }
        else
        {
            esi = rd32(sp0 - 0x18u);
    COW_AT(102dcf3b)
            wr32(sp0 - 0x30u, loc_30 | 0x400008u);
            wr32(sp0 - 0x94u, 0x21007u);
            t9 = rd32(sp0 - 8u);
            wr32(sp0 - 0x80u, t9);
            loc_94 = 0x21007u;
            loc_30 = loc_30 | 0x400008u;
        }
    COW_AT(102dcf4f)
        if (rd32(esi + 0x50u) != 0u)
        {
    COW_AT(102dcf54)
            wr32(sp0 - 0x30u, loc_30 | 8u);
            wr8(sp0 - 0x2bu, rd8(sp0 - 0x2bu) | 0xfeu);
        }
    COW_AT(102dcf5c)
        if (rd32(esi + 0x14u) > 1u)
        {
            eax = rd32(esi + 0x14u);
    COW_AT(102dcf64)
            wr8(sp0 - 0x92u, (uint8_t)(loc_94 >> 0x10u | 0x80u));
            wr8(sp0 - 0x2au, rd8(sp0 - 0x2au) | 0x20u);
            wr32(sp0 - 0x84u, eax);
        }
    COW_AT(102dcf6f)
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, 0x7cu);
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = ecx;
        g->edx = 0x7cu;
        t10 = rd32(COW_IMG(0x10329240u));
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, t10, 5, arg1, sp0 - 0x98u, 0x7cu, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
        t11 = g->ecx;
        t12 = g->edx;
        if (rd32(rd32(sp0 - 0xcu) + 4u) != 1u)
        {
            ebx = t10;
        }
        else
        {
            ecx = t11;
            edx = t12;
            ebx = t10;
    COW_AT(102dcf8d)
            wr32(sp0 - 0xa8u, 0u);
            wr32(sp0 - 0xacu, sp0 - 0x10u);
            wr32(sp0 - 0xb0u, 0x400u);
            t13 = rd32(esi + 8u);
            wr32(sp0 - 0xb4u, t13);
            wr32(sp0 - 0xb8u, arg1);
            g->esp = sp0 - 0xa4u;
            cow_thiscall(g, ebx, ecx, 5, arg1, t13, 0x400u, sp0 - 0x10u, 0u);
        }
    COW_AT(102dcf9f)
        wr32(sp0 - 0xcu, esi);
        loc_c = esi;
L_102dcfa2: ;
    COW_AT(102dcfa2)
        esi = loc_c;
L_102dd0e7: ;
    COW_AT(102dd0e7)
        if (esi != 0u) goto L_102dcfaa;
    COW_AT(102dd0ef)
        t14 = rd32(loc_c + 0x50u);
        wr32(sp0 - 0xcu, t14);
        if (rd32(loc_c + 0x50u) != 0u)
        {
            loc_c = t14;
            goto L_102dcfa2;
        }
    COW_AT(102dd100)
        eax = 0u;
        loc_4 = rd32(sp0 - 4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
    }
    else
    {
    COW_AT(102dcead)
        eax = 0x80004005u;
        loc_4 = in_ebp;
        loc_9c = in_ebx;
        loc_a0 = in_esi;
        loc_a4 = in_edi;
    }
    COW_AT(102dd102)
    g->ebx = loc_9c;
    g->esi = loc_a0;
    g->edi = loc_a4;
    g->ebp = loc_4;
    return eax;
L_102dcfaa: ;
    COW_AT(102dcfaa)
    wr32(sp0 - 8u, 0u);
    if (rd32(esi + 0x14u) != 0u)
    {
    COW_AT(102dcfb6)
        eax = rd32(esi + 0x10u);
        loc_8 = 0u;
L_102dcfb9: ;
    COW_AT(102dcfb9)
        if (eax == 0u) goto L_102dd0d3;
        edi = 0u;
L_102dcfc3: ;
    COW_AT(102dcfc3)
        if (rd32(rd32(sp0 - 0x18u)) == 0x31545844u) goto L_102dd087;
        eax = rd32(rd32(sp0 - 0x18u));
    COW_AT(102dcfd3)
        if (eax == 0x32545844u) goto L_102dd056;
    COW_AT(102dcfda)
        if (eax == 0x32595559u) goto L_102dd02a;
    COW_AT(102dcfe1)
        if (eax == 0x33545844u) goto L_102dd056;
    COW_AT(102dcfe8)
        if (eax == 0x34545844u) goto L_102dd056;
    COW_AT(102dcfef)
        if (eax == 0x35545844u) goto L_102dd056;
    COW_AT(102dcff6)
        if (eax == 0x59565955u) goto L_102dd02a;
    COW_AT(102dcffd)
        eax = rd32(esi + 4u) + rd32(esi + 0x18u) * rd32(sp0 - 0x14u) + (edi + rd32(esi + 0x1cu)) * rd32(esi + 0x30u) + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u);
        ecx = rd32(esi + 0xcu) * rd32(sp0 - 0x14u);
L_102dd0ba: ;
    COW_AT(102dd0ba)
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, ecx);
        wr32(sp0 - 0xb4u, eax);
        wr32(sp0 - 0xb8u, arg1);
        g->esp = sp0 - 0xa4u;
        cow_thiscall(g, ebx, ecx, 5, arg1, eax, ecx, sp0 - 0x10u, 0u);
        if (edi + 1u < rd32(esi + 0x10u))
        {
            edi = edi + 1u;
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            goto L_102dcfc3;
        }
        eax = rd32(esi + 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
L_102dd0d3: ;
    COW_AT(102dd0d3)
        wr32(sp0 - 8u, loc_8 + 1u);
        if (loc_8 + 1u < rd32(esi + 0x14u))
        {
            loc_8 = loc_8 + 1u;
            goto L_102dcfb9;
        }
    }
    COW_AT(102dd0e2)
    esi = rd32(esi + 0x4cu);
    goto L_102dd0e7;
L_102dd02a: ;
    COW_AT(102dd02a)
    eax = rd32(esi + 4u) + rd32(esi + 0x18u) * rd32(sp0 - 0x14u) + (edi + rd32(esi + 0x1cu)) * rd32(esi + 0x30u) + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u);
    ecx = (rd32(esi + 0xcu) + 1u) >> 1u << 2u;
    goto L_102dd0ba;
L_102dd056: ;
    COW_AT(102dd056)
    eax = (rd32(esi + 0x18u) >> 2u) * 0x10u + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u) + ((edi + rd32(esi + 0x1cu)) >> 2u) * rd32(esi + 0x30u);
    ecx = (rd32(esi + 0xcu) + 3u) >> 2u << 4u;
L_102dd0b4: ;
    COW_AT(102dd0b4)
    eax = eax + rd32(esi + 4u);
    edi = edi + 3u;
    goto L_102dd0ba;
L_102dd087: ;
    COW_AT(102dd087)
    eax = (rd32(esi + 0x18u) >> 2u) * 8u + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u) + ((edi + rd32(esi + 0x1cu)) >> 2u) * rd32(esi + 0x30u);
    ecx = (rd32(esi + 0xcu) + 3u) >> 2u << 3u;
    goto L_102dd0b4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dce64(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dce82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->esi = self;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dce8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->esi = self;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dce9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebx = COW_IMG(0x103cc680u);
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dce9cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcea0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcea9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dceadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102dceb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcf22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0x94u, 0x1007u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0x94u, 0x1007u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0x94u, 0x1007u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0x94u, 0x1007u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf5cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xa4u;
        g->edx = 0x7cu;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf8du:
    {
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
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcf9fu:
    {
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
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfa2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfb6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfdau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfe1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfe8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcfefu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcff6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dcffdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd02au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd056u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd087u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd0efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        g->edi = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd100u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102dd102u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dce64(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dce64(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
