/* f_0x10014cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10014cb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104570b0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104570b0u));
        edx = in_edx;
        esi = COW_IMG(0x10350210u);
L_10014cbf: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10029390u), 1, esi);
        t2 = g->edx;
        if ((int32_t)(esi + 8u) < (int32_t)COW_IMG(0x10350228u))
        {
            eax = t1;
            edx = t2;
            esi = esi + 8u;
            goto L_10014cbf;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10014cb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
