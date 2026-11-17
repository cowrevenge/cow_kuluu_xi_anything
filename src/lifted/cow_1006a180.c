/* f_0x1006a180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006a180(Guest* g)
{
    double d1;
    double d18;
    double d2;
    double d22;
    double d3;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(self + 0xdc8u), 2, 2u, self + 0xb50u);
    esi = self + 0xb50u;
    edi = self + 0xb90u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0xbc0u, 0u);
    wr32(self + 0xbc4u, 0u);
    wr32(self + 0xbc8u, 0u);
    wr32(self + 0xbccu, 0x3f800000u);
    d1 = (double)rdf32(self + 0xb58u);
    wrf32(self + 0xdb4u, (float)-d1);
    d2 = (double)rdf32(self + 0xb68u);
    wrf32(self + 0xdb8u, (float)-d2);
    d3 = (double)rdf32(self + 0xb78u);
    esi = self + 0xb50u;
    edi = self + 0xd50u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0xd50u, 0x3f800000u);
    wrf32(self + 0xdbcu, (float)-d3);
    esi = self + 0xb50u;
    edi = self + 0xd10u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0xd54u, 0u);
    wr32(self + 0xd58u, 0u);
    wr32(self + 0xd70u, 0u);
    wr32(self + 0xd74u, 0u);
    wr32(self + 0xd78u, 0x3f800000u);
    wr32(self + 0xd20u, 0u);
    wr32(self + 0xd24u, 0x3f800000u);
    wr32(self + 0xd28u, 0u);
    wr32(self + 0xd14u, 0u);
    wr32(self + 0xd34u, 0u);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t4 = rd32(COW_IMG(0x1047cf7cu));
    t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    cow_thiscall(g, rd32(t5 + 0x24u), t4, 3, self + 0xc10u, self + 0xd10u, self + 0xd50u);
    t6 = g->ecx;
    t7 = g->edx;
    g->eax = self + 0xc50u;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x1006ad50u), g->eax, g->ecx, t7, 1, 3, self + 0xc50u, self + 0xc10u, in_edi);
    t9 = g->edx;
    g->ecx = self + 0xbd0u;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1006ad50u), g->eax, g->ecx, t9, 1, 3, self + 0xbd0u, self + 0xb50u, self + 0xc50u);
    t10 = g->ecx;
    g->ecx = t10;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1006ad50u), g->eax, g->ecx, self + 0xc90u, 1, 3, self + 0xc90u, self + 0xd10u, self + 0xbd0u);
    t11 = g->ecx;
    t12 = g->edx;
    g->eax = self + 0xcd0u;
    g->esp = sp0 - 0x24u;
    t13 = cow_call_regs(g, COW_IMG(0x1006ad50u), g->eax, g->ecx, t12, 1, 3, self + 0xcd0u, self + 0xd50u, self + 0xc90u);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(self + 0xdc8u), 0);
    t16 = g->edx;
    t17 = rd32(self + 0xdc8u);
    d18 = fr(g, (double)(int32_t)rd32(t15 + 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xdc0u, (float)d18);
    g->edx = t16;
    t19 = cow_thiscall(g, COW_IMG(0x10009e00u), t17, 0);
    t20 = g->edx;
    t21 = rd32(self + 0xdc8u);
    d22 = fr(g, (double)(int32_t)rd32(t19 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xdc4u, (float)d22);
    cow_thiscall(g, COW_IMG(0x1000bdb0u), t21, 2, 3u, self + 0xb10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006a180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
