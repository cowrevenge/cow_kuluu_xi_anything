/* f_0x101133c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101133c0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e170cu)) == 0u) goto L_10113400;
    eax = rd32(COW_IMG(0x104e170cu));
    if (rd32(eax + 0x8f0u) == 0u) goto L_10113400;
    if (arg1 == 1u) goto L_101133f5;
    if (arg1 == 2u) goto L_101133e9;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10113410u), 2, eax, 1u);
    return;
L_101133e9: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10113410u), 2, eax, 3u);
    return;
L_101133f5: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10113410u), 2, eax, 2u);
L_10113400: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101133c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101133c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
