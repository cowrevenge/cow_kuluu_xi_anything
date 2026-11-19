/* f_0x1012a650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1012a650(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012a665u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1012a665;
    case 0x1012a671u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1012a671;
    case 0x1012a67du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a67d;
    case 0x1012a687u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a687;
    case 0x1012a69au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a69a;
    case 0x1012a6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a6cf;
    case 0x1012a6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a6de;
    case 0x1012a6ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a6ec;
    case 0x1012a6f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a6f0;
    case 0x1012a6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a6fc;
    case 0x1012a721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a721;
    default: break;
    }
#endif

    COW_AT(1012a650)
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr8(sp0 - 0x41u, 0u);
    if ((int32_t)rd32(self) > 0)
    {
        eax = rd32(self);
        goto L_1012a671;
    }
    eax = rd32(self);
    COW_AT(1012a665)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1012a671: ;
    COW_AT(1012a671)
    wr32(sp0 - 0x58u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_call_regs(g, COW_IMG(0x1012a820u), eax, self, g->edx, 0, 1, eax);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1012a687;
    }
    eax = t1;
    COW_AT(1012a67d)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax;
L_1012a687: ;
    COW_AT(1012a687)
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t3 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        goto L_1012a721;
    }
    eax = t3;
    edx = t4;
L_1012a69a: ;
    COW_AT(1012a69a)
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x54u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 - 0x3cu, 3, sp0 - 0x3cu, sp0 - 0x40u, eax);
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = arg1;
    t6 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 - 0x40u, arg1);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ebx = t5;
        goto L_1012a6ec;
    }
    eax = t6;
    edx = t7;
    COW_AT(1012a6cf)
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t8 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t9;
        goto L_1012a69a;
    }
    eax = t8;
    COW_AT(1012a6de)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x41u);
L_1012a6ec: ;
    COW_AT(1012a6ec)
    if (ebx != 0u) goto L_1012a6fc;
    COW_AT(1012a6f0)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax & 0xffffff00u;
L_1012a6fc: ;
    COW_AT(1012a6fc)
    wr32(sp0 - 0x58u, arg2);
    t10 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x5cu, t10);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, 1u);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10129090u), self, 5, 1u, ebx, sp0 - 0x3cu, t10, arg2);
    t11 = rd32(sp0 - 0x30u);
    wr8(sp0 - 0x41u, 1u);
    wr32(self, t11);
    eax = t11;
L_1012a721: ;
    COW_AT(1012a721)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x41u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012a650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012a665u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1012a671u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1012a67du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1012a687u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1012a69au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1012a6cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012a6deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012a6ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012a6f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012a6fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x3cu);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012a721u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012a650(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
