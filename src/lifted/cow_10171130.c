/* f_0x10171130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10171130(Guest* g)
{
    uint32_t cf;
    double d17;
    double d18;
    double d19;
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
    double d50;
    double d51;
    double d52;
    double d56;
    double d60;
    uint32_t ebx;
    uint32_t edi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 < (int32_t)rd8(self + 0x1a9u))
    {
        cf = arg1 < rd8(self + 0x1a9u);
        pf = PARITY((uint8_t)(arg1 - rd8(self + 0x1a9u)));
        zf = arg1 == rd8(self + 0x1a9u);
        sf = (int32_t)(arg1 - rd8(self + 0x1a9u)) < 0;
        of = ((arg1 ^ rd8(self + 0x1a9u)) & (arg1 ^ arg1 - rd8(self + 0x1a9u))) >> 0x1fu;
        wr8(self + 0x1a8u, (uint8_t)(rd8(self + 0x1a8u) | ((arg1 & 0x1fu) != 0u ? (uint8_t)(1u << (arg1 & 0x1fu)) : 1u)));
        t1 = rd32(arg1 * 4u + self + 0x198u);
        wr32(t1 + 0x40u, rd32(arg2));
        t2 = rd32(arg2 + 4u);
        wr32(t1 + 0x44u, t2);
        t3 = rd32(arg2 + 8u);
        wr32(t1 + 0x48u, t3);
        t4 = rd32(arg2 + 0xcu);
        wr32(t1 + 0x4cu, t4);
        t5 = rd32(arg2 + 0x10u);
        wr32(t1 + 0x50u, t5);
        t6 = rd32(arg2 + 0x14u);
        wr32(t1 + 0x54u, t6);
        t7 = rd32(arg2 + 0x18u);
        wr32(t1 + 0x58u, t7);
        t8 = rd32(arg2 + 0x1cu);
        wr32(t1 + 0x5cu, t8);
        t9 = rd32(arg2 + 0x20u);
        wr32(t1 + 0x60u, t9);
        t10 = rd32(arg2 + 0x24u);
        wr32(t1 + 0x64u, t10);
        t11 = rd32(arg2 + 0x28u);
        wr32(t1 + 0x68u, t11);
        t12 = rd32(arg2 + 0x2cu);
        wr32(t1 + 0x6cu, t12);
        t13 = rd32(arg2 + 0x30u);
        wr32(t1 + 0x70u, t13);
        t14 = rd32(arg2 + 0x34u);
        wr32(t1 + 0x74u, t14);
        t15 = rd32(arg2 + 0x38u);
        wr32(t1 + 0x78u, t15);
        t16 = rd32(arg2 + 0x3cu);
        wr32(t1 + 0x7cu, t16);
        if (arg3 != 0u)
        {
            edi = t1;
            if (rd32(edi + 0x18u) != 0u)
            {
                ebx = rd32(edi + 0x18u);
                d17 = (double)rdf32(ebx + 0x48u);
                d18 = (double)rdf32(ebx + 0x50u);
                d19 = (double)rdf32(ebx + 0x5cu);
                d20 = fr(g, fr(g, fr(g, fr(g, d17 * (double)rdf32(arg2)) + fr(g, d18 * (double)rdf32(arg2 + 0x10u))) + fr(g, d19 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0xf4u, (float)d20);
                d21 = fr(g, fr(g, fr(g, fr(g, d17 * (double)rdf32(arg2 + 4u)) + fr(g, d18 * (double)rdf32(arg2 + 0x14u))) + fr(g, d19 * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0xf8u, (float)d21);
                d22 = fr(g, fr(g, fr(g, fr(g, d17 * (double)rdf32(arg2 + 8u)) + fr(g, d18 * (double)rdf32(arg2 + 0x18u))) + fr(g, d19 * (double)rdf32(arg2 + 0x28u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0xfcu, (float)d22);
                d23 = (double)rdf32(ebx + 0x4cu);
                d24 = (double)rdf32(ebx + 0x50u);
                d25 = (double)rdf32(ebx + 0x5cu);
                d26 = fr(g, fr(g, fr(g, fr(g, d23 * (double)rdf32(arg2)) + fr(g, d24 * (double)rdf32(arg2 + 0x10u))) + fr(g, d25 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0x100u, (float)d26);
                d27 = fr(g, fr(g, fr(g, fr(g, d23 * (double)rdf32(arg2 + 4u)) + fr(g, d24 * (double)rdf32(arg2 + 0x14u))) + fr(g, d25 * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0x104u, (float)d27);
                d28 = fr(g, fr(g, fr(g, fr(g, d23 * (double)rdf32(arg2 + 8u)) + fr(g, d24 * (double)rdf32(arg2 + 0x18u))) + fr(g, d25 * (double)rdf32(arg2 + 0x28u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0x108u, (float)d28);
                d29 = (double)rdf32(ebx + 0x4cu);
                d30 = (double)rdf32(ebx + 0x50u);
                d31 = (double)rdf32(ebx + 0x58u);
                d32 = fr(g, fr(g, fr(g, fr(g, d29 * (double)rdf32(arg2)) + fr(g, d30 * (double)rdf32(arg2 + 0x10u))) + fr(g, d31 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0x10cu, (float)d32);
                d33 = fr(g, fr(g, fr(g, fr(g, d29 * (double)rdf32(arg2 + 4u)) + fr(g, d30 * (double)rdf32(arg2 + 0x14u))) + fr(g, d31 * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0x110u, (float)d33);
                d34 = fr(g, fr(g, fr(g, fr(g, d29 * (double)rdf32(arg2 + 8u)) + fr(g, d30 * (double)rdf32(arg2 + 0x18u))) + fr(g, d31 * (double)rdf32(arg2 + 0x28u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0x114u, (float)d34);
                d35 = (double)rdf32(ebx + 0x48u);
                d36 = (double)rdf32(ebx + 0x50u);
                d37 = (double)rdf32(ebx + 0x58u);
                d38 = fr(g, fr(g, fr(g, fr(g, d35 * (double)rdf32(arg2)) + fr(g, d36 * (double)rdf32(arg2 + 0x10u))) + fr(g, d37 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0x118u, (float)d38);
                d39 = fr(g, fr(g, fr(g, fr(g, d35 * (double)rdf32(arg2 + 4u)) + fr(g, d36 * (double)rdf32(arg2 + 0x14u))) + fr(g, d37 * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0x11cu, (float)d39);
                d40 = fr(g, fr(g, fr(g, fr(g, d35 * (double)rdf32(arg2 + 8u)) + fr(g, d36 * (double)rdf32(arg2 + 0x18u))) + fr(g, d37 * (double)rdf32(arg2 + 0x28u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0x120u, (float)d40);
                d41 = (double)rdf32(ebx + 0x48u);
                d42 = (double)rdf32(ebx + 0x54u);
                d43 = (double)rdf32(ebx + 0x5cu);
                d44 = fr(g, fr(g, fr(g, fr(g, d41 * (double)rdf32(arg2)) + fr(g, d42 * (double)rdf32(arg2 + 0x10u))) + fr(g, d43 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0x124u, (float)d44);
                d45 = fr(g, fr(g, fr(g, fr(g, d42 * (double)rdf32(arg2 + 0x14u)) + fr(g, d41 * (double)rdf32(arg2 + 4u))) + fr(g, d43 * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0x128u, (float)d45);
                d46 = fr(g, fr(g, fr(g, fr(g, d42 * (double)rdf32(arg2 + 0x18u)) + fr(g, d41 * (double)rdf32(arg2 + 8u))) + fr(g, d43 * (double)rdf32(arg2 + 0x28u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0x12cu, (float)d46);
                d47 = (double)rdf32(ebx + 0x4cu);
                d48 = (double)rdf32(ebx + 0x54u);
                d49 = (double)rdf32(ebx + 0x5cu);
                d50 = fr(g, fr(g, fr(g, fr(g, d47 * (double)rdf32(arg2)) + fr(g, d48 * (double)rdf32(arg2 + 0x10u))) + fr(g, d49 * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(arg2 + 0x30u));
                wrf32(edi + 0x130u, (float)d50);
                d51 = fr(g, fr(g, fr(g, fr(g, d49 * (double)rdf32(arg2 + 0x24u)) + fr(g, d47 * (double)rdf32(arg2 + 4u))) + fr(g, d48 * (double)rdf32(arg2 + 0x14u))) + (double)rdf32(arg2 + 0x34u));
                wrf32(edi + 0x134u, (float)d51);
                d52 = fr(g, fr(g, fr(g, fr(g, d49 * (double)rdf32(arg2 + 0x28u)) + fr(g, d47 * (double)rdf32(arg2 + 8u))) + fr(g, d48 * (double)rdf32(arg2 + 0x18u))) + (double)rdf32(arg2 + 0x38u));
                wrf32(edi + 0x138u, (float)d52);
                t53 = rd32(ebx + 0x58u);
                t54 = rd32(ebx + 0x54u);
                t55 = rd32(ebx + 0x4cu);
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10171440u), 5, edi + 0x13cu, arg2, t55, t54, t53);
                d56 = cow_take_float(g);
                t57 = rd32(ebx + 0x58u);
                t58 = rd32(ebx + 0x54u);
                t59 = rd32(ebx + 0x48u);
                g->esp = sp0 - 0x20u;
                cow_cdecl(g, COW_IMG(0x10171440u), 5, edi + 0x148u, arg2, t59, t58, t57);
                d60 = cow_take_float(g);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10171130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10171130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
