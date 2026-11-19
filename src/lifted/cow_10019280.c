/* f_0x10019280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10019280(Guest* g)
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
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001928bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1001928b;
    case 0x1001929cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001929c;
    case 0x100192c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100192c2;
    case 0x100192c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100192c9;
    default: break;
    }
#endif

    COW_AT(10019280)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10019210u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(1001928b)
    wr32(self, COW_IMG(0x1032a0c4u));
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x103292ecu)), 1, sp0 - 8u);   /* kernel32.dll!QueryPerformanceFrequency */
    COW_AT(1001929c)
    t3 = rd32(sp0 - 8u);
    t4 = rd32(sp0 - 4u);
    wr32(self + 0x10u, t3);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x14u, t4);
    wr32(sp0 - 0x10u, self + 0x20u);
    g->eax = self + 0x20u;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103291acu)), 1, self + 0x20u);   /* kernel32.dll!QueryPerformanceCounter */
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100192c2)
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10019300u), self, edx, 0);
    t7 = g->edx;
    edx = t7;
    COW_AT(100192c9)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001928bu:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001929cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100192c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100192c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10019280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
