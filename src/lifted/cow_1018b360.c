/* f_0x1018b360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018b360(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 2u)
    {
        eax = rd32(arg1) - 2u;
        goto L_1018b371;
    }
    eax = rd32(arg1) - 2u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = in_edx;
        goto L_1018b395;
    }
    eax = eax - 3u;
L_1018b371: ;
    if (rd32(COW_IMG(0x1065cb04u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x1065cb04u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1018b340u), esi, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t5 = g->edx;
        wr32(COW_IMG(0x1065cb04u), 0u);
        eax = t4;
        edx = t5;
    }
L_1018b395: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018b360(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
