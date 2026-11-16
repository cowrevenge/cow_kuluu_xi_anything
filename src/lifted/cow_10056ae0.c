/* f_0x10056ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10056ae0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x74u) == 0u)
    {
        eax = rd32(self + 0x74u);
        esi = 0u;
        goto L_10056b12;
    }
    eax = rd32(self + 0x74u);
    esi = 0u;
    edi = 0u;
L_10056aed: ;
    if ((int32_t)esi < (int32_t)(edi + (uint32_t)(int16_t)rd16(eax + 6u)))
    {
        edx = edi + (uint32_t)(int16_t)rd16(eax + 6u);
        esi = edx;
    }
    if ((uint8_t)rd32(eax) == 0u) goto L_10056b12;
    edx = rd32(eax);
    edi = edi + (uint32_t)(int16_t)rd16(eax + 4u);
    if (eax + (edx >> 8u & 0x1fu) * 4u != 0u)
    {
        eax = eax + (edx >> 8u & 0x1fu) * 4u;
        goto L_10056aed;
    }
    eax = eax + (edx >> 8u & 0x1fu) * 4u;
L_10056b12: ;
    wr32(self + 0x7cu, esi);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
