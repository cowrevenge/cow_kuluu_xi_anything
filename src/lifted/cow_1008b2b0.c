/* f_0x1008b2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1008b2b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008b2c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2c2;
    case 0x1008b2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2ca;
    case 0x1008b2ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2ce;
    case 0x1008b2d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2d8;
    case 0x1008b2e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2e2;
    case 0x1008b2e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2e6;
    case 0x1008b2ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2eb;
    case 0x1008b2efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2ef;
    case 0x1008b2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b2f8;
    case 0x1008b300u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1008b300;
    case 0x1008b341u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b341;
    case 0x1008b349u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b349;
    case 0x1008b34du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b34d;
    case 0x1008b357u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b357;
    case 0x1008b361u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b361;
    case 0x1008b365u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b365;
    case 0x1008b36au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b36a;
    case 0x1008b36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1008b36e;
    case 0x1008b377u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008b377;
    default: break;
    }
#endif

    COW_AT(1008b2b0)
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    eax = arg1;
    ecx = self;
    edx = in_edx;
    edi = arg2;
L_1008b2c2: ;
    COW_AT(1008b2c2)
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_1008b2e6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1008b2ca)
    if ((uint8_t)ecx == 0u) goto L_1008b2e2;
    COW_AT(1008b2ce)
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_1008b2e6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1008b2d8)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_1008b2c2;
    }
L_1008b2e2: ;
    COW_AT(1008b2e2)
    eax = 0u;
L_1008b2eb: ;
    COW_AT(1008b2eb)
    if (eax != 0u) goto L_1008b2f8;
    COW_AT(1008b2ef)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1008b2e6: ;
    COW_AT(1008b2e6)
    eax = -cf + 1u - cf;
    goto L_1008b2eb;
L_1008b2f8: ;
    COW_AT(1008b2f8)
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_1008b377;
    }
    COW_AT(1008b300)
    esi = arg1;
    edi = sp0 - 0x1cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg2;
    edi = sp0 - 0x38u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    wr8(sp0 - 5u, 0u);
    wr8(sp0 - 0x21u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x10077c30u), sp0 - 0x1cu, ecx, g->edx, 1, 7, sp0 - 0x1cu, in_edi, in_esi, in_ebp, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t2 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x38u);
    g->edx = t2;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10077c30u), t1, sp0 - 0x38u, g->edx, 1, 7, sp0 - 0x38u, sp0 - 0x1cu, in_edi, in_esi, in_ebp, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t3 = g->ecx;
    t4 = g->edx;
    eax = sp0 - 0x1cu;
    ecx = t3;
    edx = t4;
    esi = sp0 - 0x38u;
L_1008b341: ;
    COW_AT(1008b341)
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1008b365;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1008b349)
    if ((uint8_t)ecx == 0u) goto L_1008b361;
    COW_AT(1008b34d)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1008b365;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1008b357)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1008b341;
    }
L_1008b361: ;
    COW_AT(1008b361)
    eax = 0u;
L_1008b36a: ;
    COW_AT(1008b36a)
    if (eax != 0u)
    {
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1008b377;
    }
    COW_AT(1008b36e)
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1008b365: ;
    COW_AT(1008b365)
    eax = -cf + 1u - cf;
    goto L_1008b36a;
L_1008b377: ;
    COW_AT(1008b377)
    g->esi = loc_40;
    g->edi = loc_44;
    g->ebp = loc_3c;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008b2b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008b2c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b2efu:
    {
        uint32_t cf;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1008b2f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b300u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
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
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008b341u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b349u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b34du:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b357u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b361u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b365u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b36au:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b36eu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1008b377u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b2b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1008b2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
