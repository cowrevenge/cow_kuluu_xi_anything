/* f_0x10178a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10178a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10178a32u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a32;
    case 0x10178a40u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a40;
    case 0x10178a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a44;
    case 0x10178a49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a49;
    case 0x10178a5bu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a5b;
    case 0x10178a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a63;
    case 0x10178a86u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10178a86;
    case 0x10178a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10178a97;
    case 0x10178ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10178ab5;
    default: break;
    }
#endif

    COW_AT(10178a20)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0x44u) != 0u)
    {
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_10178ab5;
    }
    COW_AT(10178a32)
    if (rd32(self + 0x17cu) == arg2)
    {
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_10178ab5;
    }
    eax = rd32(self + 0x17cu);
    COW_AT(10178a40)
    if (arg2 != 0u) goto L_10178a86;
    COW_AT(10178a44)
    if (eax == 0xffffffffu)
    {
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_10178ab5;
    }
    COW_AT(10178a49)
    if (rd32(arg1 * 0x78u + self + 0x60u) == 0u)
    {
        eax = arg1 * 0xfu;
        ecx = arg1;
        edx = rd32(arg1 * 0x78u + self + 0x60u);
    }
    else
    {
        edx = rd32(arg1 * 0x78u + self + 0x60u);
    COW_AT(10178a5b)
        wr32(sp0 - 0x1cu, arg1);
        g->eax = arg1 * 0xfu;
        g->esp = sp0 - 0x18u;
        t1 = cow_fastcall(g, COW_IMG(0x10178ac0u), self, edx, 1, arg1);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    COW_AT(10178a63)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(self + 0x17cu, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc680u), 2, 1u, 0u);
    wr8(COW_IMG(0x10376ee8u), (uint8_t)t4);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10178a86: ;
    COW_AT(10178a86)
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, COW_IMG(0x101779b0u), self, 2, sp0 - 0x10u, arg2);
    if (t5 == 0u)
    {
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
        eax = t5;
    COW_AT(10178a97)
        wr32(sp0 - 0x1cu, 0u);
        wr32(self + 0x48u, arg2);
        wr32(self + 0x38u, arg1);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10176dd0u), self + 0x34330u, 1, 0u);
        wr32(self + 0x44u, 1u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
L_10178ab5: ;
    COW_AT(10178ab5)
    g->esi = loc_14;
    g->edi = loc_18;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10178a20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10178a32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10178a40u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10178a44u:
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
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10178a49u:
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
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10178a5bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->eax = arg1 * 0xfu;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10178a63u:
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
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10178a86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10178a97u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10178ab5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10178a20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10178a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
