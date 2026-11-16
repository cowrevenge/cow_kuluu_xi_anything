/* f_0x1008da00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008da00(Guest* g)
{
    double d5;
    double d6;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((rd32(self + 0x120u) >> 8u & 0x20u) == 0u)
    {
        edx = rd32(self + 0x120u);
        if ((rd32(self + 0x78u) & 0xff000000u) != 0u)
        {
            if (rd8(self + 0xeeu) == 2u)
            {
                ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
                goto L_1008da30;
            }
            ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
            if ((uint8_t)ecx != 7u) goto L_1008da67;
L_1008da30: ;
            if (rd16(self + 0xfcu) < 0x3c0u)
            {
                eax = (in_eax & 0xffff0000u) | rd16(self + 0xfcu);
                goto L_1008da47;
            }
            eax = (in_eax & 0xffff0000u) | rd16(self + 0xfcu);
            if ((uint16_t)eax <= 0x3c9u) goto L_1008db2f;
L_1008da47: ;
            if ((uint16_t)eax < 0x979u) goto L_1008da57;
            if ((uint16_t)eax <= 0x97du) goto L_1008db2f;
L_1008da57: ;
            if ((uint16_t)eax < 0x9bfu) goto L_1008da67;
            if ((uint16_t)eax <= 0x9c3u) goto L_1008db2f;
L_1008da67: ;
            if ((int8_t)edx >= 0)
            {
                if (rd32(self + 0x170u) == 0u)
                {
                    if ((uint8_t)ecx != 3u)
                    {
                        if ((uint8_t)ecx != 4u)
                        {
                            if ((uint8_t)ecx != 5u)
                            {
                                t1 = (uint32_t)(int16_t)rd16(self + 0x1bau);
                                wr32(sp0 - 4u, t1);
                                wrf32(sp0 - 4u, (float)(double)(float)(double)(int32_t)t1);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 8u;
                                t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), t1, g->ecx, g->edx, 1, 0);
                                t3 = g->ecx;
                                t4 = g->edx;
                                d5 = cow_take_float(g);
                                g->ecx = t3;
                                g->edx = t4;
                                d6 = fr(g, (double)rdf32(sp0 - 4u) - d5);
                                fpush(g, d6);
                                t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
                                t8 = g->ecx;
                                t9 = g->edx;
                                wr16(self + 0x1bau, (uint16_t)t7);
                                if ((int16_t)t7 >= 0)
                                {
                                    edx = t9;
                                }
                                else
                                {
                                    eax = t7;
                                    ecx = t8;
                                    edx = t9;
                                    g->eax = eax;
                                    g->esp = sp0 - 8u;
                                    t10 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
                                    t11 = cow_divs(g, t10, 0x258u);
                                    t12 = cow_mods(g, t10, 0x258u);
                                    wr16(self + 0x1bau, (uint16_t)(t12 + 0x258u));
                                    g->eax = t11;
                                    t13 = cow_fastcall(g, COW_IMG(0x103149e0u), 0x258u, t12 + 0x258u, 0);
                                    t14 = g->edx;
                                    if (t13 & 1u)
                                    {
                                        edx = t14;
                                        t16 = rd32(self + 0x1acu);
                                        wr32(self + 0x1a4u, t16);
                                    }
                                    else
                                    {
                                        t15 = rd32(self + 0x1a8u);
                                        wr32(self + 0x1a4u, t15);
                                        edx = t15;
                                    }
                                }
                                if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
                                {
                                    eax = rd32(self + 0x120u);
                                    wr32(sp0 - 0xcu, COW_IMG(0x10330ebcu));
                                    g->eax = eax;
                                    g->esp = sp0 - 8u;
                                    t17 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x10330ebcu));
                                    if ((uint8_t)t17 != 0u)
                                    {
                                        t18 = rd32(self + 0x1a4u);
                                        wr32(rd32(self + 0xa0u) + 0x7c8u, t18);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_1008db2f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008da00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008da00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
