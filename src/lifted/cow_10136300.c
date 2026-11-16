/* f_0x10136300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10136300(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10136324;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1013635c;
    }
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10136324: ;
    g->ecx = self;
    g->edx = rd32(COW_IMG(0x10663740u));
    t4 = rd32(COW_IMG(0x10663740u));
    t5 = rd32(COW_IMG(0x105781c8u));
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x10136250u), 1, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x101356c0u), 3, t6, t4, t5);
    t10 = g->edx;
    t11 = rd32(self + 8u);
    g->edx = t10;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_1013635c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136300(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
