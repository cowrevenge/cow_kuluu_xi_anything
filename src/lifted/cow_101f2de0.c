/* f_0x101f2de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f2de0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    wr32(self + 0x14u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101f2e6f;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t3, 1, rd16(eax));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_101f2e6f;
    }
    ecx = t5;
    edx = t6;
    edi = t4;
    if (rd32(edi + 0x14b4u) != 0u)
    {
        eax = rd32(edi + 0x14b4u);
        goto L_101f2e32;
    }
    eax = rd32(edi + 0x14b4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101f2e32: ;
    if (rd16(eax) == 8u) goto L_101f2e7b;
    eax = (eax & 0xffff0000u) | rd16(eax);
    if ((uint16_t)eax == 0x16u) goto L_101f2e7b;
    if ((uint16_t)eax == 0x17u) goto L_101f2e7b;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1015b6c0u), edi, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_101f2e7b;
    }
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1015b6f0u), edi, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t16;
        goto L_101f2e6f;
    }
    ecx = t15;
    t17 = rd32(self + 0x14u);
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, t17, 1, 3, t17, 0u, in_edi);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        ecx = t19;
        edx = t20;
        goto L_101f2e7b;
    }
    eax = t18;
    edx = t20;
L_101f2e6f: ;
    g->edx = edx;
    t21 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118b60u), t21, 2, 5u, 1u);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
L_101f2e7b: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_101f2e90;
    }
    eax = rd32(self + 0x14u);
    if (rd8(eax + 8u) != 0u) goto L_101f2e90;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
    if (rd16(eax) != 0xffffu) goto L_101f2e9c;
L_101f2e90: ;
    g->edx = edx;
    t24 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118b60u), t24, 2, 5u, 2u);
    t25 = g->ecx;
    t26 = g->edx;
    ecx = t25;
    edx = t26;
L_101f2e9c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        eax = t27;
        edx = t28;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t29 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f2de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
