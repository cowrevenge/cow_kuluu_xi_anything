/* f_0x1012f570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012f570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012f580u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1012f580;
    case 0x1012f58bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1012f58b;
    default: break;
    }
#endif

    COW_AT(1012f570)
    if (rd32(rd32(COW_IMG(0x10578470u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
        ecx = rd32(COW_IMG(0x10578470u));
        goto L_1012f58b;
    }
    COW_AT(1012f580)
    wr16(self + 0x1b4u, 0x18u);
    g->esi = in_esi;
    return;
L_1012f58b: ;
    COW_AT(1012f58b)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1014f780u), ecx, 1, COW_IMG(0x103d3c84u));
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10578470u));
    cow_thiscall(g, COW_IMG(0x1014f250u), t3, 1, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x10578470u));
    wr16(t6 + 0x15cu, 0u);
    g->eax = t6;
    g->edx = t5;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x2eu);
    t8 = g->edx;
    t9 = cow_thiscall(g, COW_IMG(0x1014f7d0u), rd32(COW_IMG(0x10578470u)), 1, t7);
    wr32(rd32(COW_IMG(0x10578470u)) + 0x18u, 0u);
    g->edx = rd32(COW_IMG(0x10578470u));
    t10 = rd32(COW_IMG(0x10578470u));
    cow_call_regs(g, COW_IMG(0x10118db0u), t9, rd32(t10 + 8u), g->edx, 0, 2, 1u, 0u);
    t11 = g->edx;
    t12 = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578470u));
    t13 = rd32(COW_IMG(0x10578470u));
    t14 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t12, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    cow_call_regs(g, COW_IMG(0x100f7b70u), t14, g->ecx, g->edx, 1, 2, 2u, 0xffffffffu);
    wr16(self + 0x1b4u, 6u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012f570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012f580u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1012f58bu:
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
void cow_adapter_1012f570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1012f570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
