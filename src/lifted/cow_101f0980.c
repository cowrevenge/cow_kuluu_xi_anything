/* f_0x101f0980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101f0980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f09e8;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_101f09da;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101f0a0c;
    }
    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u) goto L_101f09bf;
    eax = rd32(COW_IMG(0x10663740u));
    t1 = rd32(rd32(COW_IMG(0x1066374cu)) + 8u);
    g->eax = eax;
    g->esp = sp0;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10037e90u), t3, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101f09bf: ;
    t7 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    g->eax = rd32(COW_IMG(0x10663748u));
    t8 = rd32(COW_IMG(0x10663748u));
    g->esp = sp0;
    t9 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t7, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10037e90u), t10, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101f09da: ;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101f09e8: ;
    wr32(rd32(COW_IMG(0x10663744u)) + 0x14u, arg4);
    g->edx = arg4;
    t16 = rd32(COW_IMG(0x10663744u));
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103820e4u), 1u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_101f0a0c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0980(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
