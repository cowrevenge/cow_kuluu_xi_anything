/* f_0x100d63f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d63f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d6403u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100d6403;
    case 0x100d640fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100d640f;
    case 0x100d6411u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100d6411;
    case 0x100d6420u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6420;
    case 0x100d6428u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6428;
    case 0x100d642fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d642f;
    case 0x100d6439u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6439;
    case 0x100d643du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d643d;
    case 0x100d643fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d643f;
    case 0x100d6452u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6452;
    case 0x100d6456u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6456;
    case 0x100d645au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d645a;
    case 0x100d645eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d645e;
    case 0x100d6460u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6460;
    case 0x100d6480u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6480;
    case 0x100d648au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d648a;
    case 0x100d648eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d648e;
    case 0x100d6490u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d6490;
    case 0x100d64c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100d64c9;
    default: break;
    }
#endif

    COW_AT(100d63f0)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
    COW_AT(100d6403)
        if (rd32(self + 0x764u) != 0u)
        {
            ecx = rd32(self + 0x764u);
            edx = edx & 0xffffff00u;
        }
        else
        {
            ecx = rd32(self + 0x764u);
            edx = edx & 0xffffff00u;
    COW_AT(100d640f)
            edx = (edx & 0xffffff00u) | 1u;
        }
    COW_AT(100d6411)
        if (rd32(self + 0x764u) == 0u)
        {
            eax = rd32(self + 0x764u);
            goto L_100d6452;
        }
        eax = rd32(self + 0x764u);
    COW_AT(100d6420)
        if (rd32(eax) == 0u) goto L_100d6452;
    COW_AT(100d6428)
        if (arg1 == rd32(rd32(ecx) + 0x28u)) goto L_100d6452;
    COW_AT(100d642f)
        if (rd32(self + 0x764u) == 0u)
        {
    COW_AT(100d643d)
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x764u);
    COW_AT(100d6439)
            eax = rd32(eax);
        }
    COW_AT(100d643f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10071ec0u), eax, 0);
        t5 = g->edx;
        wr32(self + 0x764u, 0u);
        eax = t4;
        edx = t5;
L_100d6456: ;
    COW_AT(100d6456)
        if (arg1 == 0u)
        {
    COW_AT(100d645e)
            ecx = 0u;
        }
        else
        {
    COW_AT(100d645a)
            ecx = rd32(arg1);
        }
    COW_AT(100d6460)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x100536c0u), ecx, 3, self, self, 1u);
        t7 = g->edx;
        wr32(t6 + 0x64u, self);
        g->edx = t7;
        cow_call_regs(g, COW_IMG(0x10071e90u), t6, t6, g->edx, 1, 0);
        t8 = g->edx;
        t9 = rd32(t6 + 0x14u);
        wr32(self + 0x764u, t9);
        eax = t9;
        edx = t8;
        esi = t6;
L_100d6490: ;
    COW_AT(100d6490)
        wr32(esi + 0xccu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x100531d0u), esi, 0);
        t11 = g->edx;
        wr32(esi + 0xd0u, 0x461c4000u);
        wr32(esi + 0xc8u, 0u);
        cow_call_regs(g, COW_IMG(0x100496f0u), t10, esi, g->edx, 0, 1, 0u);
        wr32(esi + 0xc8u, 0x461c4400u);
    }
    COW_AT(100d64c9)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_100d6452: ;
    COW_AT(100d6452)
    if ((uint8_t)edx == 0u) goto L_100d6480;
    goto L_100d6456;
L_100d6480: ;
    COW_AT(100d6480)
    if (rd32(self + 0x764u) == 0u)
    {
    COW_AT(100d648e)
        esi = 0u;
    }
    else
    {
        edi = rd32(self + 0x764u);
    COW_AT(100d648a)
        esi = rd32(edi);
    }
    goto L_100d6490;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d63f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d6403u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100d640fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100d6411u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100d6420u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d6428u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d642fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d6439u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d643du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d643fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d6452u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d6456u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d645au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d645eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d6460u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d6480u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d648au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d648eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d6490u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d64c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d63f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100d63f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
