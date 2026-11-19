/* f_0x100f5c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
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
    case 0x100f5c42u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100f5c42;
    case 0x100f5c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100f5c64;
    case 0x100f5c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5c7a;
    case 0x100f5c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5c86;
    case 0x100f5c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5c8b;
    case 0x100f5ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5ca1;
    case 0x100f5cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5cac;
    case 0x100f5cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5cb7;
    case 0x100f5cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5cc1;
    case 0x100f5cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5cc5;
    case 0x100f5ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5ccd;
    case 0x100f5cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5cd5;
    case 0x100f5d02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5d02;
    case 0x100f5d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5d07;
    default: break;
    }
#endif

    COW_AT(100f5c30)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    if (arg2 != 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(100f5c42)
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0x200u);
        wr32(sp0 - 0x60u, arg1 + 0xc48u);
        wr32(sp0 - 0x64u, 7u);
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(100f5c64)
    wr32(sp0 - 0x58u, arg1 + 8u);
    wr32(sp0 - 0x5cu, sp0 + 8u);
    wr32(sp0 - 0x60u, arg2);
    g->eax = arg1 + 8u;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t2 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, arg2, sp0 + 8u, arg1 + 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0x17u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_100f5c86;
    }
    edx = t4;
    COW_AT(100f5c7a)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = edx;
    return 0xfu;
L_100f5c86: ;
    COW_AT(100f5c86)
    if (eax != 0x18u) goto L_100f5d07;
    COW_AT(100f5c8b)
    wr32(sp0 - 0x58u, arg2);
    wr32(sp0 - 0x5cu, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->edx = arg2;
    g->esp = sp0 - 0x54u;
    t5 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, arg2);
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        goto L_100f5d02;
    }
    edx = t6;
    COW_AT(100f5ca1)
    if (rd32(sp0 - 0x18u) != rd32(arg1 + 0x58u)) goto L_100f5d02;
    COW_AT(100f5cac)
    if (rd32(sp0 - 0x14u) != rd32(arg1 + 0x5cu))
    {
        edx = rd32(sp0 - 0x14u);
        goto L_100f5d02;
    }
    edx = rd32(sp0 - 0x14u);
    COW_AT(100f5cb7)
    if (rd32(arg1 + 0x60u) != 0u)
    {
        eax = rd32(arg1 + 0x60u);
        ecx = rd32(arg1 + 0x64u);
        goto L_100f5cc5;
    }
    eax = rd32(arg1 + 0x60u);
    ecx = rd32(arg1 + 0x64u);
    COW_AT(100f5cc1)
    if (ecx == 0u) goto L_100f5cd5;
L_100f5cc5: ;
    COW_AT(100f5cc5)
    if (rd32(sp0 - 0x48u) != eax)
    {
        edx = rd32(sp0 - 0x48u);
        goto L_100f5d02;
    }
    edx = rd32(sp0 - 0x48u);
    COW_AT(100f5ccd)
    if (rd32(sp0 - 0x44u) != ecx) goto L_100f5d02;
    eax = rd32(sp0 - 0x44u);
L_100f5cd5: ;
    COW_AT(100f5cd5)
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, sp0 + 8u);
    wr32(sp0 - 0x60u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, 2u, sp0 + 8u, 0u);
    t7 = g->edx;
    esi = sp0 - 0x48u;
    edi = rd32(arg1 + 0xa0u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t7;
    return 0x17u;
L_100f5d02: ;
    COW_AT(100f5d02)
    eax = 0x16u;
L_100f5d07: ;
    COW_AT(100f5d07)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f5c30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f5c42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f5c64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f5c7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5c86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5c8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5ca1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5cacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5cb7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5cc1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5cc5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5ccdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5cd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->ebx = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5d02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
void cow_adapter_100f5c30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f5c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
