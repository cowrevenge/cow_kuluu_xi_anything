/* f_0x10087230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10087230(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        if (rd32(esi + 0x120u) >> 9u & 1u)
        {
            eax = rd32(esi + 0x120u) >> 9u;
            g->eax = eax;
            g->esp = sp0 - 4u;
            t4 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
            if ((uint8_t)t4 == 0u)
            {
                if ((int32_t)((rd32(COW_IMG(0x104807ecu)) >> 3u & 1u) - 1u) >= 0)
                {
                    eax = (rd32(COW_IMG(0x104807ecu)) >> 3u & 1u) - 1u;
                    if (eax < 1u)
                    {
                        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
                        {
                            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        }
                        else
                        {
                            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                            if (edx == 2u) goto L_10087281;
                            if (edx != 3u) goto L_10087286;
L_10087281: ;
                            edx = 1u;
                        }
L_10087286: ;
                        t5 = rd32(esi + 0xa0u);
                        t6 = rd32(COW_IMG(0x1035b53cu) + eax * 0x10u + edx * 4u);
                        g->esp = sp0 - 4u;
                        cow_thiscall(g, rd32(rd32(rd32(esi + 0xa0u)) + 0x2c4u), t5, 5, t6, t5, 0x6e69616du, 0u, 0u);
                        t7 = (rd32(COW_IMG(0x104807ecu)) & 0xffffff00u) | (rd32(COW_IMG(0x104807ecu)) & 0xf7u);
                        wr32(COW_IMG(0x104807ecu), t7);
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
