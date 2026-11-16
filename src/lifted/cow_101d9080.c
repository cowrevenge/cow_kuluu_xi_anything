/* f_0x101d9080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d9080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101d7df0u), rd32(COW_IMG(0x10663428u)), 0);
        t2 = g->edx;
        if (rd8(t1) == 3u)
        {
            edx = t2;
            edi = t1;
        }
        else
        {
            eax = t1;
            edx = t2;
            edi = t1;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
            t3 = g->edx;
            edx = t3;
        }
        t4 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
        g->edx = edx;
        t5 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0 - 8u;
        t6 = cow_cdecl(g, COW_IMG(0x101d7280u), 1, t4);
        t7 = g->edx;
        if (rd32(edi + 0x1cu) == t6)
        {
            eax = t6;
            ecx = rd32(edi + 0x1cu);
            edx = t7;
            loc_8 = 0x43u;
        }
        else
        {
            eax = t6;
            edx = t7;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
            t9 = g->edx;
            g->edx = t9;
            t10 = rd32(self + 8u);
            t11 = cow_thiscall(g, COW_IMG(0x10118b60u), t10, 2, 5u, 2u);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
            loc_8 = 0x44u;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_8);
        t15 = g->edx;
        g->edx = t15;
        t16 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 2u, t14);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
