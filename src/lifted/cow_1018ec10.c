/* f_0x1018ec10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018ec10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(rd32(self + 0xcu) + 0x60u) != 0u)
    {
        ecx = rd32(self + 0xcu);
        goto L_1018ec23;
    }
    return 0u;
L_1018ec23: ;
    t1 = cow_divs(g, rd32(self + 0x10u), 0x32u);
    t2 = cow_mods(g, rd32(self + 0x10u), 0x32u);
    if ((int32_t)t1 >= (int32_t)rd8(ecx + 0x54u))
    {
        edx = rd8(ecx + 0x54u);
        loc_c = t2;
        goto L_1018ec43;
    }
    eax = t1;
    edx = rd8(ecx + 0x54u);
    loc_c = t2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1018e7d0u), ecx, 2, eax, loc_c);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1018ec43: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1018e620u), rd32(self + 4u), 1, loc_c);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ec10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ec10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
