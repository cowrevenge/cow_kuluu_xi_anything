/* f_0x1007a020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a020(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    if (rd32(COW_IMG(0x1047d490u)) != 2u) goto L_1007a0a3;
    t1 = rd32(COW_IMG(0x103551e0u));
    wr8(COW_IMG(0x1047d4c0u), 0u);
    wr32(sp0 - 0x6cu, 0x10u);
    t2 = rd32(t1 + 4u);
    wr32(sp0 - 0x70u, t2);
    wr32(sp0 - 0x74u, COW_IMG(0x1047d340u));
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    t3 = cow_call_regs(g, COW_IMG(0x10312090u), t1, g->ecx, g->edx, 1, 3, COW_IMG(0x1047d340u), t2, 0x10u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x78u, COW_IMG(0x1047d340u));
    wr8(COW_IMG(0x1047d34fu), 0u);
    g->esp = sp0 - 0x6cu;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x101c8ef0u), t4, 3, COW_IMG(0x1047d340u), COW_IMG(0x1047d340u), rd32(sp0 - 0x70u));
    t7 = g->ecx;
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x78u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103ec0u), t7, 1, sp0 - 0x68u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x80u, sp0 - 0x68u);
    g->edx = t9;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10107b40u), 1, sp0 - 0x68u);
    t10 = g->edx;
    wr32(sp0 - 0x84u, COW_IMG(0x1047d340u));
    wr32(sp0 - 0x88u, sp0 - 0x68u);
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 0x80u;
    t11 = cow_cdecl(g, COW_IMG(0x10107690u), 2, sp0 - 0x68u, COW_IMG(0x1047d340u));
    t12 = g->ecx;
    wr32(sp0 - 0x8cu, COW_IMG(0x1047d340u));
    wr32(sp0 - 0x90u, COW_IMG(0x1007a0b0u));
    wr32(sp0 - 0x94u, 3u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x100e2990u), 7, sp0 - 0x68u, 0u, 3u, COW_IMG(0x1007a0b0u), COW_IMG(0x1047d340u), sp0 - 0x68u, COW_IMG(0x1047d340u));
    t13 = g->edx;
    g->edx = t13;
    return arg3;
L_1007a0a3: ;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
