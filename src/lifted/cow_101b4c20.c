/* f_0x101b4c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b4c20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1c8u) != rd32(self + 0x1c4u))
    {
        eax = rd32(self + 0x1c4u);
        ecx = rd32(self + 0x1c8u);
        goto L_101b4c47;
    }
    eax = rd32(self + 0x1c4u);
    if ((int32_t)(eax + 1u) >= 450) goto L_101b4c93;
    wr8(eax + self, (uint8_t)arg1);
L_101b4c70: ;
    t3 = rd32(self + 0x1c8u) + 1u;
    t4 = rd32(self + 0x1c4u);
    wr32(self + 0x1c8u, t3);
    wr32(self + 0x1c4u, t4 + 1u);
    return 1u;
L_101b4c47: ;
    if ((int32_t)(eax + 1u) >= 450) goto L_101b4c93;
    t1 = ecx + self + 1u;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 3, t1, ecx + self, eax - ecx);
    t2 = g->ecx;
    wr8(self + rd32(self + 0x1c8u), (uint8_t)arg1);
    goto L_101b4c70;
L_101b4c93: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4c20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
