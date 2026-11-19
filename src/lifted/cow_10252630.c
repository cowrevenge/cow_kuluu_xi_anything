/* f_0x10252630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252630(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10252642u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10252642;
    case 0x10252649u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10252649;
    case 0x10252650u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10252650;
    case 0x10252679u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10252679;
    case 0x1025268eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1025268e;
    case 0x102526adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102526ad;
    case 0x102526c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102526c2;
    case 0x102526c8u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102526c8;
    default: break;
    }
#endif

    COW_AT(10252630)
    if (rd32(arg1 + 0x18u) != 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102526c8;
    }
    COW_AT(10252642)
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_102526c8;
    }
    COW_AT(10252649)
    if (rd32(arg1 + 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x20u);
        goto L_102526c8;
    }
    eax = rd32(arg1 + 0x20u);
    COW_AT(10252650)
    wr32(arg1 + 4u, arg2);
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4820u), t1, 6, arg2, 0u, 0u, arg1, COW_IMG(0x10252860u), COW_IMG(0x10252710u));
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        edx = t4;
        goto L_1025268e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10252679)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_1025268e: ;
    COW_AT(1025268e)
    g->eax = eax;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x101c4820u), t6, 6, arg2 + 1u, 0u, 0u, arg1, COW_IMG(0x102528a0u), COW_IMG(0x102527b0u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 >= 0) goto L_102526c2;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(102526ad)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_102526c2: ;
    COW_AT(102526c2)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_102526c8: ;
    COW_AT(102526c8)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(arg1 + 0x18u);
    g->eax = t13;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t15 = g->edx;
    t16 = rd32(arg1 + 0x1cu);
    g->ecx = t16;
    g->esp = sp0 - 0x20u;
    t17 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t18 = g->ecx;
    t19 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 0x28u;
    t20 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252630(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252642u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252649u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252650u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252679u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1025268eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2 + 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102526adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102526c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102526c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10252630(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10252630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
