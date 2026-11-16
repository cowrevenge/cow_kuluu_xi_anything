/* f_0x102a8930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a8930(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u)
    {
        eax = arg1;
        ecx = self;
        ebp = arg2;
        esi = arg1;
        edi = in_edi;
L_102a8941: ;
        t1 = rd8(eax);
        t2 = rd8(eax + 1u);
        wr16(esi, (uint16_t)(t1 << 8u | t2));
        if (ebp != 1u)
        {
            eax = eax + 2u;
            ecx = (ecx & 0xffff0000u) | t1;
            ebp = ebp - 1u;
            esi = esi + 2u;
            edi = (edi & 0xffff0000u) | t2;
            goto L_102a8941;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a8930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
