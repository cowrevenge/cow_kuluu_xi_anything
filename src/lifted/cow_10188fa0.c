/* f_0x10188fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10188fa0(Guest* g)
{
    double d10;
    double d2;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10188fabu: eax = g->eax; goto E_10188fab;
    case 0x10188fc5u: eax = g->eax; self = g->ecx; goto E_10188fc5;
    case 0x10188fccu: eax = g->eax; goto E_10188fcc;
    case 0x10188ff1u: self = g->ecx; goto E_10188ff1;
    case 0x10188ff6u: eax = g->eax; goto E_10188ff6;
    case 0x10189017u: eax = g->eax; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10189017;
    case 0x1018902cu: eax = g->eax; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018902c;
    case 0x10189041u: eax = g->eax; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10189041;
    case 0x10189052u: eax = g->eax; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10189052;
    case 0x10189073u: eax = g->eax; goto E_10189073;
    case 0x101890a6u: eax = g->eax; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890a6;
    case 0x101890aeu: eax = g->eax; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890ae;
    case 0x101890c1u: eax = g->eax; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890c1;
    case 0x101890c9u: eax = g->eax; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890c9;
    case 0x101890d8u: eax = g->eax; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890d8;
    case 0x101890e0u: eax = g->eax; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101890e0;
    default: break;
    }
#endif

    COW_AT(10188fa0)
    if (rd32(self - 0x1cu) == 1u) goto L_10188fc5;
    COW_AT(10188fab)
    wr32(arg1 + 0xcu, 0x437f0000u);
    wr32(arg1 + 8u, 0x437f0000u);
    wr32(arg1 + 4u, 0x437f0000u);
    wr32(arg1, 0x437f0000u);
    return;
L_10188fc5: ;
    COW_AT(10188fc5)
    if (self + 0x24u != 0u) goto L_10188ff1;
    COW_AT(10188fcc)
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1, 0u);
    wr32(arg1 + 0xcu, 0u);
    return;
L_10188ff1: ;
    COW_AT(10188ff1)
    g->eax = self + 0x24u;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x10186fa0u), self, 0);
    eax = t1;
    COW_AT(10188ff6)
    wr32(sp0 - 0x20u, rd32(eax));
    d2 = (double)(float)(double)rdf32(eax + 8u);
    wrf32(sp0 - 0x18u, (float)d2);
    t3 = rd32(eax + 4u);
    wr32(sp0 - 0x1cu, t3);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        loc_20 = rd32(eax);
        loc_1c = t3;
        x0 = (double)rdf32(eax + 8u);
    }
    else
    {
        loc_20 = rd32(eax);
        loc_18_f = d2;
        loc_1c = t3;
        x0 = (double)rdf32(eax + 8u);
        eax = rd32(COW_IMG(0x10456a7cu));
    COW_AT(10189017)
        if (cow_bits2f(loc_20) < (double)rdf32(COW_IMG(0x10329a34u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_20), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
    COW_AT(1018902c)
            if (cow_bits2f(loc_1c) < (double)rdf32(COW_IMG(0x10329a34u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
    COW_AT(10189041)
                if (x0 < (double)rdf32(COW_IMG(0x10329a34u)))
                {
    COW_AT(10189052)
                    wr32(sp0 - 0x24u, sp0 - 8u);
                    wr32(sp0 - 0x28u, sp0 - 0xcu);
                    wr32(sp0 - 0x2cu, sp0 - 0x10u);
                    g->eax = rd32(COW_IMG(0x1045666cu));
                    t4 = rd32(COW_IMG(0x1045666cu));
                    g->esp = sp0 - 0x20u;
                    t5 = cow_thiscall(g, COW_IMG(0x10017100u), t4 + 0x1f4u, 3, sp0 - 0x10u, sp0 - 0xcu, sp0 - 8u);
                    eax = t5;
    COW_AT(10189073)
                    d6 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x20u));
                    wrf32(sp0 - 0x20u, (float)(double)(float)d6);
                    d7 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x1cu));
                    wrf32(sp0 - 0x1cu, (float)(double)(float)d7);
                    if ((cow_fsw(g, (double)(float)d6, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                    {
                        eax = cow_fsw(g, (double)(float)d6, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                        loc_1c_f = (double)(float)d7;
                        x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
                    }
                    else
                    {
                        eax = cow_fsw(g, (double)(float)d6, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                        loc_1c_f = (double)(float)d7;
                        x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
    COW_AT(101890a6)
                        wr32(sp0 - 0x20u, 0x3f800000u);
                    }
    COW_AT(101890ae)
                    if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                    {
                        eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
    COW_AT(101890c1)
                        wr32(sp0 - 0x1cu, 0x3f800000u);
                    }
    COW_AT(101890c9)
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                    {
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_1c = rd32(sp0 - 0x1cu);
                    }
                    else
                    {
    COW_AT(101890d8)
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_1c = rd32(sp0 - 0x1cu);
                        x0 = (double)rdf32(COW_IMG(0x1032961cu));
                    }
                }
            }
        }
    }
    COW_AT(101890e0)
    d8 = fr(g, cow_bits2f(loc_20) * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(arg1 + 0xcu, 0u);
    wrf32(arg1, (float)d8);
    d9 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg1 + 4u, (float)d9);
    d10 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg1 + 8u, (float)d10);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10188fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10188fabu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10188fc5u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10188fccu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10188ff1u:
    {
        uint32_t self;
        self = g->ecx;
        g->esp = sp0 - 0x20u;
        g->eax = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188ff6u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10189017u:
    {
        uint32_t eax;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        double x0;
        eax = g->eax;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1018902cu:
    {
        uint32_t eax;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        double x0;
        eax = g->eax;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10189041u:
    {
        uint32_t eax;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        double x0;
        eax = g->eax;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10189052u:
    {
        uint32_t eax;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        double x0;
        eax = g->eax;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10189073u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890a6u:
    {
        uint32_t eax;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890aeu:
    {
        uint32_t eax;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890c1u:
    {
        uint32_t eax;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890c9u:
    {
        uint32_t eax;
        double x0;
        eax = g->eax;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890d8u:
    {
        uint32_t eax;
        double x0;
        eax = g->eax;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101890e0u:
    {
        uint32_t eax;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        double x0;
        eax = g->eax;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10188fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10188fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
