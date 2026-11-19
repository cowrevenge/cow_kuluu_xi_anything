/* f_0x100161b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100161b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100161dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100161df;
    case 0x10016201u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10016201;
    case 0x10016279u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10016279;
    case 0x10016287u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10016287;
    case 0x100162b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100162b8;
    case 0x100162c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100162c5;
    case 0x100162d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100162d2;
    case 0x100162d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100162d6;
    case 0x100162ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100162dd;
    case 0x100162e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100162e7;
    case 0x100162f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100162f9;
    default: break;
    }
#endif

    COW_AT(100161b0)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1015d900u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101201c0u), COW_IMG(0x104e1bf8u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x10u, 0xa50u);
    t6 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xa50u);
    if (t6 == 0u)
    {
        eax = t6;
        goto L_100162b8;
    }
    eax = t6;
    COW_AT(100161df)
    t7 = rd32(rd32(COW_IMG(0x103d3cbcu)) + 8u);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(rd32(COW_IMG(0x103d3cbcu)) + 4u);
    wr32(sp0 - 0x14u, t8);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10008f90u), eax, 2, t8, t7);
    wr32(COW_IMG(0x1045666cu), t9);
    if (t9 == 0u)
    {
        eax = t9;
        goto L_100162d6;
    }
    eax = t9;
    COW_AT(10016201)
    wr32(eax + 0x15cu, rd32(COW_IMG(0x10456a58u)));
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x160u, rd32(COW_IMG(0x10456c08u)));
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1cu, t10);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x40u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t10, 0u, 0u, sp0 - 4u);
    t11 = g->edx;
    t12 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 8u), rd32(t12), 1, t12);
    wr32(sp0 - 0x10u, sp0 - 8u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t13);
    g->edx = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t13) + 0x84u), rd32(t13), 2, t13, sp0 - 8u);
    t14 = g->edx;
    t15 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t15);
    cow_thiscall(g, rd32(rd32(t15) + 8u), rd32(t15), 1, t15);
    t16 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t16);
    t17 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t17);
    wr32(sp0 - 0x18u, 0u);
    g->eax = t17;
    g->edx = t16;
    t18 = rd32(COW_IMG(0x1045666cu));
    t19 = cow_thiscall(g, COW_IMG(0x10009620u), t18, 3, 0u, t17, t16);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        goto L_100162d6;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(10016279)
    wr32(sp0 - 0x10u, 0x44u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x44u);
    if (t22 == 0u)
    {
        eax = t22;
        goto L_100162c5;
    }
    eax = t22;
    COW_AT(10016287)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x104569c0u)));
    wr32(sp0 - 0x14u, rd32(COW_IMG(0x104569bcu)));
    wr32(sp0 - 0x18u, rd32(COW_IMG(0x104569a8u)));
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x104569acu)));
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x104569b8u)));
    g->eax = eax;
    g->edx = rd32(COW_IMG(0x104569acu));
    t23 = rd32(COW_IMG(0x104569acu));
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10001240u), eax, 5, rd32(COW_IMG(0x104569b8u)), t23, rd32(COW_IMG(0x104569a8u)), rd32(COW_IMG(0x104569bcu)), rd32(COW_IMG(0x104569c0u)));
    t25 = g->ecx;
    t26 = g->edx;
    wr32(COW_IMG(0x103d3c64u), t24);
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(100162d2)
    if (eax != 0u) goto L_100162dd;
L_100162d6: ;
    COW_AT(100162d6)
    g->esi = rd32(sp0 - 0xcu);
    return eax & 0xffffff00u;
L_100162b8: ;
    COW_AT(100162b8)
    wr32(COW_IMG(0x1045666cu), 0u);
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_100162c5: ;
    COW_AT(100162c5)
    wr32(COW_IMG(0x103d3c64u), 0u);
    g->esi = rd32(sp0 - 0xcu);
    return eax & 0xffffff00u;
L_100162dd: ;
    COW_AT(100162dd)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t27 = cow_fastcall(g, COW_IMG(0x10019140u), ecx, edx, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    esi = COW_IMG(0x10456a00u);
L_100162e7: ;
    COW_AT(100162e7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_stdcall(g, COW_IMG(0x100191d0u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(esi, t30);
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10456a28u))
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        esi = esi + 4u;
        goto L_100162e7;
    }
    eax = t30;
    COW_AT(100162f9)
    g->esi = rd32(sp0 - 0xcu);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100161b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100161dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016279u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016287u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100162b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100162c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100162d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100162d6u:
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
        (void)sp0;
        return 1;
    }
    case 0x100162ddu:
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
        (void)sp0;
        return 1;
    }
    case 0x100162e7u:
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
        (void)sp0;
        return 1;
    }
    case 0x100162f9u:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100161b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100161b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
