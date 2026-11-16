/* f_0x10244620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10244620(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
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

    if (arg2 != 0x550u)
    {
        ecx = rd32(arg1);
        goto L_10244659;
    }
    ecx = rd32(arg1);
    t1 = rd32(arg1 + 4u);
    g->eax = t1;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1000d230u), 2, ecx, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 4u, t4);
    t5 = rd32(arg1 + 0xcu);
    wr32(arg1, t2);
    t6 = rd32(arg1 + 8u);
    g->eax = t6;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x1000d230u), 2, t6, t5);
    t8 = g->edx;
    wr32(arg1 + 8u, t7);
    wr32(arg1 + 0xcu, t8);
    return;
L_10244659: ;
    g->eax = arg2;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, ecx);
    t10 = g->ecx;
    t11 = rd32(arg1 + 4u);
    wr32(arg1, t9);
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t11);
    wr32(arg1 + 4u, t12);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10244620(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
