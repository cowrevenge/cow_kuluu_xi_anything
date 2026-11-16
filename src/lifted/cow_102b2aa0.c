/* f_0x102b2aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102b2aa0(Guest* g)
{
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < 10) goto L_102b2ac8;
    g->eax = in_eax;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfc80u));
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac20u), COW_IMG(0x103b379cu));
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_102b2ac8: ;
    d6 = (double)rdf32(sp0 + 0x10u);
    wr32(arg1 + arg2 * 0xcu + 0x50u, rd32(arg3));
    t7 = rd32(arg3 + 4u);
    wr32(arg1 + arg2 * 0xcu + 0x54u, t7);
    t8 = rd32(arg3 + 8u);
    wr32(arg1 + arg2 * 0xcu + 0x58u, t8);
    wrf32(arg1 + arg2 * 4u + 0xc8u, (float)d6);
    wr32(arg1 + arg2 * 4u + 0xf0u, arg5);
    g->edx = arg5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b2aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
