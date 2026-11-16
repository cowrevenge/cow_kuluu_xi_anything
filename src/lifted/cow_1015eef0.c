/* f_0x1015eef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015eef0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    if (rd8(COW_IMG(0x103722d8u)) != 0u)
    {
        esi = COW_IMG(0x103722f8u);
L_1015eeff: ;
        if (rd32(esi) == 0u)
        {
            eax = rd32(esi);
        }
        else
        {
            eax = rd32(esi);
            if (rd32(eax) == 0u)
            {
                eax = rd32(eax);
            }
            else
            {
                eax = rd32(eax);
                g->eax = eax;
                g->esp = sp0 - 4u;
                t1 = cow_thiscall(g, rd32(rd32(eax) + 0x30u), eax, 0);
                eax = t1;
            }
        }
        if (rd8(esi + 0xcu) != 0u)
        {
            esi = esi + 0x2cu;
            goto L_1015eeff;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015eef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015eef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
