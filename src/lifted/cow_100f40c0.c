/* f_0x100f40c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f40c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    if (arg1 > 3u) goto L_100f4230;
    t1 = rd32(COW_IMG(0x100f423cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f40d7u: goto L_100f40d7;
    case 0x100f40e0u: goto L_100f40e0;
    case 0x100f4125u: goto L_100f4125;
    case 0x100f420au: goto L_100f420a;
    default: rt_fatal(g, COW_IMG(0x100f40d0u), "switch");
    }
    return 0;
L_100f40d7: ;
    return 3u;
L_100f40e0: ;
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = self + 0xe48u;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x10310ebfu), 2, self + 0xe48u, 1u);
    wr32(self + 0x208u, t20);
    if ((int32_t)t20 >= 0) goto L_100f4112;
    eax = t20;
    if (arg2 == 0u) goto L_100f41df;
    wr32(arg2, eax);
    g->esi = rd32(sp0 - 4u);
    return 0x12u;
L_100f4112: ;
    wr32(self + 0x20cu, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f4125: ;
    if ((int32_t)rd32(self + 0x20cu) >= 0) goto L_100f4199;
    eax = rd32(self + 0x20cu);
    t2 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t2);
    g->eax = eax;
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10310ecau), 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        sf = (int32_t)t3 < 0;
        goto L_100f414b;
    }
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f414b: ;
    if (!sf) goto L_100f4160;
    if (arg2 != 0u)
    {
        wr32(arg2, eax);
    }
    t6 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t6);
    ecx = arg2;
    edx = t6;
L_100f41cd: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
L_100f41df: ;
    g->esi = rd32(sp0 - 4u);
    return 0x12u;
L_100f4160: ;
    t7 = rd32(rd32(self + 0xa0u) + 0x38u);
    t8 = rd32(rd32(self + 0xa0u) + 0x38u);
    wr32(self + 0x20cu, t7);
    if ((int32_t)t8 > 0)
    {
        eax = t7;
        goto L_100f417c;
    }
    eax = t7;
    t9 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t9);
    ecx = t9;
L_100f41ef: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    return 0x17u;
L_100f417c: ;
    wr32(sp0 - 8u, eax);
    t10 = rd32(self + 0xa4u);
    wr32(sp0 - 0xcu, t10);
    t11 = rd32(self + 0x208u);
    wr32(sp0 - 0x10u, t11);
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10310ef6u), 3, t11, t10, eax);
    t13 = g->edx;
    if ((int32_t)t12 >= 0) goto L_100f41b1;
    eax = t12;
    edx = t13;
L_100f41bc: ;
    if (arg2 != 0u)
    {
        wr32(arg2, eax);
    }
    t18 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t18);
    ecx = t18;
    goto L_100f41cd;
L_100f4199: ;
    wr32(sp0 - 8u, sp0 + 4u);
    t14 = rd32(self + 0x208u);
    wr32(sp0 - 0xcu, t14);
    g->eax = t14;
    g->ecx = self;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10310f01u), 2, t14, sp0 + 4u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        sf = (int32_t)t15 < 0;
        goto L_100f41ba;
    }
L_100f41b1: ;
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f41ba: ;
    if (!sf) goto L_100f41e8;
    goto L_100f41bc;
L_100f41e8: ;
    t19 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t19);
    edx = t19;
    goto L_100f41ef;
L_100f420a: ;
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        wr32(sp0 - 8u, eax);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    return 6u;
L_100f4230: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f40c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f40c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
