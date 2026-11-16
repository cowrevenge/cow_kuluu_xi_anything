/* f_0x10284f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10284f70(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x14u) != 0u)
    {
        eax = rd32(arg1 + 0x14u);
        goto L_10284fa2;
    }
    eax = rd32(arg1 + 0x14u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b79a8u));
    t1 = g->ecx;
    t2 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7974u), arg1);
    return 0u;
L_10284fa2: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall_cdecl(g, eax, arg2, 2, arg1, arg2);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10284f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
