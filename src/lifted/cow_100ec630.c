/* f_0x100ec630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec630(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0xeu) * 0xdecu + rd8(arg3 + 0xfu) * 0x2cu + 0x9868u;
    edi = t1;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t2 = rd16(arg3 + 0xcu);
    wr16(t1, (uint16_t)t2);
    t3 = rd32(arg3 + 4u);
    wr32(t1 + 4u, t3);
    wr8(t1 + 8u, rd8(arg3 + 0x10u));
    wr8(t1 + 2u, rd8(arg3 + 0xfu));
    t4 = rd32(arg3 + 8u);
    wr32(t1 + 0xcu, t4);
    edi = t1 + 0x10u;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg3 + 0x11u;
    edi = t1 + 0x10u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = arg3;
    g->edx = t1 + 0x10u;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x800u);
    t6 = g->edx;
    t7 = rd8(arg3 + 0xeu);
    g->ebx = arg3;
    g->edx = t6;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x100ec5d0u), 1, t7);
    t9 = g->edx;
    g->ebx = in_ebx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
