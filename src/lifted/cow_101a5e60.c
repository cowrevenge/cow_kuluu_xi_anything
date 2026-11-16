/* f_0x101a5e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a5e60(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 8u) goto L_101a5e78;
    if (arg1 == 0x20u) goto L_101a5e78;
    if (arg1 != 0x800u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_101a5eb1;
    }
L_101a5e78: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798b8u));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x101a5ec0u), eax, self, edx, 1, 0);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x101a4630u), rd32(self + 0x18u), 0);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_stdcall(g, COW_IMG(0x101a4590u), 0);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_101a5eb1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5e60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
