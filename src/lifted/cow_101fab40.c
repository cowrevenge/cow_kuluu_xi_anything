/* f_0x101fab40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101fab40(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_call_regs(g, COW_IMG(0x101f72b0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x38u, in_ebx);
        wr32(sp0 - 0x3cu, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t4 = cow_call_regs(g, COW_IMG(0x101f7320u), eax, g->ecx, g->edx, 1, 1, arg1);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x24u, t4);
        wrf32(sp0 - 0x3cu, (float)(double)(float)(double)(int32_t)t4);
        wr32(sp0 - 0x40u, arg1);
        g->esp = sp0 - 0x3cu;
        t7 = cow_call_regs(g, COW_IMG(0x101f7300u), t4, g->ecx, g->edx, 1, 1, arg1);
        wr32(sp0 - 0x24u, t7);
        wrf32(sp0 - 0x40u, (float)(double)(float)(double)(int32_t)t7);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        t8 = rd32(self + 0xfcu);
        wr32(sp0 - 0x4cu, t8);
        g->edx = t8;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x101f7570u), 3, t8, sp0 - 0x28u, sp0 + 4u);
        t9 = g->edx;
        wr32(sp0 - 0x3cu, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        g->eax = sp0 + 4u;
        g->edx = t9;
        g->esp = sp0 - 0x38u;
        t10 = cow_thiscall(g, COW_IMG(0x101efc00u), self, 2, sp0 - 0x28u, sp0 + 4u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x3cu, arg1);
        g->ecx = t11;
        g->edx = t12;
        t13 = cow_call_regs(g, COW_IMG(0x101f72e0u), t10, g->ecx, g->edx, 1, 1, arg1);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 >= 3u)
        {
            ecx = t14;
            edx = t15;
            ebx = t13;
            esi = COW_IMG(0x1033a7bcu);
        }
        else
        {
            ecx = t14;
            edx = t15;
            ebx = t13;
            esi = COW_IMG(0x1033a7bcu) + ebx * 8u;
        }
        wr32(sp0 - 0x3cu, 2u);
        g->esp = sp0 - 0x38u;
        t16 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 0x48u);
        wr32(sp0 - 0x44u, rd32(esi));
        t17 = (uint32_t)(int16_t)arg1 - 6u;
        wr32(sp0 - 0x48u, t17);
        t18 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) - 6u;
        wr32(sp0 - 0x4cu, t18);
        g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10382178u) + rd32(esi + 4u) * 2u);
        t19 = rd16(COW_IMG(0x10382178u) + rd32(esi + 4u) * 2u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(t16) + (uint32_t)(int16_t)t19 * 4u), 5, t18, t17, rd32(esi), 0x48u, 0u);
        t20 = g->edx;
        wr32(sp0 - 0x3cu, arg1);
        wr32(sp0 - 0x40u, COW_IMG(0x1038507cu));
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        g->ebx = ebx;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1038507cu), arg1, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        wr32(sp0 - 0x48u, 0x80808080u);
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x50u, arg1 - 2u);
        t21 = rd32(sp0 - 0x28u) + 0xau;
        wr32(sp0 - 0x54u, t21);
        g->eax = arg1 - 2u;
        g->ecx = t21;
        t22 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t21, arg1 - 2u, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x1038507cu), arg1, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t23 = g->ecx;
        if (ebx == 0u)
        {
            ebx = rd32(sp0 - 0x38u);
        }
        else
        {
            eax = t22;
            ecx = t23;
            ebx = rd32(sp0 - 0x38u);
            wr32(sp0 - 0x38u, rd32(esi));
            wr32(sp0 - 0x3cu, arg1);
            g->edx = rd32(esi);
            t24 = rd32(esi);
            g->esp = sp0 - 0x38u;
            t25 = cow_call_regs(g, COW_IMG(0x101f72c0u), eax, g->ecx, g->edx, 1, 1, arg1);
            t26 = g->edx;
            wr32(sp0 - 0x3cu, t25);
            t27 = (uint32_t)(int16_t)arg1 + 0xau;
            wr32(sp0 - 0x40u, t27);
            t28 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) - 0xdu;
            wr32(sp0 - 0x44u, t28);
            g->esp = sp0 - 0x34u;
            cow_stdcall(g, COW_IMG(0x101fac60u), 4, t28, t27, t25, rd32(sp0 - 0x38u));
        }
    }
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fab40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fab40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
