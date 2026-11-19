/* f_0x102b56d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b56d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b56e6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_102b56e6;
    case 0x102b56efu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_102b56ef;
    case 0x102b574bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b574b;
    case 0x102b5761u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5761;
    case 0x102b576eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b576e;
    case 0x102b5771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5771;
    case 0x102b577bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b577b;
    case 0x102b5781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5781;
    case 0x102b5785u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5785;
    case 0x102b578du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b578d;
    case 0x102b5798u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5798;
    case 0x102b579cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b579c;
    case 0x102b57c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b57c5;
    case 0x102b57c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b57c9;
    case 0x102b57d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b57d0;
    case 0x102b57e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b57e5;
    case 0x102b57f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b57f0;
    case 0x102b5816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5816;
    case 0x102b581au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b581a;
    case 0x102b581du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b581d;
    case 0x102b5826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5826;
    case 0x102b582du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b582d;
    case 0x102b5836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5836;
    case 0x102b583du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b583d;
    case 0x102b584cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_102b584c;
    case 0x102b5872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5872;
    default: break;
    }
#endif

    COW_AT(102b56d0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        goto L_102b584c;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    esi = rd32(sp0 + 4u);
    COW_AT(102b56e6)
    if (rd32(eax + 0x14u) == 0u) goto L_102b584c;
    COW_AT(102b56ef)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0x127u);
    wr32(sp0 - 0x20u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x24u, 4u);
    t1 = rd32(esi + 0x48u);
    wr32(sp0 - 0x28u, t1);
    g->eax = t1;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103c1fb0u), 0x127u, in_edi);
    wr32(sp0 - 0x2cu, t2);
    wr32(sp0 - 0x30u, sp0 - 8u);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, COW_IMG(0x102b5880u));
    wr32(sp0 - 0x3cu, esi);
    wr32(sp0 + 4u, t2);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102bac40u), g->eax, sp0 - 8u, t3, 1, 7, esi, COW_IMG(0x102b5880u), t3, sp0 - 8u, t2, rd32(sp0 - 0x28u), 4u);
    t4 = rd32(esi + 0x34u);
    wr32(sp0 - 4u, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x40u, t5);
    t6 = rd32(esi + 0x48u);
    wr32(sp0 - 0x44u, t6);
    wr32(sp0 - 0x48u, t2);
    t7 = rd32(esi + 0x4cu);
    wr32(sp0 - 0x4cu, t7);
    wr32(sp0 - 0x50u, sp0 - 4u);
    g->ecx = sp0 - 4u;
    g->edx = t6;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102a9aa0u), 5, sp0 - 4u, t7, t2, t6, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd32(esi + 0x4cu) == 0u)
    {
        ecx = t8;
        edx = t9;
        edi = t2;
    }
    else
    {
        eax = rd32(esi + 0x4cu);
        ecx = t8;
        edx = t9;
        edi = t2;
    COW_AT(102b574b)
        wr32(sp0 - 0x1cu, 0x133u);
        wr32(sp0 - 0x20u, COW_IMG(0x103c1fb0u));
        wr32(sp0 - 0x24u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103c1fb0u), 0x133u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(esi + 0x4cu, 0u);
        ecx = t10;
        edx = t11;
    }
    COW_AT(102b5761)
    if ((int32_t)rd32(esi + 0x44u) <= 0) goto L_102b581a;
    COW_AT(102b576e)
    eax = edi + 8u;
    ebx = 0u;
    ebp = 0u;
L_102b5771: ;
    COW_AT(102b5771)
    if (rd32(eax - 8u) == rd32(eax - 4u)) goto L_102b5785;
    ecx = rd32(eax - 4u);
    edi = rd32(eax - 8u);
    COW_AT(102b577b)
    if (ecx == rd32(eax))
    {
        edx = rd32(eax);
        goto L_102b5785;
    }
    edx = rd32(eax);
    COW_AT(102b5781)
    if (edi != edx) goto L_102b578d;
L_102b5785: ;
    COW_AT(102b5785)
    wr32(eax - 8u, 0xffffffffu);
    ebp = ebp + 1u;
L_102b578d: ;
    COW_AT(102b578d)
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        eax = eax + 0xcu;
        ebx = ebx + 1u;
        goto L_102b5771;
    }
    eax = eax + 0xcu;
    ecx = rd32(esi + 0x44u);
    COW_AT(102b5798)
    if (ebp == 0u) goto L_102b5816;
    COW_AT(102b579c)
    wr32(sp0 - 0x1cu, 0x14au);
    wr32(sp0 - 0x20u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x24u, 4u);
    t12 = ecx * 3u - ebp * 3u;
    wr32(sp0 - 0x28u, t12);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t12, 4u, COW_IMG(0x103c1fb0u), 0x14au, rd32(sp0 - 0x18u));
    t14 = g->edx;
    t15 = rd32(esi + 0x44u);
    wr32(sp0 + 8u, t13);
    if ((int32_t)t15 <= 0)
    {
        edx = t14;
        edi = ecx - ebp;
        ecx = t15;
        ebp = t12;
    }
    else
    {
        eax = t13;
        edi = ecx - ebp;
        ebp = t12;
    COW_AT(102b57c5)
        ecx = rd32(sp0 + 4u);
        ebx = 0u;
L_102b57c9: ;
    COW_AT(102b57c9)
        if (rd32(ecx) != 0xffffffffu)
        {
            edx = rd32(ecx);
    COW_AT(102b57d0)
            wr32(eax, edx);
            t16 = rd32(ecx + 4u);
            wr32(eax + 4u, t16);
            t17 = rd32(ecx + 8u);
            wr32(eax + 8u, t17);
            eax = eax + 0xcu;
        }
    COW_AT(102b57e5)
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
        {
            ecx = ecx + 0xcu;
            ebx = ebx + 1u;
            goto L_102b57c9;
        }
        ecx = ecx + 0xcu;
        edx = rd32(esi + 0x44u);
    }
    COW_AT(102b57f0)
    wr32(sp0 - 0x1cu, 0x153u);
    wr32(sp0 - 0x20u, COW_IMG(0x103c1fb0u));
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t18);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t18, COW_IMG(0x103c1fb0u), 0x153u);
    t19 = g->edx;
    t20 = rd32(sp0 + 8u);
    wr32(esi + 0x48u, ebp);
    wr32(esi + 0x44u, edi);
    wr32(esi + 0x4cu, t20);
    ecx = t20;
    edx = t19;
L_102b581d: ;
    COW_AT(102b581d)
    if (rd32(esi + 0x34u) == 0u)
    {
        ebp = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
    }
    else
    {
        eax = rd32(esi + 0x34u);
        ebp = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
    COW_AT(102b5826)
        if (rd32(eax + 0x58u) == 0u)
        {
            ecx = rd32(eax + 0x58u);
        }
        else
        {
            ecx = rd32(eax + 0x58u);
    COW_AT(102b582d)
            wr32(sp0 - 0x14u, esi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102b5650u), 1, esi);
            t21 = g->ecx;
            t22 = g->edx;
            ecx = t21;
            edx = t22;
        }
    }
    COW_AT(102b5836)
    if (rd32(esi + 0x50u) == 0u) goto L_102b5872;
    eax = rd32(esi + 0x50u);
    COW_AT(102b583d)
    wr32(sp0 - 0x14u, esi);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102b5580u), 5, esi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_102b5816: ;
    COW_AT(102b5816)
    edi = rd32(sp0 + 4u);
L_102b581a: ;
    COW_AT(102b581a)
    wr32(esi + 0x4cu, edi);
    goto L_102b581d;
L_102b584c: ;
    COW_AT(102b584c)
    wr32(sp0 - 0x14u, 0x125u);
    wr32(sp0 - 0x18u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x20u, COW_IMG(0x103c2024u));
    wr32(sp0 - 0x24u, COW_IMG(0x103beaa4u));
    g->ebx = 0u;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103c2024u));
    ebp = in_ebp;
    edi = in_edi;
L_102b5872: ;
    COW_AT(102b5872)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b56d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b56e6u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b56efu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b574bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5761u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b576eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5771u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b577bu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5781u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5785u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b578du:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5798u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b579cu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b57c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b57c9u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b57d0u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b57e5u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b57f0u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5816u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b581au:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b581du:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5826u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b582du:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b5836u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b583du:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b584cu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b5872u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b56d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b56d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
