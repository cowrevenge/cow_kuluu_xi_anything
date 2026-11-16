/* f_0x10019b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10019b00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10462430u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10462430u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10462430u));
        ecx = 0u;
        edx = rd32(COW_IMG(0x1045f028u));
L_10019b11: ;
        if ((rd8(ecx + edx) & 0x3fu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + edx);
            wr8(ecx + edx, (uint8_t)(eax | 0x40u));
            edx = rd32(COW_IMG(0x1045f028u));
        }
        if (ecx + 1u < rd32(COW_IMG(0x10462430u)))
        {
            eax = rd32(COW_IMG(0x10462430u));
            ecx = ecx + 1u;
            goto L_10019b11;
        }
        eax = rd32(COW_IMG(0x10462430u));
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019b00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
