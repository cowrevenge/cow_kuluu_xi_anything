/* f_0x10080830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10080830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
        goto L_10080843;
    }
    return -arg3;
L_10080843: ;
    if (rd32(COW_IMG(0x1047d490u)) != 1u) goto L_10080865;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101ad820u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1035814cu), t1);
    t4 = g->edx;
    g->edx = t4;
    return arg3;
L_10080865: ;
    t5 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t6 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10077ba0u), t6, t5, in_edx, 1, 2, COW_IMG(0x10357ac8u), t5);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        edx = t9;
        goto L_100808bb;
    }
    ecx = t8;
    esi = t7;
    if (rd8(esi + 5u) != 4u)
    {
        eax = 0u;
        goto L_100808aa;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 5u);
    t10 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t11 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x10077c30u), t10, ecx, g->edx, 1, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 1u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100808c1;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
L_100808aa: ;
    t19 = (uint32_t)(int8_t)rd8(esi + 5u);
    g->edx = t19;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101ad670u), rd32(COW_IMG(0x10662da4u)), 2, t19, eax);
    t20 = g->edx;
    edx = t20;
L_100808bb: ;
    g->edx = edx;
    return arg3;
L_100808c1: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t15, 9u);
    t18 = g->edx;
    g->edx = t18;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
