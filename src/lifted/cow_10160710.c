/* f_0x10160710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10160710(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0xb2u) != 0u) goto L_1016073c;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xb2u);
    if (rd8(self + 0xb3u) != 0u) goto L_1016073c;
    eax = (eax & 0xffffff00u) | rd8(self + 0xb3u);
    if ((int8_t)arg1 >= 2) goto L_10160735;
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    wr8(self + 0xb4u, (uint8_t)eax);
    return;
L_10160735: ;
    wr8(self + 0xb4u, 0u);
L_1016073c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10160710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
