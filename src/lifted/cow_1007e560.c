/* f_0x1007e560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007e560(Guest* g)
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1007e575;
    }
    edx = t3;
    g->edx = edx;
    return -arg3;
L_1007e575: ;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100f9680u), 1, t4);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        edx = t6;
        goto L_1007e58e;
    }
    edx = t6;
    g->edx = edx;
    return -arg3;
L_1007e58e: ;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = edx;
    t7 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x100f9600u), 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1007e5b8;
    }
    edx = t10;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xbcu);
    t11 = g->edx;
    g->edx = t11;
    return -arg3;
L_1007e5b8: ;
    g->ecx = ecx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x44u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        edx = t14;
        goto L_1007e61d;
    }
    ecx = t13;
    edx = t14;
    g->edx = edx;
    t15 = rd32(COW_IMG(0x105782b4u));
    g->esp = sp0 - 4u;
    t16 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t17 = g->edx;
    if (rd32(t15 + 0x18u) < t16)
    {
        eax = t16;
        edx = t17;
        goto L_1007e5e3;
    }
    edx = t17;
    g->edx = edx;
    return -arg3;
L_1007e5e3: ;
    g->edx = edx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10160c80u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1007e5f8;
    }
    edx = t20;
    g->edx = edx;
    return -arg3;
L_1007e5f8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        ecx = t22;
        edx = t23;
        goto L_1007e613;
    }
    edx = t23;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 6u);
    t24 = g->edx;
    g->edx = t24;
    return arg3;
L_1007e613: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100f7fa0u), 1, 0xdu);
    t25 = g->edx;
    edx = t25;
L_1007e61d: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007e560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007e560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
