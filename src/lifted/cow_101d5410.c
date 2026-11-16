/* f_0x101d5410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d5410(Guest* g)
{
    double d19;
    double d23;
    double d24;
    double d38;
    double d39;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    int64_t q9;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x101d6020u), 0);
    t2 = g->edx;
    wr8(sp0 - 5u, (uint8_t)t1);
    g->ecx = self;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        goto L_101d5435;
    }
    ecx = t4;
    edx = t5;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    if ((uint8_t)ebx != 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
        goto L_101d556b;
    }
L_101d5435: ;
    if (rd32(self + 0x40u) == 1u)
    {
        eax = rd32(self + 0x40u) - 1u;
        goto L_101d54f7;
    }
    eax = rd32(self + 0x40u) - 1u;
    if (eax != 1u) goto L_101d5564;
    if ((int32_t)rd32(self + 0x3cu) < 0)
    {
        ebp = in_ebp;
        edi = in_edi;
        goto L_101d556b;
    }
    eax = rd32(self + 0x3cu);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_stdcall(g, COW_IMG(0x100a0080u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
        edi = t6;
        q9 = (int64_t)cow_muls(0xb60b60b7u, -(rd32(self + 0x3cu) * 0x80u) + 0x5a00u);
        t10 = (uint32_t)((int32_t)(cow_qhi(q9) - rd32(self + 0x3cu) * 0x80u + 0x5a00u) >> 7u);
        t11 = t10 + (t10 >> 0x1fu);
        if (rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)edi * 4u) + 0xa0u) == 0u)
        {
            eax = t10 >> 0x1fu;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)edi * 4u);
            edx = t11;
        }
        else
        {
            eax = t10 >> 0x1fu;
            edx = t11;
            ebp = t11;
            edi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)edi * 4u) + 0xa0u);
            g->eax = eax;
            g->edx = edx;
            t12 = rd32(edi);
            g->esp = sp0 - 0x18u;
            t13 = cow_thiscall(g, rd32(t12 + 0x2cu), edi, 0);
            t14 = g->edx;
            t15 = (t13 & 0xffffffu) | ebp << 0x18u;
            wr32(sp0 - 0x1cu, t15);
            g->eax = t15;
            g->edx = t14;
            t16 = cow_thiscall(g, rd32(t12 + 0x30u), edi, 1, t15);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
            ebx = (t12 & 0xffffff00u) | rd8(sp0 - 5u);
        }
    }
    d19 = (double)(float)(double)(int32_t)rd32(self + 0x3cu);
    wrf32(sp0 - 4u, (float)d19);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    d23 = cow_take_float(g);
    g->ecx = t21;
    g->edx = t22;
    d24 = fr(g, (double)rdf32(sp0 - 4u) - d23);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(sp0 - 0x18u);
    wr32(self + 0x3cu, t25);
    if ((int32_t)t25 >= 0)
    {
        ebp = rd32(sp0 - 0x14u);
        edi = t28;
        goto L_101d556b;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    ebp = rd32(sp0 - 0x14u);
    edi = t28;
    if ((uint8_t)ebx != 0u)
    {
        wr32(sp0 - 0x14u, 0x52u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x52u);
    }
    wr8(COW_IMG(0x10482f18u), 0u);
    wr32(self + 0x40u, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_101d54f7: ;
    if (rd32(self + 0x3cu) == 0xb4u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t29 = cow_thiscall(g, COW_IMG(0x101590a0u), rd32(COW_IMG(0x1057876cu)), 0);
        wr32(sp0 - 0x14u, rd32(COW_IMG(0x10664420u)));
        g->edx = rd32(COW_IMG(0x10664420u));
        t30 = rd32(COW_IMG(0x10663740u));
        t31 = rd32(COW_IMG(0x10664420u));
        cow_thiscall(g, COW_IMG(0x101f23a0u), t30, 1, t31);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    t34 = rd32(self + 0x3cu);
    wr32(sp0 - 4u, t34);
    if ((int32_t)rd32(self + 0x3cu) < 0)
    {
        ebp = in_ebp;
        edi = in_edi;
        goto L_101d556b;
    }
    eax = t34;
    loc_4 = t34;
    wrf32(sp0 - 4u, (float)(double)(float)(double)(int32_t)loc_4);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t36 = g->ecx;
    t37 = g->edx;
    d38 = cow_take_float(g);
    g->ecx = t36;
    g->edx = t37;
    d39 = fr(g, (double)rdf32(sp0 - 4u) - d38);
    fpush(g, d39);
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t35, g->ecx, g->edx, 1, 0);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(self + 0x3cu, t40);
    if ((int32_t)t40 >= 0)
    {
        ebp = in_ebp;
        edi = in_edi;
        goto L_101d556b;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    wr32(sp0 - 0x14u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t43 = cow_cdecl(g, COW_IMG(0x100a17f0u), 1, 1u);
    t44 = g->ecx;
    t45 = g->edx;
    wr8(COW_IMG(0x10482f18u), 0u);
    if ((uint8_t)ebx != 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        wr32(sp0 - 0x14u, 0x51u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x51u);
    }
L_101d5564: ;
    wr32(self + 0x40u, 0u);
    ebp = in_ebp;
    edi = in_edi;
L_101d556b: ;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d5410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
