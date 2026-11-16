/* f_0x102a6200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102a6200(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be18cu), in_esi);
    t1 = (uint32_t)(int8_t)rd8(arg1 + 3u);
    t2 = (uint32_t)(int8_t)rd8(arg1 + 2u);
    t3 = (uint32_t)(int8_t)rd8(arg1 + 1u);
    g->eax = (uint32_t)(int8_t)rd8(arg1);
    g->edx = t3;
    t4 = rd8(arg1);
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be174u), (uint32_t)(int8_t)t4);
    t6 = g->edx;
    t7 = rd32(arg1 + 4u);
    g->ecx = t7;
    g->esp = sp0 - 0x1cu;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be15cu), t7);
    t9 = g->ecx;
    t10 = rd32(arg1 + 8u);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be144u), t10);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(arg1 + 0xcu);
    g->eax = t13;
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be12cu), t13);
    t15 = g->edx;
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a6200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a6200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
