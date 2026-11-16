/* f_0x101b4fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101b4fc0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x1c8u) <= 0) goto L_101b5018;
    eax = rd32(self + 0x1c8u);
    if ((int32_t)eax < 2) goto L_101b5012;
    if (rd8(eax + self - 1u) != 0x65u) goto L_101b4feb;
    if (rd8(eax + self - 2u) != 0x85u) goto L_101b4feb;
    wr32(self + 0x1c8u, eax - 2u);
    return;
L_101b4feb: ;
    if ((int32_t)eax < 2) goto L_101b5012;
    t1 = eax + self - 2u;
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, t1);
    if ((uint8_t)t2 != 0u) goto L_101b5012;
    t3 = rd32(self + 0x1c8u) - 2u;
    wr32(self + 0x1c8u, t3);
    return;
L_101b5012: ;
    wr32(self + 0x1c8u, rd32(self + 0x1c8u) - 1u);
L_101b5018: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b4fc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
