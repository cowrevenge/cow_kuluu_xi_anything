/* f_0x101f9070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f9070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(self + 0xa45u) == 0u)
    {
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            ecx = self;
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 4u);
            t1 = g->ecx;
            ecx = t1;
        }
        t2 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x10663888u)) + 0x102u);
        t3 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x100u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100f06c0u), 3, t3, t2, COW_IMG(0x101f7ec0u));
        wr8(self + 0xa45u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
