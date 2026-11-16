/* f_0x10238500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10238500(Guest* g)
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
    uint32_t t5;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    if (rd32(self + 0x28u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        goto L_10238675;
    }
    if ((uint32_t)(int16_t)arg1 - 3u > 9u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        ebx = in_ebx;
        goto L_10238675;
    }
    t1 = rd32(COW_IMG(0x10238680u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1023852du: goto L_1023852d;
    case 0x1023855fu: goto L_1023855f;
    case 0x10238631u: goto L_10238631;
    case 0x10238653u: goto L_10238653;
    case 0x10238668u: goto L_10238668;
    case 0x10238675u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; ebx = in_ebx; goto L_10238675;
    default: rt_fatal(g, COW_IMG(0x10238526u), "switch");
    }
    return 0;
L_1023852d: ;
    if (rd8(self + 0x14u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffffff00u) | rd8(self + 0x14u);
        goto L_10238541;
    }
    eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffffff00u) | rd8(self + 0x14u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t36 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->edx = t37;
    return t36;
L_10238541: ;
    t38 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x70u;
    t39 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, t38, in_edx, 1, 0);
    t40 = g->ecx;
    t41 = g->edx;
    wr32(self + 0x24u, 1u);
    wr32(self + 0x28u, 1u);
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10037b90u), t40, 0);
    t43 = g->edx;
    g->ebx = in_ebx;
    g->edx = t43;
    return t42;
L_1023855f: ;
    wr32(sp0 - 0x74u, in_ebx);
    t12 = rd32(COW_IMG(0x10668facu));
    t13 = rd32(COW_IMG(0x10668fb4u));
    t14 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    t15 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    wr8(sp0 - 0x48u, 0u);
    g->eax = t12;
    g->esp = sp0 - 0x74u;
    t16 = cow_fastcall(g, COW_IMG(0x103149e0u), t13, in_edx, 0);
    t17 = cow_divs(g, t16, 0xau);
    t18 = cow_mods(g, t16, 0xau);
    if (t18 == 7u)
    {
        ecx = 0xau;
        ebx = t14;
        edi = t15;
    }
    else
    {
        eax = t17;
        edx = t18;
        ebx = t14;
        edi = t15;
        g->eax = eax;
        g->ecx = 0xau;
        g->esp = sp0 - 0x74u;
        t19 = cow_stdcall(g, COW_IMG(0x10310070u), 0);
        t20 = g->ecx;
        if ((int32_t)t19 < 0)
        {
            ecx = t20;
        }
        else
        {
            eax = t19;
            ecx = t20;
            wr32(sp0 - 0x78u, sp0 - 0x28u);
            wr32(sp0 - 0x7cu, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x74u;
            t21 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, eax, sp0 - 0x28u);
            t22 = g->ecx;
            t23 = g->edx;
            if ((int32_t)t21 < 0)
            {
                ecx = t22;
            }
            else
            {
                edx = t23;
                wr32(sp0 - 0x78u, sp0 - 0x20u);
                wr32(sp0 - 0x7cu, COW_IMG(0x1034f7e0u));
                wr32(sp0 - 0x80u, sp0 - 0x48u);
                g->ebx = ebx;
                g->ecx = sp0 - 0x48u;
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x48u, COW_IMG(0x1034f7e0u), sp0 - 0x20u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
                t24 = g->ecx;
                ecx = t24;
            }
        }
    }
    wr32(sp0 - 0x78u, sp0 - 0x68u);
    wr32(sp0 - 0x7cu, sp0 - 0x48u);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, edi);
    g->eax = sp0 - 0x48u;
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x5cu;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x102386b0u), ecx, 10, edi, ebx, sp0 - 0x48u, sp0 - 0x68u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        edx = t27;
        ebx = rd32(sp0 - 0x74u);
        goto L_10238675;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    ebx = rd32(sp0 - 0x74u);
    edi = sp0 - 0x68u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 0x10u) goto L_10238675;
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t28 = cow_call_regs(g, COW_IMG(0x101ba240u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x68u);
    t29 = g->edx;
    if (t28 != 0u)
    {
        eax = t28;
        edx = t29;
        goto L_10238675;
    }
    eax = t28;
    edx = t29;
    g->esp = sp0 - 0x70u;
    t30 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(self + 0x30u), 1, sp0 - 0x68u);
    t31 = g->edx;
    t32 = rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u);
    wr32(sp0 - 0x74u, t32);
    g->eax = rd32(COW_IMG(0x10668fc4u));
    g->edx = t31;
    t33 = rd32(COW_IMG(0x10668fc4u));
    t34 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t32);
    t35 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = t35;
    return t34;
L_10238631: ;
    t6 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x70u;
    t7 = cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 3u, t6, in_edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(self + 0x24u, 0xffffffffu);
    wr32(self + 0x28u, 1u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10037bf0u), t8, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10238653: ;
    wr32(sp0 - 0x74u, 5u);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10238668: ;
    wr32(sp0 - 0x74u, 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t2 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    ebx = in_ebx;
L_10238675: ;
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238500(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
