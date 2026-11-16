/* f_0x100c3290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c3290(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if (rd32(self) == 0u) goto L_100c32ed;
    eax = rd32(self);
    if (arg1 == 0u) goto L_100c32ed;
    if (eax != arg1)
    {
        t2 = rd32(arg1 + 0x5cu);
        t3 = rd32(arg1 + 0x60u);
        wr32(t3 + 0x5cu, t2);
        edx = t3;
    }
    else
    {
        t1 = rd32(eax + 0x5cu);
        wr32(self, t1);
        edx = in_edx;
    }
    if (rd32(self + 4u) != arg1) goto L_100c32d4;
    eax = rd32(self + 4u);
    t4 = rd32(eax + 0x60u);
    wr32(self + 4u, t4);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x100c3050u), arg1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg1);
    return;
L_100c32d4: ;
    t8 = rd32(arg1 + 0x60u);
    t9 = rd32(arg1 + 0x5cu);
    wr32(t9 + 0x60u, t8);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x100c3050u), arg1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg1);
L_100c32ed: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c3290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
