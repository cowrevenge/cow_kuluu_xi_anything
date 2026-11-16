/* f_0x10269d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10269d90(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10269b60u), t1, 0);
    t3 = g->edx;
    wr32(sp0 + 4u, t2);
    if (t2 == 0u) goto L_10269dc7;
    edx = t3;
    edi = t1;
L_10269da7: ;
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10269b90u), 1, sp0 + 4u);
    t5 = g->edx;
    wr32(sp0 - 0xcu, t4);
    t6 = cow_fastcall(g, COW_IMG(0x10269cb0u), self, t5, 1, t4);
    t7 = g->edx;
    if (t6 == 0u) goto L_10269dd1;
    edx = t7;
    if (rd32(sp0 + 4u) != 0u) goto L_10269da7;
L_10269dc7: ;
    return 1u;
L_10269dd1: ;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269d90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
