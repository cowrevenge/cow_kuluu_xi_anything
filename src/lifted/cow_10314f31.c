/* f_0x10314f31 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10314f31(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 240u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10314f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10314f44;
    case 0x10314f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f4e;
    case 0x10314f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f5b;
    case 0x10314f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f68;
    case 0x10314f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f75;
    case 0x10314f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f82;
    case 0x10314f8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f8f;
    case 0x10314f96u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314f96;
    case 0x10314fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fa3;
    case 0x10314fa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fa8;
    case 0x10314fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fad;
    case 0x10314fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fb4;
    case 0x10314fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fba;
    case 0x10314fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fbf;
    case 0x10314fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fc3;
    case 0x10314fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fc6;
    case 0x10314fdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fdb;
    case 0x10314fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10314fff;
    case 0x10315009u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10315009;
    case 0x1031500bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1031500b;
    default: break;
    }
#endif

    COW_AT(10314f31)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xd4u, sp0 - 0x14u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xd0u;
    cow_stdcall(g, rd32(COW_IMG(0x1032919cu)), 1, sp0 - 0x14u);   /* kernel32.dll!GetLocalTime */
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(10314f44)
    wr32(sp0 - 0xd4u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xd0u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x10329280u)), 1, sp0 - 0x24u);   /* kernel32.dll!GetSystemTime */
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10314f4e)
    if (rd16(sp0 - 0x1au) != rd16(COW_IMG(0x109b26bau))) goto L_10314f96;
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x1au);
    COW_AT(10314f5b)
    if (rd16(sp0 - 0x1cu) != rd16(COW_IMG(0x109b26b8u))) goto L_10314f96;
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x1cu);
    COW_AT(10314f68)
    if (rd16(sp0 - 0x1eu) != rd16(COW_IMG(0x109b26b6u))) goto L_10314f96;
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x1eu);
    COW_AT(10314f75)
    if (rd16(sp0 - 0x22u) != rd16(COW_IMG(0x109b26b2u))) goto L_10314f96;
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x22u);
    COW_AT(10314f82)
    if (rd16(sp0 - 0x24u) != rd16(COW_IMG(0x109b26b0u))) goto L_10314f96;
    COW_AT(10314f8f)
    eax = rd32(COW_IMG(0x109b26a8u));
L_10314fdb: ;
    COW_AT(10314fdb)
    wr32(sp0 - 0xd4u, eax);
    t9 = rd16(sp0 - 8u);
    wr32(sp0 - 0xd8u, t9);
    t10 = rd16(sp0 - 0xau);
    wr32(sp0 - 0xdcu, t10);
    t11 = rd16(sp0 - 0xcu);
    wr32(sp0 - 0xe0u, t11);
    t12 = rd16(sp0 - 0xeu);
    wr32(sp0 - 0xe4u, t12);
    t13 = rd16(sp0 - 0x12u);
    wr32(sp0 - 0xe8u, t13);
    t14 = rd16(sp0 - 0x14u);
    wr32(sp0 - 0xecu, t14);
    g->esp = sp0 - 0xd0u;
    t15 = cow_call_regs(g, COW_IMG(0x10319c9bu), t14, ecx, edx, 1, 7, t14, t13, t12, t11, t10, t9, eax);
    eax = t15;
    COW_AT(10314fff)
    if (arg1 != 0u)
    {
    COW_AT(10315009)
        wr32(arg1, eax);
    }
    COW_AT(1031500b)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 4u);
    return;
L_10314f96: ;
    COW_AT(10314f96)
    wr32(sp0 - 0xd4u, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xd0u;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x10329284u)), 1, sp0 - 0xd0u);   /* kernel32.dll!GetTimeZoneInformation */
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10314fa3)
    if (eax == 0xffffffffu)
    {
    COW_AT(10314fc3)
        eax = 0xffffffffu;
    }
    else
    {
    COW_AT(10314fa8)
        if (eax != 2u) goto L_10314fbf;
    COW_AT(10314fad)
        if (rd16(sp0 - 0x36u) == 0u) goto L_10314fbf;
    COW_AT(10314fb4)
        if (rd32(sp0 - 0x28u) == 0u) goto L_10314fbf;
    COW_AT(10314fba)
        wr32(sp0 - 0xd4u, 1u);
        eax = 1u;
    }
L_10314fc6: ;
    COW_AT(10314fc6)
    wr32(sp0 - 0xd4u, in_esi);
    wr32(sp0 - 0xd8u, in_edi);
    esi = sp0 - 0x24u;
    edi = COW_IMG(0x109b26b0u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(COW_IMG(0x109b26a8u), eax);
    goto L_10314fdb;
L_10314fbf: ;
    COW_AT(10314fbf)
    eax = 0u;
    goto L_10314fc6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10314f31(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10314f44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10314f4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314f96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10314fa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xd4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10314fc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314fdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314fffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315009u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031500bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10314f31(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10314f31(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
