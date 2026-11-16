/* f_0x10156390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10156390(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) != 0u) goto L_101563d2;
    eax = rd32(self + 4u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
    t1 = rd32(self + 0x20u);
    t2 = rd32(self + 0x24u);
    t3 = rd32(self + 0x30u);
    t4 = rd32(self + 0x2cu);
    t5 = rd32(self + 0x28u);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x101558a0u), t3, 10, t5, t4, t3, arg1, arg2, arg3, t2, t1, in_edi, in_esi);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101563d2: ;
    t8 = rd32(self + 8u);
    t9 = rd32(self + 0xcu);
    t10 = rd32(self + 0x18u);
    t11 = rd32(self + 0x14u);
    t12 = rd32(self + 0x10u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10155aa0u), 11, t12, t11, t10, 1u, arg1, arg2, arg3, t9, t8, in_ebx, in_edi);
    t13 = rd32(self + 0x20u);
    t14 = rd32(self + 0x24u);
    t15 = rd32(self + 0x30u);
    t16 = rd32(self + 0x2cu);
    t17 = rd32(self + 0x28u);
    g->eax = t15;
    g->edx = t17;
    g->esp = sp0 - 0x28u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x101558a0u), t16, 10, t17, t16, t15, arg1, 0xffffffffu, arg3, t14, t13, t12, t11);
    t19 = g->edx;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156390(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
