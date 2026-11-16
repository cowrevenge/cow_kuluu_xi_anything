/* f_0x101f3230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f3230(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101f3570u), 1, 0xffffffffu);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x105781f8u));
    cow_thiscall(g, COW_IMG(0x1013a320u), t5, 2, 0u, 2u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
    {
        edx = t7;
        t9 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
        eax = rd32(COW_IMG(0x10663748u));
        loc_4 = t9;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663740u));
        t8 = rd32(rd32(COW_IMG(0x1066374cu)) + 8u);
        edx = t8;
        loc_4 = t8;
    }
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, loc_4);
    t11 = g->edx;
    g->edx = t11;
    return cow_tailcall(g, COW_IMG(0x101f2700u), t10, rd32(COW_IMG(0x10663740u)), t11);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f3230(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
