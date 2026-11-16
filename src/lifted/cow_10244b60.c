/* f_0x10244b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10244b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10244870u), 3, arg1, in_edi, in_esi);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_10244b7b;
    }
    eax = t1;
    return 0xffffffffu;
L_10244b7b: ;
    t3 = rd32(arg1 + 0x14u);
    g->ecx = arg2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1 + 0x118u, COW_IMG(0x103888b8u), arg2, t3, in_edi);
    t4 = g->ecx;
    t5 = rd32(rd32(arg1 + 0xcu) + 8u);
    t6 = rd32(arg1 + 0x10u);
    g->eax = t6;
    g->ecx = t4;
    g->edx = rd32(arg1 + 0xcu);
    t7 = rd32(arg1 + 0xcu);
    g->esp = sp0 - 0x1cu;
    t8 = cow_cdecl(g, COW_IMG(0x10311bdau), 4, t6, t5, 0u, arg1 + 0x118u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        ecx = t9;
        edx = t10;
        goto L_10244bf8;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    edi = t8;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xf2u);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x10244aa0u), 2, edi, t11);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 < 0)
    {
        ecx = t15;
        edx = t16;
        goto L_10244bf8;
    }
    ecx = t15;
    edx = t16;
    if (rd32(arg1 + 0xcu) != 0u)
    {
        eax = rd32(arg1 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(arg1 + 0xcu, 0u);
        ecx = t17;
        edx = t18;
    }
    if (rd32(arg1 + 0x10u) != 0u)
    {
        eax = rd32(arg1 + 0x10u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        wr32(arg1 + 0x10u, 0u);
    }
    return 0u;
L_10244bf8: ;
    if (rd32(arg1 + 0xcu) != 0u)
    {
        eax = rd32(arg1 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(arg1 + 0xcu, 0u);
        ecx = t19;
        edx = t20;
    }
    if (rd32(arg1 + 0x10u) != 0u)
    {
        eax = rd32(arg1 + 0x10u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        wr32(arg1 + 0x10u, 0u);
    }
    return 0xfffffffeu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10244b60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
