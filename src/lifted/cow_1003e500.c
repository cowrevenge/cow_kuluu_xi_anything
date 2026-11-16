/* f_0x1003e500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003e500(Guest* g)
{
    double d14;
    double d18;
    double d4;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u) + 2u);
    t2 = rd32(COW_IMG(0x1047bfa8u));
    t3 = rd32(sp0 + 4u);
    d4 = (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u);
    wr32(sp0 + 4u, t1);
    g->ecx = t1;
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d4);
    fpush(g, d5);
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = (uint32_t)(int16_t)rd16(t3 + 4u);
    wr32(sp0 + 4u, t8);
    g->ecx = t7;
    g->edx = t8;
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d4);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = (uint32_t)(int16_t)rd16(t3 + 6u);
    wr32(sp0 + 4u, t13);
    g->edx = t12;
    d14 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d4);
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    t17 = rd16(t3);
    wr32(sp0 + 4u, (uint32_t)(int16_t)t17);
    d18 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d4);
    fpush(g, d18);
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    if ((int32_t)((uint32_t)(int16_t)t19 + rd8(self + 2u) * 0x100u) <= 65535)
    {
        eax = (uint32_t)(int16_t)t19 + rd8(self + 2u) * 0x100u;
        ebx = t6;
        ebp = t10;
        loc_4 = t15;
        edx = ((int32_t)eax < 0) - 1u & eax;
    }
    else
    {
        ebx = t6;
        ebp = t10;
        loc_4 = t15;
        edx = 0xffffu;
    }
    if ((int32_t)((uint32_t)(int16_t)ebx + rd8(self + 1u) * 0x100u) <= 65535)
    {
        eax = (uint32_t)(int16_t)ebx + rd8(self + 1u) * 0x100u;
        t20 = ((int32_t)eax < 0) - 1u & eax;
        edi = t20;
    }
    else
    {
        edi = 0xffffu;
    }
    if ((int32_t)(rd8(self) * 0x100u + (uint32_t)(int16_t)ebp) <= 65535)
    {
        eax = rd8(self) * 0x100u + (uint32_t)(int16_t)ebp;
        ecx = ((int32_t)eax < 0) - 1u & eax;
    }
    else
    {
        ecx = 0xffffu;
    }
    if ((int32_t)((uint32_t)(int16_t)loc_4 + rd8(self + 3u) * 0x100u) <= 65535)
    {
        eax = (uint32_t)(int16_t)loc_4 + rd8(self + 3u) * 0x100u;
        eax = eax & ((int32_t)eax < 0) - 1u;
    }
    else
    {
        eax = 0xffffu;
    }
    wr8(self + 2u, (uint8_t)(uint32_t)((int32_t)edx >> 8u));
    wr8(self + 1u, (uint8_t)(uint32_t)((int32_t)edi >> 8u));
    wr8(self, (uint8_t)(uint32_t)((int32_t)ecx >> 8u));
    wr8(self + 3u, (uint8_t)(uint32_t)((int32_t)eax >> 8u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003e500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
