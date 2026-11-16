/* f_0x102767c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102767c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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

    ecx = self;
    edx = in_edx;
    ebx = 2u;
    esi = arg1 + 0x934u;
L_102767d5: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b2e54u), 0x11bu);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(esi, 0u);
        wr32(esi + 0x10u, 0u);
        ecx = t1;
        edx = t2;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_102767d5;
    }
    if (rd32(arg1 + 0x93cu) != 0u)
    {
        eax = rd32(arg1 + 0x93cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b2e54u), 0x121u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(arg1 + 0x93cu, 0u);
        wr32(arg1 + 0x94cu, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(arg1 + 0x13cu) != 0u)
    {
        eax = rd32(arg1 + 0x13cu);
        g->edx = edx;
        t5 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t5 + 8u), t5, 1, eax);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(arg1 + 0x144u, 0u);
        ecx = t6;
        edx = t7;
    }
    if (rd32(arg1 + 0x8fcu) != 0u)
    {
        eax = rd32(arg1 + 0x8fcu);
        g->edx = rd32(eax);
        t8 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t8 + 8u), ecx, 1, eax);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    if (rd32(arg1 + 0x900u) != 0u)
    {
        eax = rd32(arg1 + 0x900u);
        g->edx = edx;
        t11 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t11 + 8u), t11, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    if (rd32(arg1 + 0x958u) != 0u)
    {
        eax = rd32(arg1 + 0x958u);
        g->edx = rd32(eax);
        t14 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t14 + 8u), ecx, 1, eax);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
    }
    if (rd32(arg1 + 0x960u) != 0u)
    {
        eax = rd32(arg1 + 0x960u);
        g->edx = edx;
        t17 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t17 + 8u), t17, 1, eax);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    ebx = 2u;
    esi = arg1 + 0x968u;
L_10276883: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        g->edx = rd32(eax);
        t20 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t20 + 8u), ecx, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_10276883;
    }
    if (rd32(arg1 + 0x978u) != 0u)
    {
        eax = rd32(arg1 + 0x978u);
        g->edx = edx;
        t23 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t23 + 8u), t23, 1, eax);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    if (rd32(arg1 + 0x980u) != 0u)
    {
        eax = rd32(arg1 + 0x980u);
        g->edx = rd32(eax);
        t26 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t26 + 8u), ecx, 1, eax);
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
    }
    if (rd32(arg1 + 0x988u) != 0u)
    {
        eax = rd32(arg1 + 0x988u);
        g->edx = edx;
        t29 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t29 + 8u), t29, 1, eax);
        t30 = g->ecx;
        t31 = g->edx;
        ecx = t30;
        edx = t31;
    }
    if (rd32(arg1 + 0x990u) != 0u)
    {
        eax = rd32(arg1 + 0x990u);
        g->edx = rd32(eax);
        t32 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t32 + 8u), ecx, 1, eax);
        t33 = g->ecx;
        t34 = g->edx;
        ecx = t33;
        edx = t34;
    }
    if (rd32(arg1 + 0x9fcu) == 0u)
    {
        eax = rd32(arg1 + 0x9fcu);
    }
    else
    {
        eax = rd32(arg1 + 0x9fcu);
        g->eax = eax;
        t35 = rd32(eax);
        g->esp = sp0 - 0x10u;
        t36 = cow_thiscall(g, rd32(t35 + 8u), t35, 1, eax);
        t37 = g->ecx;
        eax = t36;
        ecx = t37;
    }
    if (rd32(arg1 + 0xa00u) != 0u)
    {
        edi = rd32(arg1 + 0xa00u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 8u), ecx, 1, edi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102767c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102767c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
