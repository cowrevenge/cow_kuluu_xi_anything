/* f_0x101ebc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101ebc80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x10663684u)) == 0u) goto L_101ebd08;
    ecx = rd32(COW_IMG(0x10663684u));
    if ((uint16_t)arg1 != 5u) goto L_101ebd08;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101ebcfc;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101ebcce;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        goto L_101ebd03;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10382014u), 1u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), t4, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101ebcce: ;
    if (rd32(COW_IMG(0x10663abcu)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        ecx = rd32(COW_IMG(0x10663abcu));
        goto L_101ebd03;
    }
    ecx = rd32(COW_IMG(0x10663abcu));
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10200be0u), ecx, 3, 0u, 0u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101ebd03;
    }
    eax = t8;
    edx = t10;
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x10129e30u), t11, 1, 0x7au);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10037b90u), t13, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101ebcfc: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x101eb660u), ecx, 1, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
L_101ebd03: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_101ebd08: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ebc80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
