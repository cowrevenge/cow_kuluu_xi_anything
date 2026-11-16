/* f_0x10039490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10039490(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032a9f8u));
    wr8(self + 4u, 0u);
    edx = in_edx;
    esi = self + 0xcu;
    edi = 8u;
L_100394a4: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        if (rd32(eax + 8u) != 0u)
        {
            wr8(eax + 6u, 1u);
        }
        if (rd32(esi) != 0u)
        {
            ecx = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
            t1 = g->edx;
            wr32(esi, 0u);
            edx = t1;
        }
    }
    if (edi != 1u)
    {
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_100394a4;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10039490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
