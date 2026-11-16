/* f_0x1017a690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = arg1 + 4u;
    esi = 0x100u;
L_1017a69e: ;
    if (rd32(edx - 4u) != 0u)
    {
        if (rd32(edx) != 0u)
        {
            edi = rd32(edx);
            wr16(edi + 4u, (uint16_t)(rd16(edi + 4u) - 1u));
            if (rd16(edi + 4u) == 0u)
            {
                eax = 0u;
                ecx = 0x1cu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            }
        }
    }
    if (esi != 1u)
    {
        edx = edx + 0x4cu;
        esi = esi - 1u;
        goto L_1017a69e;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017a690(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
