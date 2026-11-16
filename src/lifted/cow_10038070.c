/* f_0x10038070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10038070(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    if ((int32_t)arg1 >= 8)
    {
        eax = arg1;
    }
    else
    {
        if (rd32(COW_IMG(0x1032a8e4u) + arg1 * 4u) == 0u)
        {
            eax = arg1;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1032a8e4u) + arg1 * 4u);
            if (rd32(COW_IMG(0x104627a8u) + arg1 * 4u) != 0u)
            {
                edx = in_edx;
            }
            else
            {
                wr32(sp0 - 8u, ecx);
                wr32(sp0 - 0xcu, 0x3du);
                wr32(sp0 - 0x10u, sp0 + 4u);
                t1 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t2 = cow_thiscall(g, COW_IMG(0x10072290u), t1, 3, sp0 + 4u, 0x3du, ecx);
                t3 = g->ecx;
                t4 = g->edx;
                wr32(COW_IMG(0x104627a8u) + arg1 * 4u, rd32(t2));
                ecx = t3;
                edx = t4;
            }
            if (rd32(COW_IMG(0x104627a8u) + arg1 * 4u) == 0u)
            {
                eax = rd32(COW_IMG(0x104627a8u) + arg1 * 4u);
            }
            else
            {
                eax = rd32(COW_IMG(0x104627a8u) + arg1 * 4u);
                if (rd32(eax) != 0u)
                {
                    if (eax != 0u)
                    {
                        esi = eax;
                        if (rd32(esi) != 0u)
                        {
                            esi = rd32(esi);
                            g->edx = edx;
                            d5 = fr(g, (double)rdf32(COW_IMG(0x10351700u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
                            fpush(g, d5);
                            g->esp = sp0 - 4u;
                            t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            t7 = g->edx;
                            wr32(sp0 - 8u, t6);
                            wr32(sp0 - 0xcu, 0x40u);
                            t8 = cow_thiscall(g, COW_IMG(0x10036f00u), esi, 2, 0x40u, t6);
                            eax = t8;
                        }
                    }
                }
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10038070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10038070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
