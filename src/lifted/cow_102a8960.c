/* f_0x102a8960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a8960(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd16(arg2 + 2u) & 0xff00u) != 0x100u)
    {
        edi = rd16(arg2 + 0xau);
        ecx = self;
        edx = rd16(arg2 + 8u);
        edi = edi * rd16(arg2 + 8u) * rd16(arg2 + 6u);
    }
    else
    {
        edi = rd16(arg2 + 0xau);
        t1 = edi * rd16(arg2 + 8u) * 4u;
        g->ecx = rd16(arg2 + 8u);
        g->edx = in_edx;
        t2 = rd16(arg2 + 8u);
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, t1, COW_IMG(0x103be560u), 0xa8u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(arg2 + 0x20u, t3);
        g->edx = t5;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t1, COW_IMG(0x103be560u), 0xa9u, 1u, t1, COW_IMG(0x103be560u), 0xa8u, in_edi);
        t7 = g->edx;
        t8 = rd32(arg2 + 0x20u);
        wr32(arg2 + 0x24u, t6);
        if (t8 == 0u)
        {
            eax = t6;
            ecx = t8;
            edx = t7;
            edi = t1;
            goto L_102a89c4;
        }
        eax = t6;
        ecx = t8;
        edx = t7;
        edi = t1;
        if (eax != 0u) goto L_102a89e5;
L_102a89c4: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
        t10 = g->ecx;
        t11 = g->edx;
        g->ecx = t10;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be550u), COW_IMG(0x103b379cu));
        t12 = g->ecx;
        ecx = t12;
L_102a89e5: ;
        t13 = rd32(arg2 + 0xcu);
        t14 = rd32(arg2 + 0x20u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10298a60u), 5, t14, 1u, edi, t13, in_edi);
        t15 = rd32(arg2 + 0xcu);
        t16 = rd32(arg2 + 0x24u);
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10298a60u), 5, t16, 1u, edi, t15, t14);
        t17 = g->ecx;
        t18 = g->edx;
        if (rd32(arg2 + 0x10u) != 0u)
        {
            ecx = t17;
            edx = t18;
            t19 = rd32(arg2 + 0x20u);
            g->eax = t19;
            g->edx = edx;
            g->esp = sp0;
            t20 = cow_cdecl(g, COW_IMG(0x102a8b00u), 5, t19, edi >> 2u, in_ebx, in_edi, in_esi);
            t21 = g->edx;
            t22 = rd32(arg2 + 0x24u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102a8b00u), 5, t22, edi >> 2u, t19, edi >> 2u, in_ebx);
        }
        t23 = edi * 2u + 0x200u;
        t24 = rd16(arg2 + 0xau);
        t25 = rd16(arg2 + 8u);
        wr32(arg2 + 0x1cu, t23);
        if ((int32_t)(t24 * t25) <= 0)
        {
            ecx = t25;
            edx = t23;
            edi = 0u;
        }
        else
        {
            eax = t24 * t25;
            ecx = rd32(arg2 + 0x24u);
            edi = 0u;
L_102a8a4f: ;
            if (eax != 1u)
            {
                eax = eax - 1u;
                edi = edi + rd32(ecx);
                ecx = ecx + 4u;
                goto L_102a8a4f;
            }
            edx = rd32(ecx);
            edi = edi + rd32(ecx);
            ecx = ecx + 4u;
        }
    }
    wr32(arg2 + 0x14u, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, edi, COW_IMG(0x103be560u), 0xbfu);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(arg2 + 0x18u, t26);
    if (t26 == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
        t30 = g->ecx;
        t31 = g->edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be5b8u), COW_IMG(0x103b379cu));
    }
    t32 = rd32(arg2 + 0xcu);
    t33 = rd32(arg2 + 0x18u);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10298a60u), 5, t33, 1u, edi, t32, in_edi);
    t34 = g->ecx;
    t35 = g->edx;
    if ((rd8(rd32(arg2 + 0xcu) + 0xcu) & 0x20u) == 0u)
    {
        edx = t35;
    }
    else
    {
        eax = rd32(arg2 + 0xcu);
        ecx = t34;
        edx = t35;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
        t37 = g->ecx;
        t38 = g->edx;
        g->edx = t38;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be594u), COW_IMG(0x103b379cu));
        t39 = g->edx;
        edx = t39;
    }
    t40 = rd32(arg2 + 0xcu);
    g->edi = edi;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t40, in_edi, in_esi);
    g->edi = in_edi;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a8960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
