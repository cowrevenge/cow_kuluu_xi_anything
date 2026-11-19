/* f_0x1013a870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1013a870(Guest* g)
{
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013a87au: self = g->ecx; in_ebx = g->ebx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1013a87a;
    case 0x1013a89eu: in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a89e;
    case 0x1013a8b6u: self = g->ecx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a8b6;
    case 0x1013a8bau: self = g->ecx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a8ba;
    case 0x1013a8c4u: in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a8c4;
    default: break;
    }
#endif

    COW_AT(1013a870)
    if (arg2 == 0u) goto L_1013a8c4;
    COW_AT(1013a87a)
    wr32(self + 0x28u, arg5);
    wr8(self + 0x23u, (uint8_t)arg1);
    wr8(self + 0x22u, (uint8_t)arg2);
    wr32(self + 0x24u, arg3);
    wr32(self + 0x2cu, arg4);
    if (arg2 == 1u) goto L_1013a8b6;
    COW_AT(1013a89e)
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fa00u), 1u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_1013a8b6: ;
    COW_AT(1013a8b6)
    if (arg3 != 0u)
    {
    COW_AT(1013a8ba)
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, arg3, self, 2, (uint32_t)(int8_t)arg1, arg4);
    }
L_1013a8c4: ;
    COW_AT(1013a8c4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013a870(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013a87au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013a89eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1013a8b6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1013a8bau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1013a8c4u:
    {
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a870(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1013a870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
