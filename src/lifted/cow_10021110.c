/* f_0x10021110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10021110(Guest* g)
{
    double d10;
    double d23;
    double d30;
    double d34;
    double d47;
    double d52;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x28u, in_ebx);
    if (rd8(COW_IMG(0x10351220u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x2cu, in_esi);
        wr32(sp0 - 0x30u, in_edi);
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x3cu, arg1);
        g->ebx = self;
        g->edx = arg1;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x10020ba0u), sp0 - 0x18u, g->ecx, g->edx, 1, 2, arg1, sp0 - 0xcu);
        t1 = g->edx;
        wr32(sp0 - 0x40u, self + 0x50u);
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        wr32(COW_IMG(0x10456d7cu), 0x41000000u);
        wr32(COW_IMG(0x10456d8cu), 0u);
        g->ecx = sp0 - 0x24u;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, sp0 - 0x18u, self + 0x50u);
        t2 = g->ecx;
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        g->ecx = t2;
        g->edx = sp0 - 0x24u;
        g->esp = sp0 - 0x48u;
        t3 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x24u, sp0 - 0x24u);
        t4 = g->ecx;
        t5 = g->edx;
        d6 = cow_take_float(g);
        if ((cow_fsw(g, fr(g, sqrt(d6)), (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
        {
            ecx = t4;
        }
        else
        {
            eax = cow_fsw(g, fr(g, sqrt(d6)), (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
            ecx = t4;
            edx = t5;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t7 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t8 = g->ecx;
            t9 = g->edx;
            d10 = cow_take_float(g);
            g->ecx = t8;
            g->edx = t9;
            fpush(g, d10);
            t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
            t12 = g->ecx;
            t13 = g->edx;
            if ((int32_t)t11 <= 0)
            {
                ecx = t12;
                goto L_100211cf;
            }
            eax = t11;
            edx = t13;
            edi = 0u;
L_10021193: ;
            wr32(sp0 - 0x34u, 0x3e000000u);
            wr32(sp0 - 0x38u, sp0 - 0x24u);
            g->eax = eax;
            g->ecx = sp0 - 0x24u;
            g->esp = sp0 - 0x30u;
            t14 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x24u, 0x3e000000u);
            t15 = g->ecx;
            wr32(sp0 - 0x3cu, sp0 - 0x24u);
            wr32(sp0 - 0x40u, self + 0x50u);
            g->edx = sp0 - 0x24u;
            g->esp = sp0 - 0x38u;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x50u, sp0 - 0x24u);
            t16 = g->edx;
            wr32(sp0 - 0x44u, self + 0x50u);
            wr32(sp0 - 0x48u, sp0 - 0x18u);
            wr32(sp0 - 0x4cu, sp0 - 0x24u);
            g->eax = sp0 - 0x18u;
            g->ecx = sp0 - 0x24u;
            g->edx = t16;
            g->esp = sp0 - 0x40u;
            t17 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, sp0 - 0x18u, self + 0x50u);
            t18 = g->ecx;
            t19 = g->edx;
            g->ecx = t18;
            g->edx = t19;
            g->esp = sp0 - 0x30u;
            t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), t17, g->ecx, g->edx, 1, 0);
            t21 = g->ecx;
            t22 = g->edx;
            d23 = cow_take_float(g);
            g->ecx = t21;
            g->edx = t22;
            fpush(g, d23);
            t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
            t25 = g->ecx;
            t26 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)t24)
            {
                eax = t24;
                edx = t26;
                edi = edi + 1u;
                goto L_10021193;
            }
            ecx = t25;
        }
L_100211cf: ;
        wr32(sp0 - 0x34u, self + 0x44u);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, sp0 - 0xcu, self + 0x44u);
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        wr32(sp0 - 0x44u, sp0 - 0x24u);
        g->ecx = sp0 - 0x24u;
        g->edx = sp0 - 0x24u;
        g->esp = sp0 - 0x3cu;
        t27 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x24u, sp0 - 0x24u);
        t28 = g->ecx;
        t29 = g->edx;
        d30 = cow_take_float(g);
        if ((cow_fsw(g, fr(g, sqrt(d30)), (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
        {
            edx = t29;
        }
        else
        {
            eax = cow_fsw(g, fr(g, sqrt(d30)), (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
            ecx = t28;
            edx = t29;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t31 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t32 = g->ecx;
            t33 = g->edx;
            d34 = cow_take_float(g);
            g->ecx = t32;
            g->edx = t33;
            fpush(g, d34);
            t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31, g->ecx, g->edx, 1, 0);
            t36 = g->ecx;
            t37 = g->edx;
            if ((int32_t)t35 <= 0)
            {
                edx = t37;
                goto L_10021251;
            }
            ecx = t36;
            edx = t37;
            edi = 0u;
L_10021215: ;
            wr32(sp0 - 0x34u, 0x3e000000u);
            wr32(sp0 - 0x38u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t38 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x24u, 0x3e000000u);
            t39 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0x24u);
            wr32(sp0 - 0x40u, self + 0x44u);
            g->ecx = sp0 - 0x24u;
            g->esp = sp0 - 0x38u;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x44u, sp0 - 0x24u);
            t40 = g->ecx;
            wr32(sp0 - 0x44u, self + 0x44u);
            wr32(sp0 - 0x48u, sp0 - 0xcu);
            wr32(sp0 - 0x4cu, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->ecx = t40;
            g->edx = sp0 - 0xcu;
            g->esp = sp0 - 0x40u;
            t41 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, sp0 - 0xcu, self + 0x44u);
            t42 = g->ecx;
            t43 = g->edx;
            g->ecx = t42;
            g->edx = t43;
            g->esp = sp0 - 0x30u;
            t44 = cow_call_regs(g, COW_IMG(0x10014cf0u), t41, g->ecx, g->edx, 1, 0);
            t45 = g->ecx;
            t46 = g->edx;
            d47 = cow_take_float(g);
            g->ecx = t45;
            g->edx = t46;
            fpush(g, d47);
            t48 = cow_call_regs(g, COW_IMG(0x10311c6cu), t44, g->ecx, g->edx, 1, 0);
            t49 = g->ecx;
            t50 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)t48)
            {
                ecx = t49;
                edx = t50;
                edi = edi + 1u;
                goto L_10021215;
            }
            edx = t50;
        }
L_10021251: ;
        g->esp = sp0 - 0x30u;
        t51 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
        d52 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(self + 0x54u));
        if (!(d52 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t51 & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            esi = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
            x0 = d52;
        }
        else
        {
            eax = (t51 & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            esi = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
            x0 = d52;
            x0 = -x0;
        }
        wrf32(COW_IMG(0x10456d78u), (float)x0);
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10021110(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
