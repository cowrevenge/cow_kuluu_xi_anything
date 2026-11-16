/* f_0x101aafe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101aafe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 8u, sp0 - 4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 - 4u);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 != 0u)
        {
            ecx = t5;
            edx = t6;
            if (rd32(sp0 - 4u) != 0u)
            {
                eax = rd32(sp0 - 4u);
                wr8(eax, rd8(eax) | 4u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t7 = cow_stdcall(g, COW_IMG(0x100e4610u), 0);
                t8 = g->ecx;
                t9 = g->edx;
                if ((uint8_t)t7 == 0u)
                {
                    eax = t7;
                    ecx = t8;
                    edx = t9;
                    wr32(sp0 - 8u, COW_IMG(0x1037ab38u));
                    g->esp = sp0 - 8u;
                    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aafe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101aafe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
