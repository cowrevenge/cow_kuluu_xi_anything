/* f_0x10257400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10257400(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (in_eax & 0xffff0000u) | rd16(arg1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t1);
    t3 = g->edx;
    wr16(arg1, (uint16_t)t2);
    if ((uint16_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        ebx = arg1 + 4u;
        ebp = 0u;
L_10257425: ;
        t4 = rd32(ebx + 4u);
        g->eax = eax;
        g->ecx = t4;
        g->esp = sp0 - 0x10u;
        t5 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t4);
        t6 = g->ecx;
        t7 = rd32(ebx);
        wr32(ebx + 4u, t5);
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0x14u;
        t8 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t7);
        t9 = g->ecx;
        t10 = g->edx;
        t11 = rd32(ebx + 4u);
        wr32(ebx, t8);
        if (t11 == 0u)
        {
            eax = t11;
            ecx = t9;
            edx = t10;
            edi = t8;
            t14 = (ecx & 0xffff0000u) | rd16(arg1 + edi + 4u);
            g->eax = eax;
            g->ecx = t14;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t14);
            t16 = g->ecx;
            t17 = g->edx;
            t18 = rd16(arg1 + edi + 6u);
            wr16(arg1 + edi + 4u, (uint16_t)t15);
            t19 = (t17 & 0xffff0000u) | t18;
            g->ecx = t16;
            g->edx = t19;
            g->esp = sp0 - 0x14u;
            t20 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t19);
            t21 = g->ecx;
            t22 = g->edx;
            wr16(arg1 + edi + 6u, (uint16_t)t20);
            t23 = (t20 & 0xffff0000u) | rd16(arg1 + edi + 8u);
            g->eax = t23;
            g->ecx = t21;
            g->edx = t22;
            g->esp = sp0 - 0x18u;
            t24 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t23);
            t25 = g->ecx;
            t26 = g->edx;
            t27 = rd16(arg1 + edi + 0xau);
            wr16(arg1 + edi + 8u, (uint16_t)t24);
            t28 = (t25 & 0xffff0000u) | t27;
            g->ecx = t28;
            g->edx = t26;
            g->esp = sp0 - 0x1cu;
            t29 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t28);
            t30 = g->ecx;
            t31 = g->edx;
            t32 = rd16(arg1 + edi + 0x18u);
            wr16(arg1 + edi + 0xau, (uint16_t)t29);
            t33 = (t31 & 0xffff0000u) | t32;
            g->ecx = t30;
            g->edx = t33;
            g->esp = sp0 - 0x20u;
            t34 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t33);
            t35 = g->ecx;
            t36 = g->edx;
            wr16(arg1 + edi + 0x18u, (uint16_t)t34);
            t37 = (t34 & 0xffff0000u) | rd16(arg1 + edi + 0x1au);
            g->eax = t37;
            g->ecx = t35;
            g->edx = t36;
            g->esp = sp0 - 0x24u;
            t38 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t37);
            t39 = g->ecx;
            t40 = g->edx;
            t41 = rd16(arg1 + edi);
            wr16(arg1 + edi + 0x1au, (uint16_t)t38);
            t42 = (t39 & 0xffff0000u) | t41;
            g->esp = sp0 - 0x28u;
            t43 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t42);
            wr16(arg1 + edi, (uint16_t)t43);
            eax = t43;
        }
        else
        {
            eax = t11;
            ecx = t9;
            edx = t10;
            edi = t8;
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                t12 = rd32(arg1 + edi);
                g->eax = t12;
                g->esp = sp0 - 0x10u;
                t13 = cow_cdecl(g, COW_IMG(0x1000d120u), 1, t12);
                wr32(arg1 + edi, t13);
                eax = t13;
            }
        }
        if ((int32_t)(ebp + 1u) < (int32_t)rd16(arg1))
        {
            edx = rd16(arg1);
            ebx = ebx + 8u;
            ebp = ebp + 1u;
            goto L_10257425;
        }
        edx = rd16(arg1);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
