/* f_0x101ae600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ae600(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_804;
    uint32_t loc_808;
    uint32_t loc_80c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 2072u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ae628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae628;
    case 0x101ae62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae62c;
    case 0x101ae635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae635;
    case 0x101ae641u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_80c = rd32(sp0 - 0x80cu); loc_808 = rd32(sp0 - 0x808u); loc_804 = rd32(sp0 - 0x804u); goto E_101ae641;
    case 0x101ae64fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae64f;
    case 0x101ae657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae657;
    case 0x101ae65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae65b;
    case 0x101ae65fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae65f;
    case 0x101ae66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae66f;
    case 0x101ae68bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae68b;
    case 0x101ae693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae693;
    case 0x101ae697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae697;
    case 0x101ae6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6af;
    case 0x101ae6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6b6;
    case 0x101ae6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6be;
    case 0x101ae6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6c7;
    case 0x101ae6cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6cb;
    case 0x101ae6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6e3;
    case 0x101ae6efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ae6ef;
    case 0x101ae706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x80cu); in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->edi = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x808u); goto E_101ae706;
    default: break;
    }
#endif

    COW_AT(101ae600)
    wr32(sp0 - 0x804u, in_ebx);
    wr32(sp0 - 0x808u, in_esi);
    wr32(sp0 - 0x80cu, in_edi);
    wr32(sp0 - 0x810u, 0x400u);
    wr32(sp0 - 0x814u, sp0 - 0x800u);
    g->eax = sp0 - 0x800u;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x80cu;
    t2 = cow_thiscall(g, COW_IMG(0x101b5bc0u), t1, 2, sp0 - 0x800u, 0x400u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(sp0 - 0x800u) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(sp0 - 0x800u);
        ecx = t3;
        edx = t4;
        ebx = 0u;
        goto L_101ae635;
    }
    eax = (t2 & 0xffffff00u) | rd8(sp0 - 0x800u);
    ecx = t3;
    edx = t4;
    ebx = 0u;
L_101ae628: ;
    COW_AT(101ae628)
    if ((uint8_t)eax != 0x20u) goto L_101ae635;
    COW_AT(101ae62c)
    if (rd8(ebx + sp0 - 0x7ffu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x7ffu);
        ebx = ebx + 1u;
        goto L_101ae628;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x7ffu);
    ebx = ebx + 1u;
L_101ae635: ;
    COW_AT(101ae635)
    if (rd8(ebx + sp0 - 0x800u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x800u);
        edi = ebx + sp0 - 0x800u;
        goto L_101ae64f;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x800u);
    loc_804 = in_ebx;
    loc_808 = in_esi;
    loc_80c = in_edi;
L_101ae641: ;
    COW_AT(101ae641)
    g->esp = sp0;
    g->ebx = loc_804;
    g->esi = loc_808;
    g->edi = loc_80c;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101ae5f0u), eax, ecx, edx);
    return;
L_101ae64f: ;
    COW_AT(101ae64f)
    if ((uint8_t)eax != 0x2fu) goto L_101ae706;
    COW_AT(101ae657)
    ecx = 0u;
    edx = edi;
L_101ae65b: ;
    COW_AT(101ae65b)
    if ((uint8_t)eax == 0x20u) goto L_101ae66f;
    COW_AT(101ae65f)
    wr8(ecx + sp0 - 0x400u, (uint8_t)eax);
    if (rd8(edx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_101ae65b;
    }
    eax = (eax & 0xffffff00u) | rd8(edx + 1u);
    ecx = ecx + 1u;
    edx = edx + 1u;
L_101ae66f: ;
    COW_AT(101ae66f)
    wr8(ecx + sp0 - 0x400u, 0u);
    wr32(sp0 - 0x810u, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x80cu;
    t5 = cow_call_regs(g, COW_IMG(0x101ae720u), g->eax, sp0 - 0x400u, edx, 1, 1, sp0 - 0x400u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101ae706;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(101ae68b)
    if (rd8(edi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        esi = ebx;
        goto L_101ae6af;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    esi = ebx;
L_101ae693: ;
    COW_AT(101ae693)
    if ((uint8_t)eax == 0x20u) goto L_101ae6af;
    COW_AT(101ae697)
    t8 = (edx & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    wr32(sp0 - 0x810u, t8);
    wr32(sp0 - 0x814u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0 - 0x80cu;
    t9 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, eax, t8);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd8(esi + sp0 + t9 - 0x800u) != 0u)
    {
        eax = (t9 & 0xffffff00u) | rd8(esi + sp0 + t9 - 0x800u);
        ecx = t10;
        edx = t11;
        esi = esi + t9;
        goto L_101ae693;
    }
    eax = (t9 & 0xffffff00u) | rd8(esi + sp0 + t9 - 0x800u);
    ecx = t10;
    edx = t11;
    esi = esi + t9;
L_101ae6af: ;
    COW_AT(101ae6af)
    if (rd8(ebx + sp0 - 0x7ffu) != 0x74u) goto L_101ae6e3;
    COW_AT(101ae6b6)
    if (rd8(esi + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
        loc_804 = rd32(sp0 - 0x804u);
        loc_808 = rd32(sp0 - 0x808u);
        loc_80c = rd32(sp0 - 0x80cu);
        goto L_101ae641;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
    COW_AT(101ae6be)
    if (rd8(esi + sp0 - 0x7ffu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
        esi = esi + 1u;
        goto L_101ae6e3;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    esi = esi + 1u;
L_101ae6c7: ;
    COW_AT(101ae6c7)
    if ((uint8_t)eax == 0x20u) goto L_101ae6e3;
    COW_AT(101ae6cb)
    t12 = (ecx & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    wr32(sp0 - 0x810u, t12);
    wr32(sp0 - 0x814u, eax);
    g->eax = eax;
    g->ecx = t12;
    g->edx = edx;
    g->esp = sp0 - 0x80cu;
    t13 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, eax, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd8(esi + sp0 + t13 - 0x800u) != 0u)
    {
        eax = (t13 & 0xffffff00u) | rd8(esi + sp0 + t13 - 0x800u);
        ecx = t14;
        edx = t15;
        esi = esi + t13;
        goto L_101ae6c7;
    }
    eax = (t13 & 0xffffff00u) | rd8(esi + sp0 + t13 - 0x800u);
    ecx = t14;
    edx = t15;
    esi = esi + t13;
L_101ae6e3: ;
    COW_AT(101ae6e3)
    if (rd8(esi + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
        loc_804 = rd32(sp0 - 0x804u);
        loc_808 = rd32(sp0 - 0x808u);
        loc_80c = rd32(sp0 - 0x80cu);
        goto L_101ae641;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
    COW_AT(101ae6ef)
    t16 = esi + sp0 - 0x7ffu;
    wr32(sp0 - 0x810u, t16);
    g->esp = sp0 - 0x80cu;
    cow_cdecl(g, COW_IMG(0x101ae790u), 1, t16);
    g->ebx = rd32(sp0 - 0x804u);
    g->esi = rd32(sp0 - 0x808u);
    g->edi = rd32(sp0 - 0x80cu);
    return;
L_101ae706: ;
    COW_AT(101ae706)
    wr32(sp0 - 0x810u, edi);
    g->esp = sp0 - 0x80cu;
    cow_cdecl(g, COW_IMG(0x101ae790u), 1, edi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ae600(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ae628u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae62cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae635u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae641u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_804;
        uint32_t loc_808;
        uint32_t loc_80c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_80c = rd32(sp0 - 0x80cu);
        loc_808 = rd32(sp0 - 0x808u);
        loc_804 = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae64fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae657u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae65bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae65fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae66fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x101ae68bu:
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
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        wr32(sp0 - 0x810u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x101ae693u:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae697u:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6afu:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6b6u:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6beu:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6c7u:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6cbu:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6e3u:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae6efu:
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
        g->esp = sp0 - 0x80cu;
        (void)sp0;
        return 1;
    }
    case 0x101ae706u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x80cu);
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x80cu;
        wr32(sp0 - 0x814u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae600(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ae600(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
