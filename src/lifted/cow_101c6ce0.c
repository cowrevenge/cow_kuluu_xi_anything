/* f_0x101c6ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c6ce0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c6d0bu: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d0b;
    case 0x101c6d18u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d18;
    case 0x101c6d22u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d22;
    case 0x101c6d2fu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d2f;
    case 0x101c6d38u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d38;
    case 0x101c6d45u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d45;
    case 0x101c6d4cu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d4c;
    case 0x101c6d6cu: eax = g->eax; edx = g->edx; self = g->esi; goto E_101c6d6c;
    case 0x101c6d80u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c6d80;
    case 0x101c6d9bu: eax = g->eax; edx = g->edx; self = g->esi; goto E_101c6d9b;
    case 0x101c6dafu: eax = g->eax; edx = g->edx; goto E_101c6daf;
    default: break;
    }
#endif

    COW_AT(101c6ce0)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    t1 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0xcu);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, arg1);
    g->eax = sp0 - 0xcu;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        goto L_101c6d18;
    }
    COW_AT(101c6d0b)
    g->esi = in_esi;
    g->edi = in_edi;
    return 4u;
L_101c6d18: ;
    COW_AT(101c6d18)
    if (rd32(sp0 - 0xcu) == 0x5849414du) goto L_101c6d2f;
    COW_AT(101c6d22)
    g->esi = in_esi;
    g->edi = in_edi;
    return 5u;
L_101c6d2f: ;
    COW_AT(101c6d2f)
    if (rd32(sp0 - 8u) < 0x64u)
    {
        eax = rd32(sp0 - 8u);
        goto L_101c6d45;
    }
    COW_AT(101c6d38)
    g->esi = in_esi;
    g->edi = in_edi;
    return 5u;
L_101c6d45: ;
    COW_AT(101c6d45)
    wr32(self + 4u, eax);
    if (eax == 0u) goto L_101c6d80;
    COW_AT(101c6d4c)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x20u, eax * 8u);
    wr32(sp0 - 0x24u, self + 8u);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->edx = self + 8u;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, self + 8u, eax * 8u, 0xcu, 0u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
        goto L_101c6d80;
    }
    eax = t4;
    edx = t5;
    COW_AT(101c6d6c)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 4u;
L_101c6d80: ;
    COW_AT(101c6d80)
    t6 = rd32(self + 4u) << 3u;
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x1cu, self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x101c8c50u), t6, g->ecx, g->edx, 1, 4, self + 8u, t6, in_edi, in_esi);
    t8 = g->edx;
    if (rd32(sp0 - 4u) == t7) goto L_101c6daf;
    eax = t7;
    edx = t8;
    COW_AT(101c6d9b)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 6u;
L_101c6daf: ;
    COW_AT(101c6daf)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c6ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c6d0bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d22u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d38u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6d6cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c6d80u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c6d9bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c6dafu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c6ce0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
