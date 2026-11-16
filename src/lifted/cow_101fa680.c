/* f_0x101fa680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101fa680(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u) goto L_101fa6c3;
    if (arg3 == 1u) goto L_101fa6aa;
    if (arg3 != 2u) goto L_101fa6e5;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10098100u), 1, COW_IMG(0x101fa7c0u));
    if ((uint8_t)t1 == 0u) goto L_101fa6e5;
    wr8(COW_IMG(0x106637a9u), 0u);
    return;
L_101fa6aa: ;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100980c0u), 1, COW_IMG(0x101fa6f0u));
    if ((uint8_t)t2 == 0u) goto L_101fa6e5;
    wr8(COW_IMG(0x106637a8u), 0u);
    return;
L_101fa6c3: ;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10098080u), 2, COW_IMG(0x101fa6f0u), COW_IMG(0x101fa7c0u));
    if ((uint8_t)t3 != 0u)
    {
        wr8(COW_IMG(0x106637a8u), 0u);
        wr8(COW_IMG(0x106637a9u), 0u);
    }
L_101fa6e5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fa680(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
