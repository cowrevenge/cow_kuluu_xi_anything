/* f_0x101ed730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101ed730(Guest* g)
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101ed763;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101ed806;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210840u), rd32(COW_IMG(0x10664508u)), 0);
    t1 = g->edx;
    t2 = rd32(self + 8u);
    g->edx = t1;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101ed763: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101ed7c3;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_101ed806;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 > 0)
    {
        eax = t5;
        goto L_101ed7ad;
    }
    ecx = t6;
    edx = t7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x100eb0b0u), 1, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101ed7a4;
    }
    eax = t8;
    edx = t10;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), edx, 1, rd32(COW_IMG(0x106636b4u)));
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_101ed7a4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_101ed7ad: ;
    g->eax = eax;
    t13 = rd32(COW_IMG(0x106636b4u));
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), t13, 1, t13);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101ed7c3: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 > 0)
    {
        eax = t16;
        edx = t18;
        goto L_101ed7f4;
    }
    ecx = t17;
    edx = t18;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_cdecl(g, COW_IMG(0x100eb0b0u), 1, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 != 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101ed7a4;
    }
    edx = t21;
    g->eax = rd32(COW_IMG(0x106636b0u));
    t22 = rd32(COW_IMG(0x106636b0u));
    g->esp = sp0 - 4u;
    t23 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), edx, 1, t22);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_101ed7f4: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t27 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), edx, 1, rd32(COW_IMG(0x106636b0u)));
    t28 = g->edx;
    eax = t27;
    edx = t28;
L_101ed806: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
