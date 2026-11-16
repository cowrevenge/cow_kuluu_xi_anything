/* f_0x100dd800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100dd800(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 140u);

    if ((int32_t)arg2 >= 16) goto L_100dd813;
    return 0xffffffffu;
L_100dd813: ;
    wr32(sp0 - 0x6cu, sp0 - 0x68u);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    wr32(sp0 - 0x70u, arg4);
    wr32(sp0 - 0x74u, arg3);
    wr32(sp0 - 0x78u, sp0 - 0x68u);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, arg3, arg4);
    wr32(sp0 - 0x7cu, arg6);
    wr32(sp0 - 0x80u, arg5);
    wr32(sp0 - 0x84u, sp0 - 0x68u);
    g->eax = sp0 - 0x68u;
    g->edx = arg5;
    g->esp = sp0 - 0x78u;
    t1 = cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, arg5, arg6);
    t2 = g->edx;
    wr32(sp0 - 0x88u, sp0 - 0x68u);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x100ddf60u), 1, sp0 - 0x68u);
    wr32(arg1, 0u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    t3 = rd32(sp0 - 0x10u);
    t4 = rd32(sp0 - 0xcu);
    wr32(arg1, t3);
    t5 = rd32(sp0 - 8u);
    wr32(arg1 + 4u, t4);
    t6 = rd32(sp0 - 4u);
    wr32(arg1 + 8u, t5);
    wr32(arg1 + 0xcu, t6);
    return 0x10u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dd800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
