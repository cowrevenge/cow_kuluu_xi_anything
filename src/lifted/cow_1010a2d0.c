/* f_0x1010a2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010a2d0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x8e8u) > 6u) goto L_1010a391;
    eax = rd32(self + 0x8e8u);
    t1 = rd32(COW_IMG(0x1010a3ecu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1010a2e9u: goto L_1010a2e9;
    case 0x1010a37au: goto L_1010a37a;
    case 0x1010a391u: goto L_1010a391;
    case 0x1010a399u: goto L_1010a399;
    default: rt_fatal(g, COW_IMG(0x1010a2e2u), "switch");
    }
    return 0;
L_1010a2e9: ;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x1010c990u), self, in_edx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_1010a306;
    }
    wr32(self + 0x8e8u, 1u);
    return rd32(self + 0x8e8u);
L_1010a306: ;
    if (rd32(self + 0x80cu) == 0u) goto L_1010a387;
    ecx = rd32(self + 0x80cu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1010b690u), ecx, 1, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u) goto L_1010a387;
    eax = t7;
    ecx = t8;
    edx = t9;
    if (rd32(self + 0x8f0u) != 0u)
    {
        edi = rd32(self + 0x8f0u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t10 = cow_fastcall(g, COW_IMG(0x1010cf30u), edi, edx, 0);
        t11 = g->ecx;
        t12 = g->edx;
        g->ecx = t11;
        g->edx = t12;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t13 = g->ecx;
        t14 = g->edx;
        ecx = t13;
        edx = t14;
    }
    g->esp = sp0;
    t15 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x4cu, in_edi, in_esi);
    if (t15 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t15;
        t16 = rd32(self + 0x8ecu);
        t17 = rd32(self + 0x80cu);
        g->esp = sp0 - 4u;
        t18 = cow_thiscall(g, COW_IMG(0x1010d110u), eax, 2, t17, t16);
        eax = t18;
    }
    wr32(self + 0x8f0u, eax);
    if (eax == 0u) goto L_1010a387;
L_1010a368: ;
    wr32(self + 0x8e8u, 3u);
    return rd32(self + 0x8e8u);
L_1010a37a: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, 1u);
    if (t4 == 0u) goto L_1010a391;
L_1010a387: ;
    wr32(self + 0x8e8u, 7u);
L_1010a391: ;
    return rd32(self + 0x8e8u);
L_1010a399: ;
    if (rd32(self + 0x8f0u) == 0u) goto L_1010a387;
    ecx = rd32(self + 0x8f0u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1010ea10u), ecx, 0);
    if (t2 > 3u) goto L_1010a391;
    eax = t2;
    t3 = rd32(COW_IMG(0x1010a408u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x1010a368u: goto L_1010a368;
    case 0x1010a3b4u: goto L_1010a3b4;
    case 0x1010a3c6u: goto L_1010a3c6;
    case 0x1010a3d8u: goto L_1010a3d8;
    default: rt_fatal(g, COW_IMG(0x1010a3adu), "switch");
    }
    return 0;
L_1010a3b4: ;
    wr32(self + 0x8e8u, 2u);
    return rd32(self + 0x8e8u);
L_1010a3c6: ;
    wr32(self + 0x8e8u, 5u);
    return rd32(self + 0x8e8u);
L_1010a3d8: ;
    wr32(self + 0x8e8u, 4u);
    return rd32(self + 0x8e8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a2d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
