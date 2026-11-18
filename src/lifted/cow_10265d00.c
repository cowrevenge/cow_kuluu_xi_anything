/* f_0x10265d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265d00(Guest* g)
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
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10265d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10265d16;
    case 0x10265d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10265d23;
    case 0x10265d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = rd32(sp0 - 0x10u) - 0x18u; goto E_10265d42;
    case 0x10265d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = rd32(sp0 - 0x10u) - 0x18u; goto E_10265d4e;
    default: break;
    }
#endif

    COW_AT(10265d00)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, self + 0x18u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x18u);   /* kernel32.dll!EnterCriticalSection */
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x14u) == 0u)
    {
        ecx = t1;
        edx = t2;
        goto L_10265d23;
    }
    eax = rd32(self + 0x14u);
    ecx = t1;
    edx = t2;
    COW_AT(10265d16)
    wr32(sp0 - 0x10u, self + 0x18u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x18u);   /* kernel32.dll!LeaveCriticalSection */
    t3 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t3;
    return 0u;
L_10265d23: ;
    COW_AT(10265d23)
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, COW_IMG(0x10265cd0u));
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->eax = sp0 - 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329100u)), 6, 0u, 0u, COW_IMG(0x10265cd0u), self, 0u, sp0 - 4u);   /* kernel32.dll!CreateThread */
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x14u, t4);
    wr32(sp0 - 0x10u, self + 0x18u);
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10265d4e;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10265d42)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x18u);   /* kernel32.dll!LeaveCriticalSection */
    t7 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t7;
    return 0u;
L_10265d4e: ;
    COW_AT(10265d4e)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x18u);   /* kernel32.dll!LeaveCriticalSection */
    t8 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t8;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10265d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10265d16u:
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
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = self + 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10265d23u:
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
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->edi = self + 0x18u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10265d42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = rd32(sp0 - 0x10u) - 0x18u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10265d4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = rd32(sp0 - 0x10u) - 0x18u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10265d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
