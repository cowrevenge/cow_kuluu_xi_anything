/* f_0x1017a590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self + 0x84u;
    edi = 2u;
L_1017a5a8: ;
    if (rd32(ecx - 0x24u) != 0u)
    {
        if ((int32_t)rd32(ecx) > 0)
        {
            eax = rd32(ecx + 4u);
            eax = eax + 8u;
            esi = 0u;
L_1017a5bd: ;
            if (rd32(eax + 0xbcu) == 0x3e7u)
            {
                wr8(eax, (uint8_t)arg1);
            }
            if ((int32_t)(esi + 1u) < (int32_t)rd32(ecx))
            {
                eax = eax + 0x16cu;
                esi = esi + 1u;
                goto L_1017a5bd;
            }
        }
    }
    if (edi != 1u)
    {
        ecx = ecx + 0x78u;
        edi = edi - 1u;
        goto L_1017a5a8;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017a590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
