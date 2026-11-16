/* f_0x102300c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102300c0(Guest* g)
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

    if (rd32(self + 0x64u) == 0u) goto L_10230122;
    eax = rd32(self + 0x64u);
    if (eax != 1u) goto L_10230149;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_102300ee;
    if ((uint32_t)(int16_t)arg1 == 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10230139;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    return;
L_102300ee: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10221c30u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103869d0u), 1u, 0u);
    t6 = rd32(self + 0x30u);
    cow_thiscall(g, COW_IMG(0x10230740u), rd32(COW_IMG(0x10668ed0u)), 1, t6);
    return;
L_10230122: ;
    if ((uint16_t)arg1 != 6u) goto L_10230149;
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = in_edx;
    t7 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10221300u), t7 + 0x20u, 1, 1u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_10230139: ;
    t10 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
L_10230149: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102300c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102300c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
