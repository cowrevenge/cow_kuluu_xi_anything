/* f_0x102819f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102819f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1052u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10281a00u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a00;
    case 0x10281a08u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a08;
    case 0x10281a11u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a11;
    case 0x10281a2bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); in_ebx = rd32(sp0 - 0x404u); g->ebx = rd32(sp0 - 0x404u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a2b;
    case 0x10281a44u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); in_ebx = rd32(sp0 - 0x404u); g->ebx = rd32(sp0 - 0x404u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a44;
    case 0x10281a4au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); in_ebx = rd32(sp0 - 0x404u); g->ebx = rd32(sp0 - 0x404u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a4a;
    case 0x10281a51u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); in_ebx = rd32(sp0 - 0x404u); g->ebx = rd32(sp0 - 0x404u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a51;
    case 0x10281a5bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); in_ebx = rd32(sp0 - 0x404u); g->ebx = rd32(sp0 - 0x404u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10281a5b;
    default: break;
    }
#endif

    COW_AT(102819f0)
    wr32(sp0 - 0x404u, in_ebx);
    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    edi = 1u;
L_10281a00: ;
    COW_AT(10281a00)
    if (rd8(COW_IMG(0x109a2620u) + edi) == 0u) goto L_10281a11;
    COW_AT(10281a08)
    if ((int32_t)(edi + 1u) < 256)
    {
        edi = edi + 1u;
        goto L_10281a00;
    }
    edi = edi + 1u;
L_10281a11: ;
    COW_AT(10281a11)
    wr8(COW_IMG(0x109a2620u) + edi, 1u);
    eax = 0u;
    ecx = arg3 + 2u;
    ebx = in_ebx;
L_10281a2b: ;
    COW_AT(10281a2b)
    t1 = rd8(ecx - 2u);
    wr8(eax * 4u + sp0 - 0x400u, (uint8_t)t1);
    t2 = rd8(ecx - 1u);
    wr8(eax * 4u + sp0 - 0x3ffu, (uint8_t)t2);
    t3 = rd8(ecx);
    wr8(eax * 4u + sp0 - 0x3feu, (uint8_t)t3);
    if (arg2 != 3u)
    {
        ebx = ((ebx | t1 | t2) & 0xffffff00u) | t3;
    COW_AT(10281a4a)
        t4 = rd8(ecx + 1u);
        wr8(eax * 4u + sp0 - 0x3fdu, (uint8_t)t4);
        ebx = (ebx & 0xffffff00u) | t4;
    }
    else
    {
        ebx = ((ebx | t1 | t2) & 0xffffff00u) | t3;
    COW_AT(10281a44)
        wr8(eax * 4u + sp0 - 0x3fdu, 0u);
    }
    COW_AT(10281a51)
    if ((int32_t)(eax + 1u) < 256)
    {
        eax = eax + 1u;
        ecx = arg2 + ecx;
        goto L_10281a2b;
    }
    COW_AT(10281a5b)
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, edi);
    wr32(sp0 - 0x418u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x40cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x108u), sp0 - 0x400u, 3, rd32(COW_IMG(0x1066941cu)), edi, sp0 - 0x400u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102819f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10281a00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        wr32(sp0 - 0x404u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10281a08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        wr32(sp0 - 0x404u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10281a11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        wr32(sp0 - 0x404u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10281a2bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        in_ebx = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10281a44u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        in_ebx = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10281a4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        in_ebx = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10281a51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        in_ebx = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x40cu;
        g->edx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10281a5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        in_ebx = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102819f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102819f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
