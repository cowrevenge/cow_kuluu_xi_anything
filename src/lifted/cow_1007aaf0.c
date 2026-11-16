/* f_0x1007aaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007aaf0(Guest* g)
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_1007abe4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t6;
        goto L_1007abe4;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_1007abe4;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t12;
        goto L_1007abe4;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t15;
        goto L_1007abe4;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x101cc4c0u), eax, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 1u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_1007ab68;
    }
    ecx = t17;
    edx = t18;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_stdcall(g, COW_IMG(0x10177750u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1007ab68;
    }
    edx = t21;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 8u);
    t22 = g->edx;
    g->edx = t22;
    return arg3;
L_1007ab68: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->edx;
    t25 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->ecx = t25;
    g->edx = t24;
    t26 = rd32(COW_IMG(0x104dfd98u));
    t27 = cow_cdecl(g, COW_IMG(0x100fd3a0u), 1, t25);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        ecx = t28;
        edx = t29;
        esi = t23;
        goto L_1007aba9;
    }
    edx = t29;
    esi = t23;
    if (esi == 0u) goto L_1007ab96;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t30 = cow_thiscall(g, COW_IMG(0x1009aaf0u), esi, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_1007aba9;
    }
    edx = t32;
L_1007ab96: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 8u);
    t33 = g->edx;
    g->edx = t33;
    return arg3;
L_1007aba9: ;
    if (esi == 0u) goto L_1007abce;
    if ((rd8(esi + 0x123u) & 7u) != 4u)
    {
        edx = (edx & 0xffffff00u) | (rd8(esi + 0x123u) & 7u);
        goto L_1007abce;
    }
    edx = (edx & 0xffffff00u) | (rd8(esi + 0x123u) & 7u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 8u);
    t34 = g->edx;
    g->edx = t34;
    return arg3;
L_1007abce: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t35 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        goto L_1007abdf;
    }
    edx = t37;
    g->edx = edx;
    return -arg3;
L_1007abdf: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1009fa70u), eax, g->ecx, g->edx, 1, 0);
    t38 = g->edx;
    edx = t38;
L_1007abe4: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007aaf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007aaf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
