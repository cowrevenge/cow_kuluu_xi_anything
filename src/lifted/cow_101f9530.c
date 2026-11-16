/* f_0x101f9530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f9530(Guest* g)
{
    double d12;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    if (rd32(self + 0x6b4u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        goto L_101f9758;
    }
    if (rd32(self + 0x6bcu) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        goto L_101f9758;
    }
    edx = rd32(self + 0x6bcu);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x101f9290u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        goto L_101f9758;
    }
    ecx = t2;
    edx = t3;
    if (rd16(self + 0x6c0u) != (uint16_t)arg1)
    {
        eax = rd32(sp0 + 8u);
        goto L_101f957e;
    }
    eax = rd32(sp0 + 8u);
    if (rd16(self + 0x6c2u) == (uint16_t)eax)
    {
        ebx = in_ebx;
        edi = in_edi;
        goto L_101f9758;
    }
L_101f957e: ;
    if ((uint16_t)eax != 0xffffu) goto L_101f95b2;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
    wr16(self + 0x6c0u, (uint16_t)arg1);
    wr16(self + 0x6c2u, 0xffffu);
    wr32(self + 0xb8u, 0xffffffffu);
    wr32(self + 0xb4u, 0xffffffffu);
    g->esi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_101f95b2: ;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_edi);
    ebx = 0u;
    edi = edx;
L_101f95b8: ;
    eax = edi;
    edx = 0u;
L_101f95bc: ;
    if (rd16(eax + 4u) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax + 4u);
        goto L_101f95d8;
    }
    ecx = (ecx & 0xffff0000u) | rd16(eax + 4u);
    if (rd16(eax + 2u) != (uint16_t)arg1) goto L_101f95d8;
    if (rd16(eax) == (uint16_t)rd32(sp0 + 8u))
    {
        ebp = rd32(sp0 + 8u);
        goto L_101f9643;
    }
L_101f95d8: ;
    if ((int32_t)(edx + 1u) < 32)
    {
        eax = eax + 0x14u;
        edx = edx + 1u;
        goto L_101f95bc;
    }
    eax = eax + 0x14u;
    edx = edx + 1u;
    if ((int32_t)(ebx + 1u) < 20)
    {
        ebx = ebx + 1u;
        edi = edi + 0x280u;
        goto L_101f95b8;
    }
    ebx = ebx + 1u;
L_101f95ed: ;
    if (rd8(self + 0xa46u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t30 = cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
        t31 = g->edx;
        if (rd8(self + 0xa47u) == 0u)
        {
            eax = (t30 & 0xffffff00u) | rd8(self + 0xa47u);
            edx = t31;
            t33 = (uint32_t)(int16_t)rd16(self + 0x100u);
            wr32(sp0 - 0x28u, t33);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x101f8650u), self, 1, t33);
            t34 = g->edx;
            edx = t34;
        }
        else
        {
            eax = (t30 & 0xffffff00u) | rd8(self + 0xa47u);
            edx = t31;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_stdcall(g, COW_IMG(0x101f86b0u), 0);
            t32 = g->edx;
            edx = t32;
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
        g->esp = sp0 - 0x24u;
        t21 = cow_call_regs(g, COW_IMG(0x101efb00u), eax, self, g->edx, 1, 0);
        t22 = g->ecx;
        wr32(sp0 - 0x28u, 1u);
        t23 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x2cu, t23);
        g->ebx = ebx;
        g->ecx = t22;
        g->edx = t23;
        g->esp = sp0 - 0x1cu;
        t24 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t23, 1u, in_edi, in_ebx);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 == 0u)
        {
            edx = t26;
        }
        else
        {
            ecx = t25;
            edx = t26;
            wr32(sp0 - 0x28u, 1u);
            t27 = (uint32_t)(int16_t)rd16(self + 0x100u);
            wr32(sp0 - 0x2cu, t27);
            g->ebx = ebx;
            g->eax = t27;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t28 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t27, 1u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t29 = g->edx;
            wr32(self + 0xb8u, 0u);
            wr32(self + 0xb4u, t28);
            edx = t29;
        }
    }
L_101f9744: ;
    if (rd32(self + 0xfcu) != 0xffffffffu)
    {
        ebx = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = rd32(self + 0xfcu);
        ebx = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
    }
L_101f9758: ;
    g->ebx = ebx;
    g->edi = edi;
    return;
L_101f9643: ;
    if ((uint16_t)ecx != (uint32_t)(int16_t)rd16(self + 0x100u)) goto L_101f96f1;
    edx = rd8(eax + 6u);
    if (edx != (uint32_t)(int16_t)rd16(self + 0x102u)) goto L_101f96f1;
    d5 = (double)(float)fr(g, (double)(int32_t)rd32(eax + 8u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x10u, (float)d5);
    d6 = (double)(float)fr(g, (double)(int32_t)rd32(eax + 0xcu) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 8u, (float)d6);
    wr32(sp0 - 0x28u, cow_f2bits(d6));
    wr32(sp0 - 0x2cu, cow_f2bits(d5));
    wr32(sp0 - 0x30u, sp0 + 8u);
    wr32(sp0 - 0x34u, sp0 - 0x12u);
    t7 = rd32(self + 0xfcu);
    wr32(sp0 - 0x38u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x2cu;
    t8 = cow_cdecl(g, COW_IMG(0x101f7570u), 3, t7, sp0 - 0x12u, sp0 + 8u);
    t9 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    t10 = rd16(sp0 - 0x12u);
    wr32(sp0 + 8u, t9);
    t11 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, (uint32_t)(int16_t)t10);
    wrf32(sp0 - 0x28u, (float)(double)(float)(double)(int32_t)t11);
    d12 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
    wrf32(sp0 - 0x2cu, (float)d12);
    g->edx = (uint32_t)(int16_t)t10;
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d12), cow_f2bits((double)(float)(double)(int32_t)t11));
    t14 = g->edx;
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, arg1);
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x101f9760u), t13, self, g->edx, 0, 2, arg1, ebp);
    t16 = g->edx;
    wr16(self + 0x6c0u, (uint16_t)arg1);
    wr16(self + 0x6c2u, (uint16_t)ebp);
    eax = t15;
    edx = t16;
    goto L_101f95ed;
L_101f96f1: ;
    t17 = rd16(eax + 4u);
    wr32(sp0 - 0x10u, t17);
    t18 = rd8(eax + 6u);
    wr32(sp0 - 0xcu, t18);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t19 = rd32(self + 8u);
    wr32(t19 + 0x7cu, COW_IMG(0x101faff0u));
    g->edx = t18;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x101f7d80u), sp0 - 0x10u, 1, sp0 - 0x10u);
    t20 = g->edx;
    edx = t20;
    goto L_101f9744;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
