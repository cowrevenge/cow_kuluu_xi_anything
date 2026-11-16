/* f_0x100382c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100382c0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    if (rd32(COW_IMG(0x1046393cu)) == 0u) goto L_1003831e;
    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        eax = rd32(sp0 + 8u);
        if ((int32_t)eax > 127)
        {
            wr32(sp0 + 8u, 0x7fu);
        }
    }
    else
    {
        wr32(sp0 + 8u, 0u);
    }
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, arg1);
    d1 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
    wrf32(sp0 - 0x10u, (float)d1);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10038330u), 3, arg1, sp0 - 0x10u, arg3);
    return t2;
L_1003831e: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100382c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100382c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
