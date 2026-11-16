/* f_0x10013df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10013df0(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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

    if ((uint32_t)(int16_t)rd16(self + 4u) > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_10013eef;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    t1 = rd32(COW_IMG(0x10013ef4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10013e07u: goto L_10013e07;
    case 0x10013e50u: goto L_10013e50;
    case 0x10013e6au: goto L_10013e6a;
    case 0x10013e85u: goto L_10013e85;
    case 0x10013e9fu: goto L_10013e9f;
    case 0x10013ebau: goto L_10013eba;
    case 0x10013ed4u: goto L_10013ed4;
    default: rt_fatal(g, COW_IMG(0x10013e00u), "switch");
    }
    return 0;
L_10013e07: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_stdcall(g, COW_IMG(0x10010370u), 0);
    t18 = g->edx;
    g->edx = t18;
    cow_call_regs(g, COW_IMG(0x10239480u), t17, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t21 = g->edx;
    g->edx = t21;
    t22 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, COW_IMG(0x10009640u), t22, 4, 3u, 0x80000000u, 0x3f800000u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x10093720u), 0);
    t26 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t26;
        goto L_10013ec9;
    }
    eax = t25;
    return eax;
L_10013e50: ;
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 6u, 0u);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t16 & 0xffffff00u;
L_10013e6a: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t12 = g->edx;
    if (t11 != 6u)
    {
        eax = t11;
        goto L_10013ee4;
    }
    eax = t11;
    edx = t12;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t13 & 0xffffff00u;
L_10013e85: ;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 7u, 0u);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t10 & 0xffffff00u;
L_10013e9f: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t6 = g->edx;
    if (t5 != 7u)
    {
        eax = t5;
        goto L_10013ee4;
    }
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t7 & 0xffffff00u;
L_10013eba: ;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 9u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_10013ec9: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t27 & 0xffffff00u;
L_10013ed4: ;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    if (t2 == 9u)
    {
        eax = t2;
        goto L_10013eef;
    }
    eax = t2;
L_10013ee4: ;
    if ((int32_t)eax > 200) goto L_10013eef;
    return eax & 0xffffff00u;
L_10013eef: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10013df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10013df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
