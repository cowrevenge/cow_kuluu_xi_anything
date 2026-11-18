/* f_0x10089ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10089ee0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10089ee9u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10089ee9;
    case 0x10089efdu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10089efd;
    case 0x10089f02u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10089f02;
    case 0x10089f13u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10089f13;
    case 0x10089f18u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10089f18;
    case 0x10089f31u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_10089f31;
    default: break;
    }
#endif

    COW_AT(10089ee0)
    if (rd32(COW_IMG(0x10487ee4u)) == 0u) goto L_10089f31;
    eax = rd32(COW_IMG(0x10487ee4u));
    COW_AT(10089ee9)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
    t2 = cow_divs(g, t1, 0x33u);
    t3 = cow_mods(g, t1, 0x33u);
    if (t3 != 0u)
    {
        eax = t2;
        edx = t3;
        esi = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(10089efd)
        esi = 1u;
    }
    COW_AT(10089f02)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x103149e0u), 0x33u, edx, 0);
    t5 = cow_divs(g, t4, 0x33u);
    t6 = cow_mods(g, t4, 0x33u);
    if (t6 != 0u)
    {
        edx = t6;
    }
    else
    {
    COW_AT(10089f13)
        edx = 1u;
    }
    COW_AT(10089f18)
    t7 = cow_divu(g, rd32(rd32(COW_IMG(0x10487ee4u))), edx + esi);
    t8 = cow_modu(g, rd32(rd32(COW_IMG(0x10487ee4u))), edx + esi);
    wr32(rd32(COW_IMG(0x10487ee4u)) + 4u, t7 != 0u);
    g->esi = in_esi;
    return;
L_10089f31: ;
    COW_AT(10089f31)
    wr32(4u, 0u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10089ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10089ee9u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10089efdu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0x33u;
        (void)sp0;
        return 1;
    }
    case 0x10089f02u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0x33u;
        (void)sp0;
        return 1;
    }
    case 0x10089f13u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10089f18u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10089f31u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10089ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10089ee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
