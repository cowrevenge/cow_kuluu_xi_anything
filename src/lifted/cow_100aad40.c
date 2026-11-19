/* f_0x100aad40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100aad40(Guest* g)
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100aad9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_100aad9c;
    case 0x100aada5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100aada5;
    case 0x100aadafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi - 0x120u; goto E_100aadaf;
    case 0x100aadbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi - 0x120u; goto E_100aadbc;
    case 0x100aadc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi - 0x120u; goto E_100aadc6;
    case 0x100aadd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100aadd1;
    case 0x100aadddu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100aaddd;
    default: break;
    }
#endif

    COW_AT(100aad40)
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr8(self + 0x101u, 1u);
    wr32(self + 0x118u, arg1);
    wr32(self + 0x11cu, arg2);
    wr32(self + 0x120u, rd32(COW_IMG(0x1035bcc0u)));
    t1 = rd32(COW_IMG(0x1035bcc4u));
    wr32(self + 0x124u, t1);
    wr32(self + 0x128u, rd32(COW_IMG(0x1035bcc8u)));
    t2 = rd32(COW_IMG(0x1035bcccu));
    wr32(self + 0x12cu, t2);
    g->eax = t1;
    g->edx = t2;
    g->esp = sp0 - 0x48u;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100aad9c)
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t5 = g->edx;
    edx = t5;
    COW_AT(100aada5)
    g->eax = rd32(self);
    g->edx = edx;
    t6 = rd32(self);
    g->esp = sp0 - 0x48u;
    t7 = cow_thiscall(g, rd32(t6 + 0x1c0u), self, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(100aadaf)
    t9 = rd32(eax + 4u);
    wr32(sp0 - 0x4cu, t9);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t10 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(100aadbc)
    wr32(sp0 - 0x4cu, self + 0x120u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t12 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, self + 0x120u);
    t13 = g->ecx;
    eax = t12;
    ecx = t13;
    COW_AT(100aadc6)
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, self + 0x120u);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x48u;
    t14 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, self + 0x120u, arg2);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100aadd1)
    g->esp = sp0 - 0x48u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(100aaddd)
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100aad40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100aad9cu:
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
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->edi = self + 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100aada5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->edi = self + 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100aadafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi - 0x120u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100aadbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi - 0x120u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100aadc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi - 0x120u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100aadd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100aadddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100aad40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100aad40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
