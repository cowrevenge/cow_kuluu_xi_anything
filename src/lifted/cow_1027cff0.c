/* f_0x1027cff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027cff0(Guest* g)
{
    uint32_t af;
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027d00eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1027d00e;
    case 0x1027d026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d026;
    case 0x1027d029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d029;
    case 0x1027d03cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d03c;
    case 0x1027d04bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d04b;
    case 0x1027d055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d055;
    case 0x1027d05cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d05c;
    case 0x1027d06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d06f;
    case 0x1027d089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027d089;
    default: break;
    }
#endif

    COW_AT(1027cff0)
    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x94u, arg1);
    g->esp = sp0 - 0x84u;
    t1 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, arg2, in_edi, in_esi);
    eax = t1;
    COW_AT(1027d00e)
    wr32(sp0 - 0x98u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    t2 = rd32(arg1 + 0x24u);
    g->esp = sp0 - 0x94u;
    t3 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x80u);
    ebx = eax * 0x9cu + t2;
    eax = t3;
    COW_AT(1027d026)
    esi = arg2;
L_1027d029: ;
    COW_AT(1027d029)
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, ebx + 0x1cu);
    wr32(sp0 - 0x98u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, ebx + 0x1cu, sp0 - 0x80u);
    t4 = g->edx;
    edx = t4;
    cf = g->cf;
    pf = g->pf;
    af = g->af;
    zf = g->zf;
    sf = g->sf;
    of = g->of;
    COW_AT(1027d03c)
    wr32(sp0 - 0x9cu, sp0 - 0x40u);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    g->cf = cf;
    g->pf = pf;
    g->af = af;
    g->zf = zf;
    g->sf = sf;
    g->of = of;
    g->eax = sp0 - 0x40u;
    g->ecx = sp0 - 0x80u;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t5 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x80u, sp0 - 0x40u, sp0 - 0x40u, rd32(sp0 - 0x94u), sp0 - 0x80u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(1027d04b)
    if (rd32(esi + 0x68u) == 0u) goto L_1027d06f;
    esi = rd32(esi + 0x68u);
    COW_AT(1027d055)
    wr32(sp0 - 0x90u, esi);
    wr32(sp0 - 0x94u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x84u;
    t8 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, esi, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    eax = t8;
    COW_AT(1027d05c)
    ebx = eax * 0x9cu + rd32(arg1 + 0x24u);
    eax = rd32(arg1 + 0x24u);
    goto L_1027d029;
L_1027d06f: ;
    COW_AT(1027d06f)
    wr32(sp0 - 0x90u, arg3);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    wr32(sp0 - 0x98u, arg4);
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, arg4, sp0 - 0x80u, arg3);
    COW_AT(1027d089)
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027cff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027d00eu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x94u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027d026u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x98u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027d029u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027d03cu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027d04bu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa0u;
        g->edi = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027d055u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027d05cu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->edi = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1027d06fu:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027d089u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027cff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027cff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
