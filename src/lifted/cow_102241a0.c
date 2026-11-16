/* f_0x102241a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102241a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    t1 = rd32(self + 0x30u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        ecx = t3;
        edx = t4;
        edi = t2;
        goto L_102241ba;
    }
    eax = t2;
    return eax & 0xffffff00u;
L_102241ba: ;
    if (rd32(self + 0x64u) != 4u)
    {
        eax = rd32(self + 0x64u);
        goto L_102241c9;
    }
    eax = 3u;
L_102241d7: ;
    t7 = rd32(COW_IMG(0x10386124u) + eax * 4u);
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, t7);
    return t8 & 0xffffff00u;
L_102241c9: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10224b70u), ecx, 2, edi, eax);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_102241f0;
    }
    eax = t5;
    edx = t6;
    goto L_102241d7;
L_102241f0: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10224160u), self, 1, 0xffffffffu);
    t10 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        edx = t10;
        ebx = t9;
        goto L_10224205;
    }
    eax = t9;
    return eax & 0xffffff00u;
L_10224205: ;
    if (rd8(ebx + 0xeu) == 0u) goto L_1022423e;
    eax = (eax & 0xffffff00u) | rd8(ebx + 0xeu);
    t11 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->ecx;
    t14 = (t12 & 0xffffff00u) | rd8(self + 0xd2u);
    t15 = (t13 & 0xffffff00u) | rd8(self + 0xd1u);
    t16 = rd8(ebx + 0xeu);
    g->eax = t14;
    t17 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, t16, t15, t14);
    return (t17 & 0xffffff00u) | 1u;
L_1022423e: ;
    t18 = rd32(COW_IMG(0x1057876cu));
    wr32(COW_IMG(0x10667158u), edi);
    t19 = rd16(ebx + 0xau);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_thiscall(g, COW_IMG(0x10159440u), t18, 2, COW_IMG(0x10224ef0u), t19);
    t21 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        edx = t21;
        goto L_10224272;
    }
    edx = t21;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x1bu);
    g->ebx = in_ebx;
    return t22 & 0xffffff00u;
L_10224272: ;
    g->eax = eax;
    g->edx = edx;
    t23 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x101594e0u), t23, 1, COW_IMG(0x10225020u));
    t25 = g->ecx;
    t26 = g->edx;
    g->ebx = ebx;
    g->edx = t26;
    t27 = cow_call_regs(g, COW_IMG(0x102233e0u), t24, g->ecx, g->edx, 1, 1, edi);
    t28 = g->edx;
    t29 = rd32(self + 8u);
    t30 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t29, 1u, 0u, 1u, 0u);
    if (rd8(self + 0xd1u) != 1u)
    {
        eax = t30;
    }
    else
    {
        t31 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
        g->eax = t31;
        g->esp = sp0 - 0xcu;
        t32 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t31, 1u, 0u, 1u, 0u);
        eax = t32;
    }
    t33 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
    g->eax = eax;
    g->edx = t33;
    g->esp = sp0 - 0xcu;
    t34 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t33, 1u, 1u, 0u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x51u);
    t38 = g->edx;
    g->edx = t38;
    t39 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall(g, COW_IMG(0x1013a320u), t39, 2, t37, 2u);
    t41 = g->ecx;
    t42 = g->edx;
    g->esp = sp0 - 0x14u;
    t43 = cow_call_regs(g, COW_IMG(0x10223930u), t40, t41, t42, 1, 0);
    t44 = g->edx;
    g->ebx = ebx;
    g->edx = t44;
    g->esp = sp0 - 0x10u;
    t45 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, edi);
    t46 = g->edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t45, 2u);
    g->ebx = in_ebx;
    return (t47 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102241a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102241a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
