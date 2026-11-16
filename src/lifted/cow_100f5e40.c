/* f_0x100f5e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5e40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f5f4f;
    t1 = rd32(COW_IMG(0x100f5f58u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f5e55u: goto L_100f5e55;
    case 0x100f5e5cu: goto L_100f5e5c;
    case 0x100f5e6fu: goto L_100f5e6f;
    case 0x100f5f2du: goto L_100f5f2d;
    default: rt_fatal(g, COW_IMG(0x100f5e4eu), "switch");
    }
    return 0;
L_100f5e55: ;
    return 3u;
L_100f5e5c: ;
    wr8(arg1 + 0x12u, 0u);
    eax = arg1 + 0x208u;
    ecx = self;
    edx = in_edx;
L_100f5ebc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_stdcall(g, COW_IMG(0x103103e0u), 0);
    t19 = g->edx;
    wr32(arg1 + 0xcu, t18);
    g->edx = t19;
    return 0x16u;
L_100f5e6f: ;
    if (rd8(arg1 + 0x12u) == 0u)
    {
        ecx = self;
        goto L_100f5e90;
    }
    eax = (arg2 & 0xffffff00u) | rd8(arg1 + 0x12u);
    wr8(arg1 + 0x12u, (uint8_t)((uint8_t)eax + 1u));
    if ((uint8_t)eax >= 0xf0u)
    {
        ecx = (self & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
        goto L_100f5e8c;
    }
    return 0x16u;
L_100f5e8c: ;
    wr8(arg1 + 0x12u, 0u);
L_100f5e90: ;
    if ((int32_t)rd32(arg1 + 0xcu) >= 0)
    {
        eax = rd32(arg1 + 0xcu);
        goto L_100f5ece;
    }
    eax = rd32(arg1 + 0xcu);
    wr16(arg1 + 0x10u, (uint16_t)(rd16(arg1 + 0x10u) + 1u));
    if (rd16(arg1 + 0x10u) <= 0x3cu) goto L_100f5eb3;
    t3 = rd32(arg1);
    wr32(arg1 + 8u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100f1d00u), t3, 0);
    t4 = g->edx;
    g->edx = t4;
    return 0x17u;
L_100f5eb3: ;
    edx = arg1 + 0x208u;
    goto L_100f5ebc;
L_100f5ece: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x103103ebu), 1, eax);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        sf = (int32_t)t5 < 0;
        goto L_100f5ee2;
    }
    edx = t7;
    g->edx = edx;
    return 0x16u;
L_100f5ee2: ;
    if (!sf) goto L_100f5ef5;
    t8 = rd32(arg1);
    wr32(arg1 + 8u, eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100f1d00u), t8, 0);
    t9 = g->edx;
    g->edx = t9;
    return 0x17u;
L_100f5ef5: ;
    ebx = 0x10u;
    edi = arg1 + 0x208u;
L_100f5f02: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x1031040cu), 1, edi);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = t10;
        edx = t12;
        g->eax = eax;
        g->edx = edx;
        t13 = rd32(arg1);
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, COW_IMG(0x100f27e0u), t13, 1, edi);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 0x48u;
        goto L_100f5f02;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100f1d00u), rd32(arg1), 0);
    t17 = g->edx;
    g->edx = t17;
    return 0x17u;
L_100f5f2d: ;
    if ((int32_t)rd32(arg1 + 0xcu) < 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x103103d5u), 1, eax);
        t2 = g->edx;
        wr32(arg1 + 0xcu, 0xffffffffu);
        edx = t2;
    }
    g->edx = edx;
    return 6u;
L_100f5f4f: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5e40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
