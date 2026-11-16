/* f_0x101a4c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a4c00(Guest* g)
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
        wr32(sp0 - 0x1cu, (uint32_t)(int8_t)ebx);
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, (uint32_t)(int8_t)ebx);
        t2 = g->edx;
        wr32(sp0 - 0x1cu, t1);
        g->edx = t2;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t1, 2u);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_call_regs(g, COW_IMG(0x101262e0u), t3, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t6 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            edx = t6;
        }
        else
        {
            edx = t6;
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t7 = rd32(eax + 4u);
                wr32(sp0 - 8u, t7);
                t8 = rd32(eax + 8u);
                wr32(sp0 - 4u, t8);
                edx = t8;
            }
            if (rd32(rd32(COW_IMG(0x106627b0u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x106627b0u)) + 8u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t9 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t10 = g->edx;
                if ((uint8_t)t9 == 0u)
                {
                    edx = t10;
                }
                else
                {
                    edx = t10;
                    t11 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x18u, t11);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_call_regs(g, COW_IMG(0x101a4540u), t11, rd32(self + 0x24u), g->edx, 0, 1, t11);
                    t12 = g->edx;
                    edx = t12;
                }
            }
            if (rd32(rd32(COW_IMG(0x106627b8u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t13 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t14 = g->ecx;
                t15 = g->edx;
                if ((uint8_t)t13 == 0u)
                {
                    edx = t15;
                }
                else
                {
                    ecx = t14;
                    edx = t15;
                    t16 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
                    wr32(sp0 - 0x18u, t16);
                    wr32(sp0 - 0x1cu, 8u);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 8u, t16);
                    t17 = g->edx;
                    edx = t17;
                }
            }
        }
    }
    if ((uint32_t)(int8_t)rd8(self + 0x48u) == 1u) goto L_101a4d17;
    eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
    if (eax == 1u) goto L_101a4cf9;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101a4d32;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        edx = t19;
    }
    else
    {
        eax = t18;
        edx = t19;
        wr8(eax + 0x44u, 3u);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x48u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a4cf9: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t20 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101a4d32;
    }
    eax = t20;
    edx = t21;
    if (rd8(eax + 0x44u) != 1u) goto L_101a4d32;
    wr8(self + 0x48u, 3u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a4d17: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
        wr8(eax + 0x44u, 2u);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x48u, 2u);
L_101a4d32: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4c00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
