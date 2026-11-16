/* f_0x1021d2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021d2d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1021d270u), self, 0);
    t2 = g->edx;
    if ((uint16_t)arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1021d319;
    }
    eax = t1;
    edx = t2;
    if ((uint16_t)arg1 != 0xffffu) goto L_1021d302;
    wr16(self + 0x14u, (uint16_t)arg1);
    wr32(self + 4u, 9u);
    wr8(self + 0x10u, (uint8_t)arg2);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1021d302: ;
    g->eax = (uint16_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)arg1);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1021d320;
    }
    eax = t3;
    edx = t4;
L_1021d319: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1021d320: ;
    t5 = rd16(eax + 4u);
    wr8(eax + 0x1b3u, (uint8_t)(rd8(eax + 0x1b3u) + 1u));
    wr32(self + 4u, t5);
    t6 = rd16(eax + 0x14u);
    wr32(self + 8u, t6);
    t7 = rd16(eax + 0x1cu);
    wr32(self + 0xcu, t7);
    t8 = rd8(eax + 0x2du);
    wr8(self + 0x11u, (uint8_t)t8);
    t9 = rd16(eax + 8u);
    wr16(self + 0x12u, (uint16_t)t9);
    t10 = rd16(eax + 0xau);
    wr16(self + 0x16u, (uint16_t)t10);
    wr8(eax + 0x1b3u, (uint8_t)(rd8(eax + 0x1b3u) - 1u));
    wr16(self + 0x14u, (uint16_t)arg1);
    wr8(self + 0x10u, (uint8_t)arg2);
    g->edx = ((t6 | t8) & 0xffff0000u) | t10;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021d2d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
