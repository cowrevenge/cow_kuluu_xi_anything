/* f_0x102b5ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102b5ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b5ef6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5ef6;
    case 0x102b5f01u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f01;
    case 0x102b5f0cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f0c;
    case 0x102b5f1au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f1a;
    case 0x102b5f32u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f32;
    case 0x102b5f39u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f39;
    case 0x102b5f3du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f3d;
    case 0x102b5f40u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f40;
    case 0x102b5f48u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f48;
    case 0x102b5f55u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5f55;
    case 0x102b5fcau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b5fca;
    case 0x102b5fd2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5fd2;
    case 0x102b5ff8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102b5ff8;
    default: break;
    }
#endif

    COW_AT(102b5ee0)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102b5fd2;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    ebp = rd32(sp0 + 4u);
    COW_AT(102b5ef6)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b5fd2;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102b5f01)
    if (rd32(ebp + 0x4cu) == 0u) goto L_102b5ff8;
    esi = rd32(ebp + 0x4cu);
    COW_AT(102b5f0c)
    t1 = rd32(ebp + 0x44u);
    t2 = rd32(ebp + 0x50u);
    wr32(sp0 + 4u, t1);
    if (t2 != 0u)
    {
        ebx = t1;
    }
    else
    {
        eax = t2;
        ebx = t1;
    COW_AT(102b5f1a)
        wr32(sp0 - 0x44u, 0xb4u);
        wr32(sp0 - 0x48u, COW_IMG(0x103c2074u));
        wr32(sp0 - 0x4cu, 0xcu);
        wr32(sp0 - 0x50u, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebx, 0xcu, COW_IMG(0x103c2074u), 0xb4u, in_edi);
        wr32(ebp + 0x50u, t3);
    }
    COW_AT(102b5f32)
    if (rd32(ebp + 0x34u) != 0u)
    {
        eax = rd32(ebp + 0x34u);
    COW_AT(102b5f3d)
        edi = rd32(eax + 0x54u);
    }
    else
    {
    COW_AT(102b5f39)
        edi = 0u;
    }
    COW_AT(102b5f40)
    if (ebx == 0u) goto L_102b5ff8;
    COW_AT(102b5f48)
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t4);
    ebx = 0u;
    esi = esi + 8u;
L_102b5f55: ;
    COW_AT(102b5f55)
    t5 = edi + rd32(esi - 8u) * 0xcu;
    wr32(sp0 - 0x44u, t5);
    wr32(sp0 - 0x48u, sp0 - 0x30u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, sp0 - 0x30u, t5);
    t6 = edi + rd32(esi - 4u) * 0xcu;
    wr32(sp0 - 0x4cu, t6);
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, sp0 - 0x24u, t6);
    t7 = edi + rd32(esi) * 0xcu;
    wr32(sp0 - 0x54u, t7);
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, sp0 - 0x18u, t7);
    t8 = edi + rd32(esi + 4u) * 0xcu;
    wr32(sp0 - 0x5cu, t8);
    wr32(sp0 - 0x60u, sp0 - 0xcu);
    g->edx = t8;
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, sp0 - 0xcu, t8);
    t9 = g->edx;
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 - 0x30u);
    t10 = ebx + rd32(ebp + 0x50u);
    wr32(sp0 - 0x6cu, t10);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102b42e0u), 12, t10, sp0 - 0x30u, 4u, sp0 - 0xcu, rd32(sp0 - 0x5cu), sp0 - 0x18u, rd32(sp0 - 0x54u), sp0 - 0x24u, rd32(sp0 - 0x4cu), sp0 - 0x30u, rd32(sp0 - 0x44u), in_edi);
    t11 = rd32(sp0 + 4u) - 1u;
    t12 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t11);
    if (t12 != 1u)
    {
        ebx = ebx + 0xcu;
        esi = esi + 0x10u;
        goto L_102b5f55;
    }
    COW_AT(102b5fca)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_102b5fd2: ;
    COW_AT(102b5fd2)
    wr32(sp0 - 0x44u, 0xadu);
    wr32(sp0 - 0x48u, COW_IMG(0x103c2074u));
    wr32(sp0 - 0x4cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2074u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x103beac8u));
    wr32(sp0 - 0x54u, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beac8u));
L_102b5ff8: ;
    COW_AT(102b5ff8)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b5ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b5ef6u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x34u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b5f01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5f55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102b5fcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x68u, sp0 - 0x30u);
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        wr32(sp0 - 0x48u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102b5fd2u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x34u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b5ff8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b5ee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
