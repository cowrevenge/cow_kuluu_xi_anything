/* f_0x102a8bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a8bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(arg1 + 0xau) != 1u)
    {
        eax = (arg2 & 0xffff0000u) | rd16(arg1 + 0xau);
        ebx = rd32(arg2 + 0x28u);
        goto L_102a8bfd;
    }
    eax = (arg2 & 0xffff0000u) | rd16(arg1 + 0xau);
    ebx = rd32(arg2 + 0x28u);
    if (rd16(arg1 + 8u) == 0u) goto L_102a8d47;
    edx = in_edx;
    edi = 0u;
L_102a8bd4: ;
    t1 = ebx + rd16(arg1 + 6u) * edi;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x102a8d50u), eax, g->ecx, g->edx, 1, 5, arg1, t1, edi, 0u, 1u);
    if ((int32_t)(edi + 1u) < (int32_t)rd16(arg1 + 8u))
    {
        eax = t2;
        edx = rd16(arg1 + 8u);
        edi = edi + 1u;
        goto L_102a8bd4;
    }
    g->ebx = in_ebx;
    return;
L_102a8bfd: ;
    if ((uint16_t)eax != 3u) goto L_102a8c73;
    if (rd16(arg1 + 8u) == 0u) goto L_102a8d47;
    edx = in_edx;
    edi = 0u;
L_102a8c0f: ;
    t3 = ebx + rd16(arg1 + 6u) * edi * 3u;
    g->ebx = ebx;
    g->ecx = ebx + rd16(arg1 + 6u) * edi * 2u;
    t4 = rd16(arg1 + 6u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102a8d50u), t3, g->ecx, g->edx, 1, 5, arg1, t3, edi, 0u, 3u);
    t5 = g->ecx;
    t6 = ebx + rd16(arg1 + 6u) * edi * 3u + 1u;
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a8d50u), t6, g->ecx, g->edx, 1, 9, arg1, t6, edi, 1u, 3u, arg1, t3, edi, 0u);
    t7 = ebx + rd16(arg1 + 6u) * edi * 3u + 2u;
    g->ebx = ebx;
    g->edx = t7;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102a8d50u), rd16(arg1 + 6u) * edi, g->ecx, g->edx, 1, 9, arg1, t7, edi, 2u, 3u, arg1, t6, edi, 1u);
    t8 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd16(arg1 + 8u))
    {
        edx = t8;
        edi = edi + 1u;
        goto L_102a8c0f;
    }
    g->ebx = in_ebx;
    return;
L_102a8c73: ;
    if ((uint16_t)eax != 2u) goto L_102a8cc8;
    if (rd16(arg1 + 8u) == 0u) goto L_102a8d47;
    edi = 0u;
L_102a8c85: ;
    t9 = ebx + rd16(arg1 + 6u) * edi * 2u;
    g->ebx = ebx;
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102a8d50u), eax, g->ecx, g->edx, 1, 5, arg1, t9, edi, 0u, 2u);
    t10 = g->edx;
    t11 = ebx + rd16(arg1 + 6u) * edi * 2u + 1u;
    g->ebx = ebx;
    t12 = rd16(arg1 + 6u);
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x102a8d50u), t12 * edi, g->ecx, g->edx, 1, 9, arg1, t11, edi, 1u, 2u, arg1, t9, edi, 0u);
    if ((int32_t)(edi + 1u) < (int32_t)rd16(arg1 + 8u))
    {
        eax = t13;
        edi = edi + 1u;
        goto L_102a8c85;
    }
    g->ebx = in_ebx;
    return;
L_102a8cc8: ;
    if ((uint16_t)eax == 4u)
    {
        if (rd16(arg1 + 8u) == 0u) goto L_102a8d47;
        edx = in_edx;
        edi = 0u;
L_102a8cd6: ;
        t14 = ebx + rd16(arg1 + 6u) * edi * 4u;
        g->ebx = ebx;
        g->ecx = t14;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102a8d50u), rd16(arg1 + 6u) * edi, g->ecx, g->edx, 1, 5, arg1, t14, edi, 0u, 4u);
        t15 = g->ecx;
        t16 = ebx + rd16(arg1 + 6u) * edi * 4u + 1u;
        g->ebx = ebx;
        g->esp = sp0 - 0x10u;
        t17 = cow_call_regs(g, COW_IMG(0x102a8d50u), t16, g->ecx, g->edx, 1, 9, arg1, t16, edi, 1u, 4u, arg1, t14, edi, 0u);
        t18 = ebx + rd16(arg1 + 6u) * edi * 4u + 2u;
        g->ebx = ebx;
        g->edx = t18;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x102a8d50u), t17, g->ecx, g->edx, 1, 9, arg1, t18, edi, 2u, 4u, arg1, t16, edi, 1u);
        t19 = g->edx;
        t20 = ebx + rd16(arg1 + 6u) * edi * 4u + 3u;
        g->ebx = ebx;
        g->esp = sp0 - 0x38u;
        cow_call_regs(g, COW_IMG(0x102a8d50u), rd16(arg1 + 6u) * edi, g->ecx, g->edx, 1, 9, arg1, t20, edi, 3u, 4u, arg1, t18, edi, 2u);
        if ((int32_t)(edi + 1u) < (int32_t)rd16(arg1 + 8u))
        {
            edx = rd16(arg1 + 8u);
            edi = edi + 1u;
            goto L_102a8cd6;
        }
    }
L_102a8d47: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a8bb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
