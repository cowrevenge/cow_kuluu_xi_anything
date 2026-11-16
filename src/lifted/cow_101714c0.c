/* f_0x101714c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101714c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d15;
    double d16;
    double d17;
    double d18;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t14;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 208u);

    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    t1 = rd32(arg1 * 0xcu + self + 0x68u);
    wr32(sp0 - 0x80u, t1);
    t2 = rd32(arg1 * 0xcu + self + 0x6cu);
    wr32(sp0 - 0x6cu, t2);
    t3 = rd32(arg1 * 0xcu + self + 0x70u);
    wr32(sp0 - 0x58u, t3);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    wr32(sp0 - 0x98u, sp0 - 0x40u);
    wr32(sp0 - 0x9cu, sp0 - 0x40u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0x80u);
    t4 = rd32(arg1 * 0xcu + self + 0x38u);
    wr32(sp0 - 0x84u, t4);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    wr32(sp0 - 0x80u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    d5 = (double)(float)fr(g, cos(cow_bits2f(t4)));
    wrf32(sp0 - 0x6cu, (float)d5);
    d6 = (double)(float)fr(g, sin(cow_bits2f(t4)));
    wrf32(sp0 - 0x68u, (float)d6);
    d7 = (double)(float)-fr(g, sin(cow_bits2f(t4)));
    wrf32(sp0 - 0x5cu, (float)d7);
    d8 = (double)(float)fr(g, cos(cow_bits2f(t4)));
    wrf32(sp0 - 0x58u, (float)d8);
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0x80u);
    d9 = (double)(float)(double)rdf32(arg1 * 0xcu + self + 0x3cu);
    wrf32(sp0 - 0x84u, (float)d9);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    wr32(sp0 - 0xb0u, sp0 - 0x40u);
    wr32(sp0 - 0xb4u, sp0 - 0x40u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    d10 = (double)(float)fr(g, cos((double)rdf32(arg1 * 0xcu + self + 0x3cu)));
    wrf32(sp0 - 0x80u, (float)d10);
    d11 = (double)(float)-fr(g, sin(d9));
    wrf32(sp0 - 0x78u, (float)d11);
    d12 = (double)(float)fr(g, sin(d9));
    wrf32(sp0 - 0x60u, (float)d12);
    d13 = (double)(float)fr(g, cos((double)rdf32(arg1 * 0xcu + self + 0x3cu)));
    wrf32(sp0 - 0x58u, (float)d13);
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0x80u);
    t14 = rd32(arg1 * 0xcu + self + 0x40u);
    wr32(sp0 - 0x84u, t14);
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    wr32(sp0 - 0xbcu, sp0 - 0x40u);
    wr32(sp0 - 0xc0u, sp0 - 0x40u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    d15 = (double)(float)fr(g, cos(cow_bits2f(t14)));
    wrf32(sp0 - 0x80u, (float)d15);
    d16 = (double)(float)fr(g, sin(cow_bits2f(t14)));
    wrf32(sp0 - 0x7cu, (float)d16);
    d17 = (double)(float)-fr(g, sin(cow_bits2f(t14)));
    wrf32(sp0 - 0x70u, (float)d17);
    d18 = (double)(float)fr(g, cos(cow_bits2f(t14)));
    wrf32(sp0 - 0x6cu, (float)d18);
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0x80u);
    t19 = rd32(arg1 * 0xcu + self + 8u);
    wr32(sp0 - 0x50u, t19);
    t20 = rd32(arg1 * 0xcu + self + 0xcu);
    wr32(sp0 - 0x4cu, t20);
    wr32(sp0 - 0x80u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    t21 = rd32(arg1 * 0xcu + self + 0x10u);
    wr32(sp0 - 0x48u, t21);
    wr32(sp0 - 0xc4u, sp0 - 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    t22 = arg1 * 0x40u + self + 0x98u;
    wr32(sp0 - 0xccu, t22);
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, t22, sp0 - 0x40u, sp0 - 0x80u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101714c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101714c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
