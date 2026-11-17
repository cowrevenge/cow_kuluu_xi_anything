/* f_0x1001d0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1001d0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1000a6e0u), rd32(COW_IMG(0x1045666cu)), 5, t4, t1, COW_IMG(0x10456d58u), 1u, 0u);
    t7 = g->edx;
    wr32(COW_IMG(0x10456d50u), t6);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        goto L_1001d0f7;
    }
    eax = rd32(COW_IMG(0x104566e8u));
    ecx = rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u);
    edx = t7;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t12 = g->edx;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x1000a6e0u), rd32(COW_IMG(0x1045666cu)), 5, t11, t8, COW_IMG(0x10456d5cu), 1u, 0u);
    wr32(COW_IMG(0x10456d54u), t13);
    return t13;
L_1001d0f7: ;
    wr32(COW_IMG(0x10456d54u), 0u);
    wr32(COW_IMG(0x10456d5cu), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001d0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
