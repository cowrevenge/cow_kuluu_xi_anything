/* f_0x1012d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012d7f0(Guest* g)
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x138u);
    wr8(self + 0x14u, 1u);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x101c5e50u), in_eax, t1, g->edx, 0, 1, 0u);
    t3 = g->ecx;
    eax = t2;
    ecx = t3;
    edx = self + 0x16u;
L_1012d809: ;
    t4 = rd8(eax);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        edx = edx + 1u;
        goto L_1012d809;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    t5 = rd32(self + 0x13cu);
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t5, g->edx, 0, 1, 0u);
    t7 = g->ecx;
    eax = t6;
    ecx = t7;
    edx = self + 0x36u;
L_1012d822: ;
    t8 = rd8(eax);
    wr8(edx, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        edx = edx + 1u;
        goto L_1012d822;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    t9 = rd32(self + 0x140u);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t9, g->edx, 0, 1, 0u);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
    edx = self + 0x56u;
L_1012d83b: ;
    t12 = rd8(eax);
    wr8(edx, (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        edx = edx + 1u;
        goto L_1012d83b;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    t13 = rd32(self + 0x144u);
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t13, g->edx, 0, 1, 0u);
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    edx = self + 0x76u;
L_1012d854: ;
    t16 = rd8(eax);
    wr8(edx, (uint8_t)t16);
    if ((uint8_t)t16 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t16;
        edx = edx + 1u;
        goto L_1012d854;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    if (rd32(self + 0x138u) != 0u)
    {
        ecx = rd32(self + 0x138u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t17 = rd32(ecx);
        g->esp = sp0 - 8u;
        t18 = cow_thiscall(g, rd32(t17 + 0xcu), ecx, 1, 1u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    t20 = rd32(self + 0x13cu);
    wr32(self + 0x138u, 0u);
    if (t20 != 0u)
    {
        ecx = t20;
        g->eax = eax;
        g->edx = rd32(ecx);
        t21 = rd32(ecx);
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, rd32(t21 + 0xcu), ecx, 1, 1u);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    t24 = rd32(self + 0x140u);
    wr32(self + 0x13cu, 0u);
    if (t24 != 0u)
    {
        ecx = t24;
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 8u;
        t26 = cow_thiscall(g, rd32(t25 + 0xcu), ecx, 1, 1u);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
    t28 = rd32(self + 0x144u);
    wr32(self + 0x140u, 0u);
    if (t28 != 0u)
    {
        ecx = t28;
        g->eax = eax;
        g->edx = rd32(ecx);
        t29 = rd32(ecx);
        g->esp = sp0 - 8u;
        t30 = cow_thiscall(g, rd32(t29 + 0xcu), ecx, 1, 1u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    wr32(self + 0x144u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012d7f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
