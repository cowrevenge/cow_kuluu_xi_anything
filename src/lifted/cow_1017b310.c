/* f_0x1017b310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1017b310(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    int64_t q11;
    int64_t q13;
    int64_t q15;
    int64_t q3;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017b35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebx = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1017b35b;
    case 0x1017b3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b3b7;
    case 0x1017b3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b3de;
    case 0x1017b3e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b3e3;
    case 0x1017b3e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b3e5;
    case 0x1017b3ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b3eb;
    case 0x1017b416u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b416;
    case 0x1017b41cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b41c;
    case 0x1017b423u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b423;
    case 0x1017b430u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b430;
    case 0x1017b437u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017b437;
    default: break;
    }
#endif

    COW_AT(1017b310)
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    t1 = rd32(self + 0x3942cu);
    t2 = rd32(sp0 + 4u);
    wr32(t2, t1);
    q3 = (uint64_t)cow_mulu(0x673e9167u, rd32(self + 0x39438u));
    t4 = cow_qhi(q3) >> 0x14u;
    wr32(t2 + 4u, t4);
    t5 = rd32(self + 0x37508u);
    wr32(t2 + 8u, t5);
    t6 = rd32(self + 0x3944cu);
    wr32(t2 + 0xcu, t6);
    t7 = rd32(self + 0x39448u);
    wr32(t2 + 0x10u, t7);
    g->edx = t6;
    d8 = (double)rdf32(self + 0x39420u);
    fpush(g, d8);
    g->esp = sp0 - 0x44u;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    edi = t2;
    COW_AT(1017b35b)
    wr32(edi + 0x14u, eax);
    q11 = (uint64_t)cow_mulu(0x673e9167u, rd32(self + 0x3943cu));
    t12 = cow_qhi(q11) >> 0x14u;
    wr32(edi + 0x18u, t12);
    q13 = (uint64_t)cow_mulu(0x673e9167u, rd32(self + 0x39440u));
    t14 = cow_qhi(q13) >> 0x14u;
    wr32(edi + 0x1cu, t14);
    q15 = (uint64_t)cow_mulu(0x673e9167u, rd32(self + 0x39444u));
    wr32(sp0 - 0x48u, sp0 - 0x38u);
    t16 = cow_qhi(q15) >> 0x14u;
    wr32(edi + 0x20u, t16);
    wr32(self + 0x39438u, 0u);
    wr32(self + 0x3943cu, 0u);
    wr32(self + 0x39440u, 0u);
    wr32(self + 0x39444u, 0u);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10181aa0u), self, 1, sp0 - 0x38u);
    COW_AT(1017b3b7)
    t17 = rd32(self + 0x37520u);
    wr32(edi + 0x28u, t17);
    wr32(edi + 0x24u, rd32(COW_IMG(0x1065c4c8u)));
    wr32(edi + 0x2cu, rd32(COW_IMG(0x10631f14u)));
    eax = self + 0xd4u;
    ecx = 0u;
    edx = 2u;
L_1017b3de: ;
    COW_AT(1017b3de)
    if (rd32(eax - 0x74u) != 0u)
    {
    COW_AT(1017b3e3)
        ecx = ecx + rd32(eax);
    }
    COW_AT(1017b3e5)
    if (edx != 1u)
    {
        eax = eax + 0x78u;
        edx = edx - 1u;
        goto L_1017b3de;
    }
    COW_AT(1017b3eb)
    wr32(edi + 0x30u, ecx);
    t18 = rd32(self + 0x38d4cu);
    wr32(edi + 0x34u, t18);
    t19 = rd32(self + 0x38d50u);
    wr32(edi + 0x38u, t19);
    t20 = rd32(self + 0x38d54u);
    wr32(edi + 0x3cu, t20);
    wr32(edi + 0x40u, 0u);
    if (rd32(self + 0x3753cu) != 0u)
    {
        eax = rd32(self + 0x3753cu);
        ecx = t20;
        edx = t18;
    COW_AT(1017b416)
        wr32(sp0 - 0x48u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t21 = cow_cdecl(g, COW_IMG(0x101889c0u), 1, eax);
        eax = t21;
    COW_AT(1017b41c)
        if (eax != 0u)
        {
    COW_AT(1017b423)
            wr32(sp0 - 0x48u, 0u);
            wr32(sp0 - 0x4cu, sp0 + 4u);
            g->esp = sp0 - 0x44u;
            cow_thiscall(g, COW_IMG(0x10188e00u), eax, 2, sp0 + 4u, 0u);
    COW_AT(1017b430)
            t22 = rd32(sp0 + 4u);
            wr32(edi + 0x40u, t22);
        }
    }
    COW_AT(1017b437)
    t23 = rd32(self + 0x3949cu);
    wr32(edi + 0x44u, t23);
    t24 = rd8(self + 0x37528u);
    wr32(edi + 0x48u, t24);
    t25 = rd8(self + 0x37529u);
    wr32(edi + 0x4cu, t25);
    t26 = rd8(self + 0x3752au);
    wr32(edi + 0x50u, t26);
    t27 = rd8(self + 0x3752bu);
    wr32(edi + 0x54u, t27);
    wr32(edi + 0x58u, rd32(COW_IMG(0x10631f30u)));
    wr32(edi + 0x5cu, rd32(COW_IMG(0x10631f2cu)));
    t28 = rd32(COW_IMG(0x10631f28u));
    wr32(edi + 0x60u, t28);
    t29 = rd32(self + 0x39430u);
    wr32(edi + 0x64u, t29);
    t30 = rd32(self + 0x37524u);
    wr32(edi + 0x68u, t30);
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->edx = t28;
    return t29;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017b310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017b35bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebx = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1017b3b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b3deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b3e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b3e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b3ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b416u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1017b41cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017b423u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017b430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1017b437u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1017b310(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
