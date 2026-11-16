/* f_0x10252040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10252040(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = arg2 + rd32(arg1 + 0x2cu);
    t2 = rd32(arg1 + 0x2cu);
    wr32(arg1 + 0x2cu, t1);
    if ((int32_t)(arg2 + t2) >= 0)
    {
        eax = t1;
        goto L_1025206d;
    }
    eax = t1;
    t3 = eax + rd32(arg1 + 0x14u);
    wr32(arg1 + 0x14u, t3);
    wr32(arg1 + 0x2cu, 0u);
    if ((int32_t)t3 >= 0) goto L_102520bc;
    wr32(arg1 + 0x14u, 0u);
    return;
L_1025206d: ;
    if ((int32_t)eax >= (int32_t)rd32(arg1 + 0x30u))
    {
        ecx = rd32(arg1 + 0x30u);
        t4 = eax + rd32(arg1 + 0x14u) - ecx + 1u;
        wr32(arg1 + 0x14u, t4);
        t5 = ecx + rd32(arg1 + 0x14u) - 1u;
        t6 = rd32(arg1 + 0xcu);
        wr32(arg1 + 0x2cu, ecx - 1u);
        g->eax = t5;
        g->ecx = t6;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x102520c0u), 2, t6, t5);
        t8 = g->ecx;
        if (t7 != 0u) goto L_102520bc;
        ecx = t8;
L_1025209d: ;
        t9 = rd32(arg1 + 0x14u) - 1u;
        t10 = rd32(arg1 + 0x30u);
        wr32(arg1 + 0x14u, t9);
        t11 = t10 + t9 - 1u;
        t12 = rd32(arg1 + 0xcu);
        g->eax = t12;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t13 = cow_cdecl(g, COW_IMG(0x102520c0u), 2, t12, t11);
        t14 = g->ecx;
        if (t13 == 0u)
        {
            ecx = t14;
            goto L_1025209d;
        }
    }
L_102520bc: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10252040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
