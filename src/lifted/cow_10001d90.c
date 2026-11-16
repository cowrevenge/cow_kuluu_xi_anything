/* f_0x10001d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10001d90(Guest* g)
{
    uint32_t edx;
    int64_t q3;
    int64_t q6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_10001dd8;
    }
    edx = t2;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    q3 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)arg1);
    t4 = (uint32_t)((int32_t)(cow_qhi(q3) + (uint32_t)(int16_t)arg1) >> 6u);
    t5 = t4 + (t4 >> 0x1fu);
    wr32(sp0 - 0xcu, t5);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10124640u), t4 >> 0x1fu, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, t5);
    return;
L_10001dd8: ;
    q6 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)arg1);
    t7 = (uint32_t)((int32_t)(cow_qhi(q6) + (uint32_t)(int16_t)arg1) >> 6u);
    t8 = t7 + (t7 >> 0x1fu);
    wr32(sp0 - 0xcu, t8);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1025e230u), 1, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10001d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
