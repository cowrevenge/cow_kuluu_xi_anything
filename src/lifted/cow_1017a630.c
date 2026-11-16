/* f_0x1017a630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1017a630(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;

    edx = self + 0x84u;
    edi = 2u;
L_1017a63f: ;
    if (rd32(edx - 0x24u) == 0u)
    {
        eax = rd32(edx - 0x24u);
    }
    else
    {
        if ((int32_t)rd32(edx) <= 0)
        {
            eax = rd32(edx + 4u);
        }
        else
        {
            eax = rd32(edx + 4u);
            eax = eax + 8u;
            esi = 0u;
L_1017a654: ;
            t1 = rd32(eax + 0xb8u);
            wr8(eax, 2u);
            if (t1 != 0u)
            {
                wr8(eax, 0u);
            }
            if (rd32(eax + 0xbcu) == rd32(self + 0x17cu))
            {
                wr8(eax, 1u);
            }
            if ((int32_t)(esi + 1u) < (int32_t)rd32(edx))
            {
                eax = eax + 0x16cu;
                esi = esi + 1u;
                goto L_1017a654;
            }
            eax = eax + 0x16cu;
        }
    }
    if (edi != 1u)
    {
        edx = edx + 0x78u;
        edi = edi - 1u;
        goto L_1017a63f;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017a630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
