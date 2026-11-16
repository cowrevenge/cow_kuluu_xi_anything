/* f_0x100a36f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100a36f0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 < 0xcu)
    {
        eax = arg1;
    }
    else
    {
        eax = 0u;
    }
    if (arg3 != 0u)
    {
        wr32(arg3, 0x80808080u);
        if (eax == 0u)
        {
            wr32(arg3, 0x80803040u);
        }
    }
    if ((uint8_t)arg2 != 0u) goto L_100a372c;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, eax + 0x192u);
    return;
L_100a372c: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, eax + 0x1a2u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a36f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a36f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
