/* f_0x10292fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_10292fa0(Guest* g)
{
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 0x24u)) goto L_10292ff1;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x1cu))
    {
        edx = rd32(arg1 + 0x1cu);
        goto L_10292fc8;
    }
    edx = rd32(arg1 + 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), arg2, 2, arg1, arg2);
    t2 = g->edx;
    g->edx = t2;
    fpush(g, (double)rdf32(arg3 * 4u + t1));
    return t1;
L_10292fc8: ;
    g->eax = arg1;
    g->ecx = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb444u), COW_IMG(0x103b379cu));
    t7 = g->edx;
    g->edx = t7;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t6;
L_10292ff1: ;
    g->eax = arg1;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb430u), COW_IMG(0x103b379cu));
    t12 = g->edx;
    g->edx = t12;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
