/* f_0x102c638c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c638c(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2) < 0x29u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2);
        goto L_102c63dd;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    if ((uint8_t)eax > 0x7au) goto L_102c63dd;
    if ((uint8_t)eax <= 0x5au) goto L_102c63a4;
    if ((uint8_t)eax < 0x61u) goto L_102c63dd;
L_102c63a4: ;
    if (rd8(arg2 + 1u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 1u);
        goto L_102c63dd;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 1u);
    if ((uint8_t)eax > 0x7au) goto L_102c63dd;
    if ((uint8_t)eax <= 0x5au) goto L_102c63b7;
    if ((uint8_t)eax < 0x61u) goto L_102c63dd;
L_102c63b7: ;
    if (rd8(arg2 + 2u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 2u);
        goto L_102c63dd;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 2u);
    if ((uint8_t)eax > 0x7au) goto L_102c63dd;
    if ((uint8_t)eax <= 0x5au) goto L_102c63ca;
    if ((uint8_t)eax < 0x61u) goto L_102c63dd;
L_102c63ca: ;
    if (rd8(arg2 + 3u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 3u);
        goto L_102c63dd;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 3u);
    if ((uint8_t)eax > 0x7au) goto L_102c63dd;
    if ((uint8_t)eax <= 0x5au) goto L_102c63ed;
    if ((uint8_t)eax >= 0x61u) goto L_102c63ed;
L_102c63dd: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102bca45u), 2, arg1, COW_IMG(0x103c9484u));
L_102c63ed: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c638c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c638c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
