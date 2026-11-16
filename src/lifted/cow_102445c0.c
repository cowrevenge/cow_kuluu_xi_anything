/* f_0x102445c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102445c0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(uint32_t)((int32_t)arg2 >> 2u) > 6)
    {
        eax = (uint32_t)((int32_t)arg2 >> 2u);
        edx = in_edx;
        esi = arg1 + 0x18u;
        edi = (uint32_t)((int32_t)arg2 >> 2u) - 6u;
L_102445d8: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, rd32(esi));
        t2 = g->edx;
        wr32(esi, t1);
        if (edi != 1u)
        {
            eax = t1;
            edx = t2;
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_102445d8;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102445c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102445c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
