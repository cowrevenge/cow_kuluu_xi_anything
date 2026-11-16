/* f_0x1024d5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1024d5e0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != rd32(arg1 + 0xcu)) goto L_1024d5f3;
    return 0xffffffffu;
L_1024d5f3: ;
    wr32(arg1 + 0xcu, arg2);
    if (rd32(arg1 + 4u) != 1u)
    {
        eax = rd32(arg1 + 4u);
        goto L_1024d611;
    }
    eax = rd32(arg1 + 4u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1024d7b0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1024d630u), t1, g->ecx, g->edx, 1, 1, arg1);
    return 0u;
L_1024d611: ;
    t4 = rd32(arg1) | 0x40u;
    wr32(arg1, t4);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1024d760u), 3, arg1, 0u, 0x14u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024d5e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
