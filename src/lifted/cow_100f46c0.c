/* f_0x100f46c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f46c0(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 200u);

    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, in_edi);
    if (arg2 > 3u) goto L_100f4795;
    t1 = rd32(COW_IMG(0x100f47a4u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f46dcu: goto L_100f46dc;
    case 0x100f46e7u: goto L_100f46e7;
    case 0x100f46f5u: goto L_100f46f5;
    case 0x100f4787u: goto L_100f4787;
    default: rt_fatal(g, COW_IMG(0x100f46d5u), "switch");
    }
    return 0;
L_100f46dc: ;
    return 0u;
L_100f46e7: ;
    return 0x16u;
L_100f46f5: ;
    wr32(sp0 - 0xbcu, sp0 - 0xb0u);
    wr32(sp0 - 0xc0u, 1u);
    t2 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0xc4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0xa8u;
    t3 = cow_cdecl(g, COW_IMG(0x100f6c10u), 7, t2, 1u, sp0 - 0xb0u, in_edi, in_esi, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        goto L_100f4779;
    }
    edx = t4;
    esi = t3;
    if (!(rd32(esi + 0x98u) & 1u)) goto L_100f476b;
    wr32(sp0 - 0xbcu, 0x10u);
    wr32(sp0 - 0xc0u, esi + 0xa0u);
    wr32(sp0 - 0xc4u, arg1 + 0x44u);
    g->ecx = 0u;
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x44u, esi + 0xa0u, 0x10u, rd32(sp0 - 0xb8u));
    t5 = g->ecx;
    t6 = rd32(esi + 0x98u);
    g->esp = sp0 - 0xb8u;
    t7 = cow_call_regs(g, COW_IMG(0x103152d0u), t6, (t5 & 0xffffff00u) | 0x2du, rd32(esi + 0x9cu), 1, 0);
    wr32(arg1 + 0x40u, t7 & 0x3fu);
    wr32(arg1 + 0x38u, rd32(esi));
    t8 = rd32(esi + 4u);
    wr32(arg1 + 0x3cu, t8);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = t8;
    return 0x17u;
L_100f476b: ;
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = edx;
    return 8u;
L_100f4779: ;
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->edx = edx;
    return 0xau;
L_100f4787: ;
    return 6u;
L_100f4795: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f46c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f46c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
