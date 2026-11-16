/* f_0x10225f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10225f90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x6cu) == 0u) goto L_10225fd6;
        eax = rd32(self + 0x6cu);
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10225fc3;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_10226008;
        eax = eax - 1u;
        wr32(sp0 - 0x10u, 2u);
        wr32(sp0 - 0x14u, 0x3a4u);
        wr32(sp0 - 0x18u, 0xeu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3a4u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
L_10225ffc: ;
        wr32(sp0 - 0x14u, eax);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 2u);
L_10226008: ;
        if (rd32(rd32(COW_IMG(0x10667144u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
            edx = rd32(COW_IMG(0x10667144u));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
            edx = rd32(COW_IMG(0x10667144u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t8 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t9 = g->edx;
            if ((uint8_t)t8 == 0u)
            {
                eax = t8;
                edx = t9;
            }
            else
            {
                edx = t9;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t10 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t10);
                    t11 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t11);
                    edx = t11;
                }
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x10667144u)) + 8u), 1, sp0 - 8u);
                t13 = g->edx;
                if ((uint8_t)t12 == 0u)
                {
                    eax = t12;
                    edx = t13;
                }
                else
                {
                    eax = t12;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t14 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    t15 = cow_thiscall(g, rd32(t14 + 0x18u), self, 2, 8u, 0u);
                    t16 = g->edx;
                    eax = t15;
                    edx = t16;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_10225fc3: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x3a3u);
    wr32(sp0 - 0x18u, 0xeu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3a3u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    goto L_10225ffc;
L_10225fd6: ;
    if ((int32_t)rd32(self + 0x30u) < 0) goto L_10226008;
    eax = rd32(self + 0x30u);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_10226008;
    if (eax * 8u + rd32(self + 0x20u) == 0u) goto L_10226008;
    eax = eax * 8u + rd32(self + 0x20u);
    wr32(sp0 - 0x10u, rd32(eax));
    g->edx = in_edx;
    t5 = rd32(eax);
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x102255b0u), self, 1, t5);
    t7 = g->edx;
    if (t6 == 0u) goto L_10226008;
    eax = t6;
    edx = t7;
    wr32(sp0 - 0x10u, 2u);
    goto L_10225ffc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225f90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
