/* f_0x10230f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10230f60(Guest* g)
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
    uint32_t t24;
    uint32_t t25;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
    esi = arg1;
    edi = 0u;
L_10230f68: ;
    if (rd8(esi + 3u) > 8u)
    {
        eax = rd8(esi + 3u);
        goto L_10230fcc;
    }
    eax = rd8(esi + 3u);
    t1 = rd32(COW_IMG(0x10230fd4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10230f79u: goto L_10230f79;
    case 0x10230f81u: goto L_10230f81;
    case 0x10230f89u: goto L_10230f89;
    case 0x10230f91u: goto L_10230f91;
    case 0x10230f99u: goto L_10230f99;
    case 0x10230fa1u: goto L_10230fa1;
    case 0x10230fa9u: goto L_10230fa9;
    case 0x10230fb1u: goto L_10230fb1;
    case 0x10230fbeu: goto L_10230fbe;
    default: rt_fatal(g, COW_IMG(0x10230f72u), "switch");
    }
    return 0;
L_10230f79: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x10230db0u), g->eax, g->ecx, edx, 1, 1, esi);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
L_10230fb7: ;
    if ((uint8_t)eax == 0u) goto L_10230fcc;
L_10230fbe: ;
    if ((int32_t)(edi + 1u) < 4)
    {
        esi = esi + 4u;
        edi = edi + 1u;
        goto L_10230f68;
    }
    return (eax & 0xffffff00u) | 1u;
L_10230f81: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_cdecl(g, COW_IMG(0x10230de0u), 1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    goto L_10230fb7;
L_10230f89: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_call_regs(g, COW_IMG(0x10230e30u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    goto L_10230fb7;
L_10230f91: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10230e70u), 1, esi);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    goto L_10230fb7;
L_10230f99: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10230e90u), eax, g->ecx, g->edx, 1, 1, esi);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    goto L_10230fb7;
L_10230fa1: ;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10230ed0u), g->eax, ecx, edx, 1, 1, esi);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_10230fb7;
L_10230fa9: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10230ef0u), 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_10230fb7;
L_10230fb1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10230f20u), 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    goto L_10230fb7;
L_10230fcc: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
