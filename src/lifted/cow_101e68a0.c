/* f_0x101e68a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101e68a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e68b7u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101e68b7;
    case 0x101e68d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e68d5;
    case 0x101e68efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e68ef;
    case 0x101e68f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_101e68f8;
    default: break;
    }
#endif

    COW_AT(101e68a0)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), rd32(COW_IMG(0x10663524u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = 0u;
        loc_c = in_esi;
        goto L_101e68f8;
    }
    edx = t2;
    esi = t1;
    COW_AT(101e68b7)
    wr32(sp0 - 4u, 0u);
    wr8(sp0 - 5u, 0u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, arg1);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), arg1, 3, arg1, sp0 - 4u, in_esi);
    t4 = g->ecx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        loc_c = in_esi;
        goto L_101e68f8;
    }
    ecx = t4;
    COW_AT(101e68d5)
    wr32(sp0 - 0x10u, sp0 - 5u);
    t5 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t5);
    wr32(sp0 - 0x18u, esi + 0x40u);
    g->eax = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, esi + 0x40u, t5, sp0 - 5u);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        loc_c = rd32(sp0 - 0xcu);
        goto L_101e68f8;
    }
    eax = t6;
    COW_AT(101e68ef)
    g->esi = rd32(sp0 - 0xcu);
    return (eax & 0xffffff00u) | rd8(sp0 - 5u);
L_101e68f8: ;
    COW_AT(101e68f8)
    g->esi = loc_c;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e68a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e68b7u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e68d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e68efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 5u);
        (void)sp0;
        return 1;
    }
    case 0x101e68f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e68a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e68a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
