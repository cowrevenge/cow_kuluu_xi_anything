/* f_0x100873b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100873b0(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(COW_IMG(0x10578184u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x10578184u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578184u));
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1012c900u), ecx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        t4 = cow_call_regs(g, COW_IMG(0x10087690u), t1, g->ecx, g->edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
            goto L_100873e7;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x100876b0u), eax, g->ecx, g->edx, 1, 0);
        t8 = g->ecx;
        t9 = g->edx;
        if (!(t7 & 1u))
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            goto L_100873e7;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
        if ((uint8_t)ebx == 0u)
        {
            g->eax = eax;
            g->edx = edx;
            t10 = rd32(COW_IMG(0x10578184u));
            g->esp = sp0 - 4u;
            t11 = cow_thiscall(g, COW_IMG(0x1012c8c0u), t10, 1, 1u);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
        }
    }
L_100873f7: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x100876d0u), eax, ecx, g->edx, 1, 1, 4u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u) goto L_1008746b;
    eax = t18;
    ecx = t19;
    edx = t20;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x10087850u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_call_regs(g, COW_IMG(0x10087870u), t21, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint32_t)(int16_t)t21 == 0u)
    {
        eax = (uint32_t)(int16_t)t24;
        edx = t26;
        goto L_10087453;
    }
    eax = (uint32_t)(int16_t)t24;
    ecx = t25;
    edx = t26;
    esi = (uint32_t)(int16_t)t21;
    if (eax == 0u) goto L_10087453;
    g->eax = eax + 0x13u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1au, eax + 0x13u);
    t28 = g->ecx;
    t29 = g->edx;
    g->edx = t29;
    g->esp = sp0 - 8u;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1au, esi);
    t31 = g->edx;
    g->edx = t31;
    t32 = rd32(COW_IMG(0x105781fcu));
    g->esp = sp0 - 4u;
    t33 = cow_thiscall(g, COW_IMG(0x10139f40u), t32, 3, 0u, t30, t27);
    t34 = g->ecx;
    t35 = g->edx;
    cow_call_regs(g, COW_IMG(0x100876e0u), t33, t34, g->edx, 1, 1, 4u);
    return;
L_100873e7: ;
    if ((uint8_t)ebx == 1u)
    {
        g->eax = eax;
        g->edx = edx;
        t14 = rd32(COW_IMG(0x10578184u));
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x1012c8e0u), t14, 0);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    goto L_100873f7;
L_10087453: ;
    g->eax = eax;
    g->edx = edx;
    t36 = rd32(COW_IMG(0x105781fcu));
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x10139fb0u), t36, 1, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    cow_call_regs(g, COW_IMG(0x100876e0u), t37, t38, g->edx, 1, 1, 4u);
L_1008746b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100873b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100873b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
