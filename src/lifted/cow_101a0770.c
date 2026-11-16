/* f_0x101a0770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a0770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg72 = rd32(g->esp + 0x120u);
    const uint32_t arg73 = rd32(g->esp + 0x124u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    if (arg2 != 8u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_101a07b0;
    }
    if (arg72 == 0u)
    {
        eax = arg72;
        edx = in_edx;
        goto L_101a07b0;
    }
    wr32(sp0 - 8u, sp0 + 0xcu);
    g->ecx = COW_IMG(0x1066278cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101be690u), 1, sp0 + 0xcu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        esi = t1;
        goto L_101a07b5;
    }
    eax = t1;
    edx = t3;
    wr32(sp0 - 8u, arg73);
    wr32(sp0 - 0xcu, 0xffffffffu);
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall_cdecl(g, arg72, arg73, 3, 0u, 0xffffffffu, arg73);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101a07b0: ;
    g->edx = edx;
    return 0xffffffffu;
L_101a07b5: ;
    wr32(sp0 - 8u, arg73);
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 0u);
    g->edx = arg73;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, arg72, ecx, 3, 0u, esi, arg73);
    t6 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t6;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a0770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
