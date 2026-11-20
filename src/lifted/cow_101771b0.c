/* f_0x101771b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101771b0(Guest* g)
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 544u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101771ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x208u); goto E_101771cc;
    case 0x101771deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_101771de;
    case 0x101771e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_101771e2;
    case 0x10177202u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10177202;
    case 0x10177212u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10177212;
    case 0x10177224u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10177224;
    case 0x1017722eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017722e;
    case 0x1017722fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017722f;
    default: break;
    }
#endif

    COW_AT(101771b0)
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x204u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x21cu, COW_IMG(0x10376ca4u));
    g->eax = sp0 - 0x204u;
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_stdcall(g, COW_IMG(0x102da7bbu), 5, COW_IMG(0x10376ca4u), 0u, 0u, sp0 - 0x204u, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101771cc)
    wr32(sp0 - 0x20cu, 0x200u);
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x208u;
    cow_stdcall(g, COW_IMG(0x102daa91u), 3, eax, sp0 - 0x200u, 0x200u);
    t3 = g->edx;
    edx = t3;
    esi = eax;
    COW_AT(101771de)
    if ((int32_t)esi < 0)
    {
        edi = in_edi;
    }
    else
    {
    COW_AT(101771e2)
        wr32(sp0 - 0x20cu, in_edi);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x214u, arg2);
        t4 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x218u, t4);
        g->eax = t4;
        t5 = rd32(t4);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t7 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 0x20cu;
        t8 = cow_thiscall(g, rd32(t5 + 0xcu), t5, 3, t4, arg2, 0u);
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
        esi = t6;
        edi = t7;
    COW_AT(10177202)
        wr32(sp0 - 0x210u, eax);
        wr32(sp0 - 0x214u, arg3);
        wr32(sp0 - 0x218u, esi);
        g->eax = eax;
        g->edx = arg3;
        g->esp = sp0 - 0x20cu;
        t10 = cow_thiscall(g, rd32(edi + 0x12cu), ecx, 3, esi, arg3, eax);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10177212)
        wr32(sp0 - 0x210u, 0x200u);
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x218u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x20cu;
        cow_stdcall(g, COW_IMG(0x102daa91u), 3, eax, sp0 - 0x200u, 0x200u);
        t13 = g->edx;
        edx = t13;
        esi = eax;
    COW_AT(10177224)
        t14 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x210u, t14);
        g->edx = edx;
        g->esp = sp0 - 0x20cu;
        cow_thiscall(g, rd32(rd32(t14) + 8u), rd32(t14), 1, t14);
        t15 = g->edx;
        edx = t15;
    COW_AT(1017722e)
        edi = rd32(sp0 - 0x20cu);
    }
    COW_AT(1017722f)
    g->esi = rd32(sp0 - 0x208u);
    g->edi = edi;
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101771b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101771ccu:
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x101771deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x210u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101771e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x210u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10177202u:
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
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    case 0x10177212u:
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
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    case 0x10177224u:
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
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1017722eu:
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
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1017722fu:
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
        g->esp = sp0 - 0x208u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101771b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101771b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
