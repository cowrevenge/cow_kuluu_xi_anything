/* f_0x101997a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101997a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101997b0u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101997b0;
    case 0x101997ccu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101997cc;
    case 0x101997e9u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101997e9;
    case 0x101997f4u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101997f4;
    case 0x101997ffu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101997ff;
    default: break;
    }
#endif

    COW_AT(101997a0)
    t1 = rd32(self + 0x38u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t1, 1u, 2u);
    eax = t2;
    COW_AT(101997b0)
    t3 = rd32(self + 0x2cu);
    t4 = rd32(self + 0x28u);
    t5 = (eax & 0xffffff00u) | rd8(self + 0x21u) == 1u;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10196b80u), t5, self, g->edx, 0, 5, 5u, t5, t4, t3, 0x64u);
    eax = t6;
    COW_AT(101997cc)
    t7 = rd32(self + 0x2cu);
    t8 = rd32(self + 0x24u);
    t9 = (eax & 0xffffff00u) | rd8(self + 0x20u) == 1u;
    g->edx = (t8 & 0xffffff00u) | rd8(self + 0x20u);
    t10 = rd8(self + 0x20u);
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10196b80u), t9, self, g->edx, 0, 5, 6u, t9, t8, t7, 0x1bu);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101997e9)
    t13 = rd32(self + 0x3cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x10199e00u), self, edx, 1, t13);
    eax = t14;
    COW_AT(101997f4)
    t15 = rd32(self + 0x40u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t16 = cow_fastcall(g, COW_IMG(0x10199ea0u), self, t15, 1, t15);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(101997ff)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101997a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101997b0u:
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
    case 0x101997ccu:
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
    case 0x101997e9u:
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
    case 0x101997f4u:
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
    case 0x101997ffu:
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
void cow_adapter_101997a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101997a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
