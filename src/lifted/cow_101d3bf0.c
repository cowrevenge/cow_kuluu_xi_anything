/* f_0x101d3bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d3bf0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_101d3c0e;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
        goto L_101d3c37;
    }
    ecx = rd32(COW_IMG(0x106631d4u));
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101d3380u), ecx, 3, 0u, 0xffffffffu, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101d3c0e: ;
    if (rd32(COW_IMG(0x10664420u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664420u));
        g->eax = rd32(ecx);
        g->edx = arg1;
        t3 = rd32(ecx);
        g->esp = sp0;
        t4 = cow_thiscall(g, rd32(t3 + 0x58u), ecx, 1, arg1);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t6 = cow_thiscall(g, COW_IMG(0x101d3380u), ecx, 3, 3u, 0xffffffffu, 1u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
L_101d3c37: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d3bf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
