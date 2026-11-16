/* f_0x101ced80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101ced80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101cf0a0u), self, 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        esi = t1;
        goto L_101ceda1;
    }
    eax = t2;
    return eax;
L_101ceda1: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x101cebe0u), esi, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101cede6;
    }
    ecx = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, COW_IMG(0x101ceac0u), ecx, 0);
    t8 = g->edx;
    t9 = rd8(esi + 5u);
    wr8(self + t7 * 5u + 0x1040u, (uint8_t)t9);
    wr8(self + t7 * 5u + 0x1041u, rd8(esi + 0x10u));
    wr8(self + t7 * 5u + 0x1042u, 0u);
    return (self + t7 * 5u & 0xffffff00u) | 1u;
L_101cede6: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ecx, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101ceac0u), esi, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101ceb40u), t13, 0);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101ceae0u), esi, 0);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x101cead0u), t18, 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        ebx = t15 + t17;
        edi = t10 + t12;
        goto L_101cee98;
    }
    ecx = t21;
    edx = t22;
    ebx = t15 + t17;
    edi = t10 + t12;
    loc_4 = t15 + t17;
    g->esp = sp0 - 0x18u;
    t23 = cow_thiscall(g, COW_IMG(0x101ceac0u), ecx, 0);
    if ((int32_t)t23 >= (int32_t)edi)
    {
        eax = t23;
        goto L_101ceee3;
    }
    eax = t23;
    wr32(sp0 + 4u, eax * 0x1au);
    edx = eax * 0x1au;
    edi = edi - eax;
L_101cee32: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t24 = cow_thiscall(g, COW_IMG(0x101ceae0u), esi, 0);
    t25 = g->ecx;
    t26 = g->edx;
    if ((int32_t)t24 >= (int32_t)ebx)
    {
        eax = t24;
        edx = t26;
    }
    else
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        edx = eax * 8u + edx * 8u + self + 4u;
        ebx = ebx - eax;
L_101cee45: ;
        wr8(edx - 4u, rd8(esi + 5u));
        wr8(edx - 2u, rd8(esi + 0x10u));
        g->edx = edx;
        t27 = rd8(esi + 5u);
        g->esp = sp0 - 0x18u;
        t28 = cow_thiscall(g, COW_IMG(0x101cebf0u), esi, 0);
        t29 = g->ecx;
        t30 = g->edx;
        if ((uint8_t)t28 == 0u)
        {
            eax = t28;
            ecx = t29;
            edx = t30;
            wr8(edx, 0u);
        }
        else
        {
            ecx = t29;
            edx = t30;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t31 = cow_thiscall(g, COW_IMG(0x101cebd0u), ecx, 0);
            t32 = g->ecx;
            t33 = g->edx;
            wr16(t33 + 2u, (uint16_t)t31);
            t34 = rd8(t33);
            wr8(t33, t34 & 0xfeu);
            eax = (t31 & 0xffffff00u) | (t34 & 0xfeu);
            ecx = t32;
            edx = t33;
        }
        if (ebx != 1u)
        {
            edx = edx + 8u;
            ebx = ebx - 1u;
            goto L_101cee45;
        }
        edx = rd32(sp0 + 4u);
        ebx = loc_4;
    }
    wr32(sp0 + 4u, edx + 0x1au);
    if (edi != 1u)
    {
        edx = edx + 0x1au;
        edi = edi - 1u;
        goto L_101cee32;
    }
    return (eax & 0xffffff00u) | 1u;
L_101cee98: ;
    g->esp = sp0 - 0x18u;
    t35 = cow_thiscall(g, COW_IMG(0x101ceac0u), ecx, 0);
    if ((int32_t)t35 >= (int32_t)edi)
    {
        eax = t35;
    }
    else
    {
        eax = t35;
        edx = eax * 3u;
        ebp = eax * 0x1au;
        edi = edi - eax;
L_101ceeab: ;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t36 = cow_thiscall(g, COW_IMG(0x101ceae0u), esi, 0);
        t37 = g->edx;
        if ((int32_t)t36 >= (int32_t)ebx)
        {
            eax = t36;
            edx = t37;
        }
        else
        {
            eax = t36;
            ecx = eax * 8u + ebp * 8u + self + 4u;
            edx = ebx - eax;
L_101ceec5: ;
            t38 = rd8(esi + 5u);
            wr8(ecx - 3u, (uint8_t)t38);
            t39 = rd8(esi + 0x10u);
            wr8(ecx - 1u, (uint8_t)t39);
            t40 = rd8(ecx);
            wr8(ecx, t40 & 0xfdu);
            if (edx != 1u)
            {
                eax = ((eax | t38 | t39) & 0xffffff00u) | (t40 & 0xfdu);
                ecx = ecx + 8u;
                edx = edx - 1u;
                goto L_101ceec5;
            }
            eax = ((eax | t38 | t39) & 0xffffff00u) | (t40 & 0xfdu);
            edx = edx - 1u;
        }
        if (edi != 1u)
        {
            ebp = ebp + 0x1au;
            edi = edi - 1u;
            goto L_101ceeab;
        }
    }
L_101ceee3: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ced80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ced80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
