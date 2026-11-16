/* f_0x10244ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10244ec0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10244efe;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10244ed3;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_10244f2d;
    }
L_10244ed3: ;
    t1 = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
    g->eax = rd32(COW_IMG(0x10669080u));
    t2 = rd32(COW_IMG(0x10669080u));
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = rd32(COW_IMG(0x10669078u));
    wr32(t7 + 0x2cu, 0x11u);
    g->edx = t7;
    return t6;
L_10244efe: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_10244f31;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_10244f2d;
    }
    eax = (uint32_t)(int16_t)arg2 - 2u;
    esi = 1u;
L_10244f0e: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388888u), 1u, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10245050u), rd32(COW_IMG(0x10669088u)), 1, esi);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10244f2d: ;
    g->edx = edx;
    return eax;
L_10244f31: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    esi = 0u;
    goto L_10244f0e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10244ec0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
