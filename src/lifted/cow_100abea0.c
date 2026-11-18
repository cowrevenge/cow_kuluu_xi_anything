/* f_0x100abea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100abea0(Guest* g)
{
    double d19;
    double d22;
    double d25;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100abedeu: eax = g->eax; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100abede;
    case 0x100abee5u: eax = g->eax; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100abee5;
    case 0x100abf5du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100abf5d;
    case 0x100abf72u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100abf72;
    default: break;
    }
#endif

    COW_AT(100abea0)
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10081cf0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0xc4u, 0);
    t4 = g->edx;
    wr32(self, COW_IMG(0x1032f938u));
    wr32(self + 0xc4u, COW_IMG(0x1032f91cu));
    wr8(self + 0x424u, (uint8_t)arg2);
    wr8(self + 0x425u, (uint8_t)arg2);
    wr8(self + 0x426u, (uint8_t)arg2);
    if ((uint8_t)arg2 == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | (uint8_t)arg2;
        edx = t4;
    COW_AT(100abede)
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x100749f0u), self, 0);
        t5 = g->edx;
        edx = t5;
    }
    COW_AT(100abee5)
    g->eax = rd32(arg1);
    g->edx = edx;
    t6 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, rd32(t6 + 0x1bcu), arg1, 0);
    t8 = g->edx;
    t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x404u, t7);
    g->edx = rd32(arg1);
    t10 = rd32(arg1);
    t11 = cow_thiscall(g, rd32(t10 + 0x1c0u), arg1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->eax = self + 0x414u;
    g->edx = t13;
    t14 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x414u, t11);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0xc4u, 1, arg1);
    g->edx = rd32(arg1);
    t17 = rd32(arg1);
    cow_thiscall(g, rd32(t17 + 0x98u), arg1, 0);
    t18 = g->edx;
    d19 = cow_take_float(g);
    wrf32(self + 0x434u, (float)d19);
    g->eax = rd32(arg1);
    t20 = rd32(arg1);
    t21 = cow_thiscall(g, rd32(t20 + 0x9cu), arg1, 0);
    d22 = cow_take_float(g);
    wrf32(self + 0x438u, (float)d22);
    g->edx = rd32(arg1);
    t23 = rd32(arg1);
    cow_thiscall(g, rd32(t23 + 0xa0u), arg1, 0);
    t24 = g->edx;
    d25 = cow_take_float(g);
    wrf32(self + 0x43cu, (float)d25);
    edx = t24;
    ebx = 0u;
    ebp = self + 0x104u;
L_100abf5d: ;
    COW_AT(100abf5d)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(arg1) + 0x1c4u), arg1, 2, ebx, ebp);
    t26 = g->edx;
    if ((int32_t)(ebx + 1u) < 48)
    {
        edx = t26;
        ebx = ebx + 1u;
        ebp = ebp + 0x10u;
        goto L_100abf5d;
    }
    COW_AT(100abf72)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100abea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100abedeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100abee5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100abf5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100abf72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100abea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100abea0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
