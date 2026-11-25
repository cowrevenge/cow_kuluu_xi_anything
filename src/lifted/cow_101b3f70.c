/* f_0x101b3f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101b3f70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_101b3f86;
    case 0x101b3f9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3f9a;
    case 0x101b3fabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3fab;
    default: break;
    }
#endif

    COW_AT(101b3f70)
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x10cu, t1);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t1;
    t2 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x108u;
    t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
    t4 = g->ecx;
    eax = t3;
    ecx = t4;
    COW_AT(101b3f86)
    wr32(sp0 - 0x10cu, 0x100u);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    wr32(sp0 - 0x114u, 8u);
    wr32(sp0 - 0x118u, eax);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x108u;
    t5 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, eax, 8u, sp0 - 0x100u, 0x100u);
    t6 = g->edx;
    edx = t6;
    esi = eax;
    eax = t5;
    COW_AT(101b3f9a)
    wr32(sp0 - 0x10cu, esi);
    t7 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x110u, t7);
    g->esp = sp0 - 0x108u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t7, esi);
    edi = eax;
    COW_AT(101b3fab)
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    return (int32_t)edi > 0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3f70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3f86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101b3f9au:
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
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3fabu:
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
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3f70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b3f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
