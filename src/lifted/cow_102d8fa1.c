/* f_0x102d8fa1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d8fa1(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d2;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t15;
    uint32_t t16;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d8fb9u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_102d8fb9;
    case 0x102d8fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102d8fc1;
    case 0x102d8fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102d8fdc;
    case 0x102d8fe6u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102d8fe6;
    case 0x102d9002u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_102d9002;
    case 0x102d9005u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d9005;
    case 0x102d9015u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d9015;
    default: break;
    }
#endif

    COW_AT(102d8fa1)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_esi);
    d1 = (double)rdf32(rd32(sp0 + 8u) + 0xcu);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        esi = rd32(sp0 + 8u);
        goto L_102d9002;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    esi = rd32(sp0 + 8u);
    COW_AT(102d8fb9)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    d2 = (double)rdf32(esi + 0xcu);
    fpush(g, d2);
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10313820u), 2, in_esi, self);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = cow_take_float(g);
    eax = t3;
    ecx = t4;
    edx = t5;
    x0 = d6;
    COW_AT(102d8fc1)
    wrf32(sp0 + 8u, (float)x0);
    wr32(sp0 - 0x10u, ecx);
    wr32(sp0 - 0x14u, ecx);
    d7 = (double)(float)fr(g, sin(x0));
    wrf32(sp0 - 8u, (float)d7);
    wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x14u, (float)(double)(float)d7);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x102d6203u), eax, g->ecx, g->edx, 1, 2, cow_f2bits((double)(float)d7), cow_f2bits((double)(float)0.0));
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102d8fdc)
    if (eax != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_102d9005;
    }
    COW_AT(102d8fe6)
    d10 = fr(g, (double)rdf32(sp0 + 8u) / (double)rdf32(sp0 - 8u));
    d11 = fr(g, d10 * (double)rdf32(esi));
    wrf32(arg1, (float)d11);
    d12 = fr(g, d10 * (double)rdf32(esi + 4u));
    wrf32(arg1 + 4u, (float)d12);
    d13 = fr(g, d10 * (double)rdf32(esi + 8u));
    wrf32(arg1 + 8u, (float)d13);
    loc_4 = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
L_102d9015: ;
    COW_AT(102d9015)
    wrf32(arg1 + 0xcu, (float)0.0);
    g->esi = loc_c;
    g->ebp = loc_4;
    g->edx = edx;
    return arg1;
L_102d9002: ;
    COW_AT(102d9002)
    edx = in_edx;
    loc_4 = in_ebp;
    loc_c = in_esi;
L_102d9005: ;
    COW_AT(102d9005)
    d14 = (double)rdf32(esi);
    wrf32(arg1, (float)d14);
    t15 = rd32(esi + 4u);
    wr32(arg1 + 4u, t15);
    t16 = rd32(esi + 8u);
    wr32(arg1 + 8u, t16);
    goto L_102d9015;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d8fa1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d8fb9u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102d8fc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8fdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8fe6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9002u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9005u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9015u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8fa1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d8fa1(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
