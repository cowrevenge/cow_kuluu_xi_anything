/* f_0x1012db00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012db00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x24u, self + 0x16u);
    wr32(sp0 - 0x20u, self + 0x36u);
    wr32(sp0 - 0x1cu, self + 0x56u);
    wr32(sp0 - 0x18u, self + 0x76u);
    wr32(sp0 - 0x14u, self + 0x96u);
    wr32(sp0 - 0x10u, self + 0xb6u);
    wr32(sp0 - 8u, self + 0xf6u);
    wr32(sp0 - 0xcu, self + 0xd6u);
    wr32(sp0 - 4u, 0u);
    eax = COW_IMG(0x103d3c84u);
    ecx = arg1;
    edx = rd32(arg1 * 4u + sp0 - 0x28u) - COW_IMG(0x103d3c84u);
L_1012db5e: ;
    t1 = rd8(eax);
    wr8(eax + edx, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_1012db5e;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012db00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012db00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
