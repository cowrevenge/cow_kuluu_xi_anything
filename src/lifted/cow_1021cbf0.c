/* f_0x1021cbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021cbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1021cc50;
    t1 = rd32(self + 0xcu);
    t2 = rd32(sp0 + 4u);
    t3 = rd8(self + rd32(self + 0xcu) * 0x288u + (uint8_t)rd32(sp0 + 4u) * 8u + 0x80au);
    wr8(sp0 + 4u, (uint8_t)t3);
    if ((uint8_t)t3 == 0u) goto L_1021cc50;
    eax = (t1 * 0x51u + (uint8_t)t2 & 0xffffff00u) | t3;
    if ((uint8_t)eax >= 0x51u) goto L_1021cc50;
    if (rd32(self + (uint8_t)rd32(sp0 + 4u) * 4u + 0x1224u) == 0u) goto L_1021cc50;
    eax = (uint8_t)rd32(sp0 + 4u);
    ecx = rd32(self + (uint8_t)rd32(sp0 + 4u) * 4u + 0x1224u);
    esi = self + (uint8_t)rd32(sp0 + 4u) * 4u + 0x1224u;
    g->eax = eax;
    g->edx = rd32(ecx);
    t4 = rd32(ecx);
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(t4), ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u) goto L_1021cc50;
    edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1021bc90u), rd32(esi), 0);
    return t7;
L_1021cc50: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021cbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021cbf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
