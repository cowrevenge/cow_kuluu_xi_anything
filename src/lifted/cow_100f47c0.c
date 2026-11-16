/* f_0x100f47c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f47c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 208u);

    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, in_edi);
    if (arg2 > 3u) goto L_100f4892;
    t1 = rd32(COW_IMG(0x100f48a0u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f47dcu: goto L_100f47dc;
    case 0x100f47e7u: goto L_100f47e7;
    case 0x100f47f5u: goto L_100f47f5;
    case 0x100f4884u: goto L_100f4884;
    default: rt_fatal(g, COW_IMG(0x100f47d5u), "switch");
    }
    return 0;
L_100f47dc: ;
    return 0u;
L_100f47e7: ;
    return 0x16u;
L_100f47f5: ;
    wr32(sp0 - 0xbcu, sp0 - 0xb0u);
    wr32(sp0 - 0xc0u, 1u);
    t2 = rd32(arg1 + 0x40u);
    wr32(sp0 - 0xc4u, t2);
    t3 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0xc8u, t3);
    t4 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0xccu, t4);
    g->edx = t3;
    g->esp = sp0 - 0xa0u;
    t5 = cow_cdecl(g, COW_IMG(0x100f6df0u), 11, t4, t3, t2, 1u, sp0 - 0xb0u, in_edi, in_esi, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u));
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_100f4876;
    }
    edx = t6;
    esi = t5;
    if (!(rd32(esi + 0x98u) & 1u)) goto L_100f4868;
    eax = rd32(esi + 0x98u) & 1u;
    wr32(sp0 - 0xbcu, 0x10u);
    wr32(sp0 - 0xc0u, esi + 0xa0u);
    wr32(sp0 - 0xc4u, arg1 + 0x44u);
    g->ecx = esi + 0xa0u;
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x44u, esi + 0xa0u, 0x10u, rd32(sp0 - 0xb8u));
    t7 = g->ecx;
    t8 = rd32(esi + 0x98u);
    t9 = rd32(esi + 0x9cu);
    g->esp = sp0 - 0xb8u;
    t10 = cow_call_regs(g, COW_IMG(0x103152d0u), t8, (t7 & 0xffffff00u) | 0x2du, t9, 1, 0);
    t11 = g->edx;
    wr32(arg1 + 0x40u, t10 & 0x3fu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = t11;
    return 0x17u;
L_100f4868: ;
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = edx;
    return 8u;
L_100f4876: ;
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = edx;
    return 0xau;
L_100f4884: ;
    return 6u;
L_100f4892: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f47c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f47c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
