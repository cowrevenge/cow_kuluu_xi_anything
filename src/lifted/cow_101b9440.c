/* f_0x101b9440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b9440(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b9462u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b9462;
    case 0x101b9474u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b9474;
    default: break;
    }
#endif

    COW_AT(101b9440)
    t1 = rd32(self + 0x10u);
    t2 = rd32(self + 0xcu);
    g->eax = self + 8u;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x10329100u)), 6, 0u, 0u, t2, t1, 4u, self + 8u);   /* kernel32.dll!CreateThread */
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 4u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_101b9474;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101b9462)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103290fcu)), 1, eax);   /* kernel32.dll!ResumeThread */
    t6 = g->edx;
    wr8(self + 0x14u, 0u);
    g->esi = in_esi;
    g->edx = t6;
    return 1u;
L_101b9474: ;
    COW_AT(101b9474)
    wr8(self + 0x14u, 1u);
    g->esi = in_esi;
    g->edx = edx;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b9440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b9462u:
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
    case 0x101b9474u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b9440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
