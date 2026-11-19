/* f_0x1011ede0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1011ede0(Guest* g)
{
    double d14;
    double d15;
    double d25;
    double d26;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_24_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    const uint32_t arg19 = rd32(sp0 + 0x4cu);
    const uint32_t arg20 = rd32(sp0 + 0x50u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011edf2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1011edf2;
    case 0x1011ee1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1011ee1f;
    case 0x1011ee30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1011ee30;
    case 0x1011ee37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1011ee37;
    case 0x1011ee3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1011ee3b;
    case 0x1011ee3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1011ee3e;
    case 0x1011ee53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1011ee53;
    case 0x1011ee83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_1011ee83;
    case 0x1011eeeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011eeea;
    case 0x1011eef7u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011eef7;
    case 0x1011ef02u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ef02;
    case 0x1011ef29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ef29;
    case 0x1011ef32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ef32;
    case 0x1011ef41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ef41;
    default: break;
    }
#endif

    COW_AT(1011ede0)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x28u, self);
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_1011ee30;
    }
    eax = rd32(self + 0x4cu);
    COW_AT(1011edf2)
    wr32(sp0 - 0x34u, self + 0x32u);
    g->ebx = self;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t1 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, self, in_edx, 1, 1, self + 0x32u);
    t2 = g->edx;
    wr32(sp0 - 0x34u, self + 0x32u);
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x20u, t2, 1, self + 0x32u);
    t3 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->ebx = self;
    g->eax = sp0 - 0x20u;
    g->edx = t3;
    t4 = rd32(COW_IMG(0x1047b970u));
    t5 = cow_thiscall(g, COW_IMG(0x1003ac80u), t4, 1, sp0 - 0x20u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 0x4cu, t5);
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_1011ee53;
    }
    eax = t5;
    edx = t7;
    COW_AT(1011ee1f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t8 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t9 = g->edx;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t9;
    return t8;
L_1011ee30: ;
    COW_AT(1011ee30)
    if (rd32(eax + 0x40u) == 0u)
    {
    COW_AT(1011ee3b)
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
    COW_AT(1011ee37)
        eax = ecx;
    }
    COW_AT(1011ee3e)
    wr32(sp0 - 0x34u, eax);
    wr32(sp0 - 0x38u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x3cu, t10);
    g->edx = rd32(t10);
    t11 = rd32(t10);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(t11 + 0xf4u), t10, 3, t10, 0u, eax);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
L_1011ee53: ;
    COW_AT(1011ee53)
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_edi);
    d14 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d14);
    d15 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 8u, (float)d15);
    ebx = self + 0xc8u;
    esi = self + 0x50u;
    edi = 0u;
    loc_24_f = (double)(float)d14;
L_1011ee83: ;
    COW_AT(1011ee83)
    wr32(sp0 - 0x3cu, arg19);
    t16 = rd32(esi + 0x10u);
    wr32(sp0 - 0x40u, t16);
    wr32(edi * 4u + sp0 - 0x10u, t16);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t17 = cow_cdecl(g, COW_IMG(0x101200b0u), 2, t16, arg19);
    t18 = g->edx;
    t19 = rd16(ebx);
    wr32(esi + 0x10u, t17);
    t20 = (uint32_t)(int16_t)rd16(ebx - 8u);
    wr32(sp0 + 4u, t20);
    wr32(sp0 - 0x3cu, esi);
    t21 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint32_t)(int16_t)t19);
    wr32(esi + 8u, 0x3f800000u);
    wrf32(esi, (float)(double)(int32_t)t21);
    t22 = rd32(sp0 + 4u);
    wrf32(esi + 4u, (float)(double)(int32_t)t22);
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x10028290u), sp0 + 0xcu, 1, esi);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = fr(g, (double)rdf32(sp0 - 0x24u) + (double)rdf32(esi));
    wr32(esi + 8u, 0u);
    wrf32(esi, (float)d25);
    d26 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(esi + 4u));
    wrf32(esi + 4u, (float)d26);
    if ((int32_t)(edi + 1u) < 4)
    {
        ecx = t23;
        edx = t24;
        ebx = ebx + 2u;
        esi = esi + 0x1cu;
        edi = edi + 1u;
        loc_24_f = (double)rdf32(sp0 - 0x24u);
        goto L_1011ee83;
    }
    edx = t24;
    ebx = ebx + 2u;
    COW_AT(1011eeea)
    if (arg20 != 0u)
    {
        ebp = rd32(sp0 - 0x34u);
        edi = rd32(sp0 - 0x38u);
    COW_AT(1011ef02)
        t27 = (uint32_t)((int32_t)arg20 >> 6u) & 3u;
        wr32(sp0 - 0x34u, t27);
        t28 = (uint32_t)((int32_t)arg20 >> 2u) & 3u;
        wr32(sp0 - 0x38u, t28);
        wr32(sp0 - 0x3cu, arg20 & 3u);
        wr32(sp0 - 0x40u, 1u);
        t29 = rd32(sp0 - 0x28u) + 0x50u;
        wr32(sp0 - 0x44u, t29);
        t30 = rd32(sp0 - 0x28u);
        g->ebx = ebx;
        g->esp = sp0 - 0x30u;
        cow_fastcall(g, COW_IMG(0x1011f300u), t30, t30, 5, t29, 1u, arg20 & 3u, t28, t27);
    }
    else
    {
        ebp = rd32(sp0 - 0x34u);
        edi = rd32(sp0 - 0x38u);
    COW_AT(1011eef7)
        g->ebx = ebx;
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1011f2d0u), rd32(sp0 - 0x28u), 0);
    }
    COW_AT(1011ef29)
    eax = 0u;
    ecx = rd32(sp0 - 0x28u) + 0x60u;
L_1011ef32: ;
    COW_AT(1011ef32)
    t31 = rd32(eax * 4u + sp0 - 0x10u);
    wr32(ecx, t31);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 0x1cu;
        goto L_1011ef32;
    }
    eax = eax + 1u;
    edx = t31;
    COW_AT(1011ef41)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t32 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t33 = g->edx;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t33;
    return t32;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011ede0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011edf2u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->ebx = self;
        wr32(sp0 - 0x28u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011ee1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011ee30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x28u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011ee37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x28u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011ee3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x28u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011ee3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x28u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011ee53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1011ee83u:
    {
        const uint32_t arg19 = rd32(sp0 + 0x4cu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg19;
        (void)sp0;
        return 1;
    }
    case 0x1011eeeau:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1011eef7u:
    {
        const uint32_t arg20 = rd32(sp0 + 0x50u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->eax = arg20;
        (void)sp0;
        return 1;
    }
    case 0x1011ef02u:
    {
        const uint32_t arg20 = rd32(sp0 + 0x50u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->eax = arg20;
        (void)sp0;
        return 1;
    }
    case 0x1011ef29u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1011ef32u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1011ef41u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011ede0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011ede0(g);
    g->esp = sp0;
    rt_return(g, r, 80u);
}
/* COW_ADAPTER END */
