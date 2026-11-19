/* f_0x1021e3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021e3b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021e3d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3d9;
    case 0x1021e3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3dd;
    case 0x1021e3e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3e2;
    case 0x1021e3eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3ea;
    case 0x1021e3eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3ee;
    case 0x1021e3f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e3f8;
    case 0x1021e402u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e402;
    case 0x1021e406u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e406;
    case 0x1021e40bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e40b;
    case 0x1021e40fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e40f;
    case 0x1021e422u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e422;
    case 0x1021e42cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1021e42c;
    default: break;
    }
#endif

    COW_AT(1021e3b0)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, 0xffffffffu);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), arg2, 0u, 0xffffffffu);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(sp0 - 8u) == 0u) goto L_1021e422;
    ecx = t1;
    edx = t2;
    edi = rd32(sp0 - 8u);
    COW_AT(1021e3d9)
L_1021e3dd: ;
    COW_AT(1021e3dd)
    eax = edi + 0x30u;
    esi = arg1;
L_1021e3e2: ;
    COW_AT(1021e3e2)
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1021e406;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1021e3ea)
    if ((uint8_t)ecx == 0u) goto L_1021e402;
    COW_AT(1021e3ee)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1021e406;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1021e3f8)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1021e3e2;
    }
L_1021e402: ;
    COW_AT(1021e402)
    eax = 0u;
L_1021e40b: ;
    COW_AT(1021e40b)
    if (eax == 0u) goto L_1021e42c;
    COW_AT(1021e40f)
    wr32(sp0 - 0x30u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        ecx = t3;
        edx = t4;
        edi = rd32(sp0 - 8u);
        goto L_1021e3dd;
    }
L_1021e422: ;
    COW_AT(1021e422)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_1021e406: ;
    COW_AT(1021e406)
    eax = -cf + 1u - cf;
    goto L_1021e40b;
L_1021e42c: ;
    COW_AT(1021e42c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return edi + 0x30u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021e3b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021e3d9u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021e3ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e3e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e3eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e3eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e3f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e402u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e406u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e40bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e40fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021e422u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021e42cu:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e3b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021e3b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
