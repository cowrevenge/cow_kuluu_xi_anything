/* f_0x10205070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10205070(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t edx;
    unsigned of;
    int64_t q6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x106643f8u), rd32(arg1));
    t1 = rd32(arg1 + 4u);
    t2 = rd32(COW_IMG(0x106643a8u));
    wr32(COW_IMG(0x106643fcu), t1);
    t3 = rd32(arg1 + 4u);
    g->edx = t1;
    t4 = cow_stdcall(g, COW_IMG(0x10203540u), 1, t3);
    t5 = g->edx;
    q6 = (int64_t)cow_muls(0x2aaaaaabu, t4);
    eax = cow_qhi(q6) + (cow_qhi(q6) >> 0x1fu);
    edx = (cow_qhi(q6) & 0xffffff00u) | 6u;
    cf = cow_qhi(q6) + (cow_qhi(q6) >> 0x1fu) < cow_qhi(q6);
    of = ((cow_qhi(q6) ^ cow_qhi(q6) + (cow_qhi(q6) >> 0x1fu)) & (cow_qhi(q6) >> 0x1fu ^ cow_qhi(q6) + (cow_qhi(q6) >> 0x1fu))) >> 0x1fu;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(COW_IMG(0x106643f6u), (uint8_t)eax);
    wr8(COW_IMG(0x106643f5u), (uint8_t)((uint8_t)eax + (uint8_t)edx));
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + (uint8_t)edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
