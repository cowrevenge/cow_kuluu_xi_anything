/* f_0x103228dc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_103228dc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        ecx = arg1;
        edx = in_edx;
L_103228e7: ;
        if ((int8_t)eax < 48) goto L_103228fc;
        if ((int8_t)eax > 57) goto L_103228fc;
        wr8(ecx, (uint8_t)((uint8_t)eax - 0x30u));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x30u);
L_103228f3: ;
        ecx = ecx + 1u;
L_103228f4: ;
        if (rd8(ecx) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx);
            goto L_103228e7;
        }
    }
    return;
L_103228fc: ;
    if ((uint8_t)eax != 0x3bu) goto L_103228f3;
    eax = ecx;
L_10322902: ;
    t1 = rd8(eax + 1u);
    wr8(eax, (uint8_t)t1);
    if (rd8(eax + 1u) != 0u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t1;
        goto L_10322902;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | t1;
    goto L_103228f4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103228dc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103228dc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
