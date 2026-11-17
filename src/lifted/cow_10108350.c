/* f_0x10108350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108350(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10108150u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = (uint16_t)arg1 * 0x14u;
    g->eax = t3;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t1, t2, 1, 1, t3);
    wr32(COW_IMG(0x104e0b00u), t4);
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        wr16(COW_IMG(0x104e0afcu), (uint16_t)arg1);
        if ((uint16_t)arg1 == 0u) goto L_101083a5;
        ecx = 0u;
L_10108389: ;
        wr32(eax + 8u, 0u);
        wr32(eax + 0xcu, 0u);
        wr16(eax + 0x10u, 0u);
        wr32(eax, 0u);
        wr32(eax + 4u, 0u);
        if ((uint16_t)(ecx + 1u) < rd16(COW_IMG(0x104e0afcu)))
        {
            eax = eax + 0x14u;
            ecx = ecx + 1u;
            goto L_10108389;
        }
        eax = eax + 0x14u;
    }
L_101083a5: ;
    g->edx = 0u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
