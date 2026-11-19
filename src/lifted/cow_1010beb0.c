/* f_0x1010beb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1010beb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010bed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_1010bed2;
    case 0x1010bedau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010beda;
    case 0x1010bee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bee4;
    case 0x1010bef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bef0;
    case 0x1010bf0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf0e;
    case 0x1010bf30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf30;
    case 0x1010bf3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf3a;
    case 0x1010bf42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf42;
    case 0x1010bf48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf48;
    case 0x1010bf4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf4c;
    case 0x1010bf54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf54;
    case 0x1010bf5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf5a;
    case 0x1010bf6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf6a;
    case 0x1010bf6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf6e;
    case 0x1010bf70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf70;
    case 0x1010bf73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bf73;
    case 0x1010bfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bfcd;
    case 0x1010bfdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bfdc;
    case 0x1010bfe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1010bfe2;
    case 0x1010bfefu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_1010bfef;
    default: break;
    }
#endif

    COW_AT(1010beb0)
    t1 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x1010c7c0u), t1, in_edx, 2, 0u, 8u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        ebp = t2;
        edi = t1;
    COW_AT(1010bed2)
        if (rd32(edi + 8u) == 0u)
        {
            eax = rd32(edi + 8u);
    COW_AT(1010bee4)
            esi = 0u;
            loc_8 = 0u;
        }
        else
        {
            eax = rd32(edi + 8u);
    COW_AT(1010beda)
            esi = ebp - eax;
            loc_8 = ebp - eax;
        }
    COW_AT(1010bef0)
        wr32(ebp, 0xff000101u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t4 = cow_fastcall(g, COW_IMG(0x1010c7c0u), edi, edx, 2, 0u, 0x18u);
        t5 = g->edx;
        wr32(sp0 + 0xcu, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
    COW_AT(1010bf0e)
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t6 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 8u);
            t7 = rd32(rd32(edi + 8u) + 4u) + 1u;
            wr32(rd32(edi + 8u) + 4u, t7);
            if (t6 == 0u)
            {
                eax = t6;
            }
            else
            {
                eax = t6;
    COW_AT(1010bf30)
                if (rd32(rd32(arg2 + 8u) + 4u) == 0u)
                {
                    ecx = rd32(arg2 + 8u);
                    edx = rd32(rd32(arg2 + 8u) + 4u);
                    goto L_1010bf42;
                }
                ecx = rd32(arg2 + 8u);
                edx = rd32(rd32(arg2 + 8u) + 4u);
    COW_AT(1010bf3a)
                if (rd32(ecx + 8u) <= rd32(arg1 + 4u)) goto L_1010bf48;
L_1010bf42: ;
    COW_AT(1010bf42)
                t8 = rd32(arg1 + 4u);
                wr32(ecx + 8u, t8);
L_1010bf48: ;
    COW_AT(1010bf48)
                if (edx == 0u) goto L_1010bf54;
    COW_AT(1010bf4c)
                if (rd32(ecx + 0xcu) >= rd32(arg1 + 4u)) goto L_1010bf5a;
L_1010bf54: ;
    COW_AT(1010bf54)
                t9 = rd32(arg1 + 4u);
                wr32(ecx + 0xcu, t9);
L_1010bf5a: ;
    COW_AT(1010bf5a)
                wr32(ecx + 4u, edx + 1u);
                t10 = rd32(arg1 + 4u);
                wr32(eax, t10);
                if (rd32(edi + 8u) == 0u)
                {
    COW_AT(1010bf6e)
                    ebp = 0u;
                }
                else
                {
                    ecx = rd32(edi + 8u);
    COW_AT(1010bf6a)
                    ebp = ebp - ecx;
                }
    COW_AT(1010bf70)
                wr32(eax + 4u, ebp);
            }
    COW_AT(1010bf73)
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t11 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 8u);
            wr32(rd32(sp0 + 0xcu) + 4u, t11);
            t12 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 0x18u);
            wr32(rd32(sp0 + 0xcu) + 8u, t12);
            g->edx = arg1 + 0x10u;
            t13 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 0x10u);
            t14 = g->edx;
            wr32(rd32(sp0 + 0xcu) + 0xcu, t13);
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x1010c000u), self, 3, arg1, edi, arg4);
            t16 = g->edx;
            t17 = cow_fastcall(g, COW_IMG(0x1010c190u), self, t16, 3, arg1, edi, arg4);
            t18 = g->edx;
            eax = t17;
            edx = t18;
            esi = loc_8;
        }
    COW_AT(1010bfcd)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t19 = cow_fastcall(g, COW_IMG(0x1010c7c0u), edi, edx, 2, 0u, 4u);
        if (t19 != 0u)
        {
            eax = t19;
    COW_AT(1010bfdc)
            wr32(eax, 0xff00ff00u);
        }
    COW_AT(1010bfe2)
        t20 = rd32(edi + 4u) - esi;
        wr32(esi + rd32(edi + 8u) + 4u, t20);
    }
    COW_AT(1010bfef)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010beb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010bed2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1010bedau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bee4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bef0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bf0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bf30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bf73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010bfcdu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bfdcu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bfe2u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1010bfefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010beb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1010beb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
