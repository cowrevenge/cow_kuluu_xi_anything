/* f_0x1031400a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1031400a(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10317480u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, t4, 1, 1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x1031f039u), 3, arg2, arg2, t1);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(sp0 + 4u);
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10312305u), t8, 5, t10, 1u, t2, arg2, arg2);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 + 4u, t11);
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x2cu;
    t14 = cow_cdecl(g, COW_IMG(0x1031f0c6u), 2, t7, arg2);
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, t16, 1, 1, arg2);
    return (rd32(sp0 + 4u) == t2) - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031400a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031400a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
