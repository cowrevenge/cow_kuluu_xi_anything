/* f_0x10108420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108420(Guest* g)
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

    if ((uint16_t)arg1 >= rd16(COW_IMG(0x104e0afcu)))
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32((uint16_t)arg1 * 0x14u + rd32(COW_IMG(0x104e0b00u)) + 4u) == 0u)
        {
            eax = (uint16_t)arg1 * 5u;
            edx = in_edx;
            goto L_10108457;
        }
        eax = (uint16_t)arg1 * 5u;
        edx = in_edx;
        esi = rd32((uint16_t)arg1 * 0x14u + rd32(COW_IMG(0x104e0b00u)) + 4u);
        edi = 0u;
L_10108447: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10108b00u), esi, 1, edi);
        t2 = g->edx;
        if (rd32(esi + 4u) != 0u)
        {
            eax = t1;
            edx = t2;
            esi = rd32(esi + 4u);
            edi = edi + 1u;
            goto L_10108447;
        }
        eax = t1;
        edx = t2;
    }
L_10108457: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
