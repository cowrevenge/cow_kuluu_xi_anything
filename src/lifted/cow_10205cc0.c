/* f_0x10205cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10205cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10205ce3;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10205d20;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385400u));
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10205ce3: ;
    if ((int16_t)arg2 > 0) goto L_10205cf6;
    if ((int16_t)arg2 < 9) goto L_10205cf6;
    eax = 0u;
L_10205cf7: ;
    wr32(self + 0x14u, (uint32_t)(int16_t)eax);
    if ((uint32_t)(int16_t)eax != 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (uint32_t)(int16_t)eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    t5 = rd32(self + 0x14u);
    g->eax = t5;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10038070u), 1, t5);
    t7 = g->edx;
    t8 = rd32(self + 0x14u);
    g->edx = t7;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), t6, g->ecx, g->edx, 1, 2, 0xc7u, t8);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_10205d20: ;
    g->edx = edx;
    return eax;
L_10205cf6: ;
    eax = arg2 - 1u;
    goto L_10205cf7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205cc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
