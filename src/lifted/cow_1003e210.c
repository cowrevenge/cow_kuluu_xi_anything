/* f_0x1003e210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1003e210(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t edx;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_cf = g->cf;
    const uint32_t in_of = g->of;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 2u);
    eax = (in_eax & 0xffffff00u) | t1;
    edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    cf = in_cf;
    of = in_of;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(self + 2u, (uint8_t)eax);
    t2 = rd8(self + 1u);
    eax = (eax & 0xffffff00u) | t2;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(self + 1u, (uint8_t)eax);
    t3 = rd8(self);
    eax = (eax & 0xffffff00u) | t3;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(self, (uint8_t)eax);
    t4 = rd8(self + 3u);
    eax = (eax & 0xffffff00u) | t4;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(self + 3u, (uint8_t)eax);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e210(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
