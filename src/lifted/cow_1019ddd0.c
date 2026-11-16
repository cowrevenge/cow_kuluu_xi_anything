/* f_0x1019ddd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019ddd0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x24u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x24u);
        goto L_1019ddfe;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1019dc60u), arg2, self, g->edx, 0, 2, arg1, arg2);
    t1 = g->edx;
    t2 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    g->eax = rd32(self + 8u);
    g->edx = t1;
    t3 = rd32(self + 8u);
    t4 = cow_stdcall(g, COW_IMG(0x1019d7c0u), 1, t2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1019ddfe: ;
    if (rd8(self + 0x2cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
        goto L_1019de29;
    }
    g->edx = arg2;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1019dc60u), arg1, self, g->edx, 0, 2, arg1, arg2);
    t6 = g->edx;
    t7 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    g->eax = rd32(self + 8u);
    g->edx = t6;
    t8 = rd32(self + 8u);
    t9 = cow_stdcall(g, COW_IMG(0x1019d7c0u), 1, t7);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1019de29: ;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1019db70u), eax, self, g->edx, 0, 2, arg1, arg2);
    t11 = g->edx;
    t12 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    g->eax = rd32(self + 8u);
    g->edx = t11;
    t13 = rd32(self + 8u);
    t14 = cow_stdcall(g, COW_IMG(0x1019d7c0u), 1, t12);
    t15 = g->edx;
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ddd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019ddd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
