/* f_0x101c92b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c92b0(Guest* g)
{
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if ((uint8_t)arg3 != 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = arg1;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x4cu;
        t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        t4 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int32_t)(arg1 + t4 - t1) >= 0)
        {
            ecx = t5;
            edx = t6;
            esi = arg1 + t4 - t1;
        }
        else
        {
            ecx = t5;
            edx = t6;
            esi = 0u;
        }
    }
    t7 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 1u & 3u;
    wr32(sp0 - 0x50u, t7);
    wr32(sp0 - 0x54u, COW_IMG(0x1037d31cu));
    g->edi = rd32(COW_IMG(0x10456a28u));
    g->ecx = ecx;
    g->edx = edx;
    t8 = rd32(COW_IMG(0x10456a28u));
    g->esp = sp0 - 0x48u;
    t9 = cow_call_regs(g, COW_IMG(0x101c9270u), t7, g->ecx, g->edx, 1, 3, COW_IMG(0x1037d31cu), t7, in_edi);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd8(t8 + 0x18u) & 1u;
    wr32(sp0 - 0x58u, t12);
    wr32(sp0 - 0x5cu, COW_IMG(0x1037d34cu));
    g->edi = t8;
    g->ecx = t12;
    g->edx = t11;
    g->esp = sp0 - 0x50u;
    t13 = cow_call_regs(g, COW_IMG(0x101c9270u), t9, g->ecx, g->edx, 1, 3, COW_IMG(0x1037d34cu), t12, COW_IMG(0x1037d31cu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x60u, esi);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x5cu;
    t16 = cow_cdecl(g, COW_IMG(0x10103ab0u), 1, esi);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x50u, t16 + 1u);
    wr32(sp0 - 0x54u, esi);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x50u;
    t19 = cow_cdecl(g, COW_IMG(0x10103a90u), 1, esi);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x54u, t19 + 1u);
    wr32(sp0 - 0x58u, esi);
    g->ecx = t20;
    g->esp = sp0 - 0x54u;
    t22 = cow_cdecl(g, COW_IMG(0x10103a80u), 1, esi);
    t23 = g->ecx;
    wr32(sp0 - 0x58u, t22 + 0x376u);
    t24 = (uint32_t)(int16_t)rd16(t9 + 8u);
    wr32(sp0 - 0x5cu, t24);
    wr32(sp0 - 0x60u, 0xau);
    wr32(sp0 - 0x64u, 0x20u);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->ecx = t23;
    g->edx = t24;
    cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x40u, 0x20u, 0xau, t24, t22 + 0x376u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x6cu, esi);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x68u;
    t27 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, esi);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x50u, t27);
    wr32(sp0 - 0x54u, esi);
    g->esp = sp0 - 0x50u;
    t30 = cow_cdecl(g, COW_IMG(0x10103b10u), 1, esi);
    wr32(sp0 - 0x54u, t30);
    t31 = (uint32_t)(int16_t)rd16(t13 + 8u);
    wr32(sp0 - 0x58u, t31);
    wr32(sp0 - 0x5cu, 0xau);
    wr32(sp0 - 0x60u, 0x20u);
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    g->ecx = t31;
    g->edx = sp0 - 0x20u;
    t32 = cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x20u, 0x20u, 0xau, t31, t30);
    t33 = g->ecx;
    t34 = g->edx;
    if ((arg2 & 2u) == 0u) goto L_101c9397;
    ecx = t33;
    edx = t34;
    wr32(sp0 - 0x44u, sp0 - 0x40u);
    wr32(sp0 - 0x48u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x4cu, COW_IMG(0x10662dd0u));
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662dd0u), COW_IMG(0x1034f7e0u), sp0 - 0x40u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    g->edi = in_edi;
    return COW_IMG(0x10662dd0u);
L_101c9397: ;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    wr32(sp0 - 0x4cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0x50u, COW_IMG(0x10662dd0u));
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662dd0u), COW_IMG(0x10358098u), sp0 - 0x40u, sp0 - 0x20u, rd32(sp0 - 0x40u));
    g->edi = in_edi;
    return COW_IMG(0x10662dd0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c92b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c92b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
