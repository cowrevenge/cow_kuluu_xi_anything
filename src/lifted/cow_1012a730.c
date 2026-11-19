/* f_0x1012a730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1012a730(Guest* g)
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
    case 0x1012a749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1012a749;
    case 0x1012a755u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1012a755;
    case 0x1012a761u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a761;
    case 0x1012a76bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a76b;
    case 0x1012a77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a77e;
    case 0x1012a7b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a7b3;
    case 0x1012a7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a7c2;
    case 0x1012a7d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a7d0;
    case 0x1012a7d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a7d4;
    case 0x1012a7e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1012a7e0;
    case 0x1012a805u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012a805;
    default: break;
    }
#endif

    COW_AT(1012a730)
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr8(sp0 - 0x41u, 0u);
    if ((int32_t)rd32(self + 4u) < (int32_t)(rd32(self + 0x10u) - 1u))
    {
        eax = rd32(self + 4u);
        goto L_1012a755;
    }
    eax = rd32(self + 4u);
    COW_AT(1012a749)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1012a755: ;
    COW_AT(1012a755)
    wr32(sp0 - 0x58u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_call_regs(g, COW_IMG(0x1012a820u), eax, self, g->edx, 0, 1, eax);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1012a76b;
    }
    eax = t1;
    COW_AT(1012a761)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax;
L_1012a76b: ;
    COW_AT(1012a76b)
    t3 = rd32(self + 0x64044u);
    g->esp = sp0 - 0x54u;
    t4 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, t3, g->edx, 1, 0);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1012a805;
    }
    eax = t4;
    ecx = t5;
L_1012a77e: ;
    COW_AT(1012a77e)
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->eax = sp0 - 0x3cu;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x54u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x10128060u), ecx, 3, sp0 - 0x3cu, sp0 - 0x40u, eax);
    t7 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 - 0x40u, arg1);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ebx = t6;
        goto L_1012a7d0;
    }
    eax = t8;
    edx = t9;
    COW_AT(1012a7b3)
    t10 = rd32(self + 0x64044u);
    g->esp = sp0 - 0x54u;
    t11 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, t10, g->edx, 1, 0);
    t12 = g->ecx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        goto L_1012a77e;
    }
    eax = t11;
    COW_AT(1012a7c2)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x41u);
L_1012a7d0: ;
    COW_AT(1012a7d0)
    if (ebx != 0u) goto L_1012a7e0;
    COW_AT(1012a7d4)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax & 0xffffff00u;
L_1012a7e0: ;
    COW_AT(1012a7e0)
    wr32(sp0 - 0x58u, arg2);
    t13 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x5cu, t13);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, 0u);
    g->eax = t13;
    g->esp = sp0 - 0x54u;
    t14 = cow_thiscall(g, COW_IMG(0x10129090u), self, 5, 0u, ebx, sp0 - 0x3cu, t13, arg2);
    t15 = rd32(sp0 - 0x30u);
    wr8(sp0 - 0x41u, 1u);
    wr32(self + 4u, t15);
    eax = t14;
L_1012a805: ;
    COW_AT(1012a805)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x41u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012a730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012a749u:
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
    case 0x1012a755u:
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
    case 0x1012a761u:
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
    case 0x1012a76bu:
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
    case 0x1012a77eu:
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
    case 0x1012a7b3u:
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
    case 0x1012a7c2u:
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
    case 0x1012a7d0u:
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
    case 0x1012a7d4u:
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
    case 0x1012a7e0u:
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
    case 0x1012a805u:
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
void cow_adapter_1012a730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012a730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
