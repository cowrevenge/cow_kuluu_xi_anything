/* f_0x10132c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10132c30(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = in_edx;
            edi = in_edi;
        }
        else
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            if ((uint8_t)arg1 == 0u)
            {
                edx = in_edx;
                goto L_10132c63;
            }
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_thiscall(g, COW_IMG(0x10131b40u), self, 0);
            t2 = g->edx;
            if ((uint8_t)t1 == 0u)
            {
                eax = t1;
                edx = t2;
                edi = in_edi;
                goto L_10132da7;
            }
            edx = t2;
L_10132c63: ;
            wr32(sp0 - 0x10u, in_edi);
            wr32(self + 0x22u, 0u);
            wr32(self + 0x26u, 0u);
            wr32(self + 0x2au, 0u);
            wr32(self + 0x2eu, 0u);
            edi = self + 0x34u;
            eax = 0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_stdcall(g, COW_IMG(0x100e5290u), 0);
            t4 = g->ecx;
            t5 = g->edx;
            eax = t3;
            ecx = t4;
            edx = t5;
            edi = 0u;
L_10132c85: ;
            if (eax == 0u) goto L_10132ca8;
            t6 = rd8(eax + 4u);
            wr8(self + rd32(eax) + 0x22u, (uint8_t)t6);
            t7 = rd8(eax + 5u);
            wr32(self + rd32(eax) * 4u + 0x34u, t7);
            g->ecx = (ecx & 0xffffff00u) | t6;
            g->edx = t7;
            t8 = rd32(eax);
            g->esp = sp0 - 0x10u;
            t9 = cow_stdcall(g, COW_IMG(0x100e52c0u), 0);
            t10 = g->ecx;
            t11 = g->edx;
            if ((int32_t)(edi + 1u) < 16)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                edi = edi + 1u;
                goto L_10132c85;
            }
            eax = t9;
            ecx = t10;
            edx = t11;
L_10132ca8: ;
            t12 = rd16(COW_IMG(0x10485668u));
            t13 = rd32(sp0 - 0x10u);
            wr16(self + 0xa6u, (uint16_t)t12);
            t14 = rd16(COW_IMG(0x1048566au));
            wr16(self + 0xc6u, (uint16_t)t14);
            t15 = rd16(COW_IMG(0x1048566cu));
            wr16(self + 0xe6u, (uint16_t)t15);
            t16 = rd16(COW_IMG(0x1048566eu));
            wr16(self + 0x106u, (uint16_t)t16);
            t17 = rd16(COW_IMG(0x10485670u));
            wr16(self + 0x126u, (uint16_t)t17);
            t18 = rd16(COW_IMG(0x10485672u));
            wr16(self + 0x146u, (uint16_t)t18);
            t19 = rd16(COW_IMG(0x10485674u));
            wr16(self + 0x166u, (uint16_t)t19);
            t20 = rd16(COW_IMG(0x10485676u));
            wr16(self + 0x186u, (uint16_t)t20);
            t21 = rd16(COW_IMG(0x10485664u));
            wr16(self + 0x1a6u, (uint16_t)t21);
            wr16(self + 0x1c6u, rd16(COW_IMG(0x10485666u)));
            if ((uint8_t)arg1 == 0u)
            {
                eax = ((((eax | t15 | t18) & 0xffff0000u) | t21) & 0xffffff00u) | (uint8_t)arg1;
                edx = ((edx | t14 | t17) & 0xffff0000u) | t20;
                edi = t13;
            }
            else
            {
                eax = ((((eax | t15 | t18) & 0xffff0000u) | t21) & 0xffffff00u) | (uint8_t)arg1;
                edi = t13;
                wr32(sp0 - 0x10u, 0u);
                g->edx = rd32(self);
                t22 = rd32(self);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(t22 + 0x4cu), self, 1, 0u);
                t23 = g->edx;
                if (rd32(rd32(COW_IMG(0x10663740u)) + 8u) == 0u)
                {
                    eax = rd32(COW_IMG(0x10663740u));
                    edx = t23;
                }
                else
                {
                    eax = rd32(COW_IMG(0x10663740u));
                    edx = t23;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t24 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
                    t25 = g->edx;
                    if ((uint8_t)t24 == 0u)
                    {
                        eax = t24;
                        edx = t25;
                    }
                    else
                    {
                        edx = t25;
                        wr32(sp0 - 8u, 0u);
                        wr32(sp0 - 4u, 0u);
                        if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                        {
                            eax = rd32(COW_IMG(0x104e1d4cu));
                            t26 = rd32(eax + 4u);
                            wr32(sp0 - 8u, t26);
                            t27 = rd32(eax + 8u);
                            wr32(sp0 - 4u, t27);
                            edx = t27;
                        }
                        wr32(sp0 - 0x10u, sp0 - 8u);
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        t28 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x10663740u)) + 8u), 1, sp0 - 8u);
                        t29 = g->edx;
                        if ((uint8_t)t28 == 0u)
                        {
                            eax = t28;
                            edx = t29;
                        }
                        else
                        {
                            eax = t28;
                            wr32(sp0 - 0x10u, 0u);
                            wr32(sp0 - 0x14u, 8u);
                            g->eax = eax;
                            g->edx = rd32(self);
                            t30 = rd32(self);
                            g->esp = sp0 - 0xcu;
                            t31 = cow_thiscall(g, rd32(t30 + 0x18u), self, 2, 8u, 0u);
                            t32 = g->edx;
                            eax = t31;
                            edx = t32;
                        }
                    }
                }
            }
        }
    }
L_10132da7: ;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
