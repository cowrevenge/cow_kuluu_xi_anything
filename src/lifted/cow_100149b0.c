/* f_0x100149b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100149b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x102463e0u), 1, 0xffffffffu);
        t1 = g->edx;
        edx = t1;
    }
    wr32(self + 0x334u, 0x80000000u);
    wr32(self + 0x324u, 0x80000000u);
    wr32(self + 0x328u, 0x80000000u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t2 = g->edx;
    t3 = cow_fastcall(g, COW_IMG(0x10014c90u), self, t2, 0);
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        goto L_10014a08;
    }
    eax = t3;
    return eax;
L_10014a08: ;
    wr32(self + 0x44u, 4u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100149b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100149b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
