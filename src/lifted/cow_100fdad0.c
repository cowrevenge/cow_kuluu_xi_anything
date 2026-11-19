/* f_0x100fdad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fdad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fdae1u: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdae1;
    case 0x100fdafdu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdafd;
    case 0x100fdb01u: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb01;
    case 0x100fdb08u: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb08;
    case 0x100fdb17u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb17;
    case 0x100fdb1cu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb1c;
    case 0x100fdb35u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb35;
    case 0x100fdb39u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fdb39;
    default: break;
    }
#endif

    COW_AT(100fdad0)
    if ((int32_t)(uint16_t)arg3 >= 768) goto L_100fdb01;
    COW_AT(100fdae1)
    t1 = cow_divs(g, (uint16_t)arg3, 3u);
    t2 = cow_mods(g, (uint16_t)arg3, 3u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x100fda90u), 2, arg1, t1);
    if ((int32_t)t3 <= (int32_t)t2)
    {
        eax = t3;
        goto L_100fdb39;
    }
    eax = t3;
    COW_AT(100fdafd)
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_100fdb01: ;
    COW_AT(100fdb01)
    if ((int32_t)(uint16_t)arg3 >= 864)
    {
        eax = (uint16_t)arg3;
        goto L_100fdb39;
    }
    COW_AT(100fdb08)
    t4 = (uint16_t)arg3 - 0x300u;
    if ((int32_t)(t4 & 0x8000001fu) >= 0)
    {
        eax = t4;
        ecx = t4 & 0x8000001fu;
    }
    else
    {
        eax = t4;
        ecx = t4 & 0x8000001fu;
    COW_AT(100fdb17)
        ecx = (ecx - 1u | 0xffffffe0u) + 1u;
    }
    COW_AT(100fdb1c)
    if ((rd32(arg2 + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u) * 4u) & 1u << (ecx & 0x1fu)) == 0u)
    {
        eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u);
        goto L_100fdb39;
    }
    eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u);
    COW_AT(100fdb35)
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_100fdb39: ;
    COW_AT(100fdb39)
    g->esi = in_esi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fdad0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fdae1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fdafdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fdb01u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fdb08u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fdb17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fdb1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fdb35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fdb39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_100fdad0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fdad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
