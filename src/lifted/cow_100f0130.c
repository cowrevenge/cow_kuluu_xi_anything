/* f_0x100f0130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100f0130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_100f013d;
    return (in_eax & 0xffffff00u) | 1u;
L_100f013d: ;
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100f0294;
    }
    eax = rd32(COW_IMG(0x104df770u));
    if ((int32_t)arg1 < 1) goto L_100f0294;
    if ((int32_t)arg1 > 3) goto L_100f0294;
    wr32(COW_IMG(0x104df770u), COW_IMG(0x104ca650u));
    edi = COW_IMG(0x104ca650u);
    eax = 0u;
    ecx = 0x5448u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100f05c0u), ecx, 0);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x104df770u)) + 0x14u;
    g->ecx = t2;
    cow_call_regs(g, COW_IMG(0x10312090u), arg5, g->ecx, g->edx, 1, 3, t2, arg5, 0x50u);
    t3 = g->ecx;
    t4 = rd32(COW_IMG(0x104df770u)) + 0xb8u;
    g->esp = sp0 - 0x14u;
    t5 = cow_call_regs(g, COW_IMG(0x10312090u), t4, g->ecx, g->edx, 1, 3, t4, arg4, 0x10u);
    t6 = rd32(COW_IMG(0x104df770u)) + 0xc8u;
    g->ecx = arg6;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    t7 = cow_call_regs(g, COW_IMG(0x10312090u), t5, g->ecx, g->edx, 1, 3, t6, arg6, 0x50u);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, rd32(COW_IMG(0x10329480u)), t8, 1, 0xd34au);
    t11 = rd32(COW_IMG(0x104df770u));
    wr16(t11 + 0x12u, (uint16_t)t10);
    wr32(rd32(COW_IMG(0x104df770u)), arg2);
    wr16(rd32(COW_IMG(0x104df770u)) + 0xcu, (uint16_t)arg3);
    wr32(rd32(COW_IMG(0x104df770u)) + 8u, arg2);
    wr16(rd32(COW_IMG(0x104df770u)) + 0x10u, (uint16_t)arg3);
    t12 = rd32(COW_IMG(0x104df770u));
    wr32(t12 + 0x118u, arg7);
    t13 = rd32(COW_IMG(0x104df770u));
    wr8(t13 + 0x120u, 1u);
    g->ecx = t12;
    g->edx = arg7;
    cow_stdcall(g, COW_IMG(0x100f10a0u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    cow_stdcall(g, COW_IMG(0x100f7790u), 0);
    t16 = g->edx;
    t17 = rd32(COW_IMG(0x104df770u)) + 0x1369cu;
    g->ecx = t17;
    g->edx = t16;
    t18 = cow_cdecl(g, COW_IMG(0x100e1470u), 1, t17);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e6220u), 1, 0x3cu);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10114b60u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    cow_stdcall(g, COW_IMG(0x100f76b0u), 0);
    if (arg1 == 1u) goto L_100f0280;
    if (arg1 == 2u) goto L_100f026d;
    if (arg1 != 3u)
    {
        eax = arg1 - 3u;
        goto L_100f0290;
    }
    wr32(rd32(COW_IMG(0x104df770u)) + 0x11cu, 1u);
    return (arg1 - 3u & 0xffffff00u) | 1u;
L_100f026d: ;
    t25 = rd32(COW_IMG(0x104df770u));
    wr32(t25 + 0x11cu, 4u);
    return (t25 & 0xffffff00u) | 1u;
L_100f0280: ;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x11cu, 7u);
    eax = arg1 - 1u;
L_100f0290: ;
    return (eax & 0xffffff00u) | 1u;
L_100f0294: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f0130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
