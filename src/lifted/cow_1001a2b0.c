/* f_0x1001a2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1001a2b0(Guest* g)
{
    double d12;
    double d16;
    double d20;
    double d3;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1100u);

    wr32(sp0 - 0x404u, in_esi);
    wr32(sp0 - 0x408u, in_edi);
    t1 = rd8(self + 0x30u);
    wr32(sp0 - 0x40cu, t1);
    wr32(sp0 - 0x410u, COW_IMG(0x1035108cu));
    wr32(sp0 - 0x414u, 0x400u);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x400u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x1035108cu), t1, in_edi, in_esi);
    t2 = g->ecx;
    wr32(sp0 - 0x41cu, 0u);
    d3 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 + 8u, (float)d3);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x420u, t4);
    wr32(sp0 - 0x424u, arg1);
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    g->esp = sp0 - 0x418u;
    cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x400u, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, t4, 0u);
    t5 = (uint32_t)(int16_t)rd16(self + 0x32u);
    wr32(sp0 - 0x42cu, t5);
    wr32(sp0 - 0x430u, COW_IMG(0x1035107cu));
    wr32(sp0 - 0x434u, 0x400u);
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x420u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x1035107cu), t5, sp0 - 0x400u, arg1);
    t6 = g->edx;
    wr32(sp0 - 0x43cu, 0u);
    d7 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 + 8u, (float)d7);
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x440u, t8);
    wr32(sp0 - 0x444u, arg1);
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x438u;
    cow_call_regs(g, COW_IMG(0x100384b0u), t8, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, t8, 0u);
    t9 = g->ecx;
    t10 = (uint32_t)(int16_t)rd16(self + 0x34u);
    wr32(sp0 - 0x40cu, t10);
    wr32(sp0 - 0x410u, COW_IMG(0x10351070u));
    wr32(sp0 - 0x414u, 0x400u);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->esp = sp0 - 0x400u;
    t11 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x10351070u), t10, in_edi, in_esi);
    wr32(sp0 - 0x41cu, 0u);
    d12 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 + 8u, (float)d12);
    t13 = rd32(sp0 + 8u);
    wr32(sp0 - 0x420u, t13);
    wr32(sp0 - 0x424u, arg1);
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    g->ecx = t13;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x418u;
    cow_call_regs(g, COW_IMG(0x100384b0u), t11, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, t13, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = (double)rdf32(self + 0x36u);
    wrf64(sp0 - 0x410u, d16);
    wr32(sp0 - 0x414u, COW_IMG(0x10351064u));
    wr32(sp0 - 0x418u, 0x400u);
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x404u;
    t17 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x10351064u), cow_dlo(d16), cow_dhi(d16), in_edi);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, t18);
    d20 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 - 0x410u, (float)d20);
    wr32(sp0 - 0x414u, arg1);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->edx = t19;
    g->esp = sp0 - 0x408u;
    t21 = cow_call_regs(g, COW_IMG(0x100384b0u), t17, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, cow_f2bits(d20), 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001a2b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
