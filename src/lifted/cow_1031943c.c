/* f_0x1031943c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1031943c(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg2 + 4u, rd32(arg2 + 4u) - 1u);
    if ((int32_t)(rd32(arg2 + 4u) - 1u) < 0)
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x10318b86u), 2, arg1, arg2);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    else
    {
        t1 = rd32(arg2);
        wr8(t1, (uint8_t)arg1);
        wr32(arg2, rd32(arg2) + 1u);
        eax = (uint8_t)arg1;
        edx = t1;
    }
    if (eax != 0xffffffffu) goto L_1031946d;
    wr32(arg3, 0xffffffffu);
    g->edx = edx;
    return;
L_1031946d: ;
    wr32(arg3, rd32(arg3) + 1u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031943c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031943c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
