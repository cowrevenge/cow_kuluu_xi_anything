/* f_0x100a2580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2580(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 440u);

    t1 = rd16(arg3) >> 9u;
    wr32(sp0 - 0x1a0u, t1);
    wr32(sp0 - 0x1a4u, 8u);
    wr32(sp0 - 0x1a8u, arg3 + 7u);
    wr32(sp0 - 0x1acu, 0x97u);
    wr32(sp0 - 0x1b0u, sp0 - 0x198u);
    g->edx = sp0 - 0x198u;
    g->esp = sp0 - 0x198u;
    t2 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x198u, 0x97u, arg3 + 7u, 8u, t1, ((rd32(sp0 - 0x19cu) & 0xffffff00u) | 0xbfu) & 0xff0000ffu);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        wr32(sp0 - 0x1a0u, 0u);
        wr32(sp0 - 0x1a4u, 0u);
        wr32(sp0 - 0x1a8u, 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, eax);
        wr32(sp0 - 0x1b4u, sp0 - 0x198u);
        g->edx = sp0 - 0x198u;
        g->esp = sp0 - 0x19cu;
        cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, sp0 - 0x198u, eax, sp0 - 0x100u, 0x100u, 0u, 0u);
        t4 = g->edx;
        wr32(sp0 - 0x1a0u, 0u);
        wr32(sp0 - 0x1a4u, 1u);
        wr32(sp0 - 0x1a8u, 0u);
        wr32(sp0 - 0x1acu, sp0 - 0x19cu);
        wr32(sp0 - 0x1b0u, sp0 - 0x100u);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x100u, sp0 - 0x19cu, 0u, 1u, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
