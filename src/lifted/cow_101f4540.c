/* f_0x101f4540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f4540(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    wr32(self + 0x14u, 0x42u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x3eu);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x100eb960u), 1, 2u);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x101d30f0u), t3, rd32(COW_IMG(0x106631d4u)), g->edx, 1, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101d3ef0u), rd32(COW_IMG(0x106631d4u)), 1, t5);
    t8 = g->edx;
    if (t7 == 0u)
    {
        ebx = 1u;
        esi = (uint16_t)t3;
    }
    else
    {
        eax = t7;
        edx = t8;
        esi = (uint16_t)t3;
        g->esp = sp0 - 0xcu;
        t9 = cow_thiscall(g, COW_IMG(0x101ce130u), eax, 0);
        ebx = t9;
    }
    if ((int32_t)(esi - rd8(rd32(COW_IMG(0x10666e34u)) + rd32(rd32(COW_IMG(0x10666e34u)) + 0xcu) + 0x18u)) >= (int32_t)ebx)
    {
        eax = rd32(COW_IMG(0x10666e34u));
        edx = rd8(rd32(COW_IMG(0x10666e34u)) + rd32(rd32(COW_IMG(0x10666e34u)) + 0xcu) + 0x18u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10666e34u));
        edx = rd8(rd32(COW_IMG(0x10666e34u)) + rd32(rd32(COW_IMG(0x10666e34u)) + 0xcu) + 0x18u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t10 = g->edx;
        eax = rd32(COW_IMG(0x10666e34u));
        edx = t10;
    }
    if (rd8(eax + rd32(eax + 0xcu) + 0x18u) > 1u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f4540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f4540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
