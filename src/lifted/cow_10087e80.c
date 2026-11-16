/* f_0x10087e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10087e80(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x128u) & 0x20000u) == 0u) goto L_10087ef0;
    if (rd16(self + 0x14eu) != 0u)
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        g->edx = t3;
        fpush(g, d4);
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
        t6 = g->edx;
        wr16(self + 0x150u, (uint16_t)(rd16(self + 0x150u) - (uint16_t)t5));
        if ((int16_t)rd16(self + 0x150u) < 0)
        {
            edx = t6;
            if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
            {
                g->esp = sp0 - 4u;
                t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x10330ebcu));
                t8 = g->edx;
                if ((uint8_t)t7 != 0u)
                {
                    eax = t7;
                    edx = t8;
                    g->esp = sp0 - 4u;
                    cow_thiscall(g, COW_IMG(0x100ce0e0u), rd32(self + 0xa0u), 0);
                    wr16(self + 0x14eu, (uint16_t)(rd16(self + 0x14eu) - 1u));
                    wr16(self + 0x150u, 0x8eu);
                }
            }
        }
    }
    return;
L_10087ef0: ;
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10087e40u), in_eax, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087e80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
