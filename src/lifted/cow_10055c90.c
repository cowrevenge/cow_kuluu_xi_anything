/* f_0x10055c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10055c90(Guest* g)
{
    double d1;
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
    double d2;
    double d20;
    double d21;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10055c9fu: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10055c9f;
    case 0x10055cd1u: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10055cd1;
    case 0x10055cd4u: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10055cd4;
    case 0x10055d2eu: ecx = g->ecx; goto E_10055d2e;
    case 0x10055d41u: ecx = g->ecx; goto E_10055d41;
    case 0x10055df4u: ecx = g->ecx; goto E_10055df4;
    case 0x10055e75u: ecx = g->ecx; goto E_10055e75;
    default: break;
    }
#endif

    COW_AT(10055c90)
    if (!(rd8(COW_IMG(0x1047bc98u)) & 1u))
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047bc98u));
    COW_AT(10055c9f)
        wr32(sp0 - 0x58u, COW_IMG(0x10055e90u));
        wr32(COW_IMG(0x1047bc9cu), 0u);
        wr8(COW_IMG(0x1047bc98u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047bca0u), 0xbf800000u);
        wr32(COW_IMG(0x1047bca4u), 0u);
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10055e90u));
    COW_AT(10055cd1)
    }
    COW_AT(10055cd4)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    d1 = fr(g, (double)rdf32(arg2) - (double)rdf32(arg1));
    wrf32(sp0 - 0x48u, (float)(double)(float)d1);
    d2 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg1 + 4u));
    wr32(sp0 - 0xcu, cow_f2bits((double)(float)d1));
    wrf32(sp0 - 0x44u, (float)(double)(float)d2);
    d3 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg1 + 8u));
    wr32(sp0 - 8u, cow_f2bits((double)(float)d2));
    wrf32(sp0 - 0x40u, (float)(double)(float)d3);
    wr32(sp0 - 4u, cow_f2bits((double)(float)d3));
    wr32(sp0 - 0x68u, sp0 - 0xcu);
    wr32(sp0 - 0x6cu, COW_IMG(0x1047bc9cu));
    wr32(sp0 - 0x70u, sp0 - 0x3cu);
    g->esp = sp0 - 0x64u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x3cu), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x3cu, COW_IMG(0x1047bc9cu), sp0 - 0xcu);
    COW_AT(10055d2e)
    wr32(sp0 - 0x68u, sp0 - 0x3cu);
    g->esp = sp0 - 0x64u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa0u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0x3cu);
    COW_AT(10055d41)
    d4 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(arg1 + 0xcu));
    wrf32(sp0 - 0x54u, (float)(double)(float)d4);
    d5 = fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(arg1 + 0xcu));
    wrf32(sp0 - 0x50u, (float)(double)(float)d5);
    d6 = fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(arg1 + 0xcu));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d6);
    d7 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(arg2 + 0xcu));
    wrf32(sp0 - 0x48u, (float)(double)(float)d7);
    d8 = fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(arg2 + 0xcu));
    wrf32(sp0 - 0x44u, (float)(double)(float)d8);
    d9 = fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(arg2 + 0xcu));
    wrf32(sp0 - 0x40u, (float)(double)(float)d9);
    d10 = fr(g, (double)(float)d6 + (double)rdf32(arg1 + 8u));
    d11 = fr(g, (double)(float)d5 + (double)rdf32(arg1 + 4u));
    d12 = fr(g, (double)(float)d4 + (double)rdf32(arg1));
    wrf32(sp0 - 0x10u, (float)(double)(float)d10);
    wrf32(sp0 - 0x24u, (float)(double)(float)d12);
    wrf32(sp0 - 0x20u, (float)(double)(float)d11);
    d13 = fr(g, (double)(float)d9 + (double)rdf32(arg2 + 8u));
    d14 = fr(g, (double)(float)d8 + (double)rdf32(arg2 + 4u));
    d15 = fr(g, (double)(float)d7 + (double)rdf32(arg2));
    wr32(sp0 - 0x1cu, cow_f2bits((double)(float)d10));
    wrf32(sp0 - 0x10u, (float)(double)(float)d13);
    wrf32(sp0 - 0x30u, (float)(double)(float)d15);
    wr32(sp0 - 0x68u, arg4);
    wrf32(sp0 - 0x2cu, (float)(double)(float)d14);
    wr32(sp0 - 0x6cu, sp0 - 0x30u);
    wr32(sp0 - 0x70u, sp0 - 0x24u);
    wr32(sp0 - 0x74u, arg3);
    wr32(sp0 - 0x28u, cow_f2bits((double)(float)d13));
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x10044860u), 0);
    COW_AT(10055df4)
    d16 = fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 - 0x54u));
    wr32(sp0 - 0x78u, arg4);
    wrf32(sp0 - 0x18u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 - 0x50u));
    wr32(sp0 - 0x24u, cow_f2bits((double)(float)d16));
    wrf32(sp0 - 0x14u, (float)(double)(float)d17);
    d18 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(sp0 - 0x4cu));
    wr32(sp0 - 0x20u, cow_f2bits((double)(float)d17));
    wrf32(sp0 - 0x10u, (float)(double)(float)d18);
    d19 = fr(g, (double)rdf32(arg2) - (double)rdf32(sp0 - 0x48u));
    wr32(sp0 - 0x1cu, cow_f2bits((double)(float)d18));
    wrf32(sp0 - 0x18u, (float)(double)(float)d19);
    d20 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(sp0 - 0x44u));
    wr32(sp0 - 0x30u, cow_f2bits((double)(float)d19));
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    wrf32(sp0 - 0x14u, (float)(double)(float)d20);
    d21 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(sp0 - 0x40u));
    wr32(sp0 - 0x2cu, cow_f2bits((double)(float)d20));
    wr32(sp0 - 0x80u, sp0 - 0x24u);
    wr32(sp0 - 0x84u, arg3);
    wrf32(sp0 - 0x10u, (float)(double)(float)d21);
    wr32(sp0 - 0x28u, cow_f2bits((double)(float)d21));
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x10044860u), 0);
    COW_AT(10055e75)
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = rd32(sp0 - 0x5cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10055c90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10055c9fu:
    {
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->eax = (g->eax & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10055cd1u:
    {
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10055cd4u:
    {
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10055d2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x64u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        wr32(sp0 - 0x68u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10055d41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x64u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        wr32(sp0 - 0x68u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10055df4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x74u;
        g->ebx = arg4;
        g->ebp = arg3;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        wr32(sp0 - 0x6cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10055e75u:
    {
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x80u, sp0 - 0x24u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        wr32(sp0 - 0x6cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10055c90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10055c90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
