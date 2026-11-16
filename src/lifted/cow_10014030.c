/* f_0x10014030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10014030(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(self + 4u) > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_100140fa;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    t1 = rd32(COW_IMG(0x10014100u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10014047u: goto L_10014047;
    case 0x10014090u: goto L_10014090;
    case 0x100140aau: goto L_100140aa;
    case 0x100140c5u: goto L_100140c5;
    case 0x100140d4u: edx = in_edx; goto L_100140d4;
    case 0x100140dfu: goto L_100140df;
    default: rt_fatal(g, COW_IMG(0x10014040u), "switch");
    }
    return 0;
L_10014047: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x10010370u), 0);
    t12 = g->edx;
    g->edx = t12;
    cow_call_regs(g, COW_IMG(0x10239480u), t11, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    t16 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, COW_IMG(0x10009640u), t16, 4, 3u, 0x80000000u, 0x3f800000u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x10093720u), 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        edx = t20;
        goto L_100140d4;
    }
    eax = t19;
    return eax;
L_10014090: ;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 8u, 0u);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t10 & 0xffffff00u;
L_100140aa: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t6 = g->edx;
    if (t5 != 8u)
    {
        eax = t5;
        goto L_100140ef;
    }
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t7 & 0xffffff00u;
L_100140c5: ;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 9u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_100140d4: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t21 & 0xffffff00u;
L_100140df: ;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    if (t2 == 9u)
    {
        eax = t2;
        goto L_100140fa;
    }
    eax = t2;
L_100140ef: ;
    if ((int32_t)eax > 200) goto L_100140fa;
    return eax & 0xffffff00u;
L_100140fa: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
