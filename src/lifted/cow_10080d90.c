/* f_0x10080d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10080d90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd32(COW_IMG(0x10357bdcu)) < 0)
    {
        eax = rd32(COW_IMG(0x10357bdcu));
        goto L_10080db8;
    }
    eax = rd32(COW_IMG(0x10357bdcu));
    ecx = COW_IMG(0x10357bdcu);
    edx = (in_edx & 0xffff0000u) | rd16(arg1 + 0x14u);
L_10080da7: ;
    if ((uint16_t)edx == (uint16_t)eax) goto L_10080dbb;
    if ((int16_t)rd16(ecx + 2u) >= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
        ecx = ecx + 2u;
        goto L_10080da7;
    }
    eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
L_10080db8: ;
    return (eax & 0xffffff00u) | 1u;
L_10080dbb: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
