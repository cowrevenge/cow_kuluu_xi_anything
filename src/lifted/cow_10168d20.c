/* f_0x10168d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10168d20(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    double loc_88_f;
    double loc_8c_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10168d67u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_10168d67;
    case 0x10168d6fu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_10168d6f;
    case 0x10168da3u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10168da3;
    case 0x10168e2au: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); x1 = ST(0); x0 = ST(1); goto E_10168e2a;
    case 0x10168e7eu: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); x1 = ST(0); x0 = ST(1); goto E_10168e7e;
    case 0x10168f0au: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); goto E_10168f0a;
    case 0x10168f2cu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10168f2c;
    default: break;
    }
#endif

    COW_AT(10168d20)
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0x89u);
    wr32(sp0 - 0xa4u, arg1);
    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 0x98u;
    t2 = cow_thiscall(g, rd32(t1 + 0xc8u), self, 3, arg1, 0x89u, 0u);
    t3 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, arg1);
    t4 = rd32(arg1);
    t5 = cow_thiscall(g, rd32(t4 + 0xf4u), t4, 3, arg1, 0u, 0u);
    t6 = g->ecx;
    wr32(sp0 - 0x9cu, 0x42u);
    wr32(sp0 - 0xa0u, arg1);
    cow_thiscall(g, rd32(rd32(arg1) + 0x130u), t6, 2, arg1, 0x42u);
    eax = sp0 - 0x84u;
    ecx = 5u;
L_10168d67: ;
    COW_AT(10168d67)
    wr32(eax, arg3);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_10168d67;
    }
    COW_AT(10168d6f)
    t7 = rd32(arg2 + 8u);
    wr32(sp0 - 0x9cu, t7);
    t8 = rd32(arg2 + 4u);
    wr32(sp0 - 0xa0u, t8);
    wr32(sp0 - 0xa4u, rd32(arg2));
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x98u;
    cow_stdcall(g, COW_IMG(0x102d79c3u), 4, sp0 - 0x40u, rd32(arg2), t8, t7);
    t9 = g->ecx;
    wr32(sp0 - 0x9cu, sp0 - 0x40u);
    wr32(sp0 - 0xa0u, 0x100u);
    wr32(sp0 - 0xa4u, arg1);
    cow_thiscall(g, rd32(rd32(arg1) + 0x94u), t9, 3, arg1, 0x100u, sp0 - 0x40u);
    esi = COW_IMG(0x1037673cu);
L_10168da3: ;
    COW_AT(10168da3)
    d10 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376480u) + (uint32_t)(int16_t)rd16(esi - 2u) * 0xcu));
    wrf32(sp0 - 0x90u, (float)(double)(float)d10);
    d11 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376484u) + (uint32_t)(int16_t)rd16(esi - 2u) * 0xcu));
    wrf32(sp0 - 0x8cu, (float)(double)(float)d11);
    d12 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376488u) + (uint32_t)(int16_t)rd16(esi - 2u) * 0xcu));
    wrf32(sp0 - 0x88u, (float)(double)(float)d12);
    d13 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376480u) + (uint32_t)(int16_t)rd16(esi) * 0xcu));
    wrf32(sp0 - 0x80u, (float)(double)(float)d13);
    d14 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376484u) + (uint32_t)(int16_t)rd16(esi) * 0xcu));
    wrf32(sp0 - 0x7cu, (float)(double)(float)d14);
    d15 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376488u) + (uint32_t)(int16_t)rd16(esi) * 0xcu));
    wrf32(sp0 - 0x78u, (float)(double)(float)d15);
    if (rd16(esi - 4u) != 0u)
    {
        loc_8c_f = (double)(float)d11;
        loc_88_f = (double)(float)d12;
        x1 = (double)rdf32(sp0 + 0x10u);
        x0 = d10;
    COW_AT(10168e7e)
        wr32(sp0 - 0x48u, cow_f2bits(loc_88_f));
        d19 = fr(g, x1 * (double)rdf32(COW_IMG(0x10376480u) + (uint32_t)(int16_t)rd16(esi + 4u) * 0xcu));
        wrf32(sp0 - 0x70u, (float)(double)(float)d19);
        d20 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376484u) + (uint32_t)(int16_t)rd16(esi + 4u) * 0xcu));
        wrf32(sp0 - 0x6cu, (float)(double)(float)d20);
        d21 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376488u) + (uint32_t)(int16_t)rd16(esi + 4u) * 0xcu));
        wrf32(sp0 - 0x68u, (float)(double)(float)d21);
        d22 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376480u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wrf32(sp0 - 0x60u, (float)(double)(float)d22);
        d23 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376484u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d23);
        d24 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376488u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wr32(sp0 - 0x4cu, cow_f2bits(loc_8c_f));
        wrf32(sp0 - 0x58u, (float)(double)(float)d24);
        wrf32(sp0 - 0x50u, (float)(double)(float)x0);
        eax = 4u;
    }
    else
    {
        loc_8c_f = (double)(float)d11;
        loc_88_f = (double)(float)d12;
        x1 = (double)rdf32(sp0 + 0x10u);
        x0 = d10;
    COW_AT(10168e2a)
        wr32(sp0 - 0x5cu, cow_f2bits(loc_8c_f));
        wr32(sp0 - 0x58u, cow_f2bits(loc_88_f));
        d16 = fr(g, x1 * (double)rdf32(COW_IMG(0x10376480u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wrf32(sp0 - 0x70u, (float)(double)(float)d16);
        d17 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376484u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wrf32(sp0 - 0x6cu, (float)(double)(float)d17);
        d18 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10376488u) + (uint32_t)(int16_t)rd16(esi + 2u) * 0xcu));
        wrf32(sp0 - 0x68u, (float)(double)(float)d18);
        wrf32(sp0 - 0x60u, (float)(double)(float)x0);
        eax = 3u;
    }
    COW_AT(10168f0a)
    wr32(sp0 - 0x9cu, 0x10u);
    wr32(sp0 - 0xa0u, sp0 - 0x90u);
    wr32(sp0 - 0xa4u, eax);
    wr32(sp0 - 0xa8u, 3u);
    wr32(sp0 - 0xacu, arg1);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, rd32(rd32(arg1) + 0x120u), sp0 - 0x90u, 5, arg1, 3u, eax, sp0 - 0x90u, 0x10u);
    if ((int32_t)(esi + 0xau) < (int32_t)COW_IMG(0x103769bcu))
    {
        esi = esi + 0xau;
        goto L_10168da3;
    }
    COW_AT(10168f2c)
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10168d20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10168d67u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0x98u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168d6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168da3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168e2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        double loc_88_f;
        double loc_8c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168e7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        double loc_88_f;
        double loc_8c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168f0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        double loc_88_f;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168f2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10168d20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10168d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
