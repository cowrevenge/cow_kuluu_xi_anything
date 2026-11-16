/* f_0x1019de50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1019de50(Guest* g)
{
    double d8;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 - 0xa8u > 7u) goto L_1019defa;
    t1 = rd32(COW_IMG(0x1019df00u) + arg1 * 4u - 0x2a0u);
    switch (t1 - RD)
    {
    case 0x1019de69u: goto L_1019de69;
    case 0x1019deb8u: goto L_1019deb8;
    case 0x1019ded5u: goto L_1019ded5;
    case 0x1019dee9u: goto L_1019dee9;
    case 0x1019defau: goto L_1019defa;
    default: rt_fatal(g, COW_IMG(0x1019de62u), "switch");
    }
    return;
L_1019de69: ;
    t6 = rd32(sp0 + 8u) & ((int32_t)rd32(sp0 + 8u) <= 0) - 1u;
    t7 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t6);
    wr32(self + 0x28u, t6);
    d8 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u)));
    wrf32(sp0 + 8u, (float)d8);
    g->eax = t6;
    g->ecx = self;
    g->edx = ((int32_t)t7 <= 0) - 1u;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10035ec0u), 1, 0x3f800000u);
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x100372e0u), 1, 0x3f800000u);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = rd32(sp0 + 8u);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x10035e80u), 1, t15);
    t17 = g->ecx;
    t18 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100372a0u), 1, t15);
    return;
L_1019deb8: ;
    t4 = rd32(sp0 + 8u) & ((int32_t)rd32(sp0 + 8u) <= 0) - 1u;
    t5 = rd32(sp0 + 8u);
    wr32(self + 0x30u, t4);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10002e80u), 1, t4);
    return;
L_1019ded5: ;
    t3 = ((int32_t)rd32(sp0 + 8u) <= 0) - 1u & rd32(sp0 + 8u);
    wr32(self + 0x34u, t3);
    return;
L_1019dee9: ;
    t2 = ((int32_t)rd32(sp0 + 8u) <= 0) - 1u & rd32(sp0 + 8u);
    wr32(self + 0x3cu, t2);
L_1019defa: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019de50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019de50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
