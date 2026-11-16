/* f_0x101f42e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101f42e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f4315;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101f43db;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
    t2 = g->edx;
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->edx = t4;
    return t3;
L_101f4315: ;
    g->edx = in_edx;
    t5 = rd16(arg4);
    t6 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1015bc40u), t6, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t9;
    }
    else
    {
        ecx = t8;
        edx = t9;
        esi = t7;
        t10 = rd16(esi + 4u);
        t11 = rd8(esi + 0x1b3u);
        wr8(esi + 0x1b3u, (uint8_t)(t11 + 1u));
        if (t10 == 0xcu)
        {
            eax = t10 - 0xcu;
            edx = (edx & 0xffffff00u) | (uint8_t)(t11 + 1u);
            goto L_101f435d;
        }
        eax = t10 - 0xcu;
        edx = (edx & 0xffffff00u) | (uint8_t)(t11 + 1u);
        if (eax != 2u)
        {
            eax = eax - 2u;
            ebx = (in_ebx & 0xffffff00u) | 1u;
            goto L_101f436f;
        }
        eax = eax - 2u;
        if ((int32_t)rd32(self + 0xcu) < 8)
        {
            ebx = (in_ebx & 0xffffff00u) | 1u;
            goto L_101f436f;
        }
        loc_14 = 0x63u;
L_101f4365: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, loc_14);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
        ebx = in_ebx & 0xffffff00u;
L_101f436f: ;
        wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) - 1u));
        if ((uint8_t)ebx != 0u)
        {
            g->eax = eax;
            g->edx = rd32(self);
            t15 = rd32(self);
            g->esp = sp0 - 0x10u;
            t16 = cow_thiscall(g, rd32(t15 + 0x54u), self, 0);
            t17 = g->edx;
            if (rd32(COW_IMG(0x106631d4u)) == 0u)
            {
                eax = rd32(COW_IMG(0x106631d4u));
                edx = t17;
            }
            else
            {
                edx = t17;
                esi = t16;
                g->eax = rd32(self);
                g->edx = edx;
                t18 = rd32(self);
                g->esp = sp0 - 0x10u;
                t19 = cow_thiscall_cdecl(g, rd32(t18 + 0x54u), self, 1, 0u);
                t20 = g->ecx;
                t21 = g->edx;
                t22 = (t20 & 0xffffff00u) | rd8(arg4 + 2u);
                t23 = (t21 & 0xffff0000u) | rd16(arg4);
                g->edx = t23;
                t24 = rd32(COW_IMG(0x106631d4u));
                t25 = cow_thiscall(g, COW_IMG(0x101d39e0u), t24, 4, t23, t22, t19, 0u);
                t26 = g->ecx;
                t27 = g->edx;
                g->edx = t27;
                t28 = cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
                t29 = g->edx;
                t30 = (t28 & 0xffffff00u) | rd8(arg4 + 2u);
                g->eax = t30;
                g->edx = t29;
                t31 = cow_thiscall(g, COW_IMG(0x101d37e0u), rd32(COW_IMG(0x106631d4u)), 2, t30, esi);
                t32 = g->edx;
                eax = t31;
                edx = t32;
            }
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            t33 = rd32(COW_IMG(0x10663740u));
            g->esp = sp0 - 0x10u;
            t34 = cow_thiscall(g, COW_IMG(0x101f2600u), t33, 0);
            t35 = g->ecx;
            t36 = g->edx;
            g->edx = t36;
            t37 = cow_thiscall(g, COW_IMG(0x10037b90u), t35, 0);
            t38 = g->edx;
            eax = t37;
            edx = t38;
        }
    }
L_101f43db: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_101f435d: ;
    if ((int32_t)rd32(self + 8u) < 10)
    {
        ebx = (in_ebx & 0xffffff00u) | 1u;
        goto L_101f436f;
    }
    loc_14 = 0x62u;
    goto L_101f4365;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f42e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f42e0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
