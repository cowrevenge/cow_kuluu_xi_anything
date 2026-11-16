/* f_0x101c93c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c93c0(Guest* g)
{
    int64_t q5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 3600) goto L_101c9416;
    t1 = cow_divs(g, arg1, 0xe10u);
    t2 = cow_mods(g, arg1, 0xe10u);
    t3 = cow_divs(g, arg1, 0x3cu);
    t4 = cow_mods(g, arg1, 0x3cu);
    q5 = (int64_t)cow_muls(0x88888889u, t2);
    t6 = (uint32_t)((int32_t)(t2 + cow_qhi(q5)) >> 5u);
    t7 = t6 + (t6 >> 0x1fu);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662f20u), COW_IMG(0x1037d4e0u), t1, t7, t4);
    return COW_IMG(0x10662f20u);
L_101c9416: ;
    t8 = cow_divs(g, arg1, 0x3cu);
    t9 = cow_mods(g, arg1, 0x3cu);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662f20u), COW_IMG(0x1036f6d0u), t8, t9, in_esi);
    return COW_IMG(0x10662f20u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c93c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c93c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
