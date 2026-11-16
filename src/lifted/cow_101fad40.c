/* f_0x101fad40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101fad40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self + 0x174u;
    esi = 4u;
L_101fad53: ;
    ecx = 0xau;
L_101fad58: ;
    wr8(eax, rd8(eax) & 0xfeu);
    if ((uint8_t)arg1 != 0u)
    {
        wr8(eax + 5u, 0u);
    }
    if (ecx != 1u)
    {
        eax = eax + 0x20u;
        ecx = ecx - 1u;
        goto L_101fad58;
    }
    eax = eax + 0x20u;
    if (esi != 1u)
    {
        esi = esi - 1u;
        goto L_101fad53;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fad40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fad40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
