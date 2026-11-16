/* f_0x101ee440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ee440(Guest* g)
{
    double d11;
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    g->ecx = t1;
    g->edx = rd32(COW_IMG(0x106218b4u));
    t2 = rd32(COW_IMG(0x106218b8u));
    t3 = rd32(COW_IMG(0x106218b4u));
    d4 = fr(g, fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
    fpush(g, d4);
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2 - t3, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 0x1cu, (uint16_t)t5);
    t8 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    g->edx = (t7 & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    t9 = rd16(COW_IMG(0x106218bau));
    t10 = rd16(COW_IMG(0x106218b6u));
    d11 = fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    wr8(self + 0x14u, rd8(self + 0x14u) & 0x3fu);
    wr16(self + 0x1eu, (uint16_t)t12);
    t14 = rd16(self + 0x14u);
    wr32(self + 0xb0u, 0xffffffffu);
    if ((t14 & 0x800u) != 0u)
    {
        eax = t14 & 0x800u;
        loc_4 = t8;
    }
    else
    {
        eax = t14 & 0x800u;
        edx = t13;
        loc_4 = t8;
        wr16(self + 0xa6u, 0x80u);
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x101efad0u), eax, self, g->edx, 0, 2, 0u, 8u);
        eax = t15;
    }
    wr8(rd32(self + 8u) + 0x69u, 0u);
    t16 = rd32(self + 8u);
    wr8(t16 + 0x62u, 0u);
    g->edx = t16;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1011ac70u), rd32(self + 8u), 2, 0xffffff9cu, 0xffffff9cu);
    t17 = g->edx;
    t18 = rd32(self + 8u);
    wr8(t18 + 0x85u, 0u);
    t19 = rd32(self + 8u);
    wr8(t19 + 0x84u, 1u);
    cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x26u);
    t20 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    t21 = rd16(self + 0x1eu);
    wr32(rd32(COW_IMG(0x104e1d4cu)) + 0x38u, t20);
    wr32(rd32(COW_IMG(0x104e1d4cu)) + 0x3cu, (uint32_t)(int16_t)t21);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ee440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
