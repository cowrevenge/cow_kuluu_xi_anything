/* f_0x102630d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102630d0(Guest* g)
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
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x20u, in_edi);
    wr32(arg2, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 4u, 0u);
    g->edx = sp0 - 0x10u;
    t1 = rd32(arg1);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(t1 + 0x14u), t1, 2, arg1, sp0 - 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    if (0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 8u, 1u);
    }
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1);
    g->eax = rd32(arg1);
    g->edx = edx;
    t4 = rd32(arg1);
    g->esp = sp0 - 0x20u;
    t5 = cow_thiscall(g, rd32(t4 + 0xcu), ecx, 2, arg1, arg2);
    t6 = g->edx;
    if ((int32_t)t5 < 0)
    {
        edx = t6;
        goto L_10263150;
    }
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, rd32(arg2));
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x20u;
    t8 = cow_thiscall(g, rd32(t7 + 0x3cu), self, 2, rd32(arg2), sp0 - 0x10u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        edx = t10;
        goto L_10263150;
    }
    ecx = t9;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(arg2));
    wr32(sp0 - 0x2cu, arg1);
    g->eax = rd32(arg2);
    g->edx = rd32(arg1);
    t11 = rd32(arg2);
    t12 = rd32(arg1);
    g->esp = sp0 - 0x20u;
    t13 = cow_thiscall(g, rd32(t12 + 0x10u), ecx, 3, arg1, t11, 0u);
    t14 = g->edx;
    if ((int32_t)t13 < 0)
    {
        edx = t14;
        goto L_10263150;
    }
    edx = t14;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return 0u;
L_10263150: ;
    if (rd32(arg2) == 0u)
    {
        eax = rd32(arg2);
    }
    else
    {
        eax = rd32(arg2);
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t15 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(arg2, 0u);
        eax = t15;
    }
    wr32(sp0 - 0x24u, arg2);
    g->eax = eax;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, rd32(t16 + 0x48u), self, 1, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        ecx = t18;
        edx = t19;
        edi = t17;
        goto L_102631a3;
    }
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, rd32(arg2));
    g->eax = rd32(self);
    g->edx = rd32(arg2);
    t20 = rd32(self);
    t21 = rd32(arg2);
    g->esp = sp0 - 0x20u;
    t22 = cow_thiscall(g, rd32(t20 + 0x3cu), self, 2, t21, sp0 - 0x10u);
    t23 = g->ecx;
    t24 = g->edx;
    if ((int32_t)t22 < 0)
    {
        ecx = t23;
        edx = t24;
        edi = t22;
        goto L_102631a3;
    }
    edx = t24;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(arg2));
    wr32(sp0 - 0x2cu, arg1);
    g->eax = rd32(arg1);
    g->edx = edx;
    t25 = rd32(arg1);
    t26 = rd32(arg2);
    g->esp = sp0 - 0x20u;
    t27 = cow_thiscall(g, rd32(t25 + 0x10u), t26, 3, arg1, t26, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((int32_t)t27 < 0)
    {
        ecx = t28;
        edx = t29;
        edi = t27;
        goto L_102631a3;
    }
    edx = t29;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return 0u;
L_102631a3: ;
    if (rd32(arg2) != 0u)
    {
        eax = rd32(arg2);
        wr32(sp0 - 0x24u, eax);
        g->edx = rd32(eax);
        t30 = rd32(eax);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(t30 + 8u), ecx, 1, eax);
        t31 = g->edx;
        wr32(arg2, 0u);
        edx = t31;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102630d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102630d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
