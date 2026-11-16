/* f_0x101e89c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e89c0(Guest* g)
{
    double d25;
    double d30;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((rd8(self + 0x14u) & 0x40u) == 0u) goto L_101e89d9;
    wr32(sp0 - 0xcu, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101ef0a0u), arg1, self, g->edx, 0, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101e89d9: ;
    if (rd32(self + 0x160u) > 3u)
    {
        eax = rd32(self + 0x160u);
        edx = in_edx;
        goto L_101e8a0d;
    }
    eax = rd32(self + 0x160u);
    t3 = rd32(COW_IMG(0x101e8b00u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x101e89ebu: goto L_101e89eb;
    case 0x101e89f4u: goto L_101e89f4;
    case 0x101e89fdu: goto L_101e89fd;
    case 0x101e8a06u: goto L_101e8a06;
    default: rt_fatal(g, COW_IMG(0x101e89e4u), "switch");
    }
    return 0;
L_101e89eb: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101e8320u), self, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_101e8a0d: ;
    wr32(sp0 - 0xcu, in_ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101efb20u), self, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t14;
        ebx = t12;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        ebx = t12;
        wr32(sp0 - 0x10u, 0xffffffffu);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, 0x7du);
        wr32(sp0 - 0x1cu, 0x26u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0;
        t15 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0x7du, 1u, 0xffffffffu, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t16 = g->ecx;
        t17 = g->edx;
        if ((uint8_t)t15 != 0u)
        {
            eax = t15;
            ecx = t16;
            goto L_101e8a69;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
        wr32(sp0 - 0x10u, 0xffffffffu);
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, 0xa4u);
        wr32(sp0 - 0x1cu, 0x26u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0;
        t18 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa4u, 4u, 0xffffffffu, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t19 = g->ecx;
        t20 = g->edx;
        if ((uint8_t)t18 == 0u)
        {
            eax = t18;
            edx = t20;
            goto L_101e8aeb;
        }
        eax = t18;
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0x10u, 0xffffffffu);
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, 0xa5u);
        wr32(sp0 - 0x1cu, 0x26u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0;
        t21 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa5u, 4u, 0xffffffffu, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t22 = g->ecx;
        t23 = g->edx;
        if ((uint8_t)t21 == 0u)
        {
            eax = t21;
            edx = t23;
            goto L_101e8aeb;
        }
        eax = t21;
        ecx = t22;
L_101e8a69: ;
        wr32(sp0 - 0x10u, in_edi);
        t24 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        wr32(sp0 - 4u, t24);
        d25 = fr(g, (double)(int32_t)t24 * (double)rdf32(COW_IMG(0x10329a08u)));
        fpush(g, d25);
        g->esp = sp0 - 0x10u;
        t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t27 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 4u, t27);
        t28 = rd32(COW_IMG(0x106218b8u));
        t29 = rd32(COW_IMG(0x106218b4u));
        d30 = fr(g, fr(g, (double)(int32_t)t27 * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
        fpush(g, d30);
        t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28 - t29, g->ecx, g->edx, 1, 0);
        wr16(self + 0x1cu, (uint16_t)t31);
        wr16(self + 0x1eu, (uint16_t)t26);
        t32 = (uint32_t)(int16_t)rd16(ebx + 8u);
        wr32(sp0 - 4u, t32);
        t33 = (uint32_t)(int16_t)rd16(ebx + 6u);
        wr32(sp0 - 4u, t33);
        wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t32);
        wrf32(sp0 - 0x18u, (float)(double)(float)(double)(int32_t)t33);
        g->eax = t33;
        g->edx = t32;
        t34 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits((double)(float)(double)(int32_t)t33), cow_f2bits((double)(float)(double)(int32_t)t32));
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
L_101e8aeb: ;
    wr32(sp0 - 0x10u, arg1);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_call_regs(g, COW_IMG(0x101ef0a0u), eax, self, g->edx, 0, 1, arg1);
    t37 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edx = t37;
    return t36;
L_101e89f4: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101e8570u), self, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    goto L_101e8a0d;
L_101e89fd: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x101e86b0u), self, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    goto L_101e8a0d;
L_101e8a06: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101e88b0u), self, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    goto L_101e8a0d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e89c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e89c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
