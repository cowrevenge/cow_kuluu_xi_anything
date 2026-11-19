/* f_0x103156f3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_103156f3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_110;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031570bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_1031570b;
    case 0x10315715u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_10315715;
    case 0x10315732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10315732;
    case 0x10315743u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10315743;
    case 0x10315751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10315751;
    case 0x10315766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10315766;
    case 0x10315772u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10315772;
    case 0x10315789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10315789;
    case 0x10315796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10315796;
    case 0x103157a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_103157a1;
    case 0x103157a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_103157a8;
    case 0x103157b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_103157b3;
    case 0x103157bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_c = rd32(sp0 - 0xcu); goto E_103157bc;
    case 0x103157c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_c = rd32(sp0 - 0xcu); goto E_103157c9;
    case 0x103157e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103157e2;
    case 0x103157ecu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103157ec;
    case 0x10315803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10315803;
    case 0x1031580bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031580b;
    case 0x10315812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10315812;
    case 0x10315816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10315816;
    case 0x1031582bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031582b;
    case 0x10315838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10315838;
    case 0x10315842u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10315842;
    default: break;
    }
#endif

    COW_AT(103156f3)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x100u, in_ebx);
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    if (rd32(sp0 + 8u) < 2u)
    {
        loc_4 = in_ebp;
        loc_100 = in_ebx;
        loc_104 = in_esi;
        loc_108 = in_edi;
    }
    else
    {
        esi = rd32(sp0 + 8u);
    COW_AT(1031570b)
        if (arg3 == 0u)
        {
            loc_4 = in_ebp;
            loc_100 = in_ebx;
            loc_104 = in_esi;
            loc_108 = in_edi;
        }
        else
        {
    COW_AT(10315715)
            wr32(sp0 - 8u, 0u);
            t1 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, sp0 - 0x84u);
            wr32(sp0 + 8u, sp0 - 0xfcu);
            ecx = self;
            ebx = t1;
            esi = t1 + (esi - 1u) * arg3;
            loc_4 = in_ebp;
            loc_100 = in_ebx;
            loc_104 = in_esi;
            loc_108 = in_edi;
            loc_8 = 0u;
L_10315732: ;
    COW_AT(10315732)
            t2 = cow_divu(g, esi - ebx, arg3);
            t3 = cow_modu(g, esi - ebx, arg3);
            if (t2 + 1u > 8u)
            {
                eax = t2 + 1u;
                edx = t3;
                goto L_10315772;
            }
            eax = t2 + 1u;
            edx = t3;
    COW_AT(10315743)
            wr32(sp0 - 0x10cu, arg4);
            wr32(sp0 - 0x110u, arg3);
            wr32(sp0 - 0x114u, esi);
            wr32(sp0 - 0x118u, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x108u;
            cow_call_regs(g, COW_IMG(0x10315847u), g->eax, g->ecx, edx, 1, 4, ebx, esi, arg3, arg4);
            t4 = g->ecx;
            ecx = t4;
            loc_8 = rd32(sp0 - 8u);
L_10315751: ;
    COW_AT(10315751)
            wr32(sp0 - 8u, loc_8 - 1u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 4u);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 4u);
            if ((int32_t)(loc_8 - 1u) < 0)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_100 = rd32(sp0 - 0x100u);
                loc_104 = rd32(sp0 - 0x104u);
                loc_108 = rd32(sp0 - 0x108u);
                goto L_10315842;
            }
            loc_8 = loc_8 - 1u;
    COW_AT(10315766)
            ebx = rd32(rd32(sp0 + 8u));
            esi = rd32(rd32(sp0 + 4u));
            loc_4 = rd32(sp0 - 4u);
            loc_100 = rd32(sp0 - 0x100u);
            loc_104 = rd32(sp0 - 0x104u);
            loc_108 = rd32(sp0 - 0x108u);
            goto L_10315732;
        }
    }
L_10315842: ;
    COW_AT(10315842)
    g->ebx = loc_100;
    g->esi = loc_104;
    g->edi = loc_108;
    g->ebp = loc_4;
    return;
L_10315772: ;
    COW_AT(10315772)
    wr32(sp0 - 0x10cu, arg3);
    wr32(sp0 - 0x110u, ebx);
    t5 = ebx + (eax >> 1u) * arg3;
    wr32(sp0 - 0x114u, t5);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, t5, ebx, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xcu, ebx);
    ecx = t6;
    edx = t7;
    edi = arg3 + esi;
    loc_c = ebx;
L_10315789: ;
    COW_AT(10315789)
    wr32(sp0 - 0xcu, arg3 + loc_c);
    if (arg3 + loc_c > esi)
    {
        eax = arg3 + loc_c;
        loc_c = arg3 + loc_c;
        goto L_103157a1;
    }
    eax = arg3 + loc_c;
    loc_c = arg3 + loc_c;
    COW_AT(10315796)
    wr32(sp0 - 0x10cu, ebx);
    wr32(sp0 - 0x110u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t8 = cow_thiscall_cdecl(g, arg4, ecx, 2, eax, ebx);
    t9 = g->edx;
    if ((int32_t)t8 <= 0)
    {
        ecx = rd32(sp0 - 0x10cu);
        edx = t9;
        loc_c = rd32(sp0 - 0xcu);
        goto L_10315789;
    }
    eax = t8;
    ecx = rd32(sp0 - 0x10cu);
    edx = t9;
    loc_c = rd32(sp0 - 0xcu);
L_103157a1: ;
    COW_AT(103157a1)
    if (edi - arg3 <= ebx)
    {
        edi = edi - arg3;
        goto L_103157b3;
    }
    edi = edi - arg3;
    COW_AT(103157a8)
    wr32(sp0 - 0x10cu, ebx);
    wr32(sp0 - 0x110u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t10 = cow_thiscall_cdecl(g, arg4, ecx, 2, edi, ebx);
    t11 = g->edx;
    if ((int32_t)t10 >= 0)
    {
        eax = t10;
        ecx = rd32(sp0 - 0x10cu);
        edx = t11;
        loc_c = rd32(sp0 - 0xcu);
        goto L_103157a1;
    }
    eax = t10;
    ecx = rd32(sp0 - 0x10cu);
    edx = t11;
    loc_c = rd32(sp0 - 0xcu);
L_103157b3: ;
    COW_AT(103157b3)
    wr32(sp0 - 0x10cu, arg3);
    wr32(sp0 - 0x110u, edi);
    if (edi < loc_c)
    {
        loc_110 = edi;
        goto L_103157c9;
    }
    loc_110 = edi;
    COW_AT(103157bc)
    wr32(sp0 - 0x114u, loc_c);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, loc_c, loc_110, arg3);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    loc_c = rd32(sp0 - 0xcu);
    goto L_10315789;
L_103157c9: ;
    COW_AT(103157c9)
    wr32(sp0 - 0x114u, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, ebx, loc_110, arg3);
    if ((int32_t)(edi - ebx - 1u) < (int32_t)(esi - rd32(sp0 - 0xcu)))
    {
        eax = rd32(sp0 - 0xcu);
        ecx = edi - ebx - 1u;
        goto L_10315812;
    }
    eax = rd32(sp0 - 0xcu);
    COW_AT(103157e2)
    if (arg3 + ebx >= edi)
    {
        ecx = arg3;
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(103157ec)
        t14 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t14 + 4u);
        t15 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t15);
        t16 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t16 + 4u);
        wr32(t14, ebx);
        wr32(t16, edi - arg3);
        ecx = t16;
        loc_8 = t15;
    }
    COW_AT(10315803)
    if (eax >= esi) goto L_10315751;
    COW_AT(1031580b)
    ebx = eax;
    loc_4 = rd32(sp0 - 4u);
    loc_100 = rd32(sp0 - 0x100u);
    loc_104 = rd32(sp0 - 0x104u);
    loc_108 = rd32(sp0 - 0x108u);
    goto L_10315732;
L_10315812: ;
    COW_AT(10315812)
    if (eax >= esi)
    {
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(10315816)
        t17 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t17);
        t18 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t18 + 4u);
        wr32(t18, eax);
        t19 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t19 + 4u);
        wr32(t19, esi);
        ecx = t18;
        loc_8 = t17;
    }
    COW_AT(1031582b)
    if (arg3 + ebx >= edi) goto L_10315751;
    COW_AT(10315838)
    esi = edi - arg3;
    loc_4 = rd32(sp0 - 4u);
    loc_100 = rd32(sp0 - 0x100u);
    loc_104 = rd32(sp0 - 0x104u);
    loc_108 = rd32(sp0 - 0x108u);
    goto L_10315732;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103156f3(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031570bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315715u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315732u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315743u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10315751u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315766u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315772u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10315789u:
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
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315796u:
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
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103157a1u:
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
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103157a8u:
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
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103157b3u:
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
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103157bcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x110u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10cu, arg3);
        (void)sp0;
        return 1;
    }
    case 0x103157c9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x110u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10cu, arg3);
        (void)sp0;
        return 1;
    }
    case 0x103157e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103157ecu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->ecx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315803u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031580bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315812u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315816u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031582bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315838u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315842u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x108u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103156f3(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_103156f3(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
