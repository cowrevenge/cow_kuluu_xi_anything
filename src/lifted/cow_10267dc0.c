/* f_0x10267dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10267dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10267dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10267dcd;
    case 0x10267dd8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10267dd8;
    case 0x10267de9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_10267de9;
    case 0x10267e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; goto E_10267e10;
    default: break;
    }
#endif

    COW_AT(10267dc0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(self + 0x48u) != 1u) goto L_10267dd8;
    COW_AT(10267dcd)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004005u;
L_10267dd8: ;
    COW_AT(10267dd8)
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, self);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x2cu), sp0 - 8u, 2, self, sp0 - 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        ebx = t2;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = t2;
    COW_AT(10267de9)
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0x18u, self + 0x1cu);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x1cu);   /* kernel32.dll!EnterCriticalSection */
        t5 = g->edx;
        wr32(sp0 - 0x18u, self + 0x1cu);
        t6 = rd32(sp0 - 8u);
        t7 = rd32(sp0 - 4u);
        wr32(self + 0x40u, t6);
        wr32(self + 0x44u, t7);
        wr32(self + 0x38u, t6);
        wr32(self + 0x3cu, t7);
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x1cu);   /* kernel32.dll!LeaveCriticalSection */
    }
    COW_AT(10267e10)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = in_edi;
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10267dc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10267dcdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10267dd8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10267de9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10267e10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10267dc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10267dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
