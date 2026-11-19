/* f_0x102742e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102742e0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10274302u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10274302;
    case 0x1027430eu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1027430e;
    default: break;
    }
#endif

    COW_AT(102742e0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, 1u);
    t1 = rd32(rd32(rd32(sp0 + 8u) + 0x14u) * 0xd8u + rd32(rd32(sp0 + 8u) + 0x20u) + 4u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t2);
    g->ecx = rd32(rd32(sp0 + 8u) + 0x20u);
    g->edx = t1;
    t3 = rd32(rd32(sp0 + 8u) + 0x20u);
    t4 = rd32(rd32(sp0 + 8u) + 0x14u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10273ea0u), 5, t2, t1, 1u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    ecx = t5;
    edx = t6;
    esi = t2;
    edi = t4 * 0xd8u + t3;
    COW_AT(10274302)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 + 8u, 0u);
    COW_AT(1027430e)
    t7 = rd32(rd32(sp0 + 8u) + rd32(rd32(edi) * 0xcu + rd32(esi + 0x10u) + 4u) * 0xc0u + 0xa4u);
    t8 = rd32(edi);
    t9 = rd32(esi + 0x10u);
    t10 = rd32(sp0 - 8u);
    wr32(rd32(sp0 + 8u) + rd32(t8 * 0xcu + t9 + 4u) * 0xc0u + 0xacu, t7);
    t11 = rd32(rd32(sp0 + 8u) + rd32(t8 * 0xcu + t9 + 8u) * 0xc0u + 0xa4u);
    t12 = rd32(sp0 + 8u);
    t13 = rd32(t8 * 0xcu + t9 + 8u);
    wr32(t12 + t13 * 0xc0u + 0xacu, t11);
    wr32(esi + 0x14u, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    g->edi = t10;
    g->edx = t7;
    return t12 + t13 * 0xc0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102742e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10274302u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1027430eu:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102742e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102742e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
