/* f_0x102942d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102942d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10294320u), 3, arg1, arg2, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(arg1 + 0x3cu) == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        t4 = rd32(arg1 + 0x34u);
        t5 = rd32(arg1 + 0x1cu);
        t6 = rd32(arg1 + 0x38u);
        t7 = rd32(arg1 + 0x30u);
        g->edx = t7;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x1027d290u), 6, t7, eax, t6, t5, t4, in_esi);
        t8 = g->edx;
        eax = rd32(arg1 + 0x30u);
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102942d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102942d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
