/* f_0x101dd2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101dd2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x16u) != 1u) goto L_101dd2ca;
    t1 = rd32(rd32(self + 8u) + 0x34u) | 1u;
    wr32(rd32(self + 8u) + 0x34u, t1);
    return 1u;
L_101dd2ca: ;
    t2 = (rd32(rd32(self + 8u) + 0x34u) & 0xffff00ffu) | (uint8_t)(rd32(rd32(self + 8u) + 0x34u) >> 8u | 0x10u) << 8u;
    t3 = rd32(self + 8u);
    wr32(t3 + 0x34u, t2);
    wr8(self + 0x14u, 0xffu);
    wr8(self + 0x15u, 0u);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101dd0b0u), self, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(self + 0x16u) != 0u)
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0x16u);
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0x16u);
        ecx = t5;
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xfu);
        t8 = g->edx;
        g->ecx = rd32(COW_IMG(0x1057847cu));
        g->edx = t8;
        t9 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 4u;
        t10 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t7, 2u);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x32u);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t13, 2u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dd2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
