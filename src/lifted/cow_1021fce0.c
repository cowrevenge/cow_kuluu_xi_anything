/* f_0x1021fce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021fce0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_esi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        if (rd32(eax + 0x3c350u) != 0x47u)
        {
            ebx = in_ebx;
        }
        else
        {
            if (rd32(COW_IMG(0x1057847cu)) == 0u)
            {
                ebx = in_ebx;
            }
            else
            {
                ecx = rd32(COW_IMG(0x1057847cu));
                if (rd32(COW_IMG(0x10663accu)) == 0u)
                {
                    ebx = in_ebx;
                }
                else
                {
                    eax = rd32(COW_IMG(0x10663accu));
                    g->eax = eax;
                    g->edx = in_edx;
                    g->esp = sp0 - 0x18u;
                    t1 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
                    t2 = g->edx;
                    if ((uint8_t)t1 == 0u)
                    {
                        ebx = in_ebx;
                    }
                    else
                    {
                        eax = t1;
                        edx = t2;
                        g->eax = eax;
                        g->edx = edx;
                        t3 = rd32(COW_IMG(0x10663accu));
                        g->esp = sp0 - 0x18u;
                        t4 = cow_thiscall(g, COW_IMG(0x1011ba40u), t3, 0);
                        t5 = g->ecx;
                        t6 = g->edx;
                        if ((uint8_t)t4 == 0u)
                        {
                            ebx = in_ebx;
                        }
                        else
                        {
                            eax = t4;
                            ecx = t5;
                            edx = t6;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            t7 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
                            t8 = g->ecx;
                            t9 = g->edx;
                            if (t7 == 0u)
                            {
                                ebx = in_ebx;
                            }
                            else
                            {
                                eax = t7;
                                ecx = t8;
                                edx = t9;
                                if (rd8(eax + 0x200u) == 0u)
                                {
                                    ebx = in_ebx;
                                }
                                else
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x200u);
                                    wr32(sp0 - 0x1cu, in_ebx);
                                    wr32(sp0 - 0x20u, 1u);
                                    wr32(sp0 - 0x24u, sp0 - 0xcu);
                                    t10 = rd8(eax + 0x201u);
                                    wr8(sp0 - 0x10u, t10 == 1u);
                                    wr8(sp0 - 0x14u, 0xa6u);
                                    wr8(sp0 - 0x13u, 0u);
                                    wr16(sp0 - 0x12u, 0u);
                                    g->ebx = (in_ebx & 0xffffff00u) | t10 == 1u;
                                    g->eax = sp0 - 0xcu;
                                    g->esp = sp0 - 0x1cu;
                                    t11 = cow_stdcall(g, COW_IMG(0x1021f140u), 2, sp0 - 0xcu, 1u);
                                    if (t11 != 0u)
                                    {
                                        eax = t11;
                                        ebx = (in_ebx & 0xffffff00u) | t10 == 1u;
                                    }
                                    else
                                    {
                                        eax = t11;
                                        ebx = (in_ebx & 0xffffff00u) | t10 == 1u;
                                        wr16(self + 7u, 0u);
                                        wr8(self + 9u, 0u);
                                    }
                                    wr32(sp0 - 0x20u, self + 7u);
                                    wr32(sp0 - 0x24u, rd32(COW_IMG(0x104e1be0u)));
                                    wr32(sp0 - 0x28u, eax);
                                    wr32(sp0 - 0x2cu, sp0 - 0xcu);
                                    wr32(sp0 - 0x30u, sp0 - 0x14u);
                                    t12 = (rd32(COW_IMG(0x104e1be0u)) & 0xffffff00u) | (uint8_t)ebx == 0u;
                                    wr32(sp0 - 0x34u, t12);
                                    g->esp = sp0 - 0x1cu;
                                    t13 = cow_call_regs(g, COW_IMG(0x1021fbd0u), sp0 - 0x14u, g->ecx, g->edx, 0, 6, t12, sp0 - 0x14u, sp0 - 0xcu, eax, rd32(COW_IMG(0x104e1be0u)), self + 7u);
                                    wr32(sp0 - 0x20u, 0u);
                                    wr32(sp0 - 0x24u, sp0 - 0xcu);
                                    wr8(sp0 - 0x14u, 0xa7u);
                                    wr8(sp0 - 0x13u, 0u);
                                    wr16(sp0 - 0x12u, 0u);
                                    g->ebx = ebx;
                                    t14 = cow_stdcall(g, COW_IMG(0x1021f140u), 2, sp0 - 0xcu, 0u);
                                    if (t14 != 0u)
                                    {
                                        eax = t14;
                                        ebx = rd32(sp0 - 0x1cu);
                                    }
                                    else
                                    {
                                        eax = t14;
                                        ebx = rd32(sp0 - 0x1cu);
                                        wr16(self + 0xau, 0u);
                                        wr8(self + 0xcu, 0u);
                                    }
                                    wr32(sp0 - 0x1cu, self + 0xau);
                                    wr32(sp0 - 0x20u, rd32(COW_IMG(0x104e1be4u)));
                                    wr32(sp0 - 0x24u, eax);
                                    wr32(sp0 - 0x28u, sp0 - 0xcu);
                                    wr32(sp0 - 0x2cu, sp0 - 0x14u);
                                    t15 = rd32(sp0 - 0x10u);
                                    wr32(sp0 - 0x30u, t15);
                                    g->esp = sp0 - 0x18u;
                                    cow_call_regs(g, COW_IMG(0x1021fbd0u), sp0 - 0x14u, g->ecx, g->edx, 0, 6, t15, sp0 - 0x14u, sp0 - 0xcu, eax, rd32(COW_IMG(0x104e1be4u)), self + 0xau);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021fce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021fce0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
