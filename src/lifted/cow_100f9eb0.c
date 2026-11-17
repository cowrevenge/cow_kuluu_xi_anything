/* f_0x100f9eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_100f9eb0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 >= rd32(rd32(COW_IMG(0x104dfd94u)) + 0x40e40u))
    {
        eax = rd32(COW_IMG(0x104dfd94u));
        goto L_100fa007;
    }
    eax = rd32(COW_IMG(0x104dfd94u));
    t1 = rd32(arg1 * 4u + eax);
    wr32(COW_IMG(0x104dfd98u), t1);
    edi = t1;
    eax = 0u;
    ecx = 0x1038eu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(t1 + 0x4634u, arg1);
    wr32(t1 + 0x417cu, arg9 * 5u);
    g->ecx = arg6;
    g->edx = t1 + 0x3c394u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312090u), arg9 * 5u, g->ecx, g->edx, 1, 3, t1 + 0x3c394u, arg6, 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), t1 + 0x3c3b4u, g->ecx, g->edx, 1, 3, t1 + 0x3c3b4u, arg7, 0x50u);
    t4 = g->edx;
    wr32(t1 + 0x3c390u, arg5);
    wr32(t1 + 0x416cu, arg2);
    wr16(t1 + 0x4170u, (uint16_t)arg3);
    wr8(t1 + 0x3c404u, (uint8_t)arg8);
    wr8(t1 + 0xcu, 1u);
    wr8(t1 + 0xdu, 0u);
    wr16(t1 + 0x4172u, (uint16_t)arg4);
    wr16(t1 + 6u, 1u);
    wr32(t1 + 0x41b0u, arg10 * 3u);
    g->eax = arg10 * 3u;
    g->ecx = t1 + 0x40u;
    g->edx = (t4 & 0xffff0000u) | (uint16_t)arg4;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100dda10u), 12, t1 + 0x10u, t1 + 0x40u, 0x1eu, 0xau, t1 + 0x3c3b4u, arg7, 0x50u, t1 + 0x3c394u, arg6, 0x10u, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_100fa007;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = t1;
    edi = t1 + 0x10u;
    t8 = (edx & 0xffff0000u) | rd16(esi + 0x4172u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329458u)), 1, t8);   /* ws2_32.dll!ntohs */
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    g->edx = t11;
    t12 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t9);   /* ws2_32.dll!htons */
    t13 = g->ecx;
    t14 = g->edx;
    wr16(esi + 4u, (uint16_t)t12);
    g->ebx = arg7;
    g->ecx = t13;
    g->edx = t14;
    t15 = cow_cdecl(g, COW_IMG(0x100dc430u), 1, esi + 4u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(esi, t15);
    if (t15 == 0u)
    {
        eax = t15;
        goto L_100fa007;
    }
    ecx = t16;
    edx = t17;
    g->eax = esi + 0x2020u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x100dd520u), 1, esi + 0x2020u);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        goto L_100fa007;
    }
    eax = t18;
    edx = t19;
    g->eax = eax;
    g->ecx = esi + 0x30c0u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x100dd520u), 1, esi + 0x30c0u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        goto L_100fa007;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x100fa050u), 3, esi, in_edi, in_esi);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 1u)
    {
        eax = t23;
        goto L_100fa007;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x100dddc0u), 2, edi, 0xcu);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 1u)
    {
        eax = t26;
        goto L_100fa007;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t29 = cow_cdecl(g, COW_IMG(0x100dddc0u), 2, edi, 0xf2u);
    t30 = g->ecx;
    if ((uint8_t)t29 == 1u)
    {
        eax = t29;
        ecx = t30;
        goto L_100fa00d;
    }
    eax = t29;
L_100fa007: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_100fa00d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = esi + 0x4174u;
    g->esp = sp0 - 4u;
    t31 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, esi + 0x4174u, in_edi, in_esi);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 8u;
    t34 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, esi + 0x4180u, esi + 0x4174u, in_edi);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x14u;
    t37 = cow_cdecl(g, COW_IMG(0x100f91e0u), 3, esi + 0x4180u, esi + 0x4180u, 0x3e8u);
    t38 = g->ecx;
    t39 = g->edx;
    g->esp = sp0 - 0x20u;
    t40 = cow_cdecl(g, COW_IMG(0x100fca00u), 1, esi + 0x4638u);
    g->ebx = in_ebx;
    return (t40 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f9eb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
