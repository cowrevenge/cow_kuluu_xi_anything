/* f_0x1020b440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020b440(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u) goto L_1020b494;
    if (rd32(arg2) != 3u) goto L_1020b494;
    if (rd32(arg2 + 4u) != 4u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_1020b48b;
    }
    if (rd32(rd32(arg2 + 8u)) != arg1)
    {
        eax = rd32(arg2 + 8u) + 4u;
        ecx = rd32(COW_IMG(0x10663484u));
        goto L_1020b483;
    }
    eax = rd32(arg2 + 8u) + 4u;
    ecx = rd32(COW_IMG(0x10663484u));
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101dd780u), ecx, 2, eax, COW_IMG(0x10664448u));
    t2 = g->edx;
    wr16(COW_IMG(0x10385a04u), 4u);
    g->edx = t2;
    return t1;
L_1020b483: ;
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101dd780u), ecx, 2, eax, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1020b48b: ;
    wr16(COW_IMG(0x10385a04u), 4u);
    g->edx = edx;
    return eax;
L_1020b494: ;
    wr16(COW_IMG(0x10385a04u), 4u);
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020b440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
