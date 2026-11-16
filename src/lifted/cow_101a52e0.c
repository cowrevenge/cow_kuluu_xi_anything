/* f_0x101a52e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a52e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t3;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if ((uint8_t)arg1 == 0u)
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x63u, 0u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
        loc_c = (rd32(sp0 - 0xcu) & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
        wr8(eax + 0x63u, 1u);
        wr32(sp0 - 0x18u, 2u);
        t1 = (uint32_t)(int8_t)ebx + 0xau;
        wr32(sp0 - 0x1cu, t1);
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t1);
        t3 = g->edx;
        wr32(sp0 - 0x1cu, t2);
        g->edx = t3;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t2, 2u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_call_regs(g, COW_IMG(0x101262e0u), t4, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t7 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            edx = t7;
        }
        else
        {
            edx = t7;
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t8 = rd32(eax + 4u);
                wr32(sp0 - 8u, t8);
                t9 = rd32(eax + 8u);
                wr32(sp0 - 4u, t9);
                edx = t9;
            }
            if (rd32(rd32(COW_IMG(0x106627acu)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x106627acu)) + 8u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t10 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t11 = g->edx;
                if ((uint8_t)t10 == 0u)
                {
                    edx = t11;
                }
                else
                {
                    edx = t11;
                    t12 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x18u, t12);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_call_regs(g, COW_IMG(0x101a4540u), t12, rd32(self + 0x24u), g->edx, 0, 1, t12);
                    t13 = g->edx;
                    edx = t13;
                }
            }
            if (rd32(rd32(COW_IMG(0x106627b8u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t14 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t15 = g->ecx;
                t16 = g->edx;
                if ((uint8_t)t14 == 0u)
                {
                    edx = t16;
                }
                else
                {
                    ecx = t15;
                    edx = t16;
                    t17 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
                    wr32(sp0 - 0x18u, t17);
                    wr32(sp0 - 0x1cu, 8u);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 8u, t17);
                    t18 = g->edx;
                    edx = t18;
                }
            }
        }
    }
    if ((uint32_t)(int8_t)rd8(self + 0x48u) == 1u) goto L_101a53fa;
    eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
    if (eax == 1u) goto L_101a53dc;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101a5415;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        wr8(eax + 0x44u, 3u);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x48u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a53dc: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t22 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_101a5415;
    }
    eax = t21;
    edx = t22;
    if (rd8(eax + 0x44u) != 1u) goto L_101a5415;
    wr8(self + 0x48u, 3u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a53fa: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        edx = t24;
    }
    else
    {
        eax = t23;
        edx = t24;
        wr8(eax + 0x44u, 2u);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x48u, 2u);
L_101a5415: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a52e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a52e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
