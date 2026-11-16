/* f_0x101f9010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f9010(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self + 0x3f4u;
    edx = self + 0x8a0u;
    edi = 2u;
L_101f9026: ;
    esi = 0xau;
L_101f902b: ;
    wr16(eax, 0u);
    wr8(edx, 0u);
    if (esi != 1u)
    {
        eax = eax + 0x20u;
        edx = edx + 0x16u;
        esi = esi - 1u;
        goto L_101f902b;
    }
    eax = eax + 0x20u;
    edx = edx + 0x16u;
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_101f9026;
    }
    wr8(self + 0x10eu, 0u);
    wr8(self + 0x10fu, 0u);
    wr8(self + 0xa48u, 0u);
    wr8(self + 0xa45u, 0u);
    if ((uint8_t)arg1 == 0u)
    {
        wr8(self + 0xa45u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
