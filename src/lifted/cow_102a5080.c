/* f_0x102a5080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a5080(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x54u) != 0u)
    {
        edx = rd32(arg1 + 0x54u);
        goto L_102a5090;
    }
    return 0u;
L_102a5090: ;
    if ((int32_t)edx <= 0)
    {
        ecx = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x64u);
        ecx = 0u;
        esi = eax;
L_102a509b: ;
        d1 = (double)rdf32(sp0 + 8u);
        if (d1 < (double)rdf32(esi)) goto L_102a50b0;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(esi), 0u);
        if ((int32_t)(ecx + 1u) < (int32_t)edx)
        {
            ecx = ecx + 1u;
            esi = esi + 0x30u;
            goto L_102a509b;
        }
        ecx = ecx + 1u;
    }
L_102a50b0: ;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
