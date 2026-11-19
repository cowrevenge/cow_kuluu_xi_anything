/* f_0x100f32b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f32b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f32ceu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32ce;
    case 0x100f32d4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32d4;
    case 0x100f32e0u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32e0;
    case 0x100f32eeu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32ee;
    case 0x100f32f3u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32f3;
    case 0x100f32fau: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32fa;
    case 0x100f32ffu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f32ff;
    default: break;
    }
#endif

    COW_AT(100f32b0)
    wr32(self + 8u, 0u);
    wr16(self + 0x105au, 0u);
    wr32(self + 0x105cu, arg1);
    if (arg1 == 0u) goto L_100f32fa;
    COW_AT(100f32ce)
    if (rd32(arg1) == 0u) goto L_100f32fa;
    eax = rd32(arg1);
    COW_AT(100f32d4)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, eax, self, 2, self, 0u);
    t2 = g->edx;
    if (t1 != 0x17u)
    {
        eax = t1;
        edx = t2;
        goto L_100f32ee;
    }
    edx = t2;
    COW_AT(100f32e0)
    wr16(self + 0x105au, (uint16_t)(rd16(self + 0x105au) + 1u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return 0u;
L_100f32ee: ;
    COW_AT(100f32ee)
    if (eax != 0x16u) goto L_100f32ff;
    COW_AT(100f32f3)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return 0u;
L_100f32fa: ;
    COW_AT(100f32fa)
    eax = 0x10u;
    edx = in_edx;
L_100f32ff: ;
    COW_AT(100f32ff)
    wr16(self + 0x1058u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f32b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f32ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f32d4u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f32e0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f32eeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f32f3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f32fau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f32ffu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f32b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f32b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
