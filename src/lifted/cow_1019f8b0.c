/* f_0x1019f8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1019f8b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    t1 = rd32(self + 8u);
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x101a0be0u), rd32(t1 + 4u), in_edx, 1, arg1);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        esi = t2;
        goto L_1019f90b;
    }
    edx = t3;
    ebx = 0u;
L_1019f8ce: ;
    g->esp = sp0 - 0x10u;
    t4 = cow_fastcall(g, COW_IMG(0x101a0910u), rd32(self + 8u), edx, 0);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        edx = t5;
        goto L_1019f917;
    }
    edx = t5;
    g->esp = sp0 - 0x10u;
    t6 = cow_fastcall(g, COW_IMG(0x101a0930u), rd32(self + 8u), edx, 1, 0x3e8u);
    t7 = g->edx;
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t7;
        goto L_1019f917;
    }
    eax = t6;
    edx = t7;
    if ((int32_t)(ebx + 0x3e8u) >= 100000) goto L_1019f917;
    ebx = ebx + 0x3e8u;
    g->esp = sp0 - 0x10u;
    t8 = cow_fastcall(g, COW_IMG(0x101a0be0u), rd32(rd32(self + 8u) + 4u), edx, 1, arg1);
    t9 = g->edx;
    if ((int32_t)t8 < 0)
    {
        edx = t9;
        goto L_1019f8ce;
    }
    edx = t9;
    esi = t8;
L_1019f90b: ;
    g->esp = sp0 - 0x10u;
    t10 = cow_fastcall(g, COW_IMG(0x101a0910u), rd32(self + 8u), edx, 0);
    t11 = g->edx;
    if ((int32_t)t10 >= 0)
    {
        edx = t11;
        goto L_1019f921;
    }
    eax = t10;
    edx = t11;
L_1019f917: ;
    g->edx = edx;
    return 0xffffffffu;
L_1019f921: ;
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f8b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
