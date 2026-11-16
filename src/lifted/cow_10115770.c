/* f_0x10115770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10115770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x4f1a8u) == 0u)
    {
        eax = rd32(arg1 + 0x4f1a8u);
        goto L_1011578b;
    }
    return 0u;
L_1011578b: ;
    wr32(sp0 - 0x1cu, arg1 + 0x2f0d4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026dc10u), self, 3, arg1 + 0x2f0d4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_101157a6;
    }
    edx = t3;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return 0u;
L_101157a6: ;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, arg1 + 0x2f0d4u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1026dbeeu), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t5 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, arg1 + 0x2f0d4u);
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dc2du), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, arg1 + 0x2f0d4u, sp0 - 0x10u);
    t6 = g->edx;
    wr32(arg1 + 0x4f1a8u, 7u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t6;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10115770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10115770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
