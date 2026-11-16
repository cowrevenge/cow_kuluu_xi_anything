/* f_0x1007c740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1007c740(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 160u);

    if (arg1 != 0u) goto L_1007c751;
    return arg1 & 0xffffff00u;
L_1007c751: ;
    wr32(sp0 - 0x6cu, 0x10u);
    wr32(sp0 - 0x70u, arg1);
    wr32(sp0 - 0x74u, COW_IMG(0x1047d230u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    t1 = cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, COW_IMG(0x1047d230u), arg1, 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x78u, COW_IMG(0x1047d230u));
    wr8(COW_IMG(0x1047d23fu), 0u);
    g->edx = t3;
    g->esp = sp0 - 0x6cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c8ef0u), t2, 3, COW_IMG(0x1047d230u), COW_IMG(0x1047d230u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    g->edx = t5;
    g->esp = sp0 - 0x78u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103ec0u), t4, 1, sp0 - 0x68u);
    t6 = g->edx;
    wr32(sp0 - 0x80u, sp0 - 0x68u);
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10107b40u), 1, sp0 - 0x68u);
    t7 = g->ecx;
    wr32(sp0 - 0x84u, COW_IMG(0x1047d230u));
    wr32(sp0 - 0x88u, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10107690u), 2, sp0 - 0x68u, COW_IMG(0x1047d230u));
    t8 = g->edx;
    wr32(sp0 - 0x8cu, COW_IMG(0x1047d230u));
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x94u, 3u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, sp0 - 0x68u);
    g->eax = arg2;
    t9 = cow_cdecl(g, COW_IMG(0x100e2990u), 7, sp0 - 0x68u, 0u, 3u, arg2, COW_IMG(0x1047d230u), sp0 - 0x68u, COW_IMG(0x1047d230u));
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
