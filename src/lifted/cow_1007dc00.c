/* f_0x1007dc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007dc00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    cow_frame(g, sp0, 204u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007dc26u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_1007dc26;
    case 0x1007dc2fu: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_1007dc2f;
    case 0x1007dc40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc40;
    case 0x1007dc4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc4a;
    case 0x1007dc4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc4e;
    case 0x1007dc5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc5a;
    case 0x1007dc64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc64;
    case 0x1007dc68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc68;
    case 0x1007dc6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_1007dc6d;
    case 0x1007dc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_1007dc77;
    case 0x1007dc85u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dc85;
    case 0x1007dc9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dc9e;
    case 0x1007dca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dca2;
    case 0x1007dcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dcbb;
    case 0x1007dccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dccf;
    case 0x1007dceau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; goto E_1007dcea;
    case 0x1007dd2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1007dd2f;
    default: break;
    }
#endif

    COW_AT(1007dc00)
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_edi);
    wr8(sp0 - 0x9cu, 0x87u);
    wr8(sp0 - 0x9bu, 1u);
    wr8(sp0 - 0x9au, 0u);
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
        loc_a0 = in_ebp;
        loc_a4 = in_edi;
        goto L_1007dd2f;
    }
    COW_AT(1007dc26)
    if (rd32(arg2) != 3u)
    {
        eax = arg2;
        edx = in_edx;
        loc_a0 = in_ebp;
        loc_a4 = in_edi;
        goto L_1007dd2f;
    }
    COW_AT(1007dc2f)
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_esi);
    t1 = rd32(arg2 + 8u) + 4u;
    eax = arg1;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    ebp = rd32(arg2 + 8u);
    esi = t1;
    edi = t1;
L_1007dc40: ;
    COW_AT(1007dc40)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1007dc68;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    COW_AT(1007dc4a)
    if ((uint8_t)ecx == 0u) goto L_1007dc64;
    COW_AT(1007dc4e)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1007dc68;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(1007dc5a)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1007dc40;
    }
L_1007dc64: ;
    COW_AT(1007dc64)
    eax = 0u;
L_1007dc6d: ;
    COW_AT(1007dc6d)
    if (eax != 0u)
    {
        loc_a0 = in_ebp;
        loc_a4 = in_edi;
        goto L_1007dd2f;
    }
    COW_AT(1007dc77)
    wr32(sp0 - 0xa8u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 1u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1007dc9e;
    }
    eax = t2;
    edx = t4;
    COW_AT(1007dc85)
    wr32(sp0 - 0xa8u, 0xc5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t5 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xc5u);
    t6 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t6;
    return t5;
L_1007dc68: ;
    COW_AT(1007dc68)
    eax = -cf + 1u - cf;
    goto L_1007dc6d;
L_1007dc9e: ;
    COW_AT(1007dc9e)
    if (eax == 0u) goto L_1007dcbb;
    COW_AT(1007dca2)
    wr32(sp0 - 0xa8u, 0xc6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t7 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xc6u);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t8;
    return t7;
L_1007dcbb: ;
    COW_AT(1007dcbb)
    wr32(sp0 - 0xa8u, 0u);
    t9 = rd32(ebp + 0x18u);
    wr32(sp0 - 0xacu, t9);
    wr32(sp0 - 0xb0u, 0u);
    g->eax = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t10 = cow_cdecl(g, COW_IMG(0x100e9590u), 3, 0u, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t12;
        goto L_1007dcea;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(1007dccf)
    wr32(sp0 - 0xa8u, 0x78u);
    wr32(sp0 - 0xacu, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xb0u, t13);
    g->edx = t15;
    g->esp = sp0 - 0xa8u;
    t16 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, t13, 9u);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t17;
    return t16;
L_1007dcea: ;
    COW_AT(1007dcea)
    wr32(sp0 - 0xa8u, edi);
    wr32(sp0 - 0xacu, 0x16u);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    g->ecx = sp0 - 0x98u;
    g->esp = sp0 - 0xa4u;
    cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, edi);
    t18 = g->ecx;
    wr32(sp0 - 0xb4u, sp0 - 0x98u);
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, 0x76u);
    wr32(sp0 - 0xc0u, 0xau);
    wr32(sp0 - 0xc4u, 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0xb0u;
    t19 = cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 0x76u, 1u, sp0 - 0x98u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xacu, 1u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, sp0 - 0x9cu);
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xa4u;
    t20 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
L_1007dd2f: ;
    COW_AT(1007dd2f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = loc_a4;
    g->ebp = loc_a0;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007dc00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007dc26u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007dc2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007dc40u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc4au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc5au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc64u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc68u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc6du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1007dc77u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dc85u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dc9eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dca2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dcbbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dccfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dceau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1007dd2fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007dc00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007dc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
