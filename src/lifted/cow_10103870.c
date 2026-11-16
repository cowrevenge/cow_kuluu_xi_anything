/* f_0x10103870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10103870(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = 0u;
    ecx = self;
    edx = arg2;
    esi = arg1;
    edi = 0u;
L_1010387e: ;
    if (edi != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx);
        goto L_1010389e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx);
    if ((uint8_t)ecx == 0x20u) goto L_101038af;
    if ((uint8_t)ecx == 0u) goto L_101038af;
    if ((uint8_t)ecx == 9u) goto L_101038af;
    wr8(esi, (uint8_t)ecx);
    eax = eax + 1u;
    edx = edx + 1u;
    esi = esi + 1u;
    edi = 1u;
    goto L_1010387e;
L_1010389e: ;
    if ((uint8_t)ecx == 0x20u) goto L_101038b3;
    if ((uint8_t)ecx == 0u) goto L_101038b3;
    if ((uint8_t)ecx == 9u) goto L_101038b3;
    wr8(esi, (uint8_t)ecx);
    esi = esi + 1u;
L_101038af: ;
    eax = eax + 1u;
    edx = edx + 1u;
    goto L_1010387e;
L_101038b3: ;
    wr8(esi, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
