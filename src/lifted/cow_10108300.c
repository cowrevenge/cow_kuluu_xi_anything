/* f_0x10108300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10108300(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    cow_fastcall(g, COW_IMG(0x10108150u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x14u);
    wr32(COW_IMG(0x104e0b00u), t3);
    if (t3 != 0u)
    {
        eax = t3;
        wr16(COW_IMG(0x104e0afcu), 1u);
        wr32(eax + 8u, arg1);
        wr32(eax + 0xcu, arg2);
        wr16(eax + 0x10u, (uint16_t)arg3);
        wr32(eax, 0u);
        wr32(eax + 4u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10108300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
