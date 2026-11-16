/* f_0x101cad00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
uint32_t cow_fn_101cad00(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d16;
    double d19;
    double d25;
    double d27;
    double d31;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    double loc_30_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    d1 = (double)rdf32(sp0 + 0x14u);
    t2 = rd32(sp0 + 0x14u);
    wr32(sp0 - 8u, t2);
    t3 = rd32(sp0 + 0x18u);
    wr32(sp0 - 4u, t3);
    if (d1 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t3;
        loc_4 = t3;
        goto L_101cad37;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t3;
    loc_8 = t2;
    loc_4 = t3;
    d4 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_101cad3f;
    }
    eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
L_101cad37: ;
    wr32(sp0 - 8u, 0u);
    loc_8 = 0u;
L_101cad3f: ;
    d5 = (double)rdf32(sp0 + 0x18u);
    if (d5 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101cad63;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d6 = (double)rdf32(sp0 + 0x18u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_101cad6b;
    }
    eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
L_101cad63: ;
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
L_101cad6b: ;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->ecx = ecx;
    g->edx = in_edx;
    d7 = fr(g, fr(g, cow_bits2f(loc_8) * (double)rdf32(COW_IMG(0x1032a3c8u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d7);
    g->esp = sp0 - 0x18u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    wr32(sp0 + 0x14u, t8);
    g->ecx = t9;
    d12 = fr(g, d11 + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d12);
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = rd16(sp0 + 8u);
    wr32(sp0 + 0x18u, t13);
    if ((int32_t)t8 < 100)
    {
        ecx = t14;
        esi = (t8 & 0xffff0000u) | t15;
        goto L_101cade0;
    }
    ecx = t14;
    esi = (t8 & 0xffff0000u) | t15;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, arg8);
    wr32(sp0 - 0x30u, ecx);
    d16 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 0x1cu));
    wrf32(sp0 - 0x30u, (float)d16);
    t17 = (uint32_t)(int16_t)esi + 1u;
    wr32(sp0 - 0x34u, t17);
    t18 = (uint32_t)(int16_t)arg1 + 4u;
    wr32(sp0 - 0x38u, t18);
    eax = t18;
    edx = t17;
    loc_30_f = d16;
    loc_34 = t17;
    loc_38 = t18;
L_101cae0c: ;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), arg3, 8, loc_38, loc_34, cow_f2bits(loc_30_f), arg8, 0x80808080u, 0u, 8u, 0u);
    t22 = g->ecx;
    ecx = t22;
L_101cae13: ;
    if (rd32(sp0 + 0x18u) == 0u)
    {
        eax = rd32(sp0 + 0x18u);
    }
    else
    {
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x30808080u);
        wr32(sp0 - 0x2cu, arg8);
        wr32(sp0 - 0x30u, ecx);
        t23 = (uint32_t)(int16_t)rd16(arg3 + 0x22u) - (uint32_t)(int16_t)rd16(arg3 + 0x20u);
        t24 = rd16(arg3 + 0x20u);
        d25 = fr(g, fr(g, (double)rdf32(sp0 - 4u) - (double)rdf32(sp0 - 8u)) * (double)rdf32(sp0 + 0x1cu));
        wr32(sp0 + 8u, t23);
        wrf32(sp0 - 0x30u, (float)(double)(float)d25);
        t26 = (uint32_t)(int16_t)esi + 1u;
        wr32(sp0 - 0x34u, t26);
        d27 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 8u));
        fpush(g, d27);
        g->esp = sp0 - 0x34u;
        t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
        t29 = t28 + (uint32_t)(int16_t)arg1 + 4u;
        wr32(sp0 - 0x38u, t29);
        g->esp = sp0 - 0x18u;
        t30 = cow_thiscall(g, COW_IMG(0x1011fc80u), arg3, 8, t29, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), arg8, 0x30808080u, 0u, 0u, 0u);
        eax = t30;
    }
    if (arg4 != 0u)
    {
        d31 = (double)rdf32(sp0 - 8u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        if (d31 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            wr32(sp0 - 0x28u, 0x80808080u);
            loc_28 = 0x80808080u;
        }
        else
        {
            wr32(sp0 - 0x28u, 0x30505050u);
            loc_28 = 0x30505050u;
        }
        wr32(sp0 - 0x2cu, arg10);
        wr32(sp0 - 0x30u, arg9);
        wr32(sp0 - 0x34u, (uint32_t)(int16_t)esi);
        wr32(sp0 - 0x38u, (uint32_t)(int16_t)arg1);
        g->eax = (uint32_t)(int16_t)esi;
        g->esp = sp0 - 0x18u;
        t32 = cow_thiscall(g, COW_IMG(0x1011fc80u), arg4, 8, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)esi, arg9, arg10, loc_28, 0u, 0u, 0u);
        eax = t32;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax;
L_101cade0: ;
    if (rd32(sp0 + 0x14u) == 0u) goto L_101cae13;
    eax = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, arg8);
    wr32(sp0 - 0x30u, ecx);
    d19 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 0x1cu));
    wrf32(sp0 - 0x30u, (float)d19);
    t20 = (uint32_t)(int16_t)esi + 1u;
    wr32(sp0 - 0x34u, t20);
    t21 = (uint32_t)(int16_t)arg1 + 4u;
    wr32(sp0 - 0x38u, t21);
    edx = t21;
    loc_30_f = d19;
    loc_34 = t20;
    loc_38 = t21;
    goto L_101cae0c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cad00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cad00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
