/* f_0x10001b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10001b50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10001b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10001b83;
    case 0x10001b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10001b8f;
    case 0x10001ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10001ba1;
    case 0x10001ba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10001ba6;
    default: break;
    }
#endif

    COW_AT(10001b50)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10311cbau), self, 2, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10311cbau), t2, 2, 0x8001fu, 0x8001fu);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x104568fcu));
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10011a00u), t4, t6, t5, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        loc_c = t1;
        goto L_10001b8f;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    loc_c = t1;
    COW_AT(10001b83)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10311cbau), ecx, 2, loc_c, 0x8001fu);
    g->esi = in_esi;
    return t10 & 0xffffff00u;
L_10001b8f: ;
    COW_AT(10001b8f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10311cbau), ecx, 2, loc_c, 0x8001fu);
    t12 = g->edx;
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        eax = t11;
    }
    else
    {
        eax = t11;
        ecx = rd32(COW_IMG(0x103601bcu));
        edx = t12;
    COW_AT(10001ba1)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x100daf30u), ecx, 0);
        eax = t13;
    }
    COW_AT(10001ba6)
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10001b50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10001b83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0x8001fu);
        (void)sp0;
        return 1;
    }
    case 0x10001b8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0x8001fu);
        (void)sp0;
        return 1;
    }
    case 0x10001ba1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10001ba6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
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
void cow_adapter_10001b50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10001b50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
