/* f_0x1016dfd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1016dfd0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d5;
    double d50;
    double d51;
    double d52;
    double d58;
    double d6;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_38_f;
    double loc_3c_f;
    double loc_40_f;
    double loc_44_f;
    double loc_48_f;
    double loc_4_f;
    double loc_50_f;
    double loc_54_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t60;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);

    if ((int32_t)rd32(self + 0x34120u) < 1020)
    {
        ecx = rd32(self + 0x34120u);
        if (rd8(rd32(sp0 + 8u) + 0xa4u) & 1u)
        {
            eax = (in_eax & 0xffff0000u) | rd16(rd32(sp0 + 0x10u));
            edx = rd32(sp0 + 8u);
            ebx = rd32(sp0 + 0xcu);
            ebp = rd32(sp0 + 0x10u);
            esi = rd32(rd32(sp0 + 0xcu));
            d16 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(edx + 0x20u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u))) + (double)rdf32(edx + 0x30u));
            d17 = fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(edx + 0x24u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(edx + 0x14u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u)));
            d18 = (double)(float)fr(g, d17 + (double)rdf32(edx + 0x34u));
            d19 = fr(g, fr(g, fr(g, (double)rdf32(edx + 8u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u))) + fr(g, (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u)));
            d20 = (double)(float)fr(g, d19 + (double)rdf32(edx + 0x38u));
            d21 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x20u)) + fr(g, (double)rdf32(edx) * (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu))) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x10u)));
            d22 = (double)(float)fr(g, d21 + (double)rdf32(edx + 0x30u));
            d23 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x24u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x14u))) + fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu)));
            d24 = (double)(float)fr(g, d23 + (double)rdf32(edx + 0x34u));
            d25 = fr(g, fr(g, fr(g, (double)rdf32(edx + 8u) * (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u))) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u)));
            d26 = (double)(float)fr(g, d25 + (double)rdf32(edx + 0x38u));
            d27 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x20u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(edx) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u)));
            d28 = (double)(float)fr(g, d27 + (double)rdf32(edx + 0x30u));
            d29 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x24u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(edx + 0x14u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu)));
            d30 = (double)(float)fr(g, d29 + (double)rdf32(edx + 0x34u));
            eax = esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
            loc_24_f = (double)(float)d16;
            loc_20_f = d18;
            loc_1c_f = d20;
            loc_18_f = d22;
            loc_14_f = d24;
            loc_10_f = d26;
            loc_c_f = d28;
            loc_8_f = d30;
            x1 = fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u));
            x0 = fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu) * (double)rdf32(edx + 8u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u)));
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(rd32(sp0 + 0x10u));
            edx = rd32(sp0 + 8u);
            ebx = rd32(sp0 + 0xcu);
            ebp = rd32(sp0 + 0x10u);
            esi = rd32(rd32(sp0 + 0xcu));
            d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u)) + fr(g, (double)rdf32(edx) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x20u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u))) + (double)rdf32(edx + 0x30u));
            d2 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x14u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u)) + fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x24u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u)));
            d3 = (double)(float)fr(g, d2 + (double)rdf32(edx + 0x34u));
            d4 = fr(g, fr(g, fr(g, (double)rdf32(edx + 8u) * (double)rdf32(esi + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u))) + fr(g, (double)rdf32(esi + (eax & 0x7fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u)));
            d5 = (double)(float)fr(g, d4 + (double)rdf32(edx + 0x38u));
            d6 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x10u)) + fr(g, (double)rdf32(edx) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x20u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u)));
            d7 = (double)(float)fr(g, d6 + (double)rdf32(edx + 0x30u));
            d8 = fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(edx + 0x24u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(edx + 0x14u) * (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u)));
            d9 = (double)(float)fr(g, d8 + (double)rdf32(edx + 0x34u));
            d10 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u))) + fr(g, (double)rdf32(esi + (rd16(ebp + 2u) & 0x3fffu) * 0xcu) * (double)rdf32(edx + 8u)));
            d11 = (double)(float)fr(g, d10 + (double)rdf32(edx + 0x38u));
            d12 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x20u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x10u))) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu) * (double)rdf32(edx)));
            d13 = (double)(float)fr(g, d12 + (double)rdf32(edx + 0x30u));
            d14 = fr(g, fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x24u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x14u))) + fr(g, (double)rdf32(edx + 4u) * (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu)));
            d15 = (double)(float)fr(g, d14 + (double)rdf32(edx + 0x34u));
            eax = esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
            loc_24_f = (double)(float)d1;
            loc_20_f = d3;
            loc_1c_f = d5;
            loc_18_f = d7;
            loc_14_f = d9;
            loc_10_f = d11;
            loc_c_f = d13;
            loc_8_f = d15;
            x1 = fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu) * (double)rdf32(edx + 8u));
            x0 = fr(g, fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 8u) * (double)rdf32(edx + 0x28u)) + fr(g, (double)rdf32(esi + (rd16(ebp + 4u) & 0x3fffu) * 0xcu + 4u) * (double)rdf32(edx + 0x18u)));
        }
        d31 = (double)(float)fr(g, fr(g, x0 + x1) + (double)rdf32(edx + 0x38u));
        d32 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_24_f * (double)rdf32(rd32(sp0 + 4u))) + fr(g, loc_20_f * (double)rdf32(rd32(sp0 + 4u) + 0x10u))) + fr(g, loc_1c_f * (double)rdf32(rd32(sp0 + 4u) + 0x20u))) + (double)rdf32(rd32(sp0 + 4u) + 0x30u));
        d33 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_20_f * (double)rdf32(rd32(sp0 + 4u) + 0x14u)) + fr(g, loc_1c_f * (double)rdf32(rd32(sp0 + 4u) + 0x24u))) + fr(g, loc_24_f * (double)rdf32(rd32(sp0 + 4u) + 4u))) + (double)rdf32(rd32(sp0 + 4u) + 0x34u));
        d34 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_1c_f * (double)rdf32(rd32(sp0 + 4u) + 0x28u)) + fr(g, loc_24_f * (double)rdf32(rd32(sp0 + 4u) + 8u))) + fr(g, loc_20_f * (double)rdf32(rd32(sp0 + 4u) + 0x18u))) + (double)rdf32(rd32(sp0 + 4u) + 0x38u));
        d35 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_18_f * (double)rdf32(rd32(sp0 + 4u))) + fr(g, loc_10_f * (double)rdf32(rd32(sp0 + 4u) + 0x20u))) + fr(g, loc_14_f * (double)rdf32(rd32(sp0 + 4u) + 0x10u))) + (double)rdf32(rd32(sp0 + 4u) + 0x30u));
        d36 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_10_f * (double)rdf32(rd32(sp0 + 4u) + 0x24u)) + fr(g, loc_14_f * (double)rdf32(rd32(sp0 + 4u) + 0x14u))) + fr(g, loc_18_f * (double)rdf32(rd32(sp0 + 4u) + 4u))) + (double)rdf32(rd32(sp0 + 4u) + 0x34u));
        d37 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_10_f * (double)rdf32(rd32(sp0 + 4u) + 0x28u)) + fr(g, loc_14_f * (double)rdf32(rd32(sp0 + 4u) + 0x18u))) + fr(g, loc_18_f * (double)rdf32(rd32(sp0 + 4u) + 8u))) + (double)rdf32(rd32(sp0 + 4u) + 0x38u));
        d38 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_c_f * (double)rdf32(rd32(sp0 + 4u))) + fr(g, d31 * (double)rdf32(rd32(sp0 + 4u) + 0x20u))) + fr(g, loc_8_f * (double)rdf32(rd32(sp0 + 4u) + 0x10u))) + (double)rdf32(rd32(sp0 + 4u) + 0x30u));
        d39 = (double)(float)fr(g, fr(g, fr(g, fr(g, d31 * (double)rdf32(rd32(sp0 + 4u) + 0x24u)) + fr(g, loc_8_f * (double)rdf32(rd32(sp0 + 4u) + 0x14u))) + fr(g, loc_c_f * (double)rdf32(rd32(sp0 + 4u) + 4u))) + (double)rdf32(rd32(sp0 + 4u) + 0x34u));
        d40 = (double)(float)fr(g, fr(g, fr(g, fr(g, d31 * (double)rdf32(rd32(sp0 + 4u) + 0x28u)) + fr(g, loc_8_f * (double)rdf32(rd32(sp0 + 4u) + 0x18u))) + fr(g, loc_c_f * (double)rdf32(rd32(sp0 + 4u) + 8u))) + (double)rdf32(rd32(sp0 + 4u) + 0x38u));
        if (!(d32 < d35))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, d35, 0u);
            edi = rd32(sp0 + 4u);
            loc_4_f = d31;
            loc_3c_f = d32;
            loc_38_f = d33;
            loc_34_f = d34;
            loc_30_f = d35;
            loc_2c_f = d36;
            loc_28_f = d37;
            loc_48_f = d38;
            loc_44_f = d39;
            loc_40_f = d40;
            if ((cow_fsw(g, loc_30_f, loc_48_f, 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, loc_30_f, loc_48_f, 0u) & 0x4100u;
                x0 = loc_30_f;
            }
            else
            {
                eax = cow_fsw(g, loc_30_f, loc_48_f, 0u) & 0x4100u;
                x0 = loc_48_f;
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, d35, 0u);
            edi = rd32(sp0 + 4u);
            loc_4_f = d31;
            loc_3c_f = d32;
            loc_38_f = d33;
            loc_34_f = d34;
            loc_30_f = d35;
            loc_2c_f = d36;
            loc_28_f = d37;
            loc_48_f = d38;
            loc_44_f = d39;
            loc_40_f = d40;
            if ((cow_fsw(g, loc_3c_f, loc_48_f, 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, loc_3c_f, loc_48_f, 0u) & 0x4100u;
                x0 = loc_3c_f;
            }
            else
            {
                eax = cow_fsw(g, loc_3c_f, loc_48_f, 0u) & 0x4100u;
                x0 = loc_48_f;
            }
        }
        if (!(loc_38_f < loc_2c_f))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_38_f, loc_2c_f, 1u);
            if ((cow_fsw(g, loc_2c_f, loc_44_f, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, loc_2c_f, loc_44_f, 1u) & 0x4100u;
                x1 = loc_2c_f;
            }
            else
            {
                eax = cow_fsw(g, loc_2c_f, loc_44_f, 1u) & 0x4100u;
                x1 = loc_44_f;
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_38_f, loc_2c_f, 1u);
            if ((cow_fsw(g, loc_38_f, loc_44_f, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, loc_38_f, loc_44_f, 1u) & 0x4100u;
                x1 = loc_38_f;
            }
            else
            {
                eax = cow_fsw(g, loc_38_f, loc_44_f, 1u) & 0x4100u;
                x1 = loc_44_f;
            }
        }
        if (!(loc_34_f < loc_28_f))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_34_f, loc_28_f, 2u);
            if ((cow_fsw(g, loc_28_f, loc_40_f, 2u) & 0x4100u) == 0u)
            {
                eax = cow_f2bits(loc_40_f);
            }
            else
            {
                eax = cow_f2bits(loc_28_f);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_34_f, loc_28_f, 2u);
            if ((cow_fsw(g, loc_34_f, loc_40_f, 2u) & 0x4100u) != 0u)
            {
                eax = cow_f2bits(loc_34_f);
            }
            else
            {
                eax = cow_f2bits(loc_40_f);
            }
        }
        wr32(sp0 + 0xcu, eax);
        if ((cow_fsw(g, loc_3c_f, loc_30_f, 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_3c_f, loc_30_f, 2u) & 0x4100u;
            goto L_1016e471;
        }
        eax = cow_fsw(g, loc_3c_f, loc_30_f, 2u) & 0x4100u;
        if ((cow_fsw(g, loc_3c_f, loc_48_f, 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_3c_f, loc_48_f, 2u) & 0x4100u;
            goto L_1016e488;
        }
        eax = cow_fsw(g, loc_3c_f, loc_48_f, 2u) & 0x4100u;
        x2 = loc_3c_f;
L_1016e48c: ;
        if ((cow_fsw(g, loc_38_f, loc_2c_f, 3u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_38_f, loc_2c_f, 3u) & 0x4100u;
            goto L_1016e4b4;
        }
        eax = cow_fsw(g, loc_38_f, loc_2c_f, 3u) & 0x4100u;
        if ((cow_fsw(g, loc_38_f, loc_44_f, 3u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_38_f, loc_44_f, 3u) & 0x4100u;
            goto L_1016e4cb;
        }
        eax = cow_fsw(g, loc_38_f, loc_44_f, 3u) & 0x4100u;
        x3 = loc_38_f;
L_1016e4cf: ;
        if ((cow_fsw(g, loc_34_f, loc_28_f, 4u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_34_f, loc_28_f, 4u) & 0x4100u;
            goto L_1016e4f7;
        }
        eax = cow_fsw(g, loc_34_f, loc_28_f, 4u) & 0x4100u;
        if ((cow_fsw(g, loc_34_f, loc_40_f, 4u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_34_f, loc_40_f, 4u) & 0x4100u;
            goto L_1016e50e;
        }
        eax = cow_fsw(g, loc_34_f, loc_40_f, 4u) & 0x4100u;
        x4 = loc_34_f;
L_1016e512: ;
        d41 = fr(g, fr(g, x2 + x0) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 0x10u, (float)d41);
        d42 = fr(g, fr(g, x3 + x1) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 4u, (float)d42);
        d43 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 0xcu) + x4) * (double)rdf32(COW_IMG(0x10329a08u)));
        d44 = (double)(float)fr(g, fr(g, x4 - (double)rdf32(sp0 + 0xcu)) * (double)rdf32(COW_IMG(0x10329a08u)));
        d45 = fr(g, fr(g, fr(g, x2 - x0) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg5));
        wrf32(sp0 + 0xcu, (float)d45);
        d46 = fr(g, fr(g, fr(g, x3 - x1) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg5 + 4u));
        wrf32(sp0 + 8u, (float)d46);
        d47 = fr(g, (double)rdf32(sp0 + 0x10u) - -(double)rdf32(sp0 + 0xcu));
        if (!(d47 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_50_f = d43;
            loc_54_f = d44;
            d48 = fr(g, (double)rdf32(sp0 + 4u) - -(double)rdf32(sp0 + 8u));
            if (!(d48 <= (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                d49 = fr(g, loc_50_f - fr(g, -(double)rdf32(arg5) - loc_54_f));
                if (!(d49 <= (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    d50 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 + 0x10u));
                    if (!(d50 <= (double)rdf32(COW_IMG(0x103295d8u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d50, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        d51 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u));
                        if (!(d51 <= (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            d52 = fr(g, fr(g, fr(g, loc_54_f + (double)rdf32(arg5 + 8u)) + (double)rdf32(arg5)) - loc_50_f);
                            if (!(d52 <= (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                wr32(self + 0x34120u, ecx + 1u);
                                t53 = ecx * 0x68u + self + 0x1a120u;
                                wr32(t53, cow_f2bits(loc_3c_f));
                                wr32(t53 + 4u, cow_f2bits(loc_38_f));
                                wr32(t53 + 8u, cow_f2bits(loc_34_f));
                                wr32(t53 + 0xcu, cow_f2bits(loc_30_f));
                                wr32(t53 + 0x10u, cow_f2bits(loc_2c_f));
                                wr32(t53 + 0x14u, cow_f2bits(loc_28_f));
                                wr32(t53 + 0x18u, cow_f2bits(loc_48_f));
                                wr32(t53 + 0x1cu, cow_f2bits(loc_44_f));
                                wr32(t53 + 0x20u, cow_f2bits(loc_40_f));
                                wr32(t53 + 0x30u, cow_f2bits(loc_24_f));
                                wr32(t53 + 0x34u, cow_f2bits(loc_20_f));
                                wr32(t53 + 0x38u, cow_f2bits(loc_1c_f));
                                wr32(t53 + 0x3cu, cow_f2bits(loc_18_f));
                                wr32(t53 + 0x40u, cow_f2bits(loc_14_f));
                                wr32(t53 + 0x44u, cow_f2bits(loc_10_f));
                                wr32(t53 + 0x48u, cow_f2bits(loc_c_f));
                                wr32(t53 + 0x4cu, cow_f2bits(loc_8_f));
                                wr32(t53 + 0x50u, cow_f2bits(loc_4_f));
                                t54 = rd16(ebp + 6u);
                                t55 = rd16(ebp + 4u);
                                t56 = rd16(ebp + 2u);
                                t57 = rd16(ebp);
                                wr32(t53 + 0x60u, edx);
                                wr8(t53 + 0x64u, (uint8_t)((uint8_t)((uint8_t)((t54 >> 0xfu) * 2u | t55 >> 0xfu) * 2u | t56 >> 0xfu) * 2u | t57 >> 0xfu));
                                d58 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x98u) * (double)rdf32(rd32(ebx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(edx + 0x8cu) * (double)rdf32(rd32(ebx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(edx + 0x80u) * (double)rdf32(rd32(ebx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu)));
                                t59 = rd32(ebx + 4u);
                                t60 = rd16(ebp + 6u);
                                wrf32(t53 + 0x54u, (float)d58);
                                d61 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x9cu) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(edx + 0x84u) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x90u) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu + 4u)));
                                wrf32(t53 + 0x58u, (float)d61);
                                d62 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0xa0u) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(edx + 0x88u) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu))) + fr(g, (double)rdf32(edx + 0x94u) * (double)rdf32(t59 + (t60 & 0x7fffu) * 0xcu + 4u)));
                                wrf32(t53 + 0x5cu, (float)d62);
                                d63 = fr(g, fr(g, fr(g, (double)rdf32(edi) * (double)rdf32(t53 + 0x54u)) + fr(g, (double)rdf32(edi + 0x20u) * (double)rdf32(t53 + 0x5cu))) + fr(g, (double)rdf32(edi + 0x10u) * (double)rdf32(t53 + 0x58u)));
                                wrf32(t53 + 0x24u, (float)d63);
                                d64 = fr(g, fr(g, fr(g, (double)rdf32(edi + 0x24u) * (double)rdf32(t53 + 0x5cu)) + fr(g, (double)rdf32(edi + 0x14u) * (double)rdf32(t53 + 0x58u))) + fr(g, (double)rdf32(edi + 4u) * (double)rdf32(t53 + 0x54u)));
                                wrf32(t53 + 0x28u, (float)d64);
                                d65 = fr(g, fr(g, fr(g, (double)rdf32(t53 + 0x5cu) * (double)rdf32(edi + 0x28u)) + fr(g, (double)rdf32(t53 + 0x58u) * (double)rdf32(edi + 0x18u))) + fr(g, (double)rdf32(edi + 8u) * (double)rdf32(t53 + 0x54u)));
                                wrf32(t53 + 0x2cu, (float)d65);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
L_1016e471: ;
    if ((cow_fsw(g, loc_30_f, loc_48_f, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_30_f, loc_48_f, 2u) & 0x4100u;
        goto L_1016e488;
    }
    eax = cow_fsw(g, loc_30_f, loc_48_f, 2u) & 0x4100u;
    x2 = loc_30_f;
    goto L_1016e48c;
L_1016e488: ;
    x2 = loc_48_f;
    goto L_1016e48c;
L_1016e4b4: ;
    if ((cow_fsw(g, loc_2c_f, loc_44_f, 3u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_2c_f, loc_44_f, 3u) & 0x4100u;
        goto L_1016e4cb;
    }
    eax = cow_fsw(g, loc_2c_f, loc_44_f, 3u) & 0x4100u;
    x3 = loc_2c_f;
    goto L_1016e4cf;
L_1016e4cb: ;
    x3 = loc_44_f;
    goto L_1016e4cf;
L_1016e4f7: ;
    if ((cow_fsw(g, loc_28_f, loc_40_f, 4u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_28_f, loc_40_f, 4u) & 0x4100u;
        goto L_1016e50e;
    }
    eax = cow_fsw(g, loc_28_f, loc_40_f, 4u) & 0x4100u;
    x4 = loc_28_f;
    goto L_1016e512;
L_1016e50e: ;
    x4 = loc_40_f;
    goto L_1016e512;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016dfd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1016dfd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
