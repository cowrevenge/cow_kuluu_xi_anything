/* f_0x10250c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10250c40(Guest* g)
{
    double d2;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10250c4au: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250c4a;
    case 0x10250c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250c4f;
    case 0x10250c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250c59;
    case 0x10250c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250c66;
    case 0x10250c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250c70;
    case 0x10250c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10250c7b;
    case 0x10250c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250c86;
    case 0x10250c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250c8d;
    case 0x10250c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250c94;
    case 0x10250c98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250c98;
    case 0x10250ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250ca1;
    case 0x10250caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250cae;
    case 0x10250cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250cb4;
    case 0x10250cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250cc0;
    case 0x10250ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250cca;
    case 0x10250cd2u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250cd2;
    case 0x10250cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250cd4;
    case 0x10250ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250ce9;
    case 0x10250cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250cf0;
    case 0x10250cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10250cf2;
    case 0x10250cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250cfc;
    case 0x10250d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10250d07;
    case 0x10250d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d12;
    case 0x10250d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d19;
    case 0x10250d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d20;
    case 0x10250d24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d24;
    case 0x10250d2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d2f;
    case 0x10250d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d3e;
    case 0x10250d44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d44;
    case 0x10250d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 4u); goto E_10250d50;
    case 0x10250d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d56;
    case 0x10250d5eu: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d5e;
    case 0x10250d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d60;
    case 0x10250d65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d65;
    case 0x10250d6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d6a;
    case 0x10250d72u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d72;
    case 0x10250d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d74;
    case 0x10250d78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d78;
    case 0x10250d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d7b;
    case 0x10250d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d8d;
    case 0x10250d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10250d90;
    default: break;
    }
#endif

    COW_AT(10250c40)
    if ((int32_t)rd32(sp0 + 0xcu) < 0)
    {
        eax = 0u;
        ecx = rd32(sp0 + 0xcu);
    }
    else
    {
        ecx = rd32(sp0 + 0xcu);
    COW_AT(10250c4a)
        if ((int32_t)ecx > 15)
        {
            eax = 0u;
        }
        else
        {
    COW_AT(10250c4f)
            eax = COW_IMG(0x103890e8u) + ecx * 0x24u;
        }
    }
    COW_AT(10250c59)
    if ((int32_t)arg2 >= 0) goto L_10250cf0;
    COW_AT(10250c66)
    if (eax == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1033cda0u));
    COW_AT(10250c7b)
        wr32(sp0 + 0xcu, 0x3f8ccccdu);
        esi = 0xffffffffu;
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x1033cda0u));
    COW_AT(10250c70)
        t1 = rd32(eax + 0x14u);
        wr32(sp0 + 0xcu, t1);
        esi = ecx;
    }
    COW_AT(10250c86)
    ecx = COW_IMG(0x103890fcu);
    edx = 0u;
L_10250c8d: ;
    COW_AT(10250c8d)
    if (!(rd32(ecx - 0x14u) & 1u))
    {
        eax = rd32(ecx - 0x14u);
    }
    else
    {
        eax = rd32(ecx - 0x14u);
    COW_AT(10250c94)
        if ((eax & 6u) != 0u)
        {
    COW_AT(10250c98)
            if (!(x0 < (double)rdf32(ecx)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
    COW_AT(10250ca1)
                d2 = (double)rdf32(sp0 + 0xcu);
                if (!((double)rdf32(ecx) < d2))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d2, 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d2, 1u);
    COW_AT(10250cae)
                    esi = edx;
                    x0 = (double)rdf32(ecx);
                }
            }
        }
    }
    COW_AT(10250cb4)
    if ((int32_t)(ecx + 0x24u) < (int32_t)COW_IMG(0x10389318u))
    {
        ecx = ecx + 0x24u;
        edx = edx + 1u;
        goto L_10250c8d;
    }
    COW_AT(10250cc0)
    if ((int32_t)esi < 0) goto L_10250d65;
    COW_AT(10250cca)
    if (arg4 != 0u)
    {
    COW_AT(10250cd2)
        wr32(arg4, esi);
    }
    COW_AT(10250cd4)
    t3 = COW_IMG(0x103890fcu) + esi * 0x24u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10274d40u), 2, arg5, t3);
    COW_AT(10250ce9)
    g->esi = in_esi;
    return 0u;
L_10250cf0: ;
    COW_AT(10250cf0)
    if (arg2 == 0u || (int32_t)arg2 < 0) goto L_10250d6a;
    COW_AT(10250cf2)
    if (eax == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1033cb1cu));
    COW_AT(10250d07)
        wr32(sp0 + 0xcu, 0xbf8ccccdu);
        esi = 0xffffffffu;
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x1033cb1cu));
    COW_AT(10250cfc)
        t4 = rd32(eax + 0x14u);
        wr32(sp0 + 0xcu, t4);
        esi = ecx;
    }
    COW_AT(10250d12)
    ecx = COW_IMG(0x103890fcu);
    edx = 0u;
L_10250d19: ;
    COW_AT(10250d19)
    if (!(rd32(ecx - 0x14u) & 1u))
    {
        eax = rd32(ecx - 0x14u);
    }
    else
    {
        eax = rd32(ecx - 0x14u);
    COW_AT(10250d20)
        if ((eax & 6u) != 0u)
        {
    COW_AT(10250d24)
            if ((cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u;
    COW_AT(10250d2f)
                d5 = (double)rdf32(sp0 + 0xcu);
                if ((cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u;
    COW_AT(10250d3e)
                    esi = edx;
                    x0 = (double)rdf32(ecx);
                }
            }
        }
    }
    COW_AT(10250d44)
    if ((int32_t)(ecx + 0x24u) < (int32_t)COW_IMG(0x10389318u))
    {
        ecx = ecx + 0x24u;
        edx = edx + 1u;
        goto L_10250d19;
    }
    COW_AT(10250d50)
    if ((int32_t)esi < 0) goto L_10250d65;
    COW_AT(10250d56)
    if (arg4 != 0u)
    {
    COW_AT(10250d5e)
        wr32(arg4, esi);
    }
    COW_AT(10250d60)
    eax = esi * 9u;
L_10250d7b: ;
    COW_AT(10250d7b)
    t6 = COW_IMG(0x103890fcu) + eax * 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10274d40u), 2, arg5, t6);
    COW_AT(10250d8d)
L_10250d90: ;
    COW_AT(10250d90)
    g->esi = in_esi;
    return 0u;
L_10250d65: ;
    COW_AT(10250d65)
    g->esi = in_esi;
    return 0xffffffffu;
L_10250d6a: ;
    COW_AT(10250d6a)
    if (arg4 != 0u)
    {
    COW_AT(10250d72)
        wr32(arg4, ecx);
    }
    COW_AT(10250d74)
    if (eax == 0u) goto L_10250d90;
    COW_AT(10250d78)
    eax = ecx * 9u;
    goto L_10250d7b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10250c40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10250c4au:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10250c4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10250c59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10250c66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x10250c70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250c7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x10250c86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250c8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250c94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250c98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250ca1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250caeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250cb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250cc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250ccau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250cd2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10250cd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10250cf0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->zf = (uint8_t)(arg2 == 0u);
        g->sf = (uint8_t)((int32_t)arg2 < 0);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x10250cf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x10250cfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x10250d12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d5eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10250d60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d72u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10250d74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10250d8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10250d90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10250c40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10250c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
