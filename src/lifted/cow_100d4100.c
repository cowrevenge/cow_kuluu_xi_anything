/* f_0x100d4100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d4100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    if (rd32(arg2 + 0x10u) != 0u)
    {
        eax = rd32(arg2 + 0x10u);
        goto L_100d413d;
    }
    eax = rd32(arg2 + 0x10u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        edx = t2;
        edi = in_edi;
        goto L_100d420c;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100816c0u), arg2 + 4u, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        edi = in_edi;
        goto L_100d420c;
    }
    eax = t3;
    wr32(sp0 - 0xcu, rd32(arg2));
    wr32(sp0 - 0x10u, arg1);
    ecx = eax;
    edx = arg1;
    edi = in_edi;
    loc_c = rd32(arg2);
L_100d4207: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_thiscall(g, COW_IMG(0x100d0d40u), ecx, 2, arg1, loc_c);
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_100d420c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 4u, 0);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0xcu, arg2);
    t41 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t39, t40, 1, 1, arg2);
    t42 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = edi;
    g->edx = t42;
    return t41;
L_100d413d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        edx = t6;
        edi = in_edi;
        goto L_100d420c;
    }
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x100816c0u), arg2 + 4u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        edi = in_edi;
        goto L_100d420c;
    }
    eax = t7;
    edx = t8;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x100816c0u), arg2 + 4u, 0);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        edi = in_edi;
        goto L_100d420c;
    }
    edx = t10;
    esi = t9;
    wr32(sp0 - 0xcu, in_edi);
    t11 = rd32(arg2 + 0x14u);
    wr32(sp0 - 0x10u, t11);
    g->eax = rd32(esi);
    g->edx = edx;
    t12 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, rd32(t12 + 0x3b0u), esi, 1, t11);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t14;
        t18 = rd32(arg2 + 0x14u);
        wr32(sp0 - 0x10u, t18);
        g->eax = rd32(esi);
        g->edx = edx;
        t19 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, rd32(t19 + 0x3a0u), esi, 1, t18);
        t21 = g->edx;
        if ((uint8_t)t20 == 0u)
        {
            edx = t21;
            t25 = rd32(arg2 + 0x14u);
            wr32(sp0 - 0x10u, t25);
            g->eax = rd32(esi);
            g->edx = edx;
            t26 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t27 = cow_thiscall(g, rd32(t26 + 0x390u), esi, 1, t25);
            t28 = g->edx;
            if ((uint8_t)t27 == 0u)
            {
                edx = t28;
                t32 = rd32(arg2 + 0x14u);
                wr32(sp0 - 0x10u, t32);
                g->eax = rd32(esi);
                g->edx = edx;
                t33 = rd32(esi);
                g->esp = sp0 - 0xcu;
                t34 = cow_thiscall(g, rd32(t33 + 0x380u), esi, 1, t32);
                t35 = g->edx;
                if ((uint8_t)t34 == 0u)
                {
                    edx = t35;
                    edi = 0u;
                }
                else
                {
                    edx = t35;
                    edi = 1u;
                }
            }
            else
            {
                eax = t27;
                g->eax = eax;
                g->edx = rd32(esi);
                t29 = rd32(esi);
                g->esp = sp0 - 0xcu;
                t30 = cow_thiscall(g, rd32(t29 + 0x38cu), esi, 0);
                t31 = g->edx;
                edx = t31;
                edi = t30 + 2u;
            }
        }
        else
        {
            eax = t20;
            g->eax = eax;
            g->edx = rd32(esi);
            t22 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t23 = cow_thiscall(g, rd32(t22 + 0x39cu), esi, 0);
            t24 = g->edx;
            edx = t24;
            edi = t23 + 0xau;
        }
    }
    else
    {
        eax = t13;
        g->eax = eax;
        g->edx = rd32(esi);
        t15 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, rd32(t15 + 0x3acu), esi, 0);
        t17 = g->edx;
        edx = t17;
        edi = t16 + 0xbu;
    }
    if (rd32(edi * 4u + esi + 0x768u) != rd32(arg2 + 0x10u))
    {
        eax = rd32(arg2 + 0x10u);
        edi = rd32(sp0 - 0xcu);
        goto L_100d420c;
    }
    ecx = rd32(edi * 4u + esi + 0x768u);
    edi = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, rd32(arg2));
    wr32(sp0 - 0x10u, arg1);
    eax = arg1;
    edx = rd32(arg2);
    loc_c = rd32(arg2);
    goto L_100d4207;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d4100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
