/* f_0x1018c980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xcu) == 0u)
    {
        edx = in_edx;
        goto L_1018ca0f;
    }
    ecx = rd32(self + 0xcu);
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x1cu))
    {
        edx = (uint32_t)(int16_t)rd16(ecx + 0x1cu);
        goto L_1018ca0f;
    }
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
        edx = 0u;
    }
    else
    {
        edx = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    if (rd32(edx) == 0u) goto L_1018ca0f;
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
        edx = 0u;
    }
    else
    {
        edx = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    if (rd32(rd32(edx)) == 0u)
    {
        edx = rd32(edx);
        goto L_1018ca0f;
    }
    esi = rd32(rd32(edx));
    if (!(rd32(esi + 0x120u) >> 9u & 1u))
    {
        edx = rd32(esi + 0x120u) >> 9u;
        goto L_1018ca0f;
    }
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
        eax = 0u;
    }
    else
    {
        eax = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    if (rd32(esi + 0x78u) != rd32(eax + 4u))
    {
        edx = rd32(esi + 0x78u);
        goto L_1018ca0f;
    }
    edx = rd32(esi + 0x78u);
    g->edx = edx;
    return rd32(esi + 0xa0u);
L_1018ca0f: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
