/* f_0x10084e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10084e70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x7cu, 4u);
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
    t4 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t1 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        esi = t1;
        g->esp = sp0 - 0x10u;
        t5 = cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x1003b540u), esi + 0x34u, 0);
        t7 = g->edx;
        wr32(esi, COW_IMG(0x1032d400u));
        wr32(esi + 0x78u, arg2);
        wr32(esi + 0x34u, COW_IMG(0x1032d3e4u));
        wrf32(esi + 0x74u, (float)(double)(int64_t)cow_i64(arg1, 0u));
        g->eax = arg1;
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x1003b7b0u), esi + 0x34u, 1, arg3);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x1003b830u), esi + 0x34u, 1, arg3);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084e70(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
