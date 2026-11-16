/* f_0x101cb280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_101cb280(Guest* g)
{
    double d10;
    double d12;
    double d15;
    double d19;
    double d2;
    double d3;
    double d4;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t loc_4;
    double loc_8_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    t1 = rd32(sp0 + 0x1cu);
    wr32(sp0 - 4u, t1);
    d2 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x1cu));
    wrf32(sp0 - 8u, (float)d2);
    d3 = (double)rdf32(sp0 + 0x1cu);
    if (d3 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_8_f = d2;
        goto L_101cb2bd;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_4 = t1;
    loc_8_f = d2;
    d4 = (double)rdf32(sp0 + 0x1cu);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_101cb2c5;
    }
    eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
L_101cb2bd: ;
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
L_101cb2c5: ;
    if (loc_8_f < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101cb2e9;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_101cb2f1;
    }
    eax = cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
L_101cb2e9: ;
    wr32(sp0 - 8u, 0u);
L_101cb2f1: ;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    d5 = fr(g, fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x1032a3c8u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d5);
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    wr32(sp0 + 0x1cu, t6);
    d10 = fr(g, d9 + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    if (t11 == 0u)
    {
        edi = (in_edi & 0xffff0000u) | rd16(sp0 + 8u);
    }
    else
    {
        edi = (in_edi & 0xffff0000u) | rd16(sp0 + 8u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 8u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, arg5);
        wr32(sp0 - 0x2cu, arg9);
        wr32(sp0 - 0x30u, arg5);
        d12 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(sp0 + 0x20u));
        wrf32(sp0 - 0x30u, (float)d12);
        t13 = (uint32_t)(int16_t)edi + 1u;
        wr32(sp0 - 0x34u, t13);
        t14 = (uint32_t)(int16_t)arg1 + 4u;
        wr32(sp0 - 0x38u, t14);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1011fc80u), arg3, 8, t14, t13, cow_f2bits(d12), arg9, arg5, 0u, 8u, 0u);
    }
    if (rd32(sp0 + 0x1cu) != 0u)
    {
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 8u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, arg6);
        wr32(sp0 - 0x2cu, arg9);
        wr32(sp0 - 0x30u, arg6);
        d15 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 0x20u));
        wrf32(sp0 - 0x30u, (float)d15);
        t16 = (uint32_t)(int16_t)rd16(arg3 + 0x22u) - (uint32_t)(int16_t)rd16(arg3 + 0x20u);
        t17 = rd16(arg3 + 0x20u);
        wr32(sp0 + 8u, t16);
        t18 = (uint32_t)(int16_t)edi + 1u;
        wr32(sp0 - 0x34u, t18);
        d19 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 4u)) * (double)rdf32(sp0 + 0x20u));
        fpush(g, d19);
        g->esp = sp0 - 0x34u;
        t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
        t21 = t20 + (uint32_t)(int16_t)arg1 + 4u;
        wr32(sp0 - 0x38u, t21);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1011fc80u), arg3, 8, t21, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), arg9, arg6, 0u, 8u, 0u);
    }
    if (arg4 != 0u)
    {
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, arg11);
        wr32(sp0 - 0x30u, arg10);
        wr32(sp0 - 0x34u, (uint32_t)(int16_t)edi);
        wr32(sp0 - 0x38u, (uint32_t)(int16_t)arg1);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1011fc80u), arg4, 8, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)edi, arg10, arg11, 0x80808080u, 0u, 0u, 0u);
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cb280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
