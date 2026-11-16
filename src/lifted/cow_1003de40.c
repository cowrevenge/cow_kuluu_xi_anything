/* f_0x1003de40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003de40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    ecx = self;
    esi = 0u;
L_1003de46: ;
    if ((uint8_t)rd32(ecx) == 0u)
    {
        edx = (uint8_t)rd32(ecx);
        eax = 0u;
    }
    else
    {
        eax = rd32(ecx);
        edx = (uint8_t)rd32(ecx);
        eax = ecx + (eax >> 8u & 0x1fu) * 4u;
    }
    if (edx != 0x69u) goto L_1003de6d;
    wr16(ecx + 4u, 0u);
    ecx = eax;
    esi = esi + 1u;
    goto L_1003de46;
L_1003de6d: ;
    if (edx != 0x6au) goto L_1003de79;
    wr16(ecx + 4u, 0u);
    if (esi == 1u) goto L_1003de7d;
    esi = esi - 1u;
L_1003de79: ;
    ecx = eax;
    goto L_1003de46;
L_1003de7d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003de40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003de40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
