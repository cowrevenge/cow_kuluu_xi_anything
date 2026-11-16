/* f_0x101a0680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a0680(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t arg68 = rd32(g->esp + 0x110u);
    const uint32_t arg69 = rd32(g->esp + 0x114u);
    const uint32_t arg70 = rd32(g->esp + 0x118u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    if (arg2 == 3u) goto L_101a068d;
    return 0xffffffffu;
L_101a068d: ;
    wr32(sp0 - 8u, arg70);
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101be470u), arg70, COW_IMG(0x1066278cu), g->edx, 0, 3, sp0 - 4u, sp0 + 0xcu, arg70);
    t2 = g->edx;
    if ((int32_t)t1 >= 0) goto L_101a06b2;
    eax = t1;
    edx = t2;
    g->edx = edx;
    return 0xffffffffu;
L_101a06b2: ;
    wr32(sp0 - 8u, arg69);
    wr32(sp0 - 0xcu, arg68);
    t3 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t3);
    g->eax = arg69;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x101be650u), 3, t3, arg68, arg69);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        edx = t5;
        goto L_101a06e9;
    }
    edx = t5;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 8u, t6);
    g->eax = t6;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t6);
    t8 = g->edx;
    g->edx = t8;
    return 0xffffffffu;
L_101a06e9: ;
    t9 = rd32(sp0 - 4u);
    wr32(sp0 - 8u, t9);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t9);
    t11 = ((int32_t)t10 >= 0) * 2u - 1u;
    g->edx = t11;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a0680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
