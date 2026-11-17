/* f_0x102381d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102381d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_114;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 316u);

    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x10238330u), 0);
    t1 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0x108u);
    g->edx = t1;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x108u);
    t3 = g->edx;
    if (rd32(self + 0x28u) == 1u)
    {
        eax = t2;
        edx = t3;
        loc_114 = in_ebx;
        loc_118 = in_ebp;
        loc_11c = in_esi;
        loc_120 = in_edi;
    }
    else
    {
        eax = t2;
        edx = t3;
        wr32(sp0 - 0x124u, 0u);
        t4 = rd32(self + 0x30u);
        g->esp = sp0 - 0x120u;
        t5 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t4, g->edx, 0, 1, 0u);
        t6 = g->ecx;
        eax = t5;
        ecx = t6;
        edx = self + 0x14u;
L_1023821a: ;
        t7 = rd8(eax);
        wr8(edx, (uint8_t)t7);
        if ((uint8_t)t7 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t7;
            edx = edx + 1u;
            goto L_1023821a;
        }
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        wr32(sp0 - 0x124u, self + 0x14u);
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t8 = cow_call_regs(g, COW_IMG(0x10238480u), eax, ecx, g->edx, 1, 3, self + 0x14u, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
        t9 = g->edx;
        eax = t8;
        edx = t9;
        loc_114 = rd32(sp0 - 0x114u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    t10 = rd32(self + 0x30u);
    g->esp = sp0 - 0x120u;
    t11 = cow_call_regs(g, COW_IMG(0x101c6020u), eax, t10, g->edx, 1, 0);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    edx = sp0 - 0x100u;
L_10238239: ;
    t13 = rd8(eax);
    wr8(edx, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        edx = edx + 1u;
        goto L_10238239;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    cow_call_regs(g, COW_IMG(0x10238480u), eax, sp0 - 0x100u, g->edx, 1, 3, sp0 - 0x100u, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
    t14 = g->edx;
    if (rd32(self + 0x28u) == 1u)
    {
        edx = t14;
        ebp = 0u;
    }
    else
    {
        t15 = cow_divs(g, rd32(self + 0x2cu), 0x1eu);
        t16 = cow_mods(g, rd32(self + 0x2cu), 0x1eu);
        if ((int32_t)t16 <= 15)
        {
            edx = t16;
            ebp = 0u;
        }
        else
        {
            edx = t16;
            ebp = 1u;
        }
    }
    t17 = rd32(self + 0x2cu) + 1u;
    t18 = rd16(sp0 - 0x106u);
    wr32(self + 0x2cu, t17);
    t19 = (edx & 0xffffff00u) | ebp != 0u;
    wr32(sp0 - 0x124u, t19);
    wr32(sp0 - 0x128u, 0xb0u);
    t20 = (uint32_t)(int16_t)t18 + 4u;
    wr32(sp0 - 0x12cu, t20);
    t21 = (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 0x10u;
    wr32(sp0 - 0x130u, t21);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t22 = ~ecx - 1u;
    wr32(sp0 - 0x134u, t22);
    wr32(sp0 - 0x138u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x30u), 6, sp0 - 0x100u, t22, t21, t20, 0xb0u, t19);
    t23 = g->edx;
    t24 = rd32(self + 8u);
    wr32(sp0 - 0x124u, t24);
    g->eax = t24;
    g->edx = t23;
    t25 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t24);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
    }
    else
    {
        eax = t25;
        edx = t26;
        wr32(sp0 - 0x124u, COW_IMG(0x1036c19cu));
        g->eax = eax;
        g->esp = sp0 - 0x120u;
        t27 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
        wr32(sp0 - 0x124u, 1u);
        wr32(sp0 - 0x128u, 1u);
        wr32(sp0 - 0x12cu, 2u);
        wr32(sp0 - 0x130u, sp0 - 0x110u);
        t28 = rd32(self + 8u);
        t29 = rd32(rd32(t27) + 0x230u);
        wr16(sp0 - 0x110u, 0u);
        wr16(sp0 - 0x10eu, 0u);
        wr16(sp0 - 0x10cu, 0u);
        wr16(sp0 - 0x10au, 0u);
        g->ebx = 0u;
        g->edi = t29;
        g->edx = sp0 - 0x110u;
        cow_thiscall(g, COW_IMG(0x10118900u), t28, 4, sp0 - 0x110u, 2u, 1u, 1u);
        t30 = g->edx;
        wr32(sp0 - 0x124u, 0u);
        wr32(sp0 - 0x128u, 0u);
        wr32(sp0 - 0x12cu, 0x80808080u);
        t31 = (uint32_t)(int16_t)rd16(sp0 - 0x10eu);
        wr32(sp0 - 0x130u, t31);
        t32 = (uint32_t)(int16_t)rd16(sp0 - 0x110u);
        wr32(sp0 - 0x134u, t32);
        g->eax = t31;
        g->edx = t30;
        t33 = cow_thiscall(g, COW_IMG(0x1011fb60u), t29, 5, t32, t31, 0x80808080u, 0u, 0u);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102381d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102381d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
