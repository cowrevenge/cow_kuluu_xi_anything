/* f_0x10148e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10148e80(Guest* g)
{
    uint32_t eax;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10148b50u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x100991d0u), t1, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_10148e97;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if ((rd8(eax + 3u) & 0x20u) != 0u) goto L_10148ea3;
L_10148e97: ;
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), t7, 2, 5u, 7u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
L_10148ea3: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_10148eba;
    }
    eax = t11;
    edx = t12;
    if (!(rd8(eax) & 1u)) goto L_10148eba;
    if (rd8(COW_IMG(0x10485641u)) >= 0x63u) goto L_10148ec6;
L_10148eba: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 8u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_10148ec6: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10148e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10148e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
