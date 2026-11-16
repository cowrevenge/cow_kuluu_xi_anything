/* f_0x101cd0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cd0a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall(g, COW_IMG(0x101cebe0u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_101cd109;
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_edi);
    t3 = (uint32_t)(int8_t)rd8(self + 6u);
    wr32(sp0 - 0x30u, t3);
    g->eax = eax;
    g->ecx = t3;
    g->esp = sp0 - 0x2cu;
    t4 = cow_cdecl(g, COW_IMG(0x101cce70u), 1, t3);
    t5 = g->ecx;
    wr32(sp0 - 0x34u, t5);
    t6 = rd8(arg1 + t4 + rd32(self + 0x14u) * 4u);
    wr32(self + 0x14u, t6);
    g->eax = t6;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x30u;
    t7 = cow_cdecl(g, COW_IMG(0x101cce80u), 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(self + 0x1cu);
    wr32(sp0 - 0x30u, t10);
    t11 = rd32(self + 0x18u);
    wr32(sp0 - 0x34u, t11);
    t12 = rd32(self + 0x14u);
    wr32(sp0 - 0x38u, t12);
    wr32(sp0 - 0x3cu, t8);
    t13 = rd8(t7 + t9);
    wr32(self + 0x20u, t13);
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t8, t12, t11, t10);
    t14 = g->edx;
    t15 = rd32(self + 0x20u);
    wr32(sp0 - 0x30u, t15);
    g->eax = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t15);
    return (t16 & 0xffffff00u) | 1u;
L_101cd109: ;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0xcu, 0xffffffffu);
    wr32(sp0 - 8u, 0xffffffffu);
    t17 = rd32(arg1 * 8u + sp0 - 0x1cu);
    wr32(sp0 - 0x28u, t17);
    t18 = rd32(arg1 * 8u + sp0 - 0x20u);
    wr32(sp0 - 0x2cu, t18);
    g->eax = arg1;
    g->esp = sp0 - 0x24u;
    t19 = cow_thiscall(g, COW_IMG(0x101cd150u), self, 2, t18, t17);
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cd0a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
