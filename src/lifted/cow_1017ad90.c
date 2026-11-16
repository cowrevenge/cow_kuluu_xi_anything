/* f_0x1017ad90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1017ad90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    esi = self + 0xa0u;
    edi = 0u;
L_1017ad9f: ;
    if (rd32(esi - 0x40u) == 0u) goto L_1017adc0;
    if ((int32_t)rd32(esi) <= 0) goto L_1017adc0;
    eax = rd32(esi - 4u);
    ecx = 0u;
    edx = rd32(esi);
L_1017adb1: ;
    if (rd32(eax + 4u) == arg1) goto L_1017adcb;
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        eax = eax + 0x1acu;
        ecx = ecx + 1u;
        goto L_1017adb1;
    }
L_1017adc0: ;
    if ((int32_t)(edi + 1u) < 2)
    {
        esi = esi + 0x78u;
        edi = edi + 1u;
        goto L_1017ad9f;
    }
    eax = 0u;
L_1017adcb: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017ad90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017ad90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
