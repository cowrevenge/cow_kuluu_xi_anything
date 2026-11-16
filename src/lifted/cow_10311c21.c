/* f_0x10311c21 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10311c21(Guest* g)
{

    wr32(COW_IMG(0x103d077cu), COW_IMG(0x1031803cu));
    wr32(COW_IMG(0x103d0778u), COW_IMG(0x10318392u));
    wr32(COW_IMG(0x103d0780u), COW_IMG(0x103180a2u));
    wr32(COW_IMG(0x103d0784u), COW_IMG(0x10317fe2u));
    wr32(COW_IMG(0x103d0788u), COW_IMG(0x1031808au));
    wr32(COW_IMG(0x103d078cu), COW_IMG(0x10318392u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311c21(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10311c21(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
