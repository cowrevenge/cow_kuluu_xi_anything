/* f_0x10074220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10074220(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        edx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = rd32(eax);
    }
    if (edx == 0u) goto L_10074259;
L_10074238: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10072270u), edx, 0);
    t2 = g->edx;
    if (t1 != t2)
    {
        edx = t2;
        goto L_10074248;
    }
    edx = t2;
    if (rd32(edx + 0x34u) == arg2) goto L_10074267;
L_10074248: ;
    if (rd32(edx + 0x10u) == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = rd32(edx + 0x10u);
        edx = rd32(edx);
    }
    if (edx != 0u) goto L_10074238;
L_10074259: ;
    wr32(arg1, 0u);
    g->edx = edx;
    return arg1;
L_10074267: ;
    t3 = rd32(edx + 0x14u);
    wr32(arg1, t3);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074220(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
