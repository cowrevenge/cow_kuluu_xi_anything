/* f_0x102146f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102146f0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd16(self + 0x186u);
    t2 = rd16(self + 0x17au);
    wr16(self + 0x17au, (uint16_t)(arg1 + ((in_edx & 0xffff0000u) | t2)));
    if ((int32_t)arg2 <= (int32_t)t1)
    {
        edx = arg1 + ((in_edx & 0xffff0000u) | t2);
        edi = (uint32_t)(int16_t)t2;
        goto L_10214739;
    }
    eax = t1;
    edx = arg1 + ((in_edx & 0xffff0000u) | t2);
    edi = (uint32_t)(int16_t)t2;
    if ((int32_t)(eax - (uint32_t)(int16_t)edx) <= (int32_t)arg2) goto L_10214734;
    wr16(self + 0x17au, (uint16_t)(eax - arg2));
L_10214742: ;
    if (edi != (uint32_t)(int16_t)rd16(self + 0x17au))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x17au);
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    }
    return;
L_10214734: ;
    if ((int16_t)edx <= 0) goto L_10214742;
L_10214739: ;
    wr16(self + 0x17au, 0u);
    goto L_10214742;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102146f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102146f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
