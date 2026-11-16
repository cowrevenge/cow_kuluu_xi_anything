/* f_0x101d7510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d7510(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101d75d0u), g->eax, g->ecx, in_edx, 1, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)arg2 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101d7555;
    }
    eax = t1;
    edx = t3;
    if ((int32_t)eax < 0) goto L_101d7559;
    t4 = rd8(arg1 + 0xbu) == 0u;
    t5 = rd8(arg1 + 0xau);
    g->edx = rd32(arg1);
    t6 = rd32(arg1);
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x100dfad0u), eax, g->ecx, g->edx, 1, 4, eax, t5, t6, t4);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101d757c: ;
    wr8(rd32(COW_IMG(0x10663440u)) + 4u, 0u);
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
    }
    t15 = rd32(COW_IMG(0x10664520u));
    t16 = rd32(rd32(COW_IMG(0x10664520u)) + 8u);
    wr8(t15 + 0x3au, 0u);
    wr32(t15 + 0x14u, 0u);
    g->edx = t16;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x1015e790u), t15, COW_IMG(0x10621838u), g->edx, 0, 2, t16, 1u);
    t18 = g->edx;
    t19 = (t17 & 0xffffff00u) | rd8(arg1 + 0xau);
    g->eax = t19;
    g->edx = t18;
    t20 = cow_thiscall(g, COW_IMG(0x101d7600u), rd32(COW_IMG(0x10663444u)), 1, t19);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101d7555: ;
    if ((int32_t)eax >= 0) goto L_101d7566;
L_101d7559: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x6du);
L_101d7566: ;
    t11 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    g->eax = t11;
    t12 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 4u;
    t13 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t12, 2, t11, 0u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    goto L_101d757c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
