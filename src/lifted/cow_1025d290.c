/* f_0x1025d290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1025d290(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x10u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_thiscall(g, COW_IMG(0x1025c8c0u), self, 0);
    t2 = g->edx;
    if (rd8(self + 0x40u) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x40u);
        edx = t2;
    }
    else
    {
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 8u);
        wr32(sp0 - 0x40u, 0u);
        t3 = rd32(self + 8u);
        wr32(sp0 - 0x44u, t3);
        g->eax = t3;
        g->edx = sp0 - 8u;
        t4 = rd32(rd32(self + 8u));
        g->esp = sp0 - 0x30u;
        t5 = cow_thiscall(g, rd32(t4 + 0x40u), t4, 5, t3, 0u, sp0 - 8u, 0u, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        if ((int32_t)t5 < 0)
        {
            eax = t5;
            edx = t7;
        }
        else
        {
            ecx = t6;
            t8 = rd32(self + 0x3cu);
            wr32(sp0 - 0x18u, t8);
            wr32(sp0 - 0x34u, in_edi);
            t9 = rd32(self + 0x44u);
            wr32(sp0 - 0x20u, t9);
            t10 = rd32(self + 0x34u);
            wr32(sp0 - 0x24u, t10);
            t11 = rd32(self + 0x38u);
            wr32(sp0 - 0xcu, t11);
            if ((int32_t)rd32(self + 0x38u) <= 0)
            {
                eax = t11;
                ebx = self;
            }
            else
            {
                eax = t11;
                edx = t9;
                edi = t10;
                loc_18 = t8;
                loc_20 = t9;
                loc_24 = t10;
                loc_c = t11;
                wr32(sp0 - 0x38u, in_ebp);
                wr32(sp0 - 0x3cu, in_esi);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x14u, eax);
                ebx = self;
                loc_2c = 0u;
                loc_14 = eax;
L_1025d2f9: ;
                wr32(sp0 - 0x1cu, 0u);
                ecx = 0u;
                loc_1c = 0u;
L_1025d2ff: ;
                if (rd8(edx + 0x20u) != 0u)
                {
                    if ((int32_t)edi > 0)
                    {
                        ebp = rd32(sp0 - 4u) + (ecx + loc_2c) * edi * 2u;
                        esi = rd32(ebx + 0x48u) + (ecx + loc_2c) * edi * 2u;
                        wr32(sp0 - 0x28u, edi);
                        loc_28 = edi;
L_1025d324: ;
                        eax = ebp;
                        edx = esi - ebp;
L_1025d32a: ;
                        t12 = rd16(eax + edx);
                        t13 = rd16(eax);
                        wr16(eax, (uint16_t)(((t13 ^ t12) & 0xfffu) ^ t12));
                        if (edi != 1u)
                        {
                            eax = eax + 2u;
                            ebx = ((t13 ^ t12) & 0xfffu) ^ ((ecx & 0xffff0000u) | t12);
                            ecx = (ecx & 0xffff0000u) | t12;
                            edi = edi - 1u;
                            goto L_1025d32a;
                        }
                        ebx = ((t13 ^ t12) & 0xfffu) ^ ((ecx & 0xffff0000u) | t12);
                        wr32(sp0 - 0x28u, loc_28 - 1u);
                        if (loc_28 != 1u)
                        {
                            ecx = loc_18;
                            ebp = ebp + loc_18 * 2u;
                            esi = esi + loc_18 * 2u;
                            edi = loc_24;
                            loc_28 = loc_28 - 1u;
                            goto L_1025d324;
                        }
                        edi = loc_24;
                        ecx = loc_1c;
                        edx = loc_20;
                        ebx = rd32(sp0 - 0x10u);
                    }
                    wr8(edx + 0x20u, 0u);
                    eax = loc_c;
                }
                wr32(sp0 - 0x20u, edx + 0x24u);
                wr32(sp0 - 0x1cu, ecx + 1u);
                if ((int32_t)(ecx + 1u) < (int32_t)eax)
                {
                    loc_20 = edx + 0x24u;
                    edx = edx + 0x24u;
                    loc_1c = ecx + 1u;
                    ecx = ecx + 1u;
                    goto L_1025d2ff;
                }
                loc_20 = edx + 0x24u;
                edx = edx + 0x24u;
                wr32(sp0 - 0x2cu, loc_18 + loc_2c);
                wr32(sp0 - 0x14u, loc_14 - 1u);
                if (loc_14 != 1u)
                {
                    loc_2c = loc_18 + loc_2c;
                    loc_14 = loc_14 - 1u;
                    goto L_1025d2f9;
                }
                ecx = loc_14 - 1u;
            }
            wr32(sp0 - 0x38u, 0u);
            t14 = rd32(ebx + 8u);
            wr32(sp0 - 0x3cu, t14);
            g->eax = eax;
            g->edx = rd32(t14);
            t15 = rd32(t14);
            g->esp = sp0 - 0x34u;
            t16 = cow_thiscall(g, rd32(t15 + 0x44u), ecx, 2, t14, 0u);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025d290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025d290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
