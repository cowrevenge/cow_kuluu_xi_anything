/* f_0x101035b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101035b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q1;
    int64_t q2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e0af4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e0af4u));
        edx = in_edx;
        goto L_101035e5;
    }
    eax = rd32(COW_IMG(0x104e0af4u));
    if (rd32(eax + 0x438u) != 0u)
    {
        ecx = rd32(eax + 0x438u);
        goto L_101035c6;
    }
    return (eax & 0xffffff00u) | 1u;
L_101035c6: ;
    q1 = (uint64_t)cow_mulu(0x51eb851fu, ecx);
    q2 = (uint64_t)cow_mulu(0x51eb851fu, arg1);
    if (cow_qhi(q1) >> 5u != cow_qhi(q2) >> 5u)
    {
        eax = (uint32_t)(q2);
        edx = cow_qhi(q2) >> 5u;
        goto L_101035e5;
    }
    eax = (uint32_t)(q2);
    edx = cow_qhi(q2) >> 5u;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101035e5: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101035b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101035b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
