/* f_0x101b6810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b6810(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)t1 != 0x20u)
    {
        edx = in_edx;
        ebx = t1;
        goto L_101b683f;
    }
    ebx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_101b683f;
    }
    eax = t2;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b683f: ;
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    t4 = rd32(sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10311384u), 3, sp0 - 0x10u, sp0 - 0x20u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    edi = sp0 - 0x20u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x30u < sp0 - 0x3cu;
    pf = PARITY((uint8_t)(sp0 - 0x30u));
    af = (sp0 - 0x3cu ^ sp0 - 0x30u) >> 4u & 1u;
    zf = sp0 == 0x30u;
    sf = (int32_t)(sp0 - 0x30u) < 0;
    of = ((sp0 - 0x3cu ^ sp0 - 0x30u) & (sp0 - 0x30u ^ 0xcu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t7 = ~ecx - 1u;
    wr32(sp0 + 4u, t7);
    if (~ecx != 1u)
    {
        ecx = t7;
        edx = t6;
        edi = t7;
        goto L_101b6884;
    }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b6884: ;
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b6aa1;
    }
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b6a5e;
    }
    if ((uint32_t)(int8_t)ebx - 8u > 0x18u) goto L_101b6986;
    eax = (uint32_t)(int8_t)ebx - 8u;
    t8 = rd32(COW_IMG(0x101b6af8u) + rd8(COW_IMG(0x101b6b04u) + eax) * 4u);
    switch (t8 - RD)
    {
    case 0x101b68beu: edx = rd8(COW_IMG(0x101b6b04u) + eax); goto L_101b68be;
    case 0x101b6986u: edx = rd8(COW_IMG(0x101b6b04u) + eax); goto L_101b6986;
    case 0x101b6a52u: goto L_101b6a52;
    default: rt_fatal(g, COW_IMG(0x101b68b7u), "switch");
    }
    return 0;
L_101b68be: ;
    g->eax = rd32(self);
    g->edx = edx;
    t9 = rd32(self);
    g->esp = sp0 - 0x30u;
    t10 = cow_thiscall(g, rd32(t9 + 0x20u), self, 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t11;
        goto L_101b68ec;
    }
    edx = t11;
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, COW_IMG(0x1034f2b8u));
    g->esp = sp0 - 0x30u;
    t12 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, COW_IMG(0x1034f2b8u), 1u);
    if ((int32_t)t12 >= 0) goto L_101b6a52;
    eax = t12;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b68ec: ;
    g->edx = edx;
    t13 = rd32(self + 0x8c70u);
    g->esp = sp0 - 0x30u;
    t14 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t15 = g->edx;
    if ((int32_t)(t13 + t14 + 1u) > (int32_t)rd32(self + 0xf118u))
    {
        eax = rd32(self + 0xf118u);
        goto L_101b6ae9;
    }
    eax = rd32(self + 0xf118u);
    edx = t15;
    if ((uint8_t)ebx != 0x20u) goto L_101b692c;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t16 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        edx = t17;
        goto L_101b692c;
    }
    eax = t16;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b692c: ;
    wr32(sp0 - 0x34u, ebx);
    g->esp = sp0 - 0x30u;
    t18 = cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, edx, 1, ebx);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_call_regs(g, COW_IMG(0x101b6e90u), t18, self, g->edx, 1, 0);
    t21 = g->edx;
    if ((uint8_t)t20 == 0u) goto L_101b6a52;
    edx = t21;
    t22 = rd32(self + 0x8c70u);
    wr32(sp0 - 0x34u, t22);
    wr32(sp0 - 0x38u, self + 0x8aacu);
    g->esp = sp0 - 0x30u;
    t23 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, self + 0x8aacu, t22);
    if ((int32_t)t23 < 0) goto L_101b6a52;
    eax = t23;
    g->edx = rd32(self);
    t24 = rd32(self);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(t24 + 0x70u), self, 0);
    t25 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, COW_IMG(0x10377cbcu));
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6986: ;
    if (self + 0x8aacu == 0u) goto L_101b69d8;
    edi = self + 0x8aacu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_101b69d4;
    ecx = ~ecx - 1u;
    edi = self + 0x8aacu;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (rd8(self + ~ecx + 0x8aaau) != 0x81u) goto L_101b69d4;
    ecx = ~ecx - 1u;
    if (rd8(sp0 - 0x20u) != 0x40u) goto L_101b69d4;
    edi = self + 0x8aacu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t26 = rd32(sp0 - 0x2cu);
    t27 = rd32(sp0 - 0x30u);
    wr8(self + ~ecx + 0x8aaau, 0x20u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = t26;
    g->edi = t27;
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b69d4: ;
    edi = rd32(sp0 + 4u);
L_101b69d8: ;
    g->edx = edx;
    t28 = rd32(self + 0x8c70u);
    g->esp = sp0 - 0x30u;
    t29 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t30 = g->edx;
    if ((int32_t)(edi + t28 + t29) > (int32_t)rd32(self + 0xf118u))
    {
        eax = edi + t28 + t29;
        goto L_101b6ae9;
    }
    eax = edi + t28 + t29;
    edx = t30;
    if ((int32_t)rd32(sp0 + 4u) <= 0) goto L_101b6a16;
    ebx = rd32(sp0 + 4u);
    edi = 0u;
L_101b6a05: ;
    t31 = (eax & 0xffffff00u) | rd8(edi + sp0 - 0x20u);
    wr32(sp0 - 0x34u, t31);
    g->esp = sp0 - 0x30u;
    t32 = cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, edx, 1, t31);
    t33 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        eax = t32;
        edx = t33;
        edi = edi + 1u;
        goto L_101b6a05;
    }
    eax = t32;
    edx = t33;
L_101b6a16: ;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t34 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t35 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        edx = t35;
        t36 = rd32(self + 0x8c70u);
        wr32(sp0 - 0x34u, t36);
        wr32(sp0 - 0x38u, self + 0x8aacu);
        g->esp = sp0 - 0x30u;
        t37 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, self + 0x8aacu, t36);
        if ((int32_t)t37 >= 0)
        {
            eax = t37;
            g->edx = rd32(self);
            t38 = rd32(self);
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(t38 + 0x70u), self, 0);
            t39 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, COW_IMG(0x10377cbcu));
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        }
    }
    edi = rd32(sp0 + 4u);
L_101b6a52: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6a5e: ;
    wr32(sp0 - 0x34u, edi);
    t40 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
    wr32(sp0 - 0x38u, t40);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t41 = cow_call_regs(g, COW_IMG(0x101b6d50u), t40, self, g->edx, 0, 2, t40, edi);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u) goto L_101b6a52;
    edx = t42;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t43 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t44 = g->edx;
    if ((int32_t)(edi + t43) > (int32_t)rd32(self + 0xf118u)) goto L_101b6a52;
    edx = t44;
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 - 0x20u, edi);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6aa1: ;
    wr32(sp0 - 0x34u, edi);
    t45 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
    wr32(sp0 - 0x38u, t45);
    g->edx = t45;
    g->esp = sp0 - 0x30u;
    t46 = cow_call_regs(g, COW_IMG(0x101b6d50u), eax, self, g->edx, 0, 2, t45, edi);
    t47 = g->edx;
    if ((uint8_t)t46 == 0u) goto L_101b6a52;
    edx = t47;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t48 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t49 = g->edx;
    if ((int32_t)(edi + t48) > (int32_t)rd32(self + 0xf118u))
    {
        eax = edi + t48;
        ecx = rd32(self + 0xf118u);
        edx = t49;
        goto L_101b6ae4;
    }
    edx = t49;
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 - 0x20u, edi);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6ae4: ;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t50 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    eax = t50;
L_101b6ae9: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b6810(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
