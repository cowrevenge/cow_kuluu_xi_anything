/* f_0x10077fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10077fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10078090u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = 0u;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), t1, t2, g->edx, 1, 4, 0x3fu, 0u, 1u, 0xffffffffu);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_10078005;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0xfu, 4u, 0xffffffffu);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_10078005;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if (rd8(COW_IMG(0x1047d4a7u)) == 0u)
    {
        t10 = (eax & 0xffffff00u) | (rd8(COW_IMG(0x1047d4a6u)) ^ 1u);
        wr8(COW_IMG(0x1047d4a6u), (uint8_t)t10);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, COW_IMG(0x100fc140u), ecx, 1, t10);
        t11 = g->ecx;
        t12 = g->edx;
        wr8(COW_IMG(0x1047d4a7u), 1u);
        ecx = t11;
        edx = t12;
    }
L_1007800b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint16_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        ecx = t14;
        edx = t15;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t16 * 4u) == 0u)
        {
            eax = (uint16_t)t16;
            ecx = t17;
            edx = t18;
        }
        else
        {
            ecx = t17;
            edx = t18;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t19 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
            t20 = g->ecx;
            t21 = g->edx;
            g->ecx = t20;
            g->edx = t21;
            t22 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t19 * 4u);
            t23 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
            t24 = g->ecx;
            t25 = g->edx;
            g->ecx = t24;
            g->edx = t25;
            t26 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t23 * 4u);
            t27 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
            t28 = g->ecx;
            t29 = g->edx;
            t30 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u);
            t31 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
            t32 = rd32(t22 + 0x18u);
            t33 = rd32(t26 + 0xcu);
            t34 = rd32(t30 + 8u);
            t35 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t31 * 4u) + 4u);
            g->ecx = t34;
            g->edx = t35;
            t36 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t31 * 4u);
            t37 = cow_cdecl(g, COW_IMG(0x100fc0f0u), 4, t35, t34, t33, t32);
            t38 = g->ecx;
            t39 = g->edx;
            eax = t37;
            ecx = t38;
            edx = t39;
        }
    }
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10077ed0u), eax, ecx, edx);
    return;
L_10078005: ;
    wr8(COW_IMG(0x1047d4a7u), 0u);
    goto L_1007800b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10077fb0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
