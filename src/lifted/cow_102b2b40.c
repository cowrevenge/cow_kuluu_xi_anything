/* f_0x102b2b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b2b40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b2b50u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_102b2b50;
    case 0x102b2b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_102b2b82;
    case 0x102b2b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_102b2b8d;
    case 0x102b2babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_102b2bab;
    case 0x102b2badu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_102b2bad;
    case 0x102b2be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_102b2be9;
    default: break;
    }
#endif

    COW_AT(102b2b40)
    if (rd32(arg1 + 0x4cu) == 0u) goto L_102b2be9;
    COW_AT(102b2b50)
    g->eax = arg1 + 0x14u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102a34f0u), 1, arg1 + 0x14u);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 2u, 0u);
    g->ecx = arg2;
    g->edx = rd32(arg2);
    t5 = rd32(arg2);
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x1029c1a0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)rd32(arg1 + 0x4cu) <= 0)
    {
        eax = rd32(arg1 + 0x4cu);
        ecx = t9;
        edx = t10;
    }
    else
    {
        edx = t10;
    COW_AT(102b2b82)
        ebx = 0u;
        ebp = arg1 + 0x50u;
        esi = arg1 + 0xf0u;
L_102b2b8d: ;
    COW_AT(102b2b8d)
        t11 = rd32(esi - 0x28u);
        g->ecx = rd32(esi);
        g->edx = edx;
        t12 = rd32(esi);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1029c1d0u), 3, t12, ebp, t11);
        t13 = g->ecx;
        t14 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x4cu))
        {
            edx = t14;
            ebx = ebx + 1u;
            ebp = ebp + 0xcu;
            esi = esi + 4u;
            goto L_102b2b8d;
        }
        eax = rd32(arg1 + 0x4cu);
        ecx = t13;
        edx = t14;
    COW_AT(102b2bab)
    }
    COW_AT(102b2bad)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 2u);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, t17, 1, 1, 0x3f800000u);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0x8000000u, 0u);
    t21 = g->ecx;
    g->eax = rd32(arg2);
    g->ecx = t21;
    g->edx = arg2;
    t22 = rd32(arg2);
    g->esp = sp0 - 0x1cu;
    t23 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x20u;
    t26 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 0xfffffffeu);
    t27 = g->ecx;
    t28 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t28;
    cow_tailcall(g, COW_IMG(0x10283240u), t26, t27, t28);
    return;
L_102b2be9: ;
    COW_AT(102b2be9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2b40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b2b50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2b82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2b8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
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
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2babu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
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
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102b2badu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102b2be9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2b40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b2b40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
