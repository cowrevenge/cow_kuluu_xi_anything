/* f_0x1003ac80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1003ac80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1003aab0u), self, 0);
    if (rd32(t1) == 0u)
    {
        edx = rd32(t1);
        goto L_1003acc0;
    }
    edx = rd32(t1);
    esi = t1;
    ebx = in_ebx;
L_1003ac94: ;
    if (rd32(edx + 0x2cu) >> 3u & 1u) goto L_1003acb6;
    eax = rd32(edx + 0x2cu) >> 3u;
    ecx = 0u;
L_1003aca0: ;
    if (rd8(ecx + edx + 0xcu) != rd8(arg1 + ecx))
    {
        ebx = (ebx & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_1003acb1;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + edx + 0xcu);
    ebx = (ebx & 0xffffff00u) | rd8(arg1 + ecx);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_1003aca0;
    }
    ecx = ecx + 1u;
L_1003acb1: ;
    if (ecx == 0x10u) goto L_1003acc8;
L_1003acb6: ;
    if (rd32(edx + 0x38u) != 0u)
    {
        esi = edx + 0x38u;
        edx = rd32(edx + 0x38u);
        goto L_1003ac94;
    }
    edx = rd32(edx + 0x38u);
L_1003acc0: ;
    g->edx = edx;
    return 0u;
L_1003acc8: ;
    g->edx = edx;
    return rd32(esi);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ac80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003ac80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
