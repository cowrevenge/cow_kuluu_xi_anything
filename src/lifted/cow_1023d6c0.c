/* f_0x1023d6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1023d6c0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_d8;
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
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 248u);

    wr32(sp0 - 0xdcu, in_ebx);
    wr32(sp0 - 0xe0u, in_ebp);
    wr32(sp0 - 0xe4u, in_esi);
    wr32(sp0 - 0xe8u, in_edi);
    wr8(self + 0x50u, (uint8_t)arg1);
    if ((uint32_t)(int8_t)arg1 == 0u) goto L_1023d6e8;
    if ((uint32_t)(int8_t)arg1 != 1u) goto L_1023d906;
    eax = (uint32_t)(int8_t)arg1 - 1u;
    edx = in_edx;
    ebx = 0u;
L_1023d8ad: ;
    wr32(sp0 - 0xecu, 0xeu);
    wr16(self + 0x16u, 1u);
    wr32(self + 0x30u, COW_IMG(0x10669018u));
    g->esp = sp0 - 0xe8u;
    cow_call_regs(g, COW_IMG(0x101f6700u), eax, self, edx, 0, 1, 0xeu);
    t16 = g->edx;
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xf0u, 1u);
    wr32(sp0 - 0xf4u, COW_IMG(0x1038838cu));
    wr16(self + 0x26u, 0x10u);
    wr8(self + 0x2cu, 0x10u);
    wr8(self + 0x2du, 4u);
    wr8(self + 0x51u, 1u);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038838cu), 1u, 0u);
    wr32(sp0 - 0xecu, arg3);
    wr32(sp0 - 0xf0u, arg2);
    cow_call_regs(g, COW_IMG(0x10119110u), arg2, rd32(self + 8u), g->edx, 0, 2, arg2, arg3);
    wr8(self + 0x52u, 1u);
L_1023d906: ;
    g->ebx = in_ebx;
    return;
L_1023d6e8: ;
    wr16(self + 0x54u, 0u);
    wr32(sp0 - 0xd8u, self + 0x5cu);
    edx = in_edx;
    ebx = 0u;
    loc_d8 = self + 0x5cu;
L_1023d6f3: ;
    wr32(sp0 - 0xecu, ebx + 1u);
    wr32(loc_d8, 0xffffffffu);
    g->eax = loc_d8;
    g->esp = sp0 - 0xe8u;
    t1 = cow_thiscall(g, COW_IMG(0x100db7b0u), rd32(COW_IMG(0x103601bcu)), 1, ebx + 1u);
    esi = t1;
    edi = COW_IMG(0x103881b8u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        ebx = ebx + 1u;
    }
    else
    {
        ebx = ebx + 1u;
        wr16(self + 0x54u, (uint16_t)(rd16(self + 0x54u) + 1u));
    }
    t2 = rd32(sp0 - 0xd8u) + 0xd4u;
    wr32(sp0 - 0xd8u, t2);
    if ((int32_t)ebx < 200)
    {
        edx = 0u;
        loc_d8 = t2;
        goto L_1023d6f3;
    }
    if ((int16_t)rd16(self + 0x54u) > 0) goto L_1023d74e;
    t3 = rd32(sp0 - 0xe8u);
    wr8(self + 0x51u, 0u);
    g->ebx = rd32(sp0 - 0xdcu);
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = t3;
    g->ebp = rd32(sp0 - 0xe0u);
    return;
L_1023d74e: ;
    wr32(sp0 - 0xd8u, 1u);
    eax = 1u;
    edx = 0u;
    loc_d8 = 1u;
L_1023d757: ;
    wr32(sp0 - 0xecu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t4 = cow_thiscall(g, COW_IMG(0x100db7b0u), rd32(COW_IMG(0x103601bcu)), 1, eax);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        ebx = t4;
        esi = ebx;
        edi = COW_IMG(0x103881b8u);
        ecx = 8u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            g->eax = 0u;
            g->esp = sp0 - 0xe8u;
            t6 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
            t7 = cow_divs(g, t6, (uint32_t)(int16_t)rd16(self + 0x54u));
            t8 = cow_mods(g, t6, (uint32_t)(int16_t)rd16(self + 0x54u));
            t9 = t8 + rd32(COW_IMG(0x10669020u));
            wr32(COW_IMG(0x10669020u), t9);
            t10 = cow_divs(g, t9, (uint32_t)(int16_t)rd16(self + 0x54u));
            t11 = cow_mods(g, t9, (uint32_t)(int16_t)rd16(self + 0x54u));
            wr32(COW_IMG(0x10669020u), t11);
            if ((int32_t)rd32(self + t11 * 0xd4u + 0x5cu) < 0)
            {
                edx = t11;
                goto L_1023d7e2;
            }
            edx = t11;
L_1023d7ba: ;
            wr32(COW_IMG(0x10669020u), edx + 1u);
            t12 = cow_divs(g, edx + 1u, (uint32_t)(int16_t)rd16(self + 0x54u));
            t13 = cow_mods(g, edx + 1u, (uint32_t)(int16_t)rd16(self + 0x54u));
            wr32(COW_IMG(0x10669020u), t13);
            if ((int32_t)rd32(self + t13 * 0xd4u + 0x5cu) >= 0)
            {
                edx = t13;
                goto L_1023d7ba;
            }
            edx = t13;
L_1023d7e2: ;
            esi = ebx;
            edi = edx * 0xd4u + self + 0x60u;
            ecx = 0x32u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr8(self + rd32(COW_IMG(0x10669020u)) * 0xd4u + 0x128u, 0u);
            t14 = rd32(sp0 - 0xd8u);
            wr32(self + rd32(COW_IMG(0x10669020u)) * 0xd4u + 0x5cu, t14);
            wr32(self + rd32(COW_IMG(0x10669020u)) * 0xd4u + 0x12cu, 0u);
        }
    }
    t15 = rd32(sp0 - 0xd8u) + 1u;
    wr32(sp0 - 0xd8u, t15);
    if ((int32_t)(t15 - 1u) < 200)
    {
        eax = t15;
        edx = t15 - 1u;
        loc_d8 = t15;
        goto L_1023d757;
    }
    eax = t15;
    edx = t15 - 1u;
    if ((int16_t)rd16(self + 0x54u) <= 1)
    {
        ebx = 1u;
    }
    else
    {
        eax = self + 0x130u;
        ebx = 1u;
L_1023d86a: ;
        if (rd32(eax) != rd32(rd32(COW_IMG(0x10669080u)) + 0x70u))
        {
            edx = rd32(COW_IMG(0x10669080u));
        }
        else
        {
            esi = eax;
            edi = sp0 - 0xd4u;
            ecx = 0x35u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = self + 0x5cu;
            edi = eax;
            ecx = 0x35u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = sp0 - 0xd4u;
            edi = self + 0x5cu;
            ecx = 0x35u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            edx = self + 0x5cu;
        }
        if ((int32_t)(ebx + 1u) < (int16_t)rd16(self + 0x54u))
        {
            eax = eax + 0xd4u;
            ebx = ebx + 1u;
            goto L_1023d86a;
        }
        eax = eax + 0xd4u;
        ebx = ebx + 1u;
    }
    goto L_1023d8ad;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023d6c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
