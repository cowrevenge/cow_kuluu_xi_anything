/* f_0x100d4220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d4220(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t4;
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

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (rd32(arg2 + 0x10u) != 0u)
    {
        eax = rd32(arg2 + 0x10u);
        goto L_100d425d;
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
        ebx = in_ebx;
        goto L_100d4311;
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
        ebx = in_ebx;
        goto L_100d4311;
    }
    eax = t3;
    wr32(sp0 - 0xcu, rd32(arg2));
    wr32(sp0 - 0x10u, arg1);
    ecx = eax;
    edx = arg1;
    ebx = in_ebx;
    loc_c = rd32(arg2);
L_100d430c: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t27 = cow_fastcall(g, COW_IMG(0x100d0d70u), ecx, edx, 2, arg1, loc_c);
    t28 = g->edx;
    eax = t27;
    edx = t28;
L_100d4311: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 4u, 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0xcu, arg2);
    t32 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t30, t31, 1, 1, arg2);
    t33 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t33;
    return t32;
L_100d425d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        edx = t6;
        ebx = in_ebx;
        goto L_100d4311;
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
        ebx = in_ebx;
        goto L_100d4311;
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
        ebx = in_ebx;
        goto L_100d4311;
    }
    edx = t10;
    edi = t9;
    wr32(sp0 - 0xcu, in_ebx);
    t11 = rd32(arg2 + 0x14u);
    wr32(sp0 - 0x10u, t11);
    g->eax = rd32(edi);
    g->edx = edx;
    t12 = rd32(edi);
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, rd32(t12 + 0x3b0u), edi, 1, t11);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        t15 = rd32(arg2 + 0x14u);
        wr32(sp0 - 0x10u, t15);
        g->eax = t15;
        g->edx = rd32(edi);
        t16 = rd32(edi);
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall(g, rd32(t16 + 0x3a0u), edi, 1, t15);
        t18 = g->edx;
        if ((uint8_t)t17 == 0u)
        {
            t19 = rd32(arg2 + 0x14u);
            wr32(sp0 - 0x10u, t19);
            g->eax = t19;
            g->edx = rd32(edi);
            t20 = rd32(edi);
            g->esp = sp0 - 0xcu;
            t21 = cow_thiscall(g, rd32(t20 + 0x390u), edi, 1, t19);
            t22 = g->edx;
            if ((uint8_t)t21 == 0u)
            {
                t23 = rd32(arg2 + 0x14u);
                wr32(sp0 - 0x10u, t23);
                g->eax = t23;
                g->edx = rd32(edi);
                t24 = rd32(edi);
                g->esp = sp0 - 0xcu;
                t25 = cow_thiscall(g, rd32(t24 + 0x380u), edi, 1, t23);
                t26 = g->edx;
                if ((uint8_t)t25 == 0u)
                {
                    edx = t26;
                    ebx = 0u;
                }
                else
                {
                    edx = t26;
                    ebx = 1u;
                }
            }
            else
            {
                edx = t22;
                ebx = rd32(arg2 + 0x14u) - 0x33u;
            }
        }
        else
        {
            edx = t18;
            ebx = rd32(arg2 + 0x14u) - 0x48u;
        }
    }
    else
    {
        edx = t14;
        ebx = rd32(arg2 + 0x14u) - 0x48u;
    }
    if (rd32(ebx * 4u + edi + 0x768u) != rd32(arg2 + 0x10u))
    {
        eax = rd32(arg2 + 0x10u);
        ebx = rd32(sp0 - 0xcu);
        goto L_100d4311;
    }
    ecx = rd32(ebx * 4u + edi + 0x768u);
    ebx = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, rd32(arg2));
    wr32(sp0 - 0x10u, arg1);
    eax = arg1;
    edx = rd32(arg2);
    loc_c = rd32(arg2);
    goto L_100d430c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d4220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
