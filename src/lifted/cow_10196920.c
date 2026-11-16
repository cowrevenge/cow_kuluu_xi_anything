/* f_0x10196920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10196920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        edx = in_edx;
        goto L_10196971;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10196971;
    }
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101bcb80u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = rd32(self + 8u);
        edx = t2;
        goto L_1019695b;
    }
    ecx = rd32(self + 8u);
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 0xdu);
    t4 = g->edx;
    if (t3 == 5u)
    {
        eax = t3;
        edx = t4;
        goto L_10196971;
    }
    eax = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xdu);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1019695b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 0xdu);
    t8 = g->edx;
    if (t7 == 0xbu)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xdu);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_10196971: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196920(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
