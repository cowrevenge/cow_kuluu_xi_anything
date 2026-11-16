/* f_0x1012a9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012a9f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u) goto L_1012aa11;
    eax = arg1;
    ecx = (self & 0xffffff00u) | rd8(arg1);
L_1012a9fa: ;
    if ((uint8_t)ecx == 9u) goto L_1012aa09;
    if ((uint8_t)ecx == 0x20u) goto L_1012aa09;
    if ((uint8_t)ecx != 0x2cu) goto L_1012aa11;
L_1012aa09: ;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_1012a9fa;
    }
L_1012aa11: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012a9f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
