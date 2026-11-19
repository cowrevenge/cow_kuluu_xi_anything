/* f_0x1020f3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1020f3a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020f3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020f3b8;
    case 0x1020f3c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020f3c0;
    case 0x1020f3d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020f3d1;
    default: break;
    }
#endif

    COW_AT(1020f3a0)
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(1020f3ab)
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x10664494u));
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x1020a600u), t1, 1, 0u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    COW_AT(1020f3b8)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
    COW_AT(1020f3c0)
        t5 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
        g->eax = t5;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x10107b40u), 1, t5);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    COW_AT(1020f3d1)
    wr8(self + 0x6cu, 4u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, edx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t12 = g->edx;
    t13 = rd32(rd32(t11) + 0x12cu);
    wr32(self + 0x68u, t13);
    wr32(self + 0x34u, t13);
    wr8(self + 0x49u, 1u);
    t14 = cow_call_regs(g, COW_IMG(0x101f6700u), t13, self, t12, 0, 1, 5u);
    t15 = g->edx;
    wr16(self + 0x16u, 3u);
    wr32(self + 0x30u, COW_IMG(0x10385a18u));
    wr16(self + 0x26u, 0x10u);
    t16 = cow_fastcall(g, COW_IMG(0x1020f290u), self, t15, 0);
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385b64u), 1u, 0u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020f3a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020f3b8u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020f3c0u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020f3d1u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1020f3ab: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f3a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1020f3a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
