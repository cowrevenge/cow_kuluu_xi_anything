/* f_0x10107780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10107780(Guest* g)
{
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (in_ebp & 0xffff0000u) | rd16(arg1 + 0x20u);
    if ((int32_t)(uint16_t)t1 <= 0)
    {
        edx = in_edx;
        ebp = t1;
        edi = (uint16_t)t1;
        goto L_101077ab;
    }
    edx = in_edx;
    ebp = t1;
    esi = 0u;
    edi = (uint16_t)t1;
L_1010779b: ;
    if ((uint8_t)arg2 == (rd8(arg1 + esi + 4u) & 0x1fu)) goto L_101077d5;
    edx = (edx & 0xffffff00u) | (rd8(arg1 + esi + 4u) & 0x1fu);
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        esi = esi + 1u;
        goto L_1010779b;
    }
L_101077ab: ;
    if ((uint16_t)ebp >= 8u) goto L_101077d5;
    wr8(arg1 + edi + 4u, (uint8_t)((((int32_t)arg3 >= 0) - 1u & 0x80u) | arg2));
    wr16(arg1 + 0x20u, (uint16_t)(rd16(arg1 + 0x20u) + 1u));
    return 1u;
L_101077d5: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10107780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
