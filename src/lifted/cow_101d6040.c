/* f_0x101d6040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101d6040(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106631d4u));
        goto L_101d604f;
    }
    return in_eax & 0xffffff00u;
L_101d604f: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t2 = g->ecx;
    if (arg1 != rd32(t2 + 0x38u))
    {
        ecx = t2;
        edx = rd32(t2 + 0x38u);
        goto L_101d60fc;
    }
    ecx = t2;
    edx = rd32(t2 + 0x38u);
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    if (rd8(COW_IMG(0x106631d0u)) == 0u) goto L_101d6072;
    eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x106631d0u));
    g->edx = edx;
    return eax & 0xffffff00u;
L_101d6072: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_101d60c1;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10097bc0u), eax, g->ecx, edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_101d6099;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_101d60d9;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    loc_18 = 0x2eu;
L_101d60db: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, loc_18);
    t23 = g->edx;
    g->ebx = ebx;
    g->edx = t23;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d5f90u), 0u, t22, 0u, 0u, 1u, 0u);
    t25 = g->edx;
    g->ebx = in_ebx;
    g->edx = t25;
    return t24 & 0xffffff00u;
L_101d6099: ;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x10097bc0u), eax, g->ecx, edx, 1, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_101d609e: ;
    t19 = rd32(COW_IMG(0x106631dcu));
    wr8(t19 + 0x14u, (uint8_t)eax);
    wr8(t19 + 0x1bu, (uint8_t)ebx);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ecd0u), 1u, 0u);
    t21 = g->edx;
    g->edx = t21;
    return t20 & 0xffffff00u;
L_101d60c1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_101d60d1;
    }
    ecx = t15;
    edx = t16;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_stdcall(g, COW_IMG(0x10097d20u), 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    goto L_101d609e;
L_101d60d1: ;
L_101d60d9: ;
    loc_18 = 0x2fu;
    goto L_101d60db;
L_101d60fc: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t26 = cow_thiscall(g, COW_IMG(0x101d3ef0u), ecx, 1, arg1);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | t26 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
