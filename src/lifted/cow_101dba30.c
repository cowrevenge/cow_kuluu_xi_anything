/* f_0x101dba30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101dba30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dba56u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dba56;
    case 0x101dba91u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dba91;
    default: break;
    }
#endif

    COW_AT(101dba30)
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x58u), self, 1, arg1);
    wr8(rd32(COW_IMG(0x10663740u)) + 0x91u, 1u);
    g->edx = rd32(self);
    t3 = rd32(self);
    t4 = cow_thiscall(g, rd32(t3 + 0x64u), self, 0);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101dba91;
    }
    eax = t4;
    edx = t5;
    COW_AT(101dba56)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), edx, 2, arg1, eax);
    t6 = g->edx;
    t7 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    cow_call_regs(g, COW_IMG(0x1015e530u), rd32(COW_IMG(0x10663748u)), COW_IMG(0x10621838u), g->edx, 0, 1, t7);
    t8 = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), rd32(COW_IMG(0x10663468u)), 2, t8, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101dba91: ;
    COW_AT(101dba91)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, self);
    t10 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    g->edx = t10;
    cow_call_regs(g, COW_IMG(0x1015e530u), t9, COW_IMG(0x10621838u), g->edx, 0, 1, t10);
    t11 = g->edx;
    t12 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t12, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dba30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dba56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101dba91u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dba30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101dba30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
