/* f_0x10103920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10103920(Guest* g)
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
    uint32_t t2;
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

    if (rd32(COW_IMG(0x104e0af4u)) != 0u) goto L_1010392c;
    eax = rd32(COW_IMG(0x104e0af4u));
    return eax & 0xffffff00u;
L_1010392c: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x100dbeb0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_10103947;
    }
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x100dbca0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_10103947;
    }
    ecx = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x100dc2c0u), 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 1u)
    {
        edx = t8;
        goto L_1010394a;
    }
    eax = t7;
L_10103947: ;
    return eax & 0xffffff00u;
L_1010394a: ;
    t9 = rd32(rd32(COW_IMG(0x104df770u)) + 0x1369cu);
    g->edx = edx;
    t10 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x100e0d50u), t10, t9, g->edx, 1, 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    cow_call_regs(g, COW_IMG(0x10115020u), t11, g->ecx, t13, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = cow_stdcall(g, COW_IMG(0x100f7700u), 0);
    return (t16 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
