/* f_0x10208cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10208cc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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

    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10208d19;
    }
    if (rd8(COW_IMG(0x10485640u)) == 0x12u) goto L_10208d14;
    if (rd8(COW_IMG(0x10485642u)) != 0x12u)
    {
        eax = 0u;
        edx = (in_edx & 0xffffff00u) | 0x12u;
        goto L_10208d19;
    }
    wr8(self + 0x22u, 1u);
L_10208ce1: ;
    wr16(self + 0x1eu, 0u);
    wr16(self + 0x1cu, 0u);
    wr32(self + 0x10u, 0xffffffffu);
    g->eax = 0u;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x10208d50u), self, (in_edx & 0xffffff00u) | 0x12u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x14u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10118220u), arg2, 0);
    t7 = g->edx;
    wr32(t6 + 0x40u, t4);
    g->edx = t7;
    return t6;
L_10208d14: ;
    wr8(self + 0x22u, 0u);
    goto L_10208ce1;
L_10208d19: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x57u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10208cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10208cc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
