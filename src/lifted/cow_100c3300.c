/* f_0x100c3300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_100c3300(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x100c3020u), in_eax, t1, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x10086fc0u), (uint16_t)t2, g->ecx, g->edx, 1, 1, (uint16_t)t2);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        edx = t6;
        esi = t1;
        t9 = rd16(COW_IMG(0x10485f7au));
        wr16(sp0 + 8u, (uint16_t)t9);
        eax = (eax & 0xffff0000u) | t9;
        ebx = rd32(sp0 + 8u);
    }
    else
    {
        eax = t5;
        edx = t6;
        esi = t1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x100c3020u), eax, esi, g->edx, 1, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        ebx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x100c3030u), eax, esi, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10086fc0u), (uint16_t)t10, g->ecx, g->edx, 1, 1, (uint16_t)t10);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 1u)
    {
        ecx = t14;
        edx = t15;
        t19 = rd16(COW_IMG(0x10485f7au));
        wr16(sp0 + 8u, (uint16_t)t19);
        ecx = (ecx & 0xffff0000u) | t19;
        edi = rd32(sp0 + 8u);
    }
    else
    {
        eax = t13;
        edx = t15;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t16 = cow_call_regs(g, COW_IMG(0x100c3030u), eax, esi, g->edx, 1, 0);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
        edi = t16;
    }
    g->esp = sp0 - 8u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x64u, in_edi, in_esi);
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
        goto L_100c33b1;
    }
    eax = t20;
    g->esi = esi;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x100c3060u), eax, 8, arg1, esi, arg3, arg4, arg5, edi, ebx, arg6);
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x100c3260u), self, 1, t22);
    t25 = g->edx;
    g->esi = in_esi;
    g->edx = t25;
    return t24;
L_100c33b1: ;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x100c3260u), self, 1, 0u);
    t27 = g->edx;
    g->esi = in_esi;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3300(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
