/* f_0x1003b900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003b900(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b700u), self, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_1003b90e;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax;
L_1003b90e: ;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032f910u));
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_1003b93f;
    }
    edx = t4;
L_1003b91e: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1003b6d0u), esi + 0xc4u, 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_1003b93f;
    }
    eax = t5;
    edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), eax, edx, 1, COW_IMG(0x1032f910u));
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        esi = eax;
        goto L_1003b91e;
    }
    edx = t8;
    esi = eax;
L_1003b93f: ;
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003b900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003b900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
