/* f_0x1020c140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020c140(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg2 + 0x44u);
    if ((int32_t)(t1 & 0xfu) < 4)
    {
        eax = t1 & 0xfu;
        edx = t1;
    }
    else
    {
        edx = t1;
        eax = 3u;
    }
    t2 = rd16(eax * 2u + rd32(COW_IMG(0x106644e4u)) + 0xeu);
    wr32(arg2 + 0x48u, t2);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1020c0f0u), self, 1, edx);
    t4 = g->edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t4, 4, 0u, 0x20u, t3, 0x80808080u);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t6, 4, 4u, 1u, arg2 + 4u, 0x60808080u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(arg1 + 0x48u, arg2);
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x27u);
    t11 = g->ecx;
    t12 = g->edx;
    g->ebx = arg2 + 4u;
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 4u, COW_IMG(0x1034f7e0u), t10, 9u, 0x27u);
    t14 = g->edx;
    g->ebx = in_ebx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c140(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
