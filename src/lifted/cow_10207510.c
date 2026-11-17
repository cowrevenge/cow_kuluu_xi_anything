/* f_0x10207510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10207510(Guest* g)
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        edx = t4;
        edi = t2;
        goto L_102075fb;
    }
    ecx = t3;
    edx = t4;
    edi = t2;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10207557;
    if (arg4 == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_1020765d;
    }
    if (rd32(self + 0xcu) == arg4)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
    }
    else
    {
        t5 = (ecx & 0xffffff00u) | rd8(arg4 + 2u);
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x101d3880u), rd32(COW_IMG(0x106631d4u)), 2, t5, edi);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(self + 0xcu, arg4);
    g->edx = edx;
    return eax;
L_10207557: ;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->ecx = rd32(COW_IMG(0x106631d4u));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x106631d4u));
    g->esp = sp0 - 0xcu;
    t9 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t11;
        goto L_1020756f;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_stdcall(g, COW_IMG(0x101cc1c0u), 0);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        edx = t13;
        goto L_1020757c;
    }
    eax = t12;
    edx = t13;
L_1020756f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101d55d0u), rd32(COW_IMG(0x106631d4u)), 1, 1u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_1020757c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x101d3380u), rd32(COW_IMG(0x106631d4u)), 3, 0u, 0xffffffffu, edi);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2d8u));
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2c4u));
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
    t29 = g->edx;
    g->ebx = 0u;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t31 = g->edx;
    wr8(self + 8u, 0u);
    g->ebx = in_ebx;
    g->edx = t31;
    return t30;
L_102075fb: ;
    if (arg4 == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
    }
    else
    {
        if (rd8(arg4 + 0x10u) >= 0xcu)
        {
            eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(arg4 + 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t37 = cow_thiscall(g, COW_IMG(0x101d3380u), rd32(COW_IMG(0x106631d4u)), 3, 0u, 0xffffffffu, edi);
            t38 = g->edx;
            eax = t37;
            edx = t38;
        }
        else
        {
            eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(arg4 + 0x10u);
            if ((int8_t)rd8(arg4 + 0x11u) >= 0)
            {
                t34 = rd32(COW_IMG(0x103854f4u) + (uint8_t)eax * 4u);
                g->ebx = 0u;
                g->eax = (uint8_t)eax;
                g->edx = t34;
                g->esp = sp0 - 0xcu;
                t35 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t34, 1u, 0u);
                t36 = g->edx;
                eax = t35;
                edx = t36;
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(arg4 + 0x11u);
                g->ebx = 0u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t32 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037e274u), 1u, 0u);
                t33 = g->edx;
                eax = t32;
                edx = t33;
            }
        }
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        t39 = rd32(COW_IMG(0x10663740u));
        g->esp = sp0 - 0xcu;
        t40 = cow_thiscall(g, COW_IMG(0x101f2600u), t39, 0);
        t41 = g->ecx;
        t42 = g->edx;
        wr8(self + 8u, 0u);
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x10037b90u), t41, 0);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
L_1020765d: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207510(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
