/* f_0x1018f300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1018f300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 400u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018f31du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x17cu); in_esi = rd32(sp0 - 0x178u); in_ebp = rd32(sp0 - 0x174u); in_ebx = rd32(sp0 - 0x170u); self = rd32(sp0 - 0x16cu); g->ebp = rd32(sp0 - 0x174u); g->ebx = rd32(sp0 - 0x170u); g->edi = rd32(sp0 - 0x17cu); g->esi = rd32(sp0 - 0x178u); goto E_1018f31d;
    case 0x1018f325u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x17cu); in_esi = rd32(sp0 - 0x178u); in_ebp = rd32(sp0 - 0x174u); in_ebx = rd32(sp0 - 0x170u); self = rd32(sp0 - 0x16cu); g->ebp = rd32(sp0 - 0x174u); g->ebx = rd32(sp0 - 0x170u); g->edi = rd32(sp0 - 0x17cu); g->esi = rd32(sp0 - 0x178u); goto E_1018f325;
    case 0x1018f329u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x17cu); in_esi = rd32(sp0 - 0x178u); in_ebp = rd32(sp0 - 0x174u); in_ebx = rd32(sp0 - 0x170u); self = rd32(sp0 - 0x16cu); g->ebp = rd32(sp0 - 0x174u); g->ebx = rd32(sp0 - 0x170u); g->edi = rd32(sp0 - 0x17cu); g->esi = rd32(sp0 - 0x178u); goto E_1018f329;
    case 0x1018f335u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x17cu); in_esi = rd32(sp0 - 0x178u); in_ebp = rd32(sp0 - 0x174u); in_ebx = rd32(sp0 - 0x170u); self = rd32(sp0 - 0x16cu); g->ebp = rd32(sp0 - 0x174u); g->ebx = rd32(sp0 - 0x170u); g->edi = rd32(sp0 - 0x17cu); g->esi = rd32(sp0 - 0x178u); goto E_1018f335;
    case 0x1018f363u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1018f363;
    case 0x1018f387u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1018f387;
    default: break;
    }
#endif

    COW_AT(1018f300)
    wr32(sp0 - 0x170u, in_ebx);
    wr32(sp0 - 0x174u, in_ebp);
    wr32(sp0 - 0x178u, in_esi);
    wr32(sp0 - 0x17cu, in_edi);
    wr32(sp0 - 0x16cu, self);
    if (rd8(arg3) == 6u)
    {
        ecx = self;
        edx = in_edx;
        esi = 0u;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3);
    COW_AT(1018f31d)
        ecx = arg3;
        esi = 0u;
L_1018f325: ;
    COW_AT(1018f325)
        if ((uint8_t)eax == 0u)
        {
            edx = sp0 - 0x168u - arg3;
            goto L_1018f335;
        }
    COW_AT(1018f329)
        wr8(ecx + sp0 - arg3 - 0x168u, (uint8_t)eax);
        if (rd8(ecx + 1u) != 6u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
            ecx = ecx + 1u;
            esi = esi + 1u;
            goto L_1018f325;
        }
        ecx = ecx + 1u;
        edx = sp0 - 0x168u - arg3;
        esi = esi + 1u;
    }
L_1018f335: ;
    COW_AT(1018f335)
    wr32(sp0 - 0x180u, 0x80808080u);
    wr32(sp0 - 0x184u, sp0 - 0x168u);
    wr32(sp0 - 0x188u, arg2);
    wr32(sp0 - 0x18cu, arg1);
    wr8(esi + sp0 - 0x168u, 0u);
    g->eax = sp0 - 0x168u;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t1 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, arg1, arg2, sp0 - 0x168u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, self);
    t2 = g->edx;
    if (rd8(arg3 + esi) == 6u)
    {
        eax = (t1 & 0xffffff00u) | rd8(arg3 + esi);
        edx = t2;
    COW_AT(1018f363)
        wr32(sp0 - 0x180u, sp0 - 0x168u);
        g->ecx = rd32(sp0 - 0x16cu);
        t3 = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x17cu;
        t4 = cow_call_regs(g, COW_IMG(0x1018f8c0u), eax, g->ecx, g->edx, 0, 1, sp0 - 0x168u);
        t5 = g->ecx;
        wr32(sp0 - 0x180u, 0x80404040u);
        t6 = arg3 + esi + 1u;
        wr32(sp0 - 0x184u, t6);
        wr32(sp0 - 0x188u, arg2);
        wr32(sp0 - 0x18cu, arg1 + t4);
        g->esp = sp0 - 0x168u;
        cow_cdecl(g, COW_IMG(0x101907e0u), 9, arg1 + t4, arg2, t6, 0x80404040u, rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
    }
    COW_AT(1018f387)
    g->ebx = rd32(sp0 - 0x170u);
    g->esi = rd32(sp0 - 0x178u);
    g->edi = rd32(sp0 - 0x17cu);
    g->ebp = rd32(sp0 - 0x174u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018f300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018f31du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x17cu);
        in_esi = rd32(sp0 - 0x178u);
        in_ebp = rd32(sp0 - 0x174u);
        in_ebx = rd32(sp0 - 0x170u);
        self = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x17cu;
        g->esi = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1018f325u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x17cu);
        in_esi = rd32(sp0 - 0x178u);
        in_ebp = rd32(sp0 - 0x174u);
        in_ebx = rd32(sp0 - 0x170u);
        self = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x17cu;
        g->edx = sp0 - 0x168u - arg3;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1018f329u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x17cu);
        in_esi = rd32(sp0 - 0x178u);
        in_ebp = rd32(sp0 - 0x174u);
        in_ebx = rd32(sp0 - 0x170u);
        self = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x17cu;
        g->edx = sp0 - 0x168u - arg3;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1018f335u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x17cu);
        in_esi = rd32(sp0 - 0x178u);
        in_ebp = rd32(sp0 - 0x174u);
        in_ebx = rd32(sp0 - 0x170u);
        self = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x17cu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1018f363u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x17cu;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x184u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1018f300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
