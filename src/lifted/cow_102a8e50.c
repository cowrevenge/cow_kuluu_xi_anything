/* f_0x102a8e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_102a8e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x2cu, sp0 - 0x28u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x102a8890u), arg1, 2, arg1, sp0 - 0x28u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        ecx = t2;
        goto L_102a8e6f;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_102a8e6f: ;
    t3 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x2cu, t3);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t3, 1, 3, t3, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    return rd16(sp0 - 0x28u) == 0x1dau;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a8e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
