/* f_0x100573e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100573e0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 0x90u, 0u);
    wr8(self + 0x140u, 0u);
    wr32(self + 0xacu, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10057cc0u), self, 1, arg3);
    t1 = rd32(arg1 + 0x14u);
    wr32(self + 0x80u, t1);
    if (arg2 == 0u) goto L_10057425;
    if (arg2 != 1u) goto L_10057461;
    wr8(self + 0x141u, (uint8_t)arg2);
L_10057425: ;
    wr32(self + 0x9cu, 0x3f800000u);
L_1005742f: ;
    wr32(self + 0xa0u, 0u);
    wr32(self + 0x84u, 0u);
    t3 = rd32(arg1 + 0x14u);
    wr32(self + 0x80u, t3);
    wr32(self + 0x94u, 0u);
    wr32(self + 0x98u, 0u);
    t4 = rd32(arg1 + 0x74u);
    wr32(self + 0x88u, t4);
    g->edx = t4;
    return t3;
L_10057461: ;
    if (rd32(self + 0x80u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x80u);
        eax = rd32(eax);
    }
    t2 = rd32(eax + 0x7cu);
    wrf32(self + 0x9cu, (float)fr(g, (double)(int64_t)cow_i64(arg2, 0u) / (double)(int32_t)t2));
    goto L_1005742f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100573e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100573e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
