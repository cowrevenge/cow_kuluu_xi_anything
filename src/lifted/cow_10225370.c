/* f_0x10225370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10225370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x10225330u), 0);
    t2 = g->edx;
    eax = t1;
    ecx = 0u;
    edx = t2;
L_10225377: ;
    if (rd8(COW_IMG(0x10667034u) + ecx * 2u) == (uint8_t)eax) goto L_1022539a;
    if ((int32_t)(ecx + 1u) < 8)
    {
        ecx = ecx + 1u;
        goto L_10225377;
    }
    ecx = 0u;
    edx = (edx & 0xffffff00u) | 0xffu;
L_1022538a: ;
    if (rd8(COW_IMG(0x10667034u) + ecx * 2u) == (uint8_t)edx) goto L_102253a6;
    if ((int32_t)(ecx + 1u) < 8)
    {
        ecx = ecx + 1u;
        goto L_1022538a;
    }
    return;
L_1022539a: ;
    wr8(COW_IMG(0x10667035u) + ecx * 2u, (uint8_t)arg1);
    return;
L_102253a6: ;
    wr8(COW_IMG(0x10667034u) + ecx * 2u, (uint8_t)eax);
    wr8(COW_IMG(0x10667035u) + ecx * 2u, (uint8_t)arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10225370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
