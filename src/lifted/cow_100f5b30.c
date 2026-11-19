/* f_0x100f5b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5b30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f5b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x50u); goto E_100f5b41;
    case 0x100f5b65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x50u); goto E_100f5b65;
    case 0x100f5b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5b7b;
    case 0x100f5b86u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5b86;
    case 0x100f5b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5b8f;
    case 0x100f5ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5ba5;
    case 0x100f5bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bb0;
    case 0x100f5bbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bbb;
    case 0x100f5bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bc5;
    case 0x100f5bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bc9;
    case 0x100f5bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bd1;
    case 0x100f5bd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bd9;
    case 0x100f5bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5bf9;
    case 0x100f5c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5c04;
    case 0x100f5c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5c1b;
    case 0x100f5c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f5c20;
    default: break;
    }
#endif

    COW_AT(100f5b30)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_esi);
    if (arg2 != 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(100f5b41)
        wr32(sp0 - 0x54u, in_edi);
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0x200u);
        wr32(sp0 - 0x60u, arg1 + 0xc48u);
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x64u, 7u);
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(100f5b65)
    wr32(sp0 - 0x54u, arg1 + 8u);
    wr32(sp0 - 0x58u, sp0 + 8u);
    wr32(sp0 - 0x5cu, arg2);
    g->eax = arg1 + 8u;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t2 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, arg2, sp0 + 8u, arg1 + 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0x17u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_100f5b86;
    }
    edx = t4;
    COW_AT(100f5b7b)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = in_edi;
    g->edx = edx;
    return 0xfu;
L_100f5b86: ;
    COW_AT(100f5b86)
    if (eax != 0x18u) goto L_100f5c20;
    COW_AT(100f5b8f)
    wr32(sp0 - 0x54u, arg2);
    wr32(sp0 - 0x58u, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->edx = arg2;
    g->esp = sp0 - 0x50u;
    t5 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, arg2);
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        goto L_100f5c1b;
    }
    edx = t6;
    COW_AT(100f5ba5)
    if (rd32(sp0 - 0x18u) != rd32(arg1 + 0x58u)) goto L_100f5c1b;
    COW_AT(100f5bb0)
    if (rd32(sp0 - 0x14u) != rd32(arg1 + 0x5cu))
    {
        edx = rd32(sp0 - 0x14u);
        goto L_100f5c1b;
    }
    edx = rd32(sp0 - 0x14u);
    COW_AT(100f5bbb)
    if (rd32(arg1 + 0x60u) != 0u)
    {
        eax = rd32(arg1 + 0x60u);
        ecx = rd32(arg1 + 0x64u);
        goto L_100f5bc9;
    }
    eax = rd32(arg1 + 0x60u);
    ecx = rd32(arg1 + 0x64u);
    COW_AT(100f5bc5)
    if (ecx == 0u) goto L_100f5bd9;
L_100f5bc9: ;
    COW_AT(100f5bc9)
    if (rd32(sp0 - 0x48u) != eax)
    {
        edx = rd32(sp0 - 0x48u);
        goto L_100f5c1b;
    }
    edx = rd32(sp0 - 0x48u);
    COW_AT(100f5bd1)
    if (rd32(sp0 - 0x44u) != ecx) goto L_100f5c1b;
    eax = rd32(sp0 - 0x44u);
L_100f5bd9: ;
    COW_AT(100f5bd9)
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, sp0 + 8u);
    wr32(sp0 - 0x5cu, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t7 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, 2u, sp0 + 8u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x48u);
    t8 = cow_fastcall(g, COW_IMG(0x100f31c0u), arg1, sp0 - 0x48u, 1, sp0 - 0x48u);
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t9;
        goto L_100f5c04;
    }
    edx = t9;
    COW_AT(100f5bf9)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = in_edi;
    g->edx = edx;
    return 0x10u;
L_100f5c04: ;
    COW_AT(100f5c04)
    wr8(arg1 + 0xc4u, rd8(sp0 - 0xau) & 0x7fu);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = in_edi;
    g->edx = edx;
    return 0x17u;
L_100f5c1b: ;
    COW_AT(100f5c1b)
    eax = 0x16u;
L_100f5c20: ;
    COW_AT(100f5c20)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f5b30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f5b41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x50u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5b65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x50u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5b7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5b86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5b8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5ba5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bc5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bd9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5bf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 + 8u);
        wr32(sp0 - 0x54u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5c04u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 + 8u);
        wr32(sp0 - 0x54u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5c1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5c20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5b30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f5b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
