/* f_0x100b7630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7630(Guest* g)
{
    double d16;
    double d20;
    double d24;
    double d37;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(sp0 - 0x28u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x28u, t1);
    g->esp = sp0 - 0x1cu;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 0xcu);
    if ((uint8_t)t3 != 1u) goto L_100b76f4;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u) == 0u) goto L_100b76f4;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u);
    edx = (uint16_t)rd32(sp0 - 0xcu);
    ebp = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u;
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100b76f4;
    if (rd8(rd32(self + 0x260u) + 0x162u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(rd32(self + 0x260u) + 0x162u);
        goto L_100b778d;
    }
    ecx = rd32(self + 0x260u);
    edx = (edx & 0xffffff00u) | rd8(rd32(self + 0x260u) + 0x162u);
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd16(ecx + 0x176u);
    g->esp = sp0 - 0x1cu;
    t5 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    fpush(g, d8);
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    wr16(rd32(self + 0x260u) + 0x176u, (uint16_t)(((in_edi & 0xffff0000u) | t4) - t9));
    if ((int16_t)rd16(rd32(self + 0x260u) + 0x176u) >= 0)
    {
        eax = rd32(self + 0x260u);
        goto L_100b7711;
    }
    eax = rd32(self + 0x260u);
    t10 = (rd32(eax + 0x170u) & 0xffffffu) + (rd8(eax + 0x174u) << 0x18u);
    wr32(sp0 - 0x20u, t10);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(rd32(rd32(ebp) + 0xa0u)) + 0x30u), rd32(rd32(ebp) + 0xa0u), 1, t10);
L_100b76f4: ;
    wr8(rd32(self + 0x260u) + 0x162u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 9u));
    return;
L_100b7711: ;
    t11 = rd32(eax + 0x178u);
    wr32(sp0 - 4u, t11);
    t12 = rd32(eax + 0x17cu);
    wr32(sp0 - 8u, t12);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = cow_take_float(g);
    g->edx = t15;
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    wr32(sp0 - 0xcu, t17);
    t19 = rd32(self + 0x260u);
    d20 = fr(g, fr(g, (double)(int32_t)t17 * (double)rdf32(sp0 - 8u)) + (double)rdf32(sp0 - 4u));
    wrf32(t19 + 0x178u, (float)d20);
    t21 = rd32(rd32(rd32(ebp) + 0xa0u));
    t22 = rd32(self + 0x260u);
    t23 = rd32(rd32(ebp) + 0xa0u);
    d24 = (double)rdf32(rd32(self + 0x260u) + 0x178u);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t19, g->ecx, g->edx, 1, 0);
    t26 = (t25 << 0x18u) + (rd32(t22 + 0x170u) & 0xffffffu);
    wr32(sp0 - 0x20u, t26);
    cow_thiscall(g, rd32(t21 + 0x30u), t23, 1, t26);
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_100b778d: ;
    g->eax = rd32(rd32(eax + 0xa0u));
    g->edx = edx;
    t27 = rd32(rd32(eax + 0xa0u));
    g->esp = sp0 - 0x1cu;
    t28 = cow_thiscall(g, rd32(t27 + 0x2cu), rd32(eax + 0xa0u), 0);
    t29 = g->edx;
    wr32(sp0 - 0x20u, 5u);
    wr32(rd32(self + 0x260u) + 0x170u, t28);
    t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0x20u, 7u);
    t31 = rd32(self + 0x260u);
    wr8(t31 + 0x174u, (uint8_t)t30);
    t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 7u);
    wr16(rd32(self + 0x260u) + 0x176u, (uint16_t)t32);
    if (rd16(rd32(self + 0x260u) + 0x176u) == 0u)
    {
        eax = rd32(self + 0x260u);
        wr16(eax + 0x176u, 1u);
    }
    t33 = rd8(rd32(self + 0x260u) + 0x173u);
    wr32(sp0 - 4u, t33);
    t34 = rd32(sp0 - 0x1cu);
    wrf32(rd32(self + 0x260u) + 0x178u, (float)(double)(int32_t)t33);
    t35 = rd8(rd32(self + 0x260u) + 0x174u);
    wr32(sp0 - 4u, t35);
    t36 = (uint32_t)(int16_t)rd16(rd32(self + 0x260u) + 0x176u);
    wr32(sp0 - 4u, t36);
    d37 = fr(g, fr(g, (double)(int32_t)t35 - (double)rdf32(rd32(self + 0x260u) + 0x178u)) / (double)(int32_t)t36);
    wrf32(rd32(self + 0x260u) + 0x17cu, (float)d37);
    t38 = rd32(sp0 - 0x14u);
    t39 = rd32(sp0 - 0x18u);
    wr8(rd32(self + 0x260u) + 0x162u, 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t39;
    g->edi = t34;
    g->ebp = t38;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
