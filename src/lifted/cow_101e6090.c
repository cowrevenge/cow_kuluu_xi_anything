/* f_0x101e6090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e6090(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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

    if (rd16(rd32(self + 8u) + 0x4cu) != rd16(self + 0x14u))
    {
        ecx = rd32(self + 8u);
        goto L_101e60ff;
    }
    ecx = rd32(self + 8u);
    edx = (in_edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    if ((int16_t)rd16(ecx + 0x5eu) <= 0) goto L_101e60c4;
    edx = (edx & 0xffff0000u) | rd16(ecx + 0x5eu);
    t1 = (edx & 0xffff0000u) | rd16(self + 0x1au);
    t2 = (t1 & 0xffff0000u) | rd16(self + 0x18u);
    t3 = rd32(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 4u + 0x1cu);
    g->eax = t3;
    g->edx = (uint32_t)(int16_t)rd16(self + 0x16u);
    t4 = rd16(self + 0x16u);
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t3, t2, t1, 0x1eu, edx);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101e60c4: ;
    if (rd8(self + 0x25u) == 0u) goto L_101e60f8;
    t7 = (uint32_t)(int16_t)rd16(self + 0x1au);
    t8 = (uint32_t)(int16_t)rd16(self + 0x18u);
    g->eax = self;
    g->edx = t8;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 4u + 0x1cu), 8, t8, t7, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101e60f8: ;
    loc_10 = 0x40402810u;
L_101e612e: ;
    t15 = (uint32_t)(int16_t)rd16(self + 0x1au);
    t16 = (uint32_t)(int16_t)rd16(self + 0x18u);
    g->eax = self;
    g->edx = (uint32_t)(int16_t)rd16(self + 0x16u);
    t17 = rd16(self + 0x16u);
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + (uint32_t)(int16_t)t17 * 4u + 0x1cu), 8, t16, t15, 0x3f800000u, 0x3f800000u, loc_10, 0u, 0u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101e60ff: ;
    if (rd8(self + 0x25u) == 0u) goto L_101e6127;
    t11 = (uint32_t)(int16_t)rd16(self + 0x1au);
    t12 = (uint32_t)(int16_t)rd16(self + 0x18u);
    g->eax = self;
    g->edx = t12;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 4u + 0x1cu), 5, t12, t11, 0x80808080u, 0u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101e6127: ;
    loc_10 = 0x30808080u;
    goto L_101e612e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
