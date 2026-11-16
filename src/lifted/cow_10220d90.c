/* f_0x10220d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10220d90(Guest* g)
{
    uint32_t ebp;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg4 > 0)
    {
        ebp = arg4;
        esi = arg1;
L_10220da8: ;
        t1 = arg3 + rd32(esi + 8u);
        t2 = arg2 + rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10129f00u), 5, t2, t1, rd32(esi), 0u, 0x80808080u);
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            esi = esi + 0xcu;
            goto L_10220da8;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10220d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10220d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
