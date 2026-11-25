/* f_0x10227750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10227750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022775au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1022775a;
    case 0x10227761u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227761;
    case 0x10227768u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227768;
    case 0x1022776fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1022776f;
    case 0x10227779u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227779;
    case 0x10227783u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227783;
    case 0x1022778au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1022778a;
    case 0x10227791u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227791;
    case 0x10227798u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10227798;
    case 0x102277a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102277a2;
    case 0x102277a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102277a9;
    case 0x102277b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102277b0;
    case 0x102277b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102277b7;
    case 0x102277c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102277c3;
    default: break;
    }
#endif

    COW_AT(10227750)
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x378u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1022775a)
    if (eax == 0u)
    {
    COW_AT(1022776f)
        wr32(COW_IMG(0x106671b8u), 0u);
    }
    else
    {
    COW_AT(10227761)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_thiscall(g, COW_IMG(0x102278b0u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(10227768)
        wr32(COW_IMG(0x106671b8u), eax);
    }
    COW_AT(10227779)
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x27cu);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10227783)
    if (eax == 0u)
    {
    COW_AT(10227798)
        wr32(COW_IMG(0x106671bcu), 0u);
    }
    else
    {
    COW_AT(1022778a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t10 = cow_thiscall(g, COW_IMG(0x10228200u), eax, 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10227791)
        wr32(COW_IMG(0x106671bcu), eax);
    }
    COW_AT(102277a2)
    g->eax = eax;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x20u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(102277a9)
    if (eax == 0u) goto L_102277c3;
    COW_AT(102277b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t15 = cow_thiscall(g, COW_IMG(0x102271b0u), eax, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(102277b7)
    wr32(COW_IMG(0x106671b4u), eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x102271d0u), eax, eax, edx);
L_102277c3: ;
    COW_AT(102277c3)
    wr32(COW_IMG(0x106671b4u), 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x102271d0u), 0u, 0u, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10227750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022775au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10227761u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10227768u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022776fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10227779u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10227783u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022778au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10227791u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10227798u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102277a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102277a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102277b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102277b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102277c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10227750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10227750(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
