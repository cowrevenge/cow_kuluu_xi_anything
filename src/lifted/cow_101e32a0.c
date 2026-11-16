/* f_0x101e32a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e32a0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101e32cf;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_101e32b2;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101e331d;
    }
L_101e32b2: ;
    t1 = rd32(rd32(COW_IMG(0x106634c4u)) + 8u);
    g->eax = rd32(COW_IMG(0x106634c4u));
    t2 = rd32(COW_IMG(0x106634c4u));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101e32cf: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101e32fd;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_101e331d;
    }
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x101e3250u), 0);
    t8 = rd32(rd32(COW_IMG(0x106634c4u)) + 8u);
    g->eax = t8;
    t9 = rd32(COW_IMG(0x106634c4u));
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t8, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037b90u), t11, 0);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101e32fd: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t15 = cow_stdcall(g, COW_IMG(0x101e3200u), 0);
    t16 = rd32(rd32(COW_IMG(0x106634c4u)) + 8u);
    t17 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t16, 2, t16, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_101e331d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e32a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e32a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
