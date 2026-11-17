/* f_0x10163130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10163130(Guest* g)
{
    double d11;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_esi);
    if (rd32(self + 0xcu) != 0u)
    {
        edx = in_edx;
        loc_10 = in_esi;
    }
    else
    {
        eax = rd32(self + 0xcu);
        wr32(sp0 - 0x14u, 0x58u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x58u, in_esi, rd32(sp0 - 0xcu));
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_thiscall(g, COW_IMG(0x1019e800u), eax, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
        wr32(self + 0xcu, eax);
        loc_10 = rd32(sp0 - 0x10u);
    }
    if (rd32(self + 0x10u) == 0u)
    {
        wr32(sp0 - 0x14u, 0x18891u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 8u, 0x18891u);
        t6 = g->edx;
        t7 = rd32(t5);
        wr32(self + 0x10u, t7);
        cow_call_regs(g, COW_IMG(0x10071e90u), t7, rd32(t7), g->edx, 1, 0);
        loc_10 = rd32(sp0 - 0x10u);
    }
    if (rd32(self + 0xcu) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ecx = rd32(self + 0xcu);
        wr32(sp0 - 0x14u, in_ebx);
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, in_edi);
        wr32(sp0 - 0x20u, 1u);
        t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 0xcu, t8);
        d9 = (double)(float)fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x10329cf0u)));
        wrf32(sp0 - 8u, (float)d9);
        t10 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        wr32(sp0 - 0xcu, t10);
        d11 = (double)(float)fr(g, (double)(int32_t)t10 * (double)rdf32(COW_IMG(0x1033530cu)));
        wrf32(sp0 - 0xcu, (float)d11);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x1019ed60u), t10, ecx, g->edx, 0, 1, 1u);
        t12 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x20u, t12);
        t13 = rd32(sp0 - 8u);
        wr32(sp0 - 0x24u, t13);
        t14 = rd32(sp0 + 4u) + 0x18892u;
        wr32(sp0 - 0x28u, t14);
        g->edx = t13;
        t15 = rd32(self + 0xcu);
        t16 = cow_call_regs(g, COW_IMG(0x1019e940u), t14, t15, g->edx, 0, 3, t14, t13, t12);
        t17 = g->ecx;
        t18 = g->edx;
        g->edx = t18;
        t19 = cow_call_regs(g, COW_IMG(0x101cc4f0u), t16, g->ecx, g->edx, 1, 0);
        t20 = g->edx;
        if (t19 == 0u)
        {
            eax = t19;
            edx = t20;
        }
        else
        {
            eax = t19;
            edx = t20;
            wr32(sp0 - 0x20u, eax + 0x7cu);
            wr32(sp0 - 0x24u, 0xfffffffeu);
            g->eax = eax + 0x7cu;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t21 = cow_thiscall(g, COW_IMG(0x1019eac0u), rd32(self + 0xcu), 2, 0xfffffffeu, eax + 0x7cu);
            t22 = g->edx;
            eax = t21;
            edx = t22;
        }
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t23 = cow_call_regs(g, COW_IMG(0x1019ed10u), eax, rd32(self + 0xcu), g->edx, 1, 0);
        t24 = g->edx;
        g->edx = t24;
        t25 = cow_call_regs(g, COW_IMG(0x1019ed20u), t23, rd32(self + 0xcu), g->edx, 1, 0);
        t26 = g->edx;
        g->edx = t26;
        t27 = cow_call_regs(g, COW_IMG(0x1019ed30u), t25, rd32(self + 0xcu), g->edx, 1, 0);
        t28 = g->edx;
        wr32(sp0 - 0x20u, 0x10u);
        g->edx = t28;
        t29 = cow_call_regs(g, COW_IMG(0x1019ed40u), t27, rd32(self + 0xcu), g->edx, 0, 1, 0x10u);
        t30 = g->edx;
        wr32(sp0 - 0x20u, 0x100u);
        t31 = rd32(self + 0xcu);
        wr32(sp0 + 4u, t29);
        t32 = cow_call_regs(g, COW_IMG(0x1019ed40u), t29, t31, g->edx, 0, 1, 0x100u);
        t33 = rd32(sp0 + 4u);
        t34 = rd16(COW_IMG(0x106218bau));
        t35 = rd16(COW_IMG(0x106218b6u));
        wr16(sp0 - 8u, (uint16_t)(t23 - t33));
        wr16(sp0 - 4u, (uint16_t)(t23 + t27 + t32));
        wr16(sp0 - 2u, (uint16_t)(t34 - t35));
        t36 = rd32(sp0 - 4u);
        wr16(sp0 - 6u, (uint16_t)t25);
        wr32(sp0 - 0x20u, 0xff000000u);
        wr32(sp0 - 0x24u, t36);
        t37 = rd32(sp0 - 8u);
        wr32(sp0 - 0x28u, t37);
        cow_thiscall(g, COW_IMG(0x101633a0u), self, 3, t37, t36, 0xff000000u);
        ebx = rd32(sp0 - 0x14u);
        ebp = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    g->ebx = ebx;
    g->esi = loc_10;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10163130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10163130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
