/* f_0x10129d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10129d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1036e6e8u)) == 0u)
    {
        edx = in_edx;
        goto L_10129d25;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036e6e8u));
    ecx = 0u;
L_10129d10: ;
    if ((uint8_t)eax == (uint32_t)(int16_t)arg1) goto L_10129d2b;
    eax = (uint8_t)eax;
    if (rd8(COW_IMG(0x1036e6f0u) + ecx * 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1036e6f0u) + ecx * 8u);
        ecx = ecx + 1u;
        goto L_10129d10;
    }
    edx = (uint32_t)(int16_t)arg1;
L_10129d25: ;
    g->edx = edx;
    return 0x80808080u;
L_10129d2b: ;
    g->edx = (uint32_t)(int16_t)arg1;
    return rd32(COW_IMG(0x1036e6ecu) + ecx * 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
