/* f_0x10244aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10244aa0(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10244adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10244adf;
    case 0x10244ae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10244ae9;
    case 0x10244b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10244b02;
    case 0x10244b23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10244b23;
    case 0x10244b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10244b36;
    case 0x10244b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10244b38;
    case 0x10244b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10244b3a;
    default: break;
    }
#endif

    COW_AT(10244aa0)
    t1 = rd32(COW_IMG(0x1066905cu));
    wr32(t1 + 0x14u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388354u), 1u, 0u);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388340u), 1u, 0u);
    eax = t4;
    ecx = rd32(sp0 + 8u);
    edx = rd32(COW_IMG(0x10669058u)) + 0x14u;
L_10244adf: ;
    COW_AT(10244adf)
    t5 = rd8(ecx);
    wr8(edx, (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        eax = (eax & 0xffffff00u) | t5;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10244adf;
    }
    eax = (eax & 0xffffff00u) | t5;
    ecx = ecx + 1u;
    edx = edx + 1u;
    COW_AT(10244ae9)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10310934u), 1, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 + 8u, t6);
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t8;
        esi = t6;
        goto L_10244b3a;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = t6;
L_10244b02: ;
    COW_AT(10244b02)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x1066905cu));
    d12 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u)));
    wrf32(t11 + 0x14u, (float)d12);
    if (esi == 0x64u)
    {
        eax = t11;
        edx = t10;
        goto L_10244b38;
    }
    eax = t11;
    ecx = t9;
    edx = t10;
    COW_AT(10244b23)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x10310934u), 1, arg1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 + 8u, t13);
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        esi = t13;
        goto L_10244b02;
    }
    eax = t13;
    edx = t15;
    esi = t13;
    COW_AT(10244b36)
L_10244b3a: ;
    COW_AT(10244b3a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    g->esi = in_esi;
    g->edi = in_edi;
    return esi;
L_10244b38: ;
    COW_AT(10244b38)
    esi = 0u;
    goto L_10244b3a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10244aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10244adfu:
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
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10244ae9u:
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
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10244b02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244b23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244b36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10244b38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10244b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10244aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10244aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
