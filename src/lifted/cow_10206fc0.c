/* f_0x10206fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206fc0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 6u) goto L_10207006;
    g->eax = rd32(COW_IMG(0x10664420u));
    t1 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t1);
    t3 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t4 = cow_call_regs(g, COW_IMG(0x101f7080u), t2, rd32(COW_IMG(0x10663740u)), t3, 0, 2, t3, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10206ff4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10207003: ;
    g->edx = edx;
    return eax;
L_10207006: ;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_10207003;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1020702e;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_10206ff4;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x10206a50u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1020702e: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10206830u), g->eax, g->ecx, in_edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206fc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
