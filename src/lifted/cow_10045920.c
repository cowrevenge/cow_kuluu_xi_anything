/* f_0x10045920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10045920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10045934u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_10045934;
    case 0x10045942u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_10045942;
    case 0x1004594bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1004594b;
    case 0x1004594fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1004594f;
    case 0x10045953u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_10045953;
    case 0x10045955u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_10045955;
    case 0x10045963u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_10045963;
    case 0x1004597bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1004597b;
    case 0x10045984u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10045984;
    case 0x100459bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100459ba;
    case 0x10045a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10045a21;
    case 0x10045a28u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_10045a28;
    default: break;
    }
#endif

    COW_AT(10045920)
    wr32(sp0 - 0x1cu, in_esi);
    if (rd8(self + 0x179u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x179u);
        loc_1c = in_esi;
        goto L_10045a28;
    }
    COW_AT(10045934)
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        loc_1c = in_esi;
        goto L_10045a28;
    }
    eax = rd32(self + 0xfcu);
    COW_AT(10045942)
    if (rd32(eax) == 0u)
    {
        loc_1c = in_esi;
        goto L_10045a28;
    }
    COW_AT(1004594b)
    if (eax == 0u)
    {
    COW_AT(10045953)
        eax = 0u;
    }
    else
    {
    COW_AT(1004594f)
        eax = rd32(eax);
    }
    COW_AT(10045955)
    if ((int8_t)rd8(eax + 0xdeu) < 0)
    {
        loc_1c = in_esi;
        goto L_10045a28;
    }
    COW_AT(10045963)
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (!(rd32(self + 0x10cu) >> 0x12u & 1u))
    {
        eax = rd32(self + 0x10cu) >> 0x12u;
        loc_1c = in_esi;
        goto L_10045a28;
    }
    eax = rd32(self + 0x10cu) >> 0x12u;
    ecx = t1;
    edx = t2;
    COW_AT(1004597b)
    if (!(rd8(COW_IMG(0x1047bbf4u)) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bbf4u));
    COW_AT(10045984)
        wr32(sp0 - 0x20u, COW_IMG(0x10045a30u));
        wr32(COW_IMG(0x1047bc10u), 0u);
        wr8(COW_IMG(0x1047bbf4u), (uint8_t)(eax | 1u));
        wr32(COW_IMG(0x1047bc14u), 0u);
        wr32(COW_IMG(0x1047bc18u), 0u);
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10045a30u));
    }
    COW_AT(100459ba)
    t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wr32(sp0 - 0x14u, t4);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t5 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x20u, t5);
    t6 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x2cu, self + 0xa0u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, COW_IMG(0x1047bc10u));
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x8cu), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x10u, COW_IMG(0x1047bc10u), 1u, self + 0xa0u, t7, t6, t5);
    if (rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa94u) != 0u)
    {
        eax = rd32(COW_IMG(0x1047cf7cu));
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10045a28;
    }
    eax = rd32(COW_IMG(0x1047cf7cu));
    COW_AT(10045a21)
    g->esi = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_10045a28: ;
    COW_AT(10045a28)
    g->esi = loc_1c;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10045920(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10045934u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10045942u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1004594bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1004594fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10045953u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10045955u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10045963u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004597bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10045984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100459bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10045a21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10045a28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10045920(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10045920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
