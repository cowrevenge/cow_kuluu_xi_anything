/* f_0x10235410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10235410(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 8208u);

    wr32(sp0 - 0x2004u, sp0 + 8u);
    wr32(sp0 - 0x2008u, arg1);
    wr32(sp0 - 0x200cu, sp0 - 0x2000u);
    g->ecx = arg1;
    g->edx = sp0 - 0x2000u;
    g->esp = sp0 - 0x1ff8u;
    cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x2000u, arg1, sp0 + 8u, rd32(sp0 - 0x2000u), rd32(sp0 - 0x1ffcu));
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x2004u, sp0 - 0x2000u);
    g->edx = t2;
    g->esp = sp0 - 0x2000u;
    cow_thiscall(g, rd32(COW_IMG(0x103291f0u)), t1, 1, sp0 - 0x2000u);
    t3 = g->edx;
    wr32(sp0 - 0x2004u, sp0 - 0x2000u);
    wr32(sp0 - 0x2008u, COW_IMG(0x1034f7e0u));
    cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, sp0 - 0x2000u, t3, 1, 2, COW_IMG(0x1034f7e0u), sp0 - 0x2000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10235410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10235410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
