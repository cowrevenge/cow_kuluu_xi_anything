/* f_0x1022a860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022a860(Guest* g)
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
    case 0x1022a88bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a88b;
    case 0x1022a88fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a88f;
    case 0x1022a898u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a898;
    case 0x1022a89cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a89c;
    case 0x1022a8a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022a8a5;
    default: break;
    }
#endif

    COW_AT(1022a860)
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10221f50u), self, in_edx, 0);
    t1 = g->edx;
    t2 = rd16(COW_IMG(0x103865e6u) + rd32(self + 0x30u) * 8u);
    g->eax = t2;
    g->edx = t1;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, t2);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = rd32(COW_IMG(0x105781f8u));
        edx = t4;
        goto L_1022a898;
    }
    eax = t3;
    ecx = rd32(COW_IMG(0x105781f8u));
    edx = t4;
    COW_AT(1022a88b)
    if (ecx == 0u) goto L_1022a8a5;
    COW_AT(1022a88f)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, eax, 2u);
    g->esi = in_esi;
    return;
L_1022a898: ;
    COW_AT(1022a898)
    if (ecx != 0u)
    {
    COW_AT(1022a89c)
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
    }
L_1022a8a5: ;
    COW_AT(1022a8a5)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022a860(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022a88bu:
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
    case 0x1022a88fu:
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
    case 0x1022a898u:
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
    case 0x1022a89cu:
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
    case 0x1022a8a5u:
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
void cow_adapter_1022a860(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022a860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
