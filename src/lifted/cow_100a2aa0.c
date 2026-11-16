/* f_0x100a2aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a2aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x4bu, 1u, 0u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t1;
        t3 = rd8(arg1);
        wr8(edx + 5u, 0u);
        wr8(edx + 4u, (uint8_t)t3);
        wr8(edx + 6u, rd8(arg1 + 1u));
        wr8(edx + 7u, rd8(arg1 + 2u));
        t4 = rd32(arg1 + 0x10u);
        wr32(edx + 8u, t4);
        t5 = rd32(arg1 + 0x14u);
        wr32(edx + 0xcu, t5);
        t6 = rd32(arg1 + 0x18u);
        wr32(edx + 0x10u, t6);
        t7 = rd32(arg1 + 0x1cu);
        wr32(edx + 0x14u, t7);
        edi = edx + 0x18u;
        eax = 0u;
        ecx = 0x3bu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edx, 0x18u, 0u);
        t9 = g->ecx;
        t10 = g->edx;
        t11 = rd8(arg1 + 3u);
        wr8(arg1 + 3u, (uint8_t)(t11 - 1u));
        g->eax = (t8 & 0xffffff00u) | (uint8_t)(t11 - 1u);
        t12 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
        wr32(arg1 + 8u, t12);
        wr32(arg1 + 0xcu, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a2aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
