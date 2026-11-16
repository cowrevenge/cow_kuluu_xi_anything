/* f_0x1029b960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029b960(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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

    if (rd32(arg1) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1);
        g->edx = in_edx;
        t1 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t1 + 8u), t1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if (rd32(arg1 + 4u) != 0u)
    {
        eax = rd32(arg1 + 4u);
        g->edx = rd32(eax);
        t4 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t4 + 8u), ecx, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    ebx = 2u;
    esi = arg1 + 8u;
L_1029b988: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        g->edx = edx;
        t7 = rd32(eax);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t7 + 8u), t7, 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_1029b988;
    }
    if (rd32(arg1 + 0x10u) != 0u)
    {
        eax = rd32(arg1 + 0x10u);
        g->edx = rd32(eax);
        t10 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t10 + 8u), ecx, 1, eax);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    if (rd32(arg1 + 0x14u) != 0u)
    {
        eax = rd32(arg1 + 0x14u);
        g->edx = edx;
        t13 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t13 + 8u), t13, 1, eax);
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        g->edx = rd32(eax);
        t16 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t16 + 8u), ecx, 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    if (rd32(arg1 + 0x24u) != 0u)
    {
        eax = rd32(arg1 + 0x24u);
        g->edx = edx;
        t19 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t19 + 8u), t19, 1, eax);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x103bc70cu), 0x91u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029b960(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
