/* f_0x103173d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_103173d1(Guest* g)
{
    double d10;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103173deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_103173de;
    case 0x103173e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_103173e7;
    case 0x103173f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103173f2;
    case 0x103173f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_103173f6;
    case 0x10317405u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_10317405;
    case 0x10317409u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_10317409;
    case 0x1031740cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_1031740c;
    case 0x10317416u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10317416;
    case 0x10317422u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10317422;
    case 0x1031742cu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031742c;
    case 0x10317433u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10317433;
    case 0x1031743cu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031743c;
    case 0x10317442u: eax = g->eax; edx = g->edx; esi = g->esi; g->top = (g->top + 1u) & 7u; goto E_10317442;
    case 0x10317446u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10317446;
    case 0x1031744bu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031744b;
    case 0x10317456u: eax = g->eax; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10317456;
    case 0x10317458u: eax = g->eax; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10317458;
    case 0x10317460u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10317460;
    case 0x1031746bu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031746b;
    case 0x10317470u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10317470;
    case 0x10317474u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10317474;
    case 0x10317477u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10317477;
    default: break;
    }
#endif

    COW_AT(103173d1)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    ecx = self;
    edx = in_edx;
    esi = arg1;
    loc_4 = in_ebp;
    loc_28 = in_esi;
    loc_2c = in_edi;
L_103173de: ;
    COW_AT(103173de)
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
    COW_AT(103173f6)
        eax = rd8(rd8(esi) * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
    COW_AT(103173e7)
        wr32(sp0 - 0x30u, 8u);
        wr32(sp0 - 0x34u, rd8(esi));
        g->eax = rd8(esi);
        g->edx = edx;
        t1 = rd8(esi);
        g->esp = sp0 - 0x28u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t1, 8u, loc_2c);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    COW_AT(103173f2)
        ecx = 8u;
        loc_4 = rd32(sp0 - 4u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    COW_AT(10317405)
    if (eax == 0u) goto L_1031740c;
    COW_AT(10317409)
    esi = esi + 1u;
    goto L_103173de;
L_1031740c: ;
    COW_AT(1031740c)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, esi);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10317416)
    t6 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, esi);
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x30u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1031ed6bu), t6, 4, sp0 - 0x24u, esi, eax, 0u);
    eax = t7;
    COW_AT(10317422)
    if (arg2 != 0u)
    {
    COW_AT(1031742c)
        t8 = esi + rd32(eax + 4u);
        wr32(arg2, t8);
    }
    COW_AT(10317433)
    if ((rd32(eax) & 0x240u) == 0u)
    {
        edx = rd32(eax);
    COW_AT(10317446)
        if ((edx & 0x81u) == 0u) goto L_1031746b;
    COW_AT(1031744b)
        if (rd8(esi) != 0x2du)
        {
            x0 = rdf64(COW_IMG(0x103d2fecu));
        }
        else
        {
            x0 = rdf64(COW_IMG(0x103d2fecu));
    COW_AT(10317456)
            x0 = -x0;
        }
L_10317458: ;
    COW_AT(10317458)
        wrf64(sp0 - 0xcu, x0);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t9 = cow_fastcall(g, COW_IMG(0x10319c89u), arg2, edx, 0);
        eax = t9;
    COW_AT(10317460)
        d10 = rdf64(sp0 - 0xcu);
        wr32(eax, 0x22u);
        x0 = d10;
    }
    else
    {
    COW_AT(1031743c)
        if (arg2 == 0u)
        {
            x0 = 0.0;
        }
        else
        {
    COW_AT(10317442)
            wr32(arg2, arg1);
            x0 = 0.0;
        }
    }
L_10317477: ;
    COW_AT(10317477)
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    fpush(g, x0);
    return;
L_1031746b: ;
    COW_AT(1031746b)
    if (!(edx >> 8u & 1u)) goto L_10317474;
    COW_AT(10317470)
    x0 = 0.0;
    goto L_10317458;
L_10317474: ;
    COW_AT(10317474)
    x0 = rdf64(eax + 0x10u);
    goto L_10317477;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103173d1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103173deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x103173e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x103173f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x30u, 8u);
        (void)sp0;
        return 1;
    }
    case 0x103173f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10317405u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10317409u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031740cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10317416u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10317422u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1031742cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317433u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1031743cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317442u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x10317446u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1031744bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317456u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317458u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317460u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1031746bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317470u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317474u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10317477u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103173d1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_103173d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
