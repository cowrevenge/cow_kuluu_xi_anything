/* f_0x100da6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100da6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x100d9950u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100da745;
    }
    ecx = t2;
    edx = t3;
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, 0u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, 0xffffffffu);
    wr32(self + 0x94u, 0xc8u);
    wr32(self + 0x14u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x101038d0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x98u, t4);
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_stdcall(g, COW_IMG(0x101038c0u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(self + 0x9cu, t7);
    t10 = cow_stdcall(g, COW_IMG(0x101038e0u), 0);
    wr32(self + 0xa4u, (uint32_t)(int16_t)t10);
    t11 = rd32(self + 0x98u);
    wr32(self + 0xa0u, 0u);
    wr32(self + 0xb4u, 0u);
    if (t11 != 3u)
    {
        eax = t11;
        wr32(self + 0x88u, 3u);
    }
    else
    {
        eax = t11;
        wr32(self + 0x88u, 0u);
    }
    wr8(self + 0x18u, 0u);
    wr32(self + 0xb8u, 0u);
    wr32(self + 0xa8u, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100da745: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100da6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
