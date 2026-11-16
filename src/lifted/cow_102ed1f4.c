/* f_0x102ed1f4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102ed1f4(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0xfeu) goto L_102ed213;
    t1 = rd32(arg1 + 0x190u);
    wr32(t1 + 0xcu, arg3);
    return t1;
L_102ed213: ;
    if ((int32_t)arg2 < 224) goto L_102ed238;
    if ((int32_t)arg2 > 239) goto L_102ed238;
    t2 = rd32(arg1 + 0x190u);
    wr32(arg2 * 4u + t2 - 0x370u, arg3);
    g->edx = arg3;
    return t2;
L_102ed238: ;
    wr32(rd32(arg1) + 0x14u, 0x43u);
    t3 = rd32(arg1);
    wr32(t3 + 0x18u, arg2);
    g->eax = arg1;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed1f4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed1f4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
