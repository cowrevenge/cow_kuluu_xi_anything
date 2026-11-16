/* f_0x10179390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10179390(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1016c150u), self + 0x178u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0x3912cu, t1);
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_101793f5;
    ecx = t5;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x14u, t7 + 0x44u);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xcu, t7 + 0x44u);
    t10 = rd32(sp0 - 0xcu);
    t11 = rd32(sp0 - 4u);
    t12 = rd32(sp0 - 8u);
    wr32(self + 0x38d4cu, t10);
    t13 = rd32(self + 0x3912cu);
    wr32(self + 0x38d50u, t12);
    wr32(self + 0x38d54u, t11);
    wr32(self + 0x38d58u, t13);
    return;
L_101793f5: ;
    t14 = rd32(self + 0x3912cu);
    wr32(self + 0x38d58u, t14);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10179390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10179390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
