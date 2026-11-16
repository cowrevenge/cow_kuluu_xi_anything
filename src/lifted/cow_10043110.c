/* f_0x10043110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043110(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(COW_IMG(0x1047cf7cu));
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t2 + 0xa90u, t1);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t5 = g->edx;
    esi = self + 0xa0u;
    edi = t3;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = t5;
    t6 = cow_call_regs(g, COW_IMG(0x10063c80u), t4, self + 0x198u, g->edx, 0, 2, COW_IMG(0x100430d0u), self);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t8 = g->edx;
    esi = t3;
    edi = self + 0xa0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t10 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t10 + 0xa90u, t9);
    wr32(t10 + t9 * 4u + 0xa10u, t3);
    g->edx = t8;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
