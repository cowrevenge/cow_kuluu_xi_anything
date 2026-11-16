/* f_0x10149580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10149580(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10149040u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr8(self + 0x52u, 0u);
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr8(self + 0x52u, 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        t9 = rd32(rd32(eax) + 0x940u);
        wr32(self + 0x60u, t9);
        t10 = rd32(rd32(eax) + 0x944u);
        wr32(self + 0x64u, t10);
        t11 = rd32(rd32(eax) + 0x944u);
        t12 = rd32(eax);
        wr32(self + 0x68u, t11);
        eax = t12;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10160e40u), rd32(COW_IMG(0x106218fcu)), 0);
    t14 = g->edx;
    t15 = cow_fastcall(g, COW_IMG(0x101ec220u), rd32(COW_IMG(0x106636a0u)), t14, 4, 0xfffffc19u, 0xfffffc19u, 0u, 0u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371984u), 1u, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
