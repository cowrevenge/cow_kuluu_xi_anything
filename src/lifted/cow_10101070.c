/* f_0x10101070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10101070(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr8(arg2, 2u);
    wr8(arg2 + 1u, 0x83u);
    ecx = self;
    edx = in_edx;
    ebx = 3u;
    ebp = arg1;
    edi = arg2 + 2u;
L_1010108d: ;
    t1 = rd16(ebp);
    t2 = rd16(edi);
    wr16(edi, (uint16_t)(((t1 ^ t2) & 0x7ffu) ^ t2));
    t3 = rd8(ebp + 4u);
    wr16(edi, (t3 & 0xfu) << 0xbu ^ ((t1 ^ t2 ^ t2) & 0x7ffu));
    if (ebx != 1u)
    {
        ecx = (t1 ^ t2 ^ t2) & 0x7ffu;
        edx = (t3 & 0xfu) << 0xbu ^ ((t1 ^ t2 ^ t2) & 0x7ffu);
        ebx = ebx - 1u;
        ebp = ebp + 0x14u;
        edi = edi + 2u;
        goto L_1010108d;
    }
    ecx = (t1 ^ t2 ^ t2) & 0x7ffu;
    edx = (t3 & 0xfu) << 0xbu ^ ((t1 ^ t2 ^ t2) & 0x7ffu);
    t4 = rd8(arg1 + 8u);
    t5 = rd16(arg2 + 8u);
    wr16(arg2 + 8u, (uint16_t)(((t4 ^ t5) & 0xfu) ^ t5));
    t6 = rd8(arg1 + 0x1cu);
    wr16(arg2 + 8u, (uint16_t)(((t6 << 4u ^ t5) & 0xf0u) ^ ((t4 ^ t5) & 0xfu) ^ t5));
    t7 = rd8(arg1 + 0x30u);
    wr16(arg2 + 8u, (uint16_t)(((t7 << 8u ^ t5) & 0xf00u) ^ ((t6 << 4u ^ t5) & 0xf0u) ^ ((t4 ^ t5) & 0xfu) ^ t5));
    t8 = rd16(arg1 + 0x10u);
    t9 = rd16(arg2 + 0xau);
    wr16(arg2 + 8u, (uint16_t)(((((t7 << 8u ^ t5) & 0xf00u) ^ ((t6 << 4u ^ t5) & 0xf0u) ^ ((t4 ^ t5) & 0xfu) ^ t5) & 0xfffu) ^ t8 << 0xcu));
    t10 = rd8(arg1 + 0x24u);
    wr16(arg2 + 0xau, (uint16_t)(((t10 ^ t9) & 0xfu) ^ t9));
    t11 = rd8(arg1 + 0x38u);
    wr16(arg2 + 0xau, (uint16_t)(((t11 << 4u ^ t9) & 0xf0u) ^ ((t10 ^ t9) & 0xfu) ^ t9));
    t12 = (rd8(arg1 + 0xcu) << 8u ^ t9) & 0x700u;
    wr16(arg2 + 0xau, (uint16_t)(t12 ^ ((t11 << 4u ^ t9) & 0xf0u) ^ ((t10 ^ t9) & 0xfu) ^ t9));
    t13 = rd16(arg1 + 0x20u);
    wr16(arg2 + 0xau, (uint16_t)(((t13 << 0xbu ^ t12 ^ t9) & 0x3800u) ^ t12 ^ ((t11 << 4u ^ t9) & 0xf0u) ^ ((t10 ^ t9) & 0xfu) ^ t9));
    t14 = ((t13 << 0xbu ^ t12 ^ t9) & 0x3800u) ^ t12 ^ ((t11 << 4u ^ t9) & 0xf0u) ^ ((t10 ^ t9) & 0xfu) ^ (((edx | t5) & 0xffff0000u) | t9) ^ (((edx | t5 | t9) & 0xffff0000u) | (uint16_t)(rd16(arg1 + 0x34u) << 0xeu));
    t15 = rd16(arg2 + 6u);
    wr16(arg2 + 0xau, (uint16_t)((t14 & 0x3fffu) ^ rd16(arg1 + 0x34u) << 0xeu));
    t16 = rd32(arg1 + 0x34u);
    wr16(arg2 + 6u, (uint16_t)((t15 & 0x7fffu) ^ t16 >> 2u << 0xfu));
    g->edx = (t15 & 0x7fffu) ^ t16 >> 2u << 0xfu;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
