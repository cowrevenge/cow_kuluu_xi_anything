/* f_0x100f49a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f49a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, in_edi);
    if (arg2 > 3u) goto L_100f4a7f;
    t1 = rd32(COW_IMG(0x100f4a90u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f49bdu: goto L_100f49bd;
    case 0x100f49c9u: goto L_100f49c9;
    case 0x100f49d8u: goto L_100f49d8;
    case 0x100f4a70u: goto L_100f4a70;
    default: rt_fatal(g, COW_IMG(0x100f49b6u), "switch");
    }
    return 0;
L_100f49bd: ;
    return 0u;
L_100f49c9: ;
    return 0x16u;
L_100f49d8: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    t2 = (self & 0xffffff00u) | rd8(arg1 + 0x44u) != 0u;
    wr32(sp0 - 0xc4u, t2);
    t3 = rd32(arg1 + 0x40u);
    wr32(sp0 - 0xc8u, t3);
    t4 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0xccu, t4);
    t5 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0xd0u, t5);
    g->edx = t3;
    g->esp = sp0 - 0xa4u;
    t6 = cow_cdecl(g, COW_IMG(0x100f6df0u), 11, t5, t4, t3, t2, sp0 - 0xb0u, in_edi, in_esi, in_ebx, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u));
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        goto L_100f4a61;
    }
    edx = t7;
    edi = t6;
    if (rd32(edi + 0x98u) & 1u)
    {
        eax = rd32(edi + 0x98u) & 1u;
        wr32(sp0 - 0xc0u, 0x10u);
        wr32(sp0 - 0xc4u, edi + 0xa0u);
        wr32(sp0 - 0xc8u, arg1 + 0x44u);
        g->ecx = 0u;
        g->esp = sp0 - 0xb8u;
        cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x44u, edi + 0xa0u, 0x10u, rd32(sp0 - 0xbcu));
        t8 = g->ecx;
        t9 = rd32(edi + 0x98u);
        t10 = rd32(edi + 0x9cu);
        g->esp = sp0 - 0xbcu;
        t11 = cow_call_regs(g, COW_IMG(0x103152d0u), t9, (t8 & 0xffffff00u) | 0x2du, t10, 1, 0);
        t12 = g->edx;
        wr32(arg1 + 0x40u, t11 & 0x3fu);
        wr8(arg1 + 0xcdu, (uint8_t)(rd8(arg1 + 0xcdu) + 1u));
        edx = t12;
    }
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->edx = edx;
    return 0x17u;
L_100f4a61: ;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->edx = edx;
    return 0xau;
L_100f4a70: ;
    return 6u;
L_100f4a7f: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f49a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f49a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
