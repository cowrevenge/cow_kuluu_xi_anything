/* f_0x102660f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102660f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = self;
    edx = arg2;
    esi = arg1;
L_102660f9: ;
    if (rd16(esi) != rd16(edx))
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
        ecx = (ecx & 0xffff0000u) | rd16(edx);
        goto L_1026611a;
    }
    eax = (eax & 0xffff0000u) | rd16(esi);
    ecx = (ecx & 0xffff0000u) | rd16(edx);
    if ((uint16_t)eax == 0u) goto L_10266114;
    esi = esi + 2u;
    if ((uint16_t)ecx != 0u)
    {
        edx = edx + 2u;
        goto L_102660f9;
    }
L_10266114: ;
    return 0u;
L_1026611a: ;
    return (uint16_t)eax - (uint16_t)ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102660f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102660f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
