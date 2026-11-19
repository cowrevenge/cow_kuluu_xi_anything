/* f_0x10250dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10250dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10250ddcu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250ddc;
    case 0x10250deeu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250dee;
    case 0x10250e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250e14;
    case 0x10250e27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250e27;
    default: break;
    }
#endif

    COW_AT(10250dd0)
    if (rd32(arg1 + 0x18u) == 0u) goto L_10250dee;
    ecx = rd32(arg1 + 0x18u);
    COW_AT(10250ddc)
    g->eax = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0xffffffffu;
L_10250dee: ;
    COW_AT(10250dee)
    wr32(arg1 + 4u, arg2);
    g->eax = arg1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4820u), t2, 6, arg2, 0u, 0u, arg1, COW_IMG(0x10250ee0u), COW_IMG(0x10250e30u));
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0) goto L_10250e27;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10250e14)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t6 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0xffffffffu;
L_10250e27: ;
    COW_AT(10250e27)
    g->esi = in_esi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10250dd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10250ddcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10250deeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10250e14u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10250e27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10250dd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10250dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
