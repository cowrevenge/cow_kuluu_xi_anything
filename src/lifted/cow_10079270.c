/* f_0x10079270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079270(Guest* g)
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        goto L_100792e0;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100792bc;
    }
    eax = eax - 1u;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xaau);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = rd32(COW_IMG(0x10578158u));
        edx = t7;
        goto L_100792ad;
    }
    eax = t6;
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t7;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x10bu);
    t8 = g->edx;
    g->edx = t8;
    return arg3;
L_100792ad: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x10cu);
    t9 = g->edx;
    g->edx = t9;
    return arg3;
L_100792bc: ;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xaau, 0u);
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x10eu);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_100792e0: ;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xaau, 1u);
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x10du);
    t15 = g->edx;
    g->edx = t15;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
