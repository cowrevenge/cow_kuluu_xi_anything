/* f_0x100b8b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b8b20(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        if (rd32(eax + 0x120u) >> 9u & 1u)
        {
            t1 = rd32(eax + 0xa0u);
            g->eax = t1;
            g->edx = in_edx;
            g->esp = sp0 - 0x14u;
            t2 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
            t3 = g->ecx;
            t4 = g->edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10062e20u), 5, t2 + 0x13f8u, 0x6e69616du, t1, t1, 0u);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b8b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b8b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
