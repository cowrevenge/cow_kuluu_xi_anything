/* f_0x101b9230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b9230(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr8(self + 1u, 0u);
    wr8(self + 2u, 0u);
    wr8(self + 3u, 0u);
    wr8(self + 4u, 0u);
    ecx = self + 0xau;
    edx = 0xcu;
L_101b9249: ;
    wr8(ecx - 2u, 0u);
    wr8(ecx - 1u, 0u);
    wr8(ecx, 0u);
    wr8(ecx + 1u, 0u);
    if (edx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_101b9249;
    }
    wr32(self + 0x38u, 0u);
    ecx = self + 0x42u;
    edx = 0xcu;
L_101b9265: ;
    wr8(ecx - 2u, 0u);
    wr8(ecx - 1u, 0u);
    wr8(ecx, 0u);
    wr8(ecx + 1u, 0u);
    if (edx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_101b9265;
    }
    wr32(self + 0x70u, 0u);
    ecx = self + 0x76u;
    edx = 0xcu;
L_101b9281: ;
    wr8(ecx - 2u, 0u);
    wr8(ecx - 1u, 0u);
    wr8(ecx, 0u);
    wr8(ecx + 1u, 0u);
    if (edx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_101b9281;
    }
    edx = edx - 1u;
    wr32(self + 0xa4u, 0u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101a1400u), self + 0xa8u, 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b9230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
