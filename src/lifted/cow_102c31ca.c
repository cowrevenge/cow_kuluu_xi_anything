/* f_0x102c31ca - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c31ca(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1 + 8u) != 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 8u);
        goto L_102c31e7;
    }
    if (rd32(arg1 + 4u) == 0u) goto L_102c3238;
    eax = rd32(arg1 + 4u);
    ecx = arg2;
L_102c31e0: ;
    wr8(ecx, (uint8_t)~rd8(ecx));
    if (eax != 1u)
    {
        eax = eax - 1u;
        ecx = ecx + 1u;
        goto L_102c31e0;
    }
    return;
L_102c31e7: ;
    if ((uint8_t)ecx != 4u) goto L_102c3238;
    if (rd8(arg1 + 9u) != 8u) goto L_102c3209;
    if (rd32(arg1 + 4u) == 0u) goto L_102c3238;
    eax = rd32(arg1 + 4u);
    eax = ((eax - 1u) >> 1u) + 1u;
    ecx = arg2;
L_102c3201: ;
    wr8(ecx, (uint8_t)~rd8(ecx));
    if (eax != 1u)
    {
        eax = eax - 1u;
        ecx = ecx + 2u;
        goto L_102c3201;
    }
    return;
L_102c3209: ;
    if ((uint8_t)ecx == 4u)
    {
        if (rd8(arg1 + 9u) == 0x10u)
        {
            if (rd32(arg1 + 4u) != 0u)
            {
                edx = rd32(arg1 + 4u);
                eax = arg2 + 1u;
L_102c3228: ;
                wr8(eax - 1u, (uint8_t)~rd8(eax - 1u));
                wr8(eax, (uint8_t)~rd8(eax));
                if (eax - arg2 + 3u < edx)
                {
                    eax = eax + 4u;
                    goto L_102c3228;
                }
            }
        }
    }
L_102c3238: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c31ca(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c31ca(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
