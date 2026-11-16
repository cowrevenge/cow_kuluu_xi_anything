/* f_0x101e2ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101e2ac0(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101e2af9;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101e2b08;
    }
    t1 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1015e790u), rd32(COW_IMG(0x10663740u)), COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t2 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
    g->edx = rd32(COW_IMG(0x10578170u));
    t3 = rd32(COW_IMG(0x10578170u));
    t4 = cow_call_regs(g, COW_IMG(0x1015e530u), t2, COW_IMG(0x10621838u), g->edx, 0, 1, t2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101e2af9: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->ecx = self;
    g->edx = arg4;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x101e2a60u), 1, arg4);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10037b90u), t7, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101e2b08: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2ac0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
