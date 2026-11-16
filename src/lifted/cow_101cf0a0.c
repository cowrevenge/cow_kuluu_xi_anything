/* f_0x101cf0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101cf0a0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101cebe0u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101cf0d3;
    }
    ecx = t2;
    edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x101ceac0u), ecx, 0);
    return (t4 & 0xffffff00u) | rd8(self + t4 * 5u + 0x1042u) == 4u;
L_101cf0d3: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101cead0u), ecx, 0);
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        loc_c = 2u;
    }
    else
    {
        edx = t6;
        loc_c = 1u;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x101ceb40u), arg1, 0);
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101ceaf0u), arg1, 0);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x101ceae0u), arg1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x101ceac0u), t12, 0);
    t15 = g->edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x101cefd0u), self, 5, t14, t11, t9, t7, loc_c);
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cf0a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
