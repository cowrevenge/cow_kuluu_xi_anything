/* f_0x102e7f5a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_102e7f5a(Guest* g)
{
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e7f69u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7f69;
    case 0x102e7f79u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7f79;
    case 0x102e7f80u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7f80;
    case 0x102e7f90u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7f90;
    case 0x102e7fa0u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fa0;
    case 0x102e7fbeu: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fbe;
    case 0x102e7fc5u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fc5;
    case 0x102e7fd5u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fd5;
    case 0x102e7fe2u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fe2;
    case 0x102e7fe7u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fe7;
    case 0x102e7fe9u: eax = g->eax; in_edi = rd32(sp0 - 0x80u); in_esi = rd32(sp0 - 0x7cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x7cu); goto E_102e7fe9;
    case 0x102e8015u: eax = g->eax; edx = g->edx; goto E_102e8015;
    case 0x102e802bu: eax = g->eax; edx = g->edx; goto E_102e802b;
    default: break;
    }
#endif

    COW_AT(102e7f5a)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x7cu, in_esi);
    wr32(sp0 - 0x80u, in_edi);
    if (arg4 == 0u)
    {
        eax = in_eax;
    }
    else
    {
    COW_AT(102e7f69)
        wr32(sp0 - 0x28u, rd32(arg4));
        wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
        t1 = rd32(arg4 + 4u);
        wr32(sp0 - 0x24u, t1);
        eax = t1;
    }
    COW_AT(102e7f79)
    if (arg5 != 0u)
    {
    COW_AT(102e7f80)
        wr32(sp0 - 0x1cu, rd32(arg5));
        wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
        t2 = rd32(arg5 + 4u);
        wr32(sp0 - 0x18u, t2);
        eax = t2;
    }
    COW_AT(102e7f90)
    d3 = (double)rdf32(sp0 + 0x18u);
    if (d3 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
    COW_AT(102e7fa0)
        wrf32(sp0 - 0x38u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x34u, (float)(double)(float)0.0);
        d4 = fr(g, (double)rdf32(COW_IMG(0x1032a3d0u)) * x0);
        d5 = (double)(float)fr(g, sin(d4));
        wrf32(sp0 - 0x30u, (float)d5);
        d6 = (double)(float)fr(g, cos(d4));
        wrf32(sp0 - 0x2cu, (float)d6);
    }
    COW_AT(102e7fbe)
    if (arg7 != 0u)
    {
    COW_AT(102e7fc5)
        wr32(sp0 - 0x10u, rd32(arg7));
        wrf32(sp0 - 8u, (float)(double)(float)0.0);
        t7 = rd32(arg7 + 4u);
        wr32(sp0 - 0xcu, t7);
        eax = t7;
    }
    COW_AT(102e7fd5)
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(102e7fe7)
        eax = 0u;
    }
    else
    {
    COW_AT(102e7fe2)
        eax = sp0 - 0x38u;
    }
    COW_AT(102e7fe9)
    t8 = -(arg7 != 0u) & sp0 - 0x10u;
    wr32(sp0 - 0x84u, t8);
    wr32(sp0 - 0x88u, eax);
    t9 = -(arg5 != 0u) & sp0 - 0x1cu;
    wr32(sp0 - 0x8cu, t9);
    t10 = -(arg4 != 0u) & sp0 - 0x28u;
    wr32(sp0 - 0x90u, t10);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, sp0 - 0x78u);
    g->esp = sp0 - 0x80u;
    cow_stdcall(g, COW_IMG(0x102d7e83u), 7, sp0 - 0x78u, 0u, 0u, t10, t9, eax, t8);
    COW_AT(102e8015)
    wr32(sp0 - 0x84u, arg8);
    wr32(sp0 - 0x88u, sp0 - 0x78u);
    wr32(sp0 - 0x8cu, arg3);
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x94u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x78u;
    g->esp = sp0 - 0x80u;
    t11 = cow_thiscall(g, rd32(rd32(arg1) + 0x18u), rd32(arg1), 5, arg1, arg2, arg3, sp0 - 0x78u, arg8);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(102e802b)
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e7f5a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e7f69u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7f79u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7f80u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7f90u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fa0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fbeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fc5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        g->ecx = arg7;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fd5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        g->ecx = arg7;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fe2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ecx = arg7;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fe7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ecx = arg7;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e7fe9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x80u);
        in_esi = rd32(sp0 - 0x7cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ecx = arg7;
        g->edx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102e8015u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        g->edi = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102e802bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        g->edi = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7f5a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e7f5a(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
