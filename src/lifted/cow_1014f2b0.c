/* f_0x1014f2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014f2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 0xcu;
        t3 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
        t4 = g->edx;
        if ((uint8_t)t3 != 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            if (rd8(sp0 + 4u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
            }
            else
            {
                if (rd32(COW_IMG(0x10578198u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x10578198u));
                }
                else
                {
                    eax = rd32(COW_IMG(0x10578198u));
                    if (rd32(eax + 8u) != 0u)
                    {
                        ecx = rd32(eax + 8u);
                        if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
                        {
                            eax = ecx;
                        }
                        else
                        {
                            eax = ecx;
                            edx = rd32(COW_IMG(0x104e1d4cu));
                            t5 = rd32(edx + 4u);
                            wr32(sp0 - 8u, t5);
                            t6 = rd32(edx + 8u);
                            wr32(sp0 - 4u, t6);
                        }
                        wr32(sp0 - 0x10u, sp0 + 4u);
                        wr32(sp0 - 0x14u, sp0 - 8u);
                        wr8(sp0 + 4u, 0u);
                        g->edx = sp0 - 8u;
                        g->esp = sp0 - 0xcu;
                        t7 = cow_call_regs(g, COW_IMG(0x10118cb0u), eax, eax, g->edx, 0, 2, sp0 - 8u, sp0 + 4u);
                        t8 = g->edx;
                        if ((int16_t)t7 <= 0)
                        {
                            eax = t7;
                            edx = t8;
                        }
                        else
                        {
                            edx = t8;
                            if ((uint32_t)(int8_t)rd8(self + 0x14u) != 1u)
                            {
                                eax = (uint32_t)(int8_t)rd8(self + 0x14u) - 1u;
                            }
                            else
                            {
                                wr32(sp0 - 0x10u, 1u);
                                wr32(sp0 - 0x14u, 2u);
                                t9 = rd32(self + 8u);
                                wr16(t9 + 0x5au, 2u);
                                g->eax = t9;
                                g->edx = edx;
                                g->esp = sp0 - 0xcu;
                                t10 = cow_thiscall(g, COW_IMG(0x1014f520u), self, 2, 2u, 1u);
                                t11 = g->edx;
                                eax = t10;
                                edx = t11;
                            }
                        }
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014f2b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
