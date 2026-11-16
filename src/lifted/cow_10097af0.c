/* f_0x10097af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10097af0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    if (rd8(COW_IMG(0x10482f44u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_10097b1d;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    if ((uint8_t)eax != 0u) goto L_10097b3b;
    if (rd8(COW_IMG(0x1047faaeu)) == 0u) goto L_10097b3b;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047faaeu));
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x101d6110u), eax, g->ecx, g->edx, 1, 1, 0u);
    wr8(COW_IMG(0x1047faaeu), 0u);
    return;
L_10097b1d: ;
    if ((uint8_t)eax == 0u)
    {
        if (rd8(COW_IMG(0x1047faaeu)) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047faaeu));
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x101d6110u), eax, g->ecx, g->edx, 1, 1, 1u);
            wr8(COW_IMG(0x1047faaeu), 0u);
        }
    }
L_10097b3b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10097af0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
