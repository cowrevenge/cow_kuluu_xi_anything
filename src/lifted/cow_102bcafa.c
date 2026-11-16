/* f_0x102bcafa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bcafa(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, sp0 - 0x58u);
    wr32(sp0 - 0x64u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bca6bu), 7, arg1, sp0 - 0x58u, arg2, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x68u, sp0 - 0x58u);
    wr32(sp0 - 0x6cu, arg1);
    g->edx = t2;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, sp0 - 0x58u);
    t3 = g->edx;
    g->edx = t3;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bcafa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bcafa(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
