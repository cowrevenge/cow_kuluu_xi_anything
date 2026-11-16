/* f_0x1005e890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_1005e890(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->edx;
    wr32(self, COW_IMG(0x1032b9a4u));
    wr32(self + 0x34u, COW_IMG(0x1032b988u));
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, 0u);
    t6 = g->ecx;
    wr32(self + 0x74u, arg4);
    wr8(self + 0xacu, 1u);
    if (arg9 <= 5u)
    {
        eax = arg9;
        ecx = t6;
    }
    else
    {
        ecx = t6;
        eax = 5u;
    }
    wr32(self + 0xa8u, eax);
    wr32(self + 0xa4u, arg10);
    wrf32(self + 0x7cu, (float)(double)(int32_t)arg3);
    wr8(self + 0xa1u, (uint8_t)arg5);
    wr32(self + 0x9cu, arg6);
    wr8(self + 0xa2u, (uint8_t)arg7);
    wr8(self + 0xa0u, 0u);
    wr8(self + 0xa3u, 0u);
    wr32(self + 0x94u, arg8);
    d7 = fr(g, (double)(int32_t)arg3 - (double)rdf32(COW_IMG(0x1047bf14u)));
    wrf32(self + 0x78u, (float)d7);
    if (rd32(self + 0x74u) == 0u) goto L_1005e952;
    eax = rd32(self + 0x74u);
    t8 = rd32(rd32(eax) + 0x38u) + 1u;
    wr32(rd32(eax) + 0x38u, t8);
    return self;
L_1005e952: ;
    t9 = rd32(0x38u) + 1u;
    wr32(0x38u, t9);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005e890(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
