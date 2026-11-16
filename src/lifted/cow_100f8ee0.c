/* f_0x100f8ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f8ee0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    t1 = rd32(sp0 + 0xcu);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x60u, 0xfu);
    wr32(sp0 - 0x64u, t1 + 0xeu);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x34u, g->ecx, g->edx, 1, 3, sp0 - 0x34u, t1 + 0xeu, 0xfu);
    t2 = g->edx;
    wr32(sp0 - 0x6cu, sp0 - 0x34u);
    g->ecx = sp0 - 0x34u;
    g->edx = t2;
    g->esp = sp0 - 0x68u;
    t3 = cow_cdecl(g, COW_IMG(0x100e0a50u), 1, sp0 - 0x34u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_100f8fcf;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = t1;
    edi = t1 + 0xeu;
    if (((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u > 5u)
    {
        eax = ((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u;
        goto L_100f8fcf;
    }
    eax = ((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u;
    t6 = rd32(COW_IMG(0x100f8fd8u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100f8f34u: goto L_100f8f34;
    case 0x100f8f42u: goto L_100f8f42;
    case 0x100f8f50u: goto L_100f8f50;
    case 0x100f8f5eu: goto L_100f8f5e;
    case 0x100f8f6cu: goto L_100f8f6c;
    case 0x100f8f7au: goto L_100f8f7a;
    default: rt_fatal(g, COW_IMG(0x100f8f2du), "switch");
    }
    return 0;
L_100f8f34: ;
    wr8(sp0 + 0xcu, 0xfu);
L_100f8f86: ;
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->ecx = ecx;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    t7 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x10093e30u), t7, t8, t9, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x64u, esi + 0x1eu);
    wr32(sp0 - 0x68u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    t12 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x7cu, t12);
    g->ecx = t10;
    g->edx = t11;
    t13 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, t12, 0u, 0u, 0u, 0u, COW_IMG(0x1034f7e0u), esi + 0x1eu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x80u, 0x10u);
    wr32(sp0 - 0x84u, edi);
    wr32(sp0 - 0x88u, COW_IMG(0x104df910u));
    g->edx = t15;
    g->esp = sp0 - 0x7cu;
    t16 = cow_call_regs(g, COW_IMG(0x10312090u), t13, g->ecx, g->edx, 1, 3, COW_IMG(0x104df910u), edi, 0x10u);
    t17 = g->edx;
    wr8(COW_IMG(0x104df91fu), 0u);
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100f8f42: ;
    wr8(sp0 + 0xcu, 0x10u);
    goto L_100f8f86;
L_100f8f50: ;
    wr8(sp0 + 0xcu, 0x1cu);
    goto L_100f8f86;
L_100f8f5e: ;
    wr8(sp0 + 0xcu, 0x1fu);
    goto L_100f8f86;
L_100f8f6c: ;
    wr8(sp0 + 0xcu, 0xdu);
    goto L_100f8f86;
L_100f8f7a: ;
    wr8(sp0 + 0xcu, 0xeu);
    goto L_100f8f86;
L_100f8fcf: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
