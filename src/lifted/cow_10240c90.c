/* f_0x10240c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240c90(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d10;
    double d22;
    double d3;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_130_f;
    uint32_t loc_134;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t5;
    double x0;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 328u);

    wr32(sp0 - 0x10cu, in_ebx);
    wr32(sp0 - 0x110u, in_ebp);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    d3 = (double)rdf32(self + 0x14u);
    d4 = (double)rdf32(COW_IMG(0x1032961cu));
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    if ((cow_fsw(g, d3, d4, 0u) & 0x4100u) != 0u)
    {
        edx = t2;
        edi = t1;
    }
    else
    {
        edx = t2;
        edi = t1;
        wr32(self + 0x14u, 0x3f800000u);
    }
    wr32(sp0 - 0x11cu, sp0 - 0x108u);
    g->esp = sp0 - 0x118u;
    t5 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x108u);
    d6 = (double)rdf32(self + 0x14u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        ecx = rd32(edi);
        edi = rd32(rd32(edi) + 0x134u);
        d7 = (double)rdf32(self + 0x14u);
        if (d7 < (double)rdf32(COW_IMG(0x1033cb1cu)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x1033cb1cu)), 0u);
            d8 = (double)rdf32(self + 0x14u);
            d9 = (double)rdf32(self + 0x14u);
            wr32(sp0 - 0x11cu, 0u);
            wr32(sp0 - 0x120u, 0u);
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0x80808080u);
            wr32(sp0 - 0x12cu, 0x3f800000u);
            wr32(sp0 - 0x130u, ecx);
            d10 = (double)(float)fr(g, d9 + d9);
            wrf32(sp0 - 0x130u, (float)d10);
            t11 = (uint32_t)(int16_t)rd16(sp0 - 0x106u);
            wr32(sp0 - 0x134u, t11);
            if (!(d8 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
                edx = t11;
                loc_130_f = d10;
                loc_134 = t11;
                x0 = fr(g, fr(g, (double)rdf32(self + 0x14u) - (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033cb18u)));
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
                edx = t11;
                loc_130_f = d10;
                loc_134 = t11;
                x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) - (double)rdf32(self + 0x14u)) * (double)rdf32(COW_IMG(0x1032ae60u)));
            }
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x134u;
            t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t13 = g->edx;
            t14 = (uint32_t)(int16_t)rd16(sp0 - 0x108u) - t12;
            wr32(sp0 - 0x138u, t14);
            g->esp = sp0 - 0x118u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, t14, rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), 0x3f800000u, 0x80808080u, 1u, 0u, 0u);
        }
    }
    wr32(sp0 - 0x11cu, 0x80808080u);
    wr32(sp0 - 0x120u, self + 0x18u);
    t15 = rd32(sp0 - 0x106u) - 0x10u;
    wr32(sp0 - 0x124u, t15);
    t16 = rd32(sp0 - 0x108u) + 0x70u;
    wr32(sp0 - 0x128u, t16);
    g->eax = t15;
    g->ecx = t16;
    g->edx = self + 0x18u;
    g->esp = sp0 - 0x104u;
    t17 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t16, t15, self + 0x18u, 0x80808080u, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    t20 = rd16(sp0 - 0x106u);
    t21 = rd16(sp0 - 0x108u);
    d22 = fr(g, (double)rdf32(self + 0x14u) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    fpush(g, d22);
    g->esp = sp0 - 0x128u;
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    wr32(sp0 - 0x12cu, t23);
    wr32(sp0 - 0x130u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x134u, sp0 - 0x100u);
    g->ebx = (uint32_t)(int16_t)t20 + 2u;
    g->ecx = t24;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x120u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), t23, rd32(sp0 - 0x128u), rd32(sp0 - 0x124u));
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x138u, 0x80808080u);
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
    wr8(sp0 + ~ecx - 0x100u, (uint8_t)eax);
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    t27 = (uint32_t)(int16_t)t20 + 2u;
    wr32(sp0 - 0x140u, t27);
    t28 = (uint32_t)(int16_t)t21 + 0x110u;
    wr32(sp0 - 0x144u, t28);
    wr8(sp0 + ~ecx - 0x101u, 0x25u);
    g->eax = sp0 - 0x100u;
    g->edx = t26;
    t29 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t28, t27, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u));
    t30 = g->edx;
    g->ebx = rd32(sp0 - 0x10cu);
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x118u);
    g->ebp = rd32(sp0 - 0x110u);
    g->edx = t30;
    return t29;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10240c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10240c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
