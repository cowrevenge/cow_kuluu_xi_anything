/* f_0x1012ece0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1012ece0(Guest* g)
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1012ecf9;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1012ed41;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1012ef60u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1012ecf9: ;
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) == 9u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 9u;
        goto L_1012ed3a;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 9u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1012ed1f;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1012ed16;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1012ee50u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1012ed16: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1012edd0u), self, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1012ed1f: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t8 = g->edx;
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b4u, 0x15u);
    g->edx = t8;
    return t7;
L_1012ed3a: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1012ed50u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_1012ed41: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ece0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012ece0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
