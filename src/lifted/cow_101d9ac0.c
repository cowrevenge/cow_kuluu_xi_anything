/* f_0x101d9ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d9ac0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        t1 = (in_edx & 0xffff0000u) | rd16(arg1);
        t2 = (arg1 & 0xffffff00u) | rd8(arg1 + 2u);
        g->edx = t1;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x101d7330u), rd32(COW_IMG(0x10663444u)), 4, t2, t1, rd32(COW_IMG(0x1037edd4u)), rd32(COW_IMG(0x10663464u)));
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    wr8(rd32(COW_IMG(0x10663440u)) + 4u, 0u);
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
