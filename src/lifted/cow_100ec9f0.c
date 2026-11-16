/* f_0x100ec9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100ec9f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(arg1 + 0x1951au, rd8(arg3 + 0xcu));
    wr16(arg1 + rd8(arg3 + 0xdu) * 0x2cu + 0x19308u, rd16(arg3 + 0xau));
    t1 = rd32(arg3 + 4u);
    wr32(arg1 + rd8(arg3 + 0xdu) * 0x2cu + 0x1930cu, t1);
    t2 = (t1 & 0xffffff00u) | rd8(arg3 + 0xdu);
    wr8(arg1 + (uint8_t)t2 * 0x2cu + 0x1930au, (uint8_t)t2);
    t3 = rd8(arg3 + 0xdu);
    edi = arg1 + t3 * 0x2cu + 0x19318u;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd8(arg3 + 0xdu);
    esi = arg3 + 0xeu;
    edi = arg1 + ((eax & 0xffffff00u) | rd8(arg3 + 0xdu)) * 0x2cu + 0x19318u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(arg1 + 0x19518u, rd16(arg3 + 8u));
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(t5 + 0x19510u, 3u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1951bu, 1u);
    g->edx = t5;
    return (((eax & 0xffffff00u) | t4) * 0xbu & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec9f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
