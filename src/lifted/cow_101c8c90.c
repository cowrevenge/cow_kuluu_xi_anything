/* f_0x101c8c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101c8c90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101c8d10u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_101c8cf9;
    eax = t1;
    ecx = t2;
    edx = t3;
    t4 = rd16(eax + 0x14u);
    t5 = rd16(eax + 0x10u);
    t6 = rd8(eax + 0xcu);
    wr16(arg2, (uint16_t)((t4 + 0x30u) << 9u | (t5 * 0x20u + 0x20u & 0x1e0u) | (t6 & 0x1fu)));
    wr16(arg3, (uint16_t)(((rd8(eax + 4u) & 0x3fu) | rd16(eax + 8u) << 6u) << 5u | ((uint32_t)((int32_t)(rd32(eax) - (uint32_t)((int32_t)rd32(eax) >> 0x1fu)) >> 1u) & 0x1fu)));
    return;
L_101c8cf9: ;
    wr16(arg2, 0x21u);
    wr16(arg3, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c8c90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
