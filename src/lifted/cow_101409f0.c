/* f_0x101409f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101409f0(Guest* g)
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
    int64_t q7;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    if ((int32_t)rd32(self + 0x28u) >= (int32_t)rd32(self + 0x20u))
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x20u);
        wr32(sp0 - 0x30u, eax);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, eax, 1u, 1u, in_edi, in_esi);
        t5 = g->edx;
        wr32(sp0 - 0x34u, t4);
        wr32(sp0 - 0x38u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x18u, COW_IMG(0x1034f7e0u), t4, rd32(sp0 - 0x30u), 1u);
    }
    else
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x20u);
        wr32(sp0 - 0x30u, eax + ecx);
        g->ecx = eax + ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, eax + ecx, 1u, 1u, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x34u, t1);
        wr32(sp0 - 0x38u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x18u, COW_IMG(0x1034f7e0u), t1, rd32(sp0 - 0x30u), 1u);
        wr8(sp0 - 0x18u, 0x30u);
    }
    t6 = rd32(self + 0x20u);
    wr32(sp0 - 0x28u, in_ebx);
    if (t6 == 0u)
    {
        ecx = t6;
        edx = t6;
        ebx = 0u;
        goto L_10140a5f;
    }
    ecx = t6;
    edx = t6;
    ebx = 0u;
L_10140a49: ;
    q7 = (int64_t)cow_muls(0x66666667u, edx);
    t8 = (uint32_t)((int32_t)cow_qhi(q7) >> 2u);
    if (t8 + (t8 >> 0x1fu) != 0u)
    {
        edx = t8 + (t8 >> 0x1fu);
        ebx = ebx + 1u;
        goto L_10140a49;
    }
    edx = t8 + (t8 >> 0x1fu);
    ebx = ebx + 1u;
L_10140a5f: ;
    if ((int32_t)ecx >= 1000)
    {
        ebx = ebx + 1u;
    }
    if ((int32_t)ecx >= 1000000)
    {
        ebx = ebx + 1u;
    }
    edi = sp0 - 0x18u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    if ((int32_t)(t9 - ebx - 3u) < 0)
    {
        eax = rd32(sp0 - 0x1cu);
    }
    else
    {
        ecx = 0xfffffffdu - ebx;
        edi = t9 - ebx - 3u;
        t10 = (uint32_t)(int8_t)rd8(edi + sp0 - 0x18u);
        wr32(sp0 - 0x28u, t10);
        wr32(sp0 - 0x2cu, COW_IMG(0x10370084u));
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        g->eax = sp0 - 0x1cu;
        g->edx = t10;
        g->esp = sp0 - 0x1cu;
        t11 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1cu, COW_IMG(0x10370084u), t10, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t12 = g->edx;
        wr32(sp0 - 0x34u, 0x3f800000u);
        wr32(sp0 - 0x38u, 0x3f800000u);
        wr32(sp0 - 0x3cu, 1u);
        wr32(sp0 - 0x40u, 0x80808080u);
        t13 = edi + sp0 - 0x17u;
        wr32(sp0 - 0x44u, t13);
        t14 = (t12 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x16u);
        wr32(sp0 - 0x48u, t14);
        t15 = (t11 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x7fu);
        wr32(sp0 - 0x4cu, t15);
        wr8(edi + sp0 - 0x18u, 0u);
        g->eax = t15;
        g->edx = t14;
        g->esp = sp0 - 0x30u;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t15, t14, t13, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
        t17 = g->edx;
        wr32(sp0 - 0x50u, 0x3f800000u);
        wr32(sp0 - 0x54u, 0x3f800000u);
        wr32(sp0 - 0x58u, 1u);
        wr32(sp0 - 0x5cu, 0x80a06040u);
        wr32(sp0 - 0x60u, sp0 - 0x1cu);
        t18 = (t17 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x16u);
        wr32(sp0 - 0x64u, t18);
        wr32(sp0 - 0x68u, t16);
        g->edx = t18;
        g->esp = sp0 - 0x4cu;
        t19 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x1cu, 7, t16, t18, sp0 - 0x1cu, 0x80a06040u, 1u, 0x3f800000u, 0x3f800000u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x80808080u);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    t21 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x16u);
    wr32(sp0 - 0x3cu, t21);
    wr32(sp0 - 0x40u, eax);
    g->eax = eax;
    g->edx = t21;
    g->esp = sp0 - 0x24u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x18u, 7, eax, t21, sp0 - 0x18u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x48u, COW_IMG(0x1034ffb8u));
    t25 = (t22 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0x4cu, t25);
    t26 = (t23 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x80u);
    wr32(sp0 - 0x50u, t26);
    g->eax = t25;
    g->ecx = t26;
    g->esp = sp0 - 0x2cu;
    t27 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t26, t25, COW_IMG(0x1034ffb8u), 0x80808080u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), sp0 - 0x18u, 0x80808080u, 1u);
    t28 = g->ecx;
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    t29 = rd32(self + 0x24u);
    wr32(sp0 - 0x34u, t29);
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x20u;
    t30 = cow_call_regs(g, COW_IMG(0x101c9440u), t27, g->ecx, g->edx, 1, 5, t29, 1u, 1u, 0x80808080u, rd32(sp0 - 0x24u));
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 0x2cu, t30);
    t33 = (t30 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0x30u, t33);
    t34 = (t31 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x88u);
    wr32(sp0 - 0x34u, t34);
    g->eax = t33;
    g->edx = t32;
    g->esp = sp0 - 0x10u;
    t35 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t34, t33, t30, 0x80808080u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t36 = g->edx;
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = t36;
    return t35;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101409f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101409f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
