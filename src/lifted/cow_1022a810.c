/* f_0x1022a810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022a810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022a818u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022a818;
    case 0x1022a82du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022a82d;
    case 0x1022a83bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a83b;
    case 0x1022a83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a83f;
    case 0x1022a847u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a847;
    case 0x1022a848u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a848;
    case 0x1022a84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a84c;
    case 0x1022a855u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a855;
    default: break;
    }
#endif

    COW_AT(1022a810)
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10221f50u), self, in_edx, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(1022a818)
    t2 = rd16(COW_IMG(0x103862ceu) + rd32(self + 0x30u) * 8u);
    g->eax = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, t2);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1022a82d)
    if (eax == 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        goto L_1022a848;
    }
    ecx = rd32(COW_IMG(0x105781f8u));
    COW_AT(1022a83b)
    if (ecx == 0u) goto L_1022a855;
    COW_AT(1022a83f)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, eax, 2u);
    COW_AT(1022a847)
    g->esi = in_esi;
    return;
L_1022a848: ;
    COW_AT(1022a848)
    if (ecx != 0u)
    {
    COW_AT(1022a84c)
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
    }
L_1022a855: ;
    COW_AT(1022a855)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022a810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022a818u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022a82du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1022a83bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022a83fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022a847u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022a848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022a84cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022a855u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_1022a810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022a810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
