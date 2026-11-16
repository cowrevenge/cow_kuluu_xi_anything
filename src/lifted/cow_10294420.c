/* f_0x10294420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_10294420(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 >= 0) goto L_10294452;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb604u), COW_IMG(0x103b379cu));
    t5 = g->edx;
    g->edx = t5;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t4;
L_10294452: ;
    if ((int32_t)arg2 >= 0) goto L_10294483;
    g->eax = in_eax;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5f4u), COW_IMG(0x103b379cu));
    t10 = g->edx;
    g->edx = t10;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t9;
L_10294483: ;
    if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 0x24u)) goto L_102944c9;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x1cu)) goto L_102944a0;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x102943d0u), 2, arg1, arg2);
    t12 = g->edx;
    g->edx = t12;
    fpush(g, (double)rdf32(arg3 * 4u + t11));
    return t11;
L_102944a0: ;
    g->eax = arg1;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb444u), COW_IMG(0x103b379cu));
    t17 = g->edx;
    g->edx = t17;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t16;
L_102944c9: ;
    g->eax = arg1;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    g->esp = sp0 - 0xcu;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb430u), COW_IMG(0x103b379cu));
    t22 = g->edx;
    g->edx = t22;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10294420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
