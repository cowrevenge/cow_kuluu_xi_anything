/* f_0x101243b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101243b0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (self & 0xffffff00u) | rd8(rd32(arg2));
    if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)t1) & 4u) != 0u)
    {
        ecx = t1;
        goto L_1012441c;
    }
    eax = rd32(arg2);
    ecx = t1;
    edx = (uint8_t)t1;
    if ((uint8_t)ecx < 0x20u) goto L_101243e5;
    if ((uint8_t)ecx > 0x7eu) goto L_101243e5;
    wr8(arg1, (uint8_t)ecx);
    t2 = rd32(arg2) + 1u;
    wr32(arg2, t2);
    return (t2 & 0xffff0000u) | 1u;
L_101243e5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10124390u), eax, g->ecx, g->edx, 1, 1, ecx);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u) goto L_1012440b;
    eax = t3;
    ecx = t4;
    edx = t5;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10124360u), eax, g->ecx, edx, 1, 2, arg1, ecx);
    t6 = rd32(arg2) + 1u;
    wr32(arg2, t6);
    return (t6 & 0xffff0000u) | 2u;
L_1012440b: ;
    wr8(arg1, 0u);
    t7 = rd32(arg2) + 1u;
    wr32(arg2, t7);
    return t7 & 0xffff0000u;
L_1012441c: ;
    wr8(arg1, (uint8_t)ecx);
    t8 = rd32(arg2) + 1u;
    wr32(arg2, t8);
    wr8(arg1 + 1u, rd8(t8));
    t9 = rd32(arg2) + 1u;
    wr32(arg2, t9);
    return (t9 & 0xffff0000u) | 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101243b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101243b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
