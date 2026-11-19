/* f_0x101c95f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c95f0(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c95fdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c95fd;
    case 0x101c9605u: in_eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101c9605;
    case 0x101c9615u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9615;
    case 0x101c961bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c961b;
    case 0x101c963bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c963b;
    case 0x101c963fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c963f;
    case 0x101c9645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9645;
    case 0x101c9647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9647;
    case 0x101c964fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c964f;
    case 0x101c9654u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9654;
    case 0x101c9658u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9658;
    case 0x101c9662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9662;
    case 0x101c9666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9666;
    case 0x101c9670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9670;
    case 0x101c9681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9681;
    case 0x101c9688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9688;
    case 0x101c968du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c968d;
    case 0x101c9691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c9691;
    case 0x101c96afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c96af;
    case 0x101c96b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c96b7;
    default: break;
    }
#endif

    COW_AT(101c95f0)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_101c9605;
    }
    COW_AT(101c95fd)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_101c9605: ;
    COW_AT(101c9605)
    wr32(sp0 - 0x18u, 0u);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
        goto L_101c961b;
    }
    eax = t1;
    edx = t2;
    COW_AT(101c9615)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101c961b: ;
    COW_AT(101c961b)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 8u, sp0 - 4u);
    t4 = g->edx;
    if (rd8(esi) == 0u)
    {
        edx = t4;
        ebx = 0u;
        goto L_101c96b7;
    }
    eax = (t3 & 0xffffff00u) | rd8(esi);
    edx = t4;
    ebx = 0u;
    ebp = esi;
L_101c963b: ;
    COW_AT(101c963b)
    if (ebp == esi)
    {
    COW_AT(101c9645)
        ecx = 0u;
    }
    else
    {
    COW_AT(101c963f)
        ecx = (uint32_t)(int8_t)rd8(esi - 1u);
    }
    COW_AT(101c9647)
    wr8(sp0 + 4u, (uint8_t)eax);
    if ((uint8_t)eax != 0x85u)
    {
    COW_AT(101c964f)
        if ((uint8_t)ecx != 0x85u) goto L_101c9670;
    COW_AT(101c9654)
        if ((uint8_t)eax != 0xdau) goto L_101c9662;
    COW_AT(101c9658)
        eax = rd32(rd32(edi) + 0x17cu);
        edx = rd32(edi);
L_101c968d: ;
    COW_AT(101c968d)
        if (eax != 0u)
        {
    COW_AT(101c9691)
            t5 = (uint32_t)(int16_t)rd16(eax + 0x22u) - (uint32_t)(int16_t)rd16(eax + 0x20u) - 1u;
            wr32(sp0 - 0xcu, t5);
            g->edx = (uint32_t)(int16_t)rd16(eax + 0x20u);
            t6 = rd16(eax + 0x20u);
            d7 = fr(g, (double)(int32_t)t5 * (double)rdf32(sp0 - 8u));
            fpush(g, d7);
            g->esp = sp0 - 0x1cu;
            t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t9 = g->edx;
            eax = t8;
            edx = t9;
            ebx = ebx + t8;
        }
    }
L_101c96af: ;
    COW_AT(101c96af)
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101c963b;
    }
L_101c96b7: ;
    COW_AT(101c96b7)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return ebx;
L_101c9662: ;
    COW_AT(101c9662)
    if ((uint8_t)eax != 0xc8u) goto L_101c9670;
    COW_AT(101c9666)
    eax = rd32(rd32(edi) + 0x180u);
    goto L_101c968d;
L_101c9670: ;
    COW_AT(101c9670)
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        eax = (uint8_t)rd32(sp0 + 4u) - 0x20u;
        goto L_101c96af;
    }
    eax = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    COW_AT(101c9681)
    if ((int32_t)eax > 139) goto L_101c96af;
    COW_AT(101c9688)
    eax = rd32(eax * 4u + rd32(edi));
    edx = rd32(edi);
    goto L_101c968d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c95f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c95fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9605u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9615u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c961bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c963bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c963fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9645u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9647u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c964fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9654u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9658u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9662u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9670u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9688u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c968du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c9691u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c96afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c96b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c95f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c95f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
