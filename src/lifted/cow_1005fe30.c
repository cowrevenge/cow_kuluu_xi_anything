/* f_0x1005fe30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1005fe30(Guest* g)
{
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
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1032bac4u));
    wr32(self + 0x34u, COW_IMG(0x1032baa8u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        if (rd32(self + 0x7cu) == 0u)
        {
            eax = rd32(self + 0x7cu);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, self + 0x90u);
            d12 = (double)rdf32(esi + 0x44u);
            if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = esi + 0x44u;
            }
            else
            {
                eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = esi + 0x44u;
                d13 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d13);
            }
            if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d14 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d14);
            }
            d15 = (double)rdf32(esi + 0x48u);
            if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d16 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d16);
            }
            d17 = (double)rdf32(esi + 0x48u);
            if (!(d17 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d18 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d18);
            }
            d19 = (double)rdf32(esi + 0x4cu);
            if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d20 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d20);
            }
            d21 = (double)rdf32(esi + 0x4cu);
            if (d21 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d22 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d22);
            }
            t23 = rd32(self + 0x90u);
            wr32(esi + 0xe4u, t23);
            t24 = rd32(self + 0x94u);
            wr32(esi + 0xe8u, t24);
            t25 = rd32(self + 0x98u);
            wr32(esi + 0xecu, t25);
            t26 = rd32(self + 0x9cu);
            wr32(esi + 0xf0u, t26);
            g->esp = sp0 - 0xcu;
            t27 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, t25, 1, COW_IMG(0x10330684u));
            t28 = g->edx;
            if ((uint8_t)t27 == 0u)
            {
                eax = t27;
                edx = t28;
            }
            else
            {
                t29 = rd32(self + 0x90u);
                wr32(esi + 0x744u, t29);
                t30 = rd32(self + 0x94u);
                wr32(esi + 0x748u, t30);
                t31 = rd32(self + 0x98u);
                wr32(esi + 0x74cu, t31);
                t32 = rd32(self + 0x9cu);
                wr32(esi + 0x750u, t32);
                eax = t31;
                edx = t30;
            }
        }
        else
        {
            eax = rd32(self + 0x7cu);
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t4 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t5 = g->edx;
                g->edx = t5;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x1005ee90u), t4, 1, self + 0x90u);
                t6 = g->edx;
                g->edx = t6;
                g->esp = sp0 - 0x10u;
                t7 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t8 = g->edx;
                g->edx = t8;
                g->esp = sp0 - 0xcu;
                t9 = cow_thiscall(g, COW_IMG(0x1005edc0u), t7, 1, self + 0x90u);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t34 = g->edx;
    t35 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t34, 0);
    t36 = g->ecx;
    t37 = g->edx;
    if (arg1 & 1u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005fe30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005fe30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
