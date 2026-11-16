/* f_0x101b9880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_101b9880(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self, COW_IMG(0x10337b20u));
    wr32(self + 4u, arg1);
    ecx = arg1;
    edx = arg2;
L_101b9899: ;
    t1 = rd8(edx);
    wr8(edx + self - arg2 + 8u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        ecx = (ecx & 0xffffff00u) | t1;
        edx = edx + 1u;
        goto L_101b9899;
    }
    wr32(self + 0x108u, arg3);
    wr32(self + 0x10cu, arg4);
    wr32(self + 0x110u, arg5);
    wr32(self + 0x114u, 0u);
    wr32(self + 0x118u, arg6);
    wr8(self + 0x11cu, (uint8_t)arg7);
    g->edx = (arg5 & 0xffffff00u) | (uint8_t)arg7;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b9880(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
