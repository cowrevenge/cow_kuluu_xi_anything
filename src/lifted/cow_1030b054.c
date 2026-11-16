/* f_0x1030b054 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1030b054(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_98;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x11cu) + 0x80u;
    t2 = rd32(arg2 + 0x50u);
    t3 = sp0 - 0x8cu & 0xfffffff8u;
    if (rd8(COW_IMG(0x103ce448u)) == 0u)
    {
        eax = t1;
        ecx = t3;
        edx = t2;
        loc_98 = t1;
        loc_a4 = t2;
        loc_a8 = t3;
        g->eax = eax;
        g->esp = sp0 - 0x94u;
        t6 = cow_call_regs(g, COW_IMG(0x1030cb8fu), g->eax, ecx, edx, 1, 6, arg3, loc_a8, loc_a4, arg4, arg5, loc_98);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t1;
        ecx = t3;
        edx = t2;
        loc_98 = t1;
        loc_a4 = t2;
        loc_a8 = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t4 = cow_bridge_indirect(g, COW_IMG(0x1030ceeau), 0u, 24u, (const uint32_t[]){arg3, loc_a8, loc_a4, arg4, arg5, loc_98, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u)}, g->ecx, g->edx, g->eax, 96u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030b054(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030b054(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
