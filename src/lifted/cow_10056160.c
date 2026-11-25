/* f_0x10056160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_10056160(Guest* g)
{
    double d12;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005617fu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1005617f;
    case 0x10056187u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10056187;
    case 0x100561b8u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100561b8;
    case 0x100561c7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100561c7;
    case 0x100561e5u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100561e5;
    case 0x100561e7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100561e7;
    case 0x100561edu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; goto E_100561ed;
    case 0x10056206u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10056206;
    default: break;
    }
#endif

    COW_AT(10056160)
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x14u, 0x4e6e6b28u);
    if ((int32_t)rd32(rd32(self + 0x14u)) <= 0) goto L_10056206;
    ecx = rd32(rd32(self + 0x14u));
    esi = rd32(self + 0x14u) + 0x10u;
    COW_AT(1005617f)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    ebp = ecx;
    loc_18 = in_esi;
    loc_1c = in_edi;
    loc_14 = 0x4e6e6b28u;
    loc_20 = in_ebx;
    loc_24 = in_ebp;
L_10056187: ;
    COW_AT(10056187)
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    t1 = rd32(self + 0x10u) + (rd32(esi + 4u) & 0xffffffu) * 0x20u + 0x10u;
    wr32(sp0 - 0x30u, t1);
    t2 = (rd32(esi) & 0xffffffu) * 0x20u + rd32(self + 0x10u) + 0x10u;
    wr32(sp0 - 0x34u, t2);
    g->eax = t2;
    g->esp = sp0 - 0x24u;
    t3 = cow_stdcall(g, COW_IMG(0x10055f60u), 4, t2, t1, sp0 - 0x10u, arg2);
    d4 = cow_take_float(g);
    eax = t3;
    x0 = d4;
    COW_AT(100561b8)
    d5 = (double)rdf32(sp0 - 0x14u);
    COW_AT(100561e5)
    if ((cow_fsw(g, d5, x0, 1u) & 0x4100u) == 0u)
    {
    COW_AT(100561c7)
        wrf32(sp0 - 0x14u, (float)(double)(float)x0);
        t6 = rd32(sp0 - 0x10u);
        t7 = rd32(sp0 - 0xcu);
        wr32(arg1, t6);
        t8 = rd32(sp0 - 8u);
        wr32(arg1 + 4u, t7);
        wr32(arg1 + 8u, t8);
    }
    COW_AT(100561e7)
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        esi = esi + 8u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10056187;
    }
    COW_AT(100561ed)
    t9 = rd32(sp0 - 0x20u);
    t10 = rd32(sp0 - 0x24u);
    t11 = rd32(sp0 - 0x1cu);
    d12 = (double)rdf32(sp0 - 0x14u);
    wr32(arg1 + 0xcu, 0x3f800000u);
    g->ebx = t9;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t11;
    g->ebp = t10;
    g->edx = arg1;
    fpush(g, d12);
    return;
L_10056206: ;
    COW_AT(10056206)
    wr32(arg1 + 0xcu, 0x3f800000u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    fpush(g, cow_bits2f(0x4e6e6b28u));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10056160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005617fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, 0x4e6e6b28u);
        (void)sp0;
        return 1;
    }
    case 0x10056187u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100561b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100561c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100561e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100561e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100561edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10056206u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, 0x4e6e6b28u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10056160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10056160(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
