/* f_0x1011a7b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011a7b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(self + 0x9cu, arg1);
    wr32(self + 0xa0u, arg2);
    t1 = rd16(self + 0xa0u);
    t2 = rd16(self + 0x9eu);
    wr32(self + 0xa4u, (uint32_t)(int16_t)arg1);
    t3 = (uint32_t)(int16_t)t1 - (uint32_t)(int16_t)arg1;
    t4 = rd16(self + 0xa2u);
    wr32(self + 0xacu, t3);
    wr32(self + 0xa8u, (uint32_t)(int16_t)t2);
    t5 = (uint32_t)(int16_t)t4 - (uint32_t)(int16_t)t2;
    t6 = rd32(self + 4u);
    wr32(self + 0xb0u, t5);
    wr32(self + 0xb4u, 0u);
    wr32(self + 0xb8u, 0u);
    if (t6 != 0u)
    {
        eax = (arg1 & 0xffff0000u) | t1;
        ecx = ((uint32_t)(int16_t)arg1 & 0xffff0000u) | t4;
        ebx = t6;
        edi = (in_edi & 0xffff0000u) | t2;
        goto L_1011a828;
    }
    eax = (arg1 & 0xffff0000u) | t1;
    g->edx = (in_edx & 0xffff0000u) | (uint16_t)arg1;
    return eax & 0xffffff00u;
L_1011a828: ;
    t7 = eax - ((in_edx & 0xffff0000u) | (uint16_t)arg1);
    t8 = (in_edx & 0xffff0000u) | (uint16_t)arg1;
    t9 = (uint32_t)(int16_t)rd16(ebx + 0x16u) - (uint32_t)(int16_t)rd16(ebx + 0x12u);
    wr32(self + 0xb4u, t9);
    g->eax = t7;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1011a5a0u), self, 7, t8, edi, t7, ecx - edi, 1u, 1u, 0u);
    t11 = g->edx;
    t12 = (t10 & 0xffff0000u) | rd16(self + 0xb4u);
    cow_fastcall(g, COW_IMG(0x10118530u), self, t11, 2, t12, t12);
    t13 = rd32(self + 0xb4u);
    wr32(rd32(self + 0x88u) + 0x10u, t13);
    t14 = rd32(self + 0xb0u);
    wr32(rd32(self + 0x88u) + 0xcu, t14);
    t15 = rd32(self + 0xb8u);
    wr32(rd32(self + 0x88u) + 0x14u, t15);
    t16 = (uint32_t)(int16_t)rd16(self + 0x9eu);
    t17 = rd32(self + 0x88u);
    t18 = rd16(self + 0xa0u);
    wr32(t17 + 4u, t16);
    t19 = (uint32_t)(int16_t)t18 - 6u;
    wr32(t17, t19);
    t20 = rd32(self + 0xb0u);
    t21 = rd32(self + 0x88u);
    wr32(t21 + 8u, t20);
    wr8(self + 0x9bu, 1u);
    g->edx = t19;
    return (t21 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011a7b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
