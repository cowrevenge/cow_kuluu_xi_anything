/* f_0x10226b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10226b70(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(self + 0x30u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10226620u), self, 1, t1);
    t3 = g->edx;
    wr32(sp0 - 0x18u, t2);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10226e50u), COW_IMG(0x10667044u), 3, t2, 0u, 0u);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x10578474u));
    wr32(t6 + 0x24u, t4);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (t4 & 0xffffff00u) | (uint8_t)arg1;
        edx = t5;
        loc_c = in_esi;
    }
    else
    {
        ecx = t6;
        edx = t5;
        if (rd32(self + 0x64u) == 0u) goto L_10226bd7;
        eax = rd32(self + 0x64u);
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10226bc4;
        }
        eax = eax - 1u;
        if (eax != 1u)
        {
            loc_c = in_esi;
            goto L_10226c10;
        }
        eax = eax - 1u;
        wr32(sp0 - 0x10u, 2u);
        wr32(sp0 - 0x14u, 0x3e7u);
        wr32(sp0 - 0x18u, 0xeu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3e7u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
L_10226c04: ;
        wr32(sp0 - 0x14u, eax);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 2u);
        t14 = g->edx;
        edx = t14;
        loc_c = rd32(sp0 - 0xcu);
L_10226c10: ;
        if (rd32(rd32(COW_IMG(0x10667144u)) + 8u) == 0u)
        {
            eax = rd32(COW_IMG(0x10667144u));
        }
        else
        {
            eax = rd32(COW_IMG(0x10667144u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t15 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t16 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                eax = t15;
                edx = t16;
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                edx = t16;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t17 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t17);
                    t18 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t18);
                    edx = t18;
                }
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->eax = sp0 - 8u;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t19 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x10667144u)) + 8u), 1, sp0 - 8u);
                t20 = g->edx;
                if ((uint8_t)t19 == 0u)
                {
                    eax = t19;
                    edx = t20;
                    loc_c = rd32(sp0 - 0xcu);
                }
                else
                {
                    eax = t19;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t21 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    t22 = cow_thiscall(g, rd32(t21 + 0x18u), self, 2, 8u, 0u);
                    t23 = g->edx;
                    eax = t22;
                    edx = t23;
                    loc_c = rd32(sp0 - 0xcu);
                }
            }
        }
    }
    g->esi = loc_c;
    g->edx = edx;
    return eax;
L_10226bc4: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x3e6u);
    wr32(sp0 - 0x18u, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3e6u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    goto L_10226c04;
L_10226bd7: ;
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        loc_c = in_esi;
        goto L_10226c10;
    }
    if ((int32_t)rd32(self + 0x30u) < 0)
    {
        loc_c = in_esi;
        goto L_10226c10;
    }
    eax = rd32(self + 0x30u);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u))
    {
        loc_c = in_esi;
        goto L_10226c10;
    }
    if (eax * 8u + rd32(self + 0x20u) == 0u)
    {
        edx = rd32(self + 0x20u);
        loc_c = in_esi;
        goto L_10226c10;
    }
    eax = eax * 8u + rd32(self + 0x20u);
    edx = rd32(self + 0x20u);
    wr32(sp0 - 0x10u, rd32(eax));
    g->eax = rd32(eax);
    t11 = rd32(eax);
    g->esp = sp0 - 0xcu;
    t12 = cow_fastcall(g, COW_IMG(0x102265e0u), self, edx, 1, t11);
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
        loc_c = in_esi;
        goto L_10226c10;
    }
    eax = t12;
    edx = t13;
    wr32(sp0 - 0x10u, 2u);
    goto L_10226c04;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226b70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
