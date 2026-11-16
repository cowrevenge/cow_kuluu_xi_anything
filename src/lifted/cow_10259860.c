/* f_0x10259860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10259860(Guest* g)
{
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 != 0xffffffffu) goto L_10259874;
    return 0u;
L_10259874: ;
    if (arg1 == 0u) goto L_102598ea;
    if (arg1 == 1u) goto L_102598ba;
    if (arg1 == 2u) goto L_1025988a;
    return 0u;
L_1025988a: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10259410u), self, in_edx, 1, COW_IMG(0x1038a290u));
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_cdecl(g, COW_IMG(0x10258e70u), 5, 0u, 0u, arg2, arg3, arg4);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x10259410u), self, t3, 1, t2);
    return t4;
L_102598ba: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10259410u), self, in_edx, 1, COW_IMG(0x1038a1a8u));
    t5 = g->ecx;
    g->edx = arg3;
    t6 = cow_cdecl(g, COW_IMG(0x10258e70u), 5, 1u, 0u, arg2, arg3, arg4);
    t7 = g->edx;
    t8 = cow_fastcall(g, COW_IMG(0x10259410u), self, t7, 1, t6);
    return t8;
L_102598ea: ;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x10258d20u), 4, 1u, arg2, arg3, arg4);
    t10 = g->edx;
    t11 = cow_fastcall(g, COW_IMG(0x10259410u), self, t10, 1, t9);
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10259860(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
