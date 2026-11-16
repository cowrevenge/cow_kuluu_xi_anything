/* f_0x10241820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10241820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(COW_IMG(0x10669090u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10669090u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10669090u));
        wr32(sp0 - 0x10u, 0xffffffffu);
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, 0x9bu);
        wr32(sp0 - 0x1cu, 0x3fu);
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3fu, 0x9bu, 4u, 0xffffffffu, in_esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = (t2 & 0xffffff00u) | (uint8_t)arg1;
            goto L_10241889;
        }
        eax = t1;
        edx = (t2 & 0xffffff00u) | (uint8_t)arg1;
        if ((uint8_t)edx == 0u) goto L_102418fa;
        t3 = rd32(self + 8u);
        wr8(self + 0x32u, 1u);
        wr32(sp0 - 0x10u, in_edi);
        t4 = (uint32_t)(int16_t)rd16(t3 + 0x4cu) - 1u;
        wr32(COW_IMG(0x1066908cu), t4);
        if (rd32(self + t4 * 0xb0u + 0x68u) == 0u)
        {
            eax = t4 * 0xb0u;
        }
        else
        {
            t5 = rd32(self + 8u);
            wr32(self + 0x1cu, 1u);
            wr8(t5 + 0x5du, 1u);
            eax = t5;
        }
L_1024188d: ;
        if ((uint8_t)edx != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t7 = g->edx;
            if ((uint8_t)t6 == 0u)
            {
                eax = t6;
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
                if (rd32(rd32(COW_IMG(0x10669084u)) + 8u) == 0u)
                {
                    eax = rd32(COW_IMG(0x10669084u));
                }
                else
                {
                    ecx = rd32(rd32(COW_IMG(0x10669084u)) + 8u);
                    wr32(sp0 - 0x10u, sp0 - 8u);
                    g->edx = sp0 - 8u;
                    g->esp = sp0 - 0xcu;
                    t10 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                    t11 = g->edx;
                    if ((uint8_t)t10 == 0u)
                    {
                        eax = t10;
                        edx = t11;
                    }
                    else
                    {
                        wr32(sp0 - 0x10u, 0u);
                        wr32(sp0 - 0x14u, 8u);
                        t12 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
                        t13 = rd32(self + 8u);
                        wr32(COW_IMG(0x1066908cu), t12);
                        g->eax = t13;
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
    }
L_102418fa: ;
    g->edx = edx;
    return eax;
L_10241889: ;
    wr8(self + 0x32u, 0u);
    goto L_1024188d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10241820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10241820(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
