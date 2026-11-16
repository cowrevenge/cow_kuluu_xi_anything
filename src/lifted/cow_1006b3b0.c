/* f_0x1006b3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006b3b0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047c008u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x1047c008u));
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t1 = cow_fastcall(g, COW_IMG(0x1006c270u), esi, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t5 = g->edx;
        wr32(COW_IMG(0x1047c008u), 0u);
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x1047bc94u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bc94u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t6 = rd32(ecx);
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 1, 1u);
        t8 = g->edx;
        wr32(COW_IMG(0x1047bc94u), 0u);
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x1047c000u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047c000u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t9 = rd32(ecx);
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, rd32(t9 + 0x18u), ecx, 1, 1u);
        t11 = g->edx;
        wr32(COW_IMG(0x1047c000u), 0u);
        eax = t10;
        edx = t11;
    }
    if (rd32(COW_IMG(0x1047c004u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047c004u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t12 = rd32(ecx);
        g->esp = sp0 - 8u;
        t13 = cow_thiscall(g, rd32(t12 + 0x18u), ecx, 1, 1u);
        t14 = g->edx;
        wr32(COW_IMG(0x1047c004u), 0u);
        eax = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x1047bff4u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1047bff4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047bff4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t15 = rd32(ecx);
        g->esp = sp0 - 8u;
        t16 = cow_thiscall(g, rd32(t15 + 0x18u), ecx, 1, 1u);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x1047bff4u), 0u);
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x10044490u), g->eax, g->ecx, edx, 1, 0);
    t20 = g->edx;
    if (rd32(COW_IMG(0x1047bff8u)) == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        esi = rd32(COW_IMG(0x1047bff8u));
        g->esp = sp0 - 8u;
        t21 = cow_call_regs(g, COW_IMG(0x1006b0e0u), eax, esi, edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        g->edx = t23;
        t24 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t25 = g->edx;
        wr32(COW_IMG(0x1047bff8u), 0u);
        eax = t24;
        edx = t25;
    }
    if (rd32(COW_IMG(0x1047bfa8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1047bfa8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047bfa8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t26 = rd32(ecx);
        g->esp = sp0 - 8u;
        t27 = cow_thiscall(g, rd32(t26 + 0x18u), ecx, 1, 1u);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(COW_IMG(0x1047bfa8u), 0u);
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10075490u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006b3b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
