/* f_0x10149750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10149750(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 5u) goto L_101497f3;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10149070u), self, 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        goto L_10149771;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10149771: ;
    if (rd8(self + 0x50u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x50u);
        goto L_10149792;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10149070u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10149040u), self, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037b90u), t6, 0);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_10149792: ;
    if (rd8(self + 0x52u) == 0u) goto L_101497d8;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101490c0u), self, 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t11;
        goto L_101497ba;
    }
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10149130u), self, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        edx = t14;
        goto L_101497ba;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15 & 0xffffff00u;
L_101497ba: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371998u), 1u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    t21 = g->edx;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_101497d8: ;
    g->edx = edx;
    t22 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10129e30u), t22, 1, 0xb2u);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x10037c50u), t24, 0);
    t27 = g->edx;
    g->edx = t27;
    return t26 & 0xffffff00u;
L_101497f3: ;
    if ((uint16_t)arg1 != 6u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_1014981f;
    }
    if (rd8(self + 0x50u) != 0u)
    {
        eax = (((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u) | rd8(self + 0x50u);
        goto L_10149816;
    }
    t28 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t29 = cow_call_regs(g, COW_IMG(0x1015e790u), t28, COW_IMG(0x10621838u), g->edx, 0, 2, t28, 1u);
    t30 = g->edx;
    g->edx = t30;
    return t29 & 0xffffff00u;
L_10149816: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x10149040u), self, 1, 0u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
L_1014981f: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149750(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
