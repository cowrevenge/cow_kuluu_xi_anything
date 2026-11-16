/* f_0x101f01e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101f01e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg2 == 0u) goto L_101f0234;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101f0234;
    edx = rd32(COW_IMG(0x104dfd98u));
    if ((int32_t)arg1 < 0) goto L_101f0234;
    if ((int32_t)arg1 >= 18) goto L_101f0234;
    g->ecx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, arg1);
    t2 = g->ecx;
    if ((uint8_t)t1 <= 1u) goto L_101f0234;
    eax = t1;
    ecx = (t2 & 0xffffff00u) | 1u;
    esi = arg1 * 0xdecu + edx + 0x9894u;
L_101f0226: ;
    if (rd16(esi) == (uint16_t)arg2) goto L_101f0239;
    if ((uint8_t)((uint8_t)ecx + 1u) < (uint8_t)eax)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
        esi = esi + 0x2cu;
        goto L_101f0226;
    }
L_101f0234: ;
    return 0u;
L_101f0239: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f01e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f01e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
