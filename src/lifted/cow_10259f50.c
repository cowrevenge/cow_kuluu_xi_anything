/* f_0x10259f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10259f50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t23;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10259f40u), self, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_1025a0b0;
    eax = t1;
    edx = t2;
    if (arg1 == 0u) goto L_1025a0b0;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
    t3 = g->edx;
    if (rd32(self + 4u) == 0u) goto L_1025a0a5;
    edx = t3;
    esi = rd32(self + 4u);
L_10259f81: ;
    if (rd32(esi + 8u) - 1u > 4u) goto L_1025a099;
    eax = rd32(esi + 8u) - 1u;
    t4 = rd32(COW_IMG(0x1025a0b8u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10259f95u: goto L_10259f95;
    case 0x10259fa6u: goto L_10259fa6;
    case 0x10259fb6u: goto L_10259fb6;
    case 0x10259fc6u: goto L_10259fc6;
    case 0x1025a039u: goto L_1025a039;
    default: rt_fatal(g, COW_IMG(0x10259f8eu), "switch");
    }
    return 0;
L_10259f95: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1034f2b8u));
    t23 = g->edx;
    edx = t23;
L_1025a099: ;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        goto L_10259f81;
    }
L_1025a0a5: ;
    return 1u;
L_10259fa6: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, esi + 0xcu);
    t22 = g->edx;
    edx = t22;
    goto L_1025a099;
L_10259fb6: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, esi + 0xcu);
    t21 = g->edx;
    edx = t21;
    goto L_1025a099;
L_10259fc6: ;
    if (rd32(esi + 0x10u) == 0u) goto L_1025a099;
    eax = rd32(esi + 0x10u);
    if (rd32(esi + 0xcu) == 0xffffffffu) goto L_1025a099;
    ecx = rd32(esi + 0xcu);
    if (ecx != 1u)
    {
        ecx = rd32(eax + 0xcu);
        goto L_10259ffa;
    }
    ecx = rd32(eax + 0xcu);
    if (ecx == 0u) goto L_1025a05c;
L_10259fe9: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x10387c98u));
    t20 = g->edx;
    edx = t20;
    goto L_1025a099;
L_10259ffa: ;
    if (ecx > 4u) goto L_1025a099;
    t9 = rd32(COW_IMG(0x1025a0ccu) + ecx * 4u);
    switch (t9 - RD)
    {
    case 0x10259fe9u: goto L_10259fe9;
    case 0x1025a00au: goto L_1025a00a;
    case 0x1025a02bu: goto L_1025a02b;
    case 0x1025a05cu: goto L_1025a05c;
    default: rt_fatal(g, COW_IMG(0x1025a003u), "switch");
    }
    return 0;
L_1025a00a: ;
    if (rd32(eax + 0x10u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x10361d04u));
        t19 = g->edx;
        edx = t19;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x10387eb4u));
        t18 = g->edx;
        edx = t18;
    }
    goto L_1025a099;
L_1025a02b: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1038a298u));
    t17 = g->edx;
    edx = t17;
    goto L_1025a099;
L_1025a039: ;
    if (rd32(esi + 0x20u) != 0u)
    {
        ecx = rd32(esi + 0x20u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x10258910u), ecx, 0);
        t7 = g->edx;
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t6);
        t8 = g->edx;
        edx = t8;
    }
    else
    {
        g->edx = esi + 0x14u;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, esi + 0x14u);
        t5 = g->edx;
        edx = t5;
    }
    goto L_1025a099;
L_1025a05c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_stdcall(g, COW_IMG(0x10259f10u), 1, esi);
    t11 = g->edx;
    if (rd32(t10 + 8u) != 4u)
    {
        eax = t10;
        ecx = rd32(t10 + 8u);
        edx = t11;
        if (ecx == 1u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t12 = cow_thiscall(g, COW_IMG(0x1018d470u), eax + 0xcu, 0);
            t13 = g->edx;
            if (rd8(t12) != 0x20u)
            {
                edx = t13;
            }
            else
            {
                edx = t13;
                edi = eax + 0xcu;
                eax = t12;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t14 = cow_thiscall(g, COW_IMG(0x1018d470u), edi, 0);
                t15 = g->edx;
                g->edx = t15;
                cow_stdcall(g, COW_IMG(0x1018d430u), 1, t14 + 1u);
                t16 = g->edx;
                edx = t16;
            }
        }
    }
    else
    {
        eax = t10;
        edx = t11;
        wr32(eax + 8u, 0u);
    }
    goto L_1025a099;
L_1025a0b0: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10259f50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
