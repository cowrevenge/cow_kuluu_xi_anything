/* f_0x1000ecb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1000ecb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000ececu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000ecec;
    case 0x1000ecf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000ecf4;
    case 0x1000ecfau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000ecfa;
    case 0x1000ecfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000ecfe;
    case 0x1000ed04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000ed04;
    case 0x1000ed0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1000ed0b;
    case 0x1000ed11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1000ed11;
    case 0x1000ed17u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1000ed17;
    default: break;
    }
#endif

    COW_AT(1000ecb0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, sp0 + 0x18u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    t1 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 4u, 0u);
    g->eax = arg2;
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329020u)), 9, arg1, arg2, 0u, arg3, arg4, arg5, t1, sp0 - 4u, sp0 + 0x18u);   /* advapi32.dll!RegCreateKeyExA */
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1000ecec)
    if (rd32(sp0 + 0x1cu) != 0u)
    {
        ecx = rd32(sp0 + 0x1cu);
    COW_AT(1000ecf4)
        t4 = rd32(sp0 + 0x18u);
        wr32(ecx, t4);
        edx = t4;
    }
    COW_AT(1000ecfa)
    if (eax != 0u)
    {
        loc_4 = 0u;
        loc_8 = in_esi;
    }
    else
    {
    COW_AT(1000ecfe)
        if (rd32(self) == 0u)
        {
            loc_4 = 0u;
            loc_8 = in_esi;
        }
        else
        {
            ecx = rd32(self);
    COW_AT(1000ed04)
            wr32(sp0 - 0xcu, ecx);
            g->esp = sp0 - 8u;
            cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, ecx);   /* advapi32.dll!RegCloseKey */
    COW_AT(1000ed0b)
            wr32(self, 0u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    COW_AT(1000ed11)
        wr32(self, loc_4);
    }
    COW_AT(1000ed17)
    g->esi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000ecb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000ececu:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0x18u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000ecf4u:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0x18u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000ecfau:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0x18u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000ecfeu:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0x18u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000ed04u:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0x18u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000ed0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000ed11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000ed17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ecb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1000ecb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
