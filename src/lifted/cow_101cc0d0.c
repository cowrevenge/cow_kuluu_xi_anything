/* f_0x101cc0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101cc0d0(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((arg1 & 0x10u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
        goto L_101cc0f2;
    }
    g->ecx = self;
    g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cbe90u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101cc0f2;
    }
    eax = t1;
    edx = t3;
    esi = 0x51u;
L_101cc190: ;
    ebx = in_ebx & 0xffffff00u;
L_101cc192: ;
    if ((uint8_t)arg2 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        if (esi != 0u)
        {
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t27 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, esi);
            t28 = g->edx;
            eax = t27;
            edx = t28;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_101cc0f2: ;
    if ((edx & 0x20u) == 0u) goto L_101cc10a;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cbec0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101cc10a;
    }
    eax = t4;
    edx = t6;
    esi = 0xa0u;
    goto L_101cc190;
L_101cc10a: ;
    if (!(edx & 1u)) goto L_101cc128;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        edx = t9;
        goto L_101cc121;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_101cc128;
    }
    eax = t10;
    edx = t12;
L_101cc121: ;
    esi = 0x4bu;
    goto L_101cc190;
L_101cc128: ;
    if ((edx & 2u) == 0u) goto L_101cc13d;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x101cbe70u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_101cc13d;
    }
    eax = t13;
    edx = t15;
    esi = 0x4du;
    goto L_101cc190;
L_101cc13d: ;
    if ((edx & 4u) == 0u) goto L_101cc152;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x101cbe80u), eax, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_101cc152;
    }
    eax = t16;
    edx = t18;
    esi = 0x4eu;
    goto L_101cc190;
L_101cc152: ;
    if ((edx & 0x40u) == 0u) goto L_101cc167;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x101cc040u), eax, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101cc167;
    }
    eax = t19;
    edx = t21;
    esi = 0xb1u;
    goto L_101cc190;
L_101cc167: ;
    if ((edx & 8u) == 0u) goto L_101cc17e;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        edx = t24;
        goto L_101cc18b;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    edx = (edx & 0xffffff00u) | (uint8_t)arg1;
L_101cc17e: ;
    if ((int8_t)edx >= 0)
    {
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = 0u;
        goto L_101cc192;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x101cc1b0u), eax, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = 0u;
        goto L_101cc192;
    }
    eax = t25;
    edx = t26;
L_101cc18b: ;
    esi = 0x44u;
    goto L_101cc190;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc0d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
