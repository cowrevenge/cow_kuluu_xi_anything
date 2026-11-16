/* f_0x1017a710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a710(Guest* g)
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
    double d34;
    double d38;
    double d4;
    double d42;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edi;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x18u) != 0u)
    {
        edi = rd32(arg1 + 0x18u);
        d1 = (double)rdf32(edi + 0x50u);
        d2 = (double)rdf32(edi + 0x5cu);
        d3 = (double)rdf32(edi + 0x48u);
        d4 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg1 + 0x50u)) + fr(g, d2 * (double)rdf32(arg1 + 0x60u))) + fr(g, d3 * (double)rdf32(arg1 + 0x40u))) + (double)rdf32(arg1 + 0x70u));
        wrf32(arg1 + 0xf4u, (float)d4);
        d5 = fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg1 + 0x44u)) + fr(g, d1 * (double)rdf32(arg1 + 0x54u))) + fr(g, d2 * (double)rdf32(arg1 + 0x64u))) + (double)rdf32(arg1 + 0x74u));
        wrf32(arg1 + 0xf8u, (float)d5);
        d6 = fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg1 + 0x48u)) + fr(g, d1 * (double)rdf32(arg1 + 0x58u))) + fr(g, d2 * (double)rdf32(arg1 + 0x68u))) + (double)rdf32(arg1 + 0x78u));
        wrf32(arg1 + 0xfcu, (float)d6);
        d7 = (double)rdf32(edi + 0x50u);
        d8 = (double)rdf32(edi + 0x5cu);
        d9 = (double)rdf32(edi + 0x4cu);
        d10 = fr(g, fr(g, fr(g, fr(g, d7 * (double)rdf32(arg1 + 0x50u)) + fr(g, d8 * (double)rdf32(arg1 + 0x60u))) + fr(g, d9 * (double)rdf32(arg1 + 0x40u))) + (double)rdf32(arg1 + 0x70u));
        wrf32(arg1 + 0x100u, (float)d10);
        d11 = fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(arg1 + 0x44u)) + fr(g, d7 * (double)rdf32(arg1 + 0x54u))) + fr(g, d8 * (double)rdf32(arg1 + 0x64u))) + (double)rdf32(arg1 + 0x74u));
        wrf32(arg1 + 0x104u, (float)d11);
        d12 = fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(arg1 + 0x48u)) + fr(g, d7 * (double)rdf32(arg1 + 0x58u))) + fr(g, d8 * (double)rdf32(arg1 + 0x68u))) + (double)rdf32(arg1 + 0x78u));
        wrf32(arg1 + 0x108u, (float)d12);
        d13 = (double)rdf32(edi + 0x50u);
        d14 = (double)rdf32(edi + 0x58u);
        d15 = (double)rdf32(edi + 0x4cu);
        d16 = fr(g, fr(g, fr(g, fr(g, d13 * (double)rdf32(arg1 + 0x50u)) + fr(g, d14 * (double)rdf32(arg1 + 0x60u))) + fr(g, d15 * (double)rdf32(arg1 + 0x40u))) + (double)rdf32(arg1 + 0x70u));
        wrf32(arg1 + 0x10cu, (float)d16);
        d17 = fr(g, fr(g, fr(g, fr(g, d15 * (double)rdf32(arg1 + 0x44u)) + fr(g, d13 * (double)rdf32(arg1 + 0x54u))) + fr(g, d14 * (double)rdf32(arg1 + 0x64u))) + (double)rdf32(arg1 + 0x74u));
        wrf32(arg1 + 0x110u, (float)d17);
        d18 = fr(g, fr(g, fr(g, fr(g, d15 * (double)rdf32(arg1 + 0x48u)) + fr(g, d13 * (double)rdf32(arg1 + 0x58u))) + fr(g, d14 * (double)rdf32(arg1 + 0x68u))) + (double)rdf32(arg1 + 0x78u));
        wrf32(arg1 + 0x114u, (float)d18);
        d19 = (double)rdf32(edi + 0x50u);
        d20 = (double)rdf32(edi + 0x58u);
        d21 = (double)rdf32(edi + 0x48u);
        d22 = fr(g, fr(g, fr(g, fr(g, d19 * (double)rdf32(arg1 + 0x50u)) + fr(g, d20 * (double)rdf32(arg1 + 0x60u))) + fr(g, d21 * (double)rdf32(arg1 + 0x40u))) + (double)rdf32(arg1 + 0x70u));
        wrf32(arg1 + 0x118u, (float)d22);
        d23 = fr(g, fr(g, fr(g, fr(g, d21 * (double)rdf32(arg1 + 0x44u)) + fr(g, d19 * (double)rdf32(arg1 + 0x54u))) + fr(g, d20 * (double)rdf32(arg1 + 0x64u))) + (double)rdf32(arg1 + 0x74u));
        wrf32(arg1 + 0x11cu, (float)d23);
        d24 = fr(g, fr(g, fr(g, fr(g, d21 * (double)rdf32(arg1 + 0x48u)) + fr(g, d19 * (double)rdf32(arg1 + 0x58u))) + fr(g, d20 * (double)rdf32(arg1 + 0x68u))) + (double)rdf32(arg1 + 0x78u));
        wrf32(arg1 + 0x120u, (float)d24);
        d25 = (double)rdf32(edi + 0x54u);
        d26 = (double)rdf32(edi + 0x5cu);
        d27 = (double)rdf32(edi + 0x48u);
        d28 = fr(g, fr(g, fr(g, fr(g, d25 * (double)rdf32(arg1 + 0x50u)) + fr(g, d26 * (double)rdf32(arg1 + 0x60u))) + fr(g, d27 * (double)rdf32(arg1 + 0x40u))) + (double)rdf32(arg1 + 0x70u));
        wrf32(arg1 + 0x124u, (float)d28);
        d29 = fr(g, fr(g, fr(g, fr(g, d27 * (double)rdf32(arg1 + 0x44u)) + fr(g, d25 * (double)rdf32(arg1 + 0x54u))) + fr(g, d26 * (double)rdf32(arg1 + 0x64u))) + (double)rdf32(arg1 + 0x74u));
        wrf32(arg1 + 0x128u, (float)d29);
        d30 = fr(g, fr(g, fr(g, fr(g, d27 * (double)rdf32(arg1 + 0x48u)) + fr(g, d25 * (double)rdf32(arg1 + 0x58u))) + fr(g, d26 * (double)rdf32(arg1 + 0x68u))) + (double)rdf32(arg1 + 0x78u));
        wrf32(arg1 + 0x12cu, (float)d30);
        t31 = rd32(edi + 0x5cu);
        t32 = rd32(edi + 0x54u);
        t33 = rd32(edi + 0x4cu);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10171440u), 5, arg1 + 0x130u, arg1 + 0x40u, t33, t32, t31);
        d34 = cow_take_float(g);
        t35 = rd32(edi + 0x58u);
        t36 = rd32(edi + 0x54u);
        t37 = rd32(edi + 0x4cu);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10171440u), 5, arg1 + 0x13cu, arg1 + 0x40u, t37, t36, t35);
        d38 = cow_take_float(g);
        t39 = rd32(edi + 0x58u);
        t40 = rd32(edi + 0x54u);
        t41 = rd32(edi + 0x48u);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10171440u), 5, arg1 + 0x148u, arg1 + 0x40u, t41, t40, t39);
        d42 = cow_take_float(g);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017a710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
