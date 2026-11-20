/* f_0x10177240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10177240(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10177259u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x208u); goto E_10177259;
    case 0x10177261u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10177261;
    case 0x10177267u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10177267;
    case 0x10177279u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10177279;
    case 0x1017727du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_1017727d;
    case 0x1017729du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017729d;
    case 0x101772adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101772ad;
    case 0x101772bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101772bf;
    case 0x101772c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101772c9;
    case 0x101772cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101772ca;
    default: break;
    }
#endif

    COW_AT(10177240)
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x204u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    g->eax = sp0 - 0x204u;
    g->edx = in_edx;
    g->esp = sp0 - 0x218u;
    t1 = cow_thiscall(g, COW_IMG(0x10177350u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10177259)
    wr32(sp0 - 0x21cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t3 = cow_thiscall(g, COW_IMG(0x10177340u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10177261)
    wr32(sp0 - 0x220u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x208u;
    t6 = cow_stdcall(g, COW_IMG(0x102daa2du), 6, eax, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), sp0 - 0x204u, rd32(sp0 - 0x20cu));
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10177267)
    wr32(sp0 - 0x20cu, 0x200u);
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, eax);
    g->esp = sp0 - 0x208u;
    cow_stdcall(g, COW_IMG(0x102daa91u), 3, eax, sp0 - 0x200u, 0x200u);
    esi = eax;
    COW_AT(10177279)
    if ((int32_t)esi < 0)
    {
        edi = in_edi;
    }
    else
    {
    COW_AT(1017727d)
        wr32(sp0 - 0x20cu, in_edi);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x214u, arg2);
        t8 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x218u, t8);
        g->eax = t8;
        t9 = rd32(t8);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t11 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 0x20cu;
        t12 = cow_thiscall(g, rd32(t9 + 0xcu), t9, 3, t8, arg2, 0u);
        t13 = g->ecx;
        eax = t12;
        ecx = t13;
        esi = t10;
        edi = t11;
    COW_AT(1017729d)
        wr32(sp0 - 0x210u, eax);
        wr32(sp0 - 0x214u, arg3);
        wr32(sp0 - 0x218u, esi);
        g->eax = eax;
        g->edx = arg3;
        g->esp = sp0 - 0x20cu;
        t14 = cow_thiscall(g, rd32(edi + 0x12cu), ecx, 3, esi, arg3, eax);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(101772ad)
        wr32(sp0 - 0x210u, 0x200u);
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x218u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x20cu;
        cow_stdcall(g, COW_IMG(0x102daa91u), 3, eax, sp0 - 0x200u, 0x200u);
        t17 = g->edx;
        edx = t17;
        esi = eax;
    COW_AT(101772bf)
        t18 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x210u, t18);
        g->esp = sp0 - 0x20cu;
        cow_thiscall(g, rd32(rd32(t18) + 8u), rd32(t18), 1, t18);
    COW_AT(101772c9)
        edi = rd32(sp0 - 0x20cu);
    }
    COW_AT(101772ca)
    g->esi = rd32(sp0 - 0x208u);
    g->edi = edi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10177240(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10177259u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0u);
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        wr32(sp0 - 0x20cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10177261u:
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
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x10177267u:
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
        wr32(sp0 - 0x210u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x10177279u:
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
    case 0x1017727du:
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
    case 0x1017729du:
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
    case 0x101772adu:
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
    case 0x101772bfu:
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
    case 0x101772c9u:
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
    case 0x101772cau:
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
void cow_adapter_10177240(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10177240(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
