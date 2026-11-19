/* f_0x101b5760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b5760(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b576cu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b576c;
    case 0x101b5775u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b5775;
    case 0x101b5787u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b5787;
    case 0x101b57b3u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b57b3;
    case 0x101b57b8u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b57b8;
    case 0x101b57f2u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b57f2;
    default: break;
    }
#endif

    COW_AT(101b5760)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x40u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_101b5775;
    }
    edx = t3;
    COW_AT(101b576c)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101b5775: ;
    COW_AT(101b5775)
    t4 = rd32(self + 0xf108u);
    wr8(self + 0xef22u, 0u);
    if (t4 != 3u)
    {
        eax = t4;
        goto L_101b57b3;
    }
    eax = t4;
    COW_AT(101b5787)
    g->edx = rd32(self);
    t5 = rd32(self);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t5 + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    t6 = g->edx;
    g->edx = t6;
    cow_call_regs(g, COW_IMG(0x101b5b60u), arg1, self, g->edx, 0, 1, arg1);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return 1u;
L_101b57b3: ;
    COW_AT(101b57b3)
    if (eax != 4u) goto L_101b57f2;
    COW_AT(101b57b8)
    g->edx = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t8 + 0x5cu), self, 0);
    t9 = g->edx;
    g->eax = rd32(self);
    t10 = rd32(self);
    t11 = cow_thiscall(g, rd32(t10 + 0x58u), self, 0);
    g->edx = rd32(self);
    t12 = rd32(self);
    cow_thiscall(g, rd32(t12 + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    t13 = g->edx;
    g->edx = t13;
    cow_call_regs(g, COW_IMG(0x101b5b60u), arg1, self, g->edx, 0, 1, arg1);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return 1u;
L_101b57f2: ;
    COW_AT(101b57f2)
    g->esi = in_esi;
    g->edx = edx;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b5760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b576cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b5775u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b5787u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b57b3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b57b8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b57f2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_101b5760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b5760(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
