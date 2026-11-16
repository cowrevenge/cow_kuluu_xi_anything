/* f_0x100ec6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec6c0(Guest* g)
{
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) == 1u) goto L_100ec6e0;
    t1 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x198ccu, t1);
    return (t1 & 0xffffff00u) | 1u;
L_100ec6e0: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x800u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((t4 & 0x200000u) == 0u)
    {
        ecx = t5;
        edx = t6;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x200000u);
    }
    t7 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x198c8u) + 1u;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x198c8u, t7);
    t8 = rd32(arg3 + 8u);
    t9 = rd32(COW_IMG(0x104dfd98u));
    wr32(t9 + 0x198ccu, t8);
    g->edx = t8;
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec6c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
