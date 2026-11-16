/* f_0x10144530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10144530(Guest* g)
{
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    if (arg1 != 1u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0xcu, in_esi);
        wr32(sp0 - 0x10u, in_edi);
        t1 = rd8(COW_IMG(0x103d3c84u));
        wr32(sp0 - 7u, 0u);
        wr32(sp0 - 0x14u, 0x80808080u);
        wr16(sp0 - 3u, 0u);
        wr32(sp0 - 0x18u, 0x102u);
        wr32(sp0 - 0x1cu, 9u);
        wr8(sp0 - 8u, (uint8_t)t1);
        wr8(sp0 - 1u, 0u);
        g->eax = (arg1 & 0xffffff00u) | t1;
        g->ecx = 0u;
        g->esp = sp0 - 0x14u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x102u);
        t3 = g->ecx;
        wr32(sp0 - 0x18u, t2);
        wr32(sp0 - 0x1cu, arg3 + 3u);
        wr32(sp0 - 0x20u, arg2 + 3u);
        g->eax = arg2 + 3u;
        g->edx = arg3 + 3u;
        t4 = cow_cdecl(g, COW_IMG(0x101c9780u), 3, arg2 + 3u, arg3 + 3u, t2);
        t5 = g->edx;
        wr32(sp0 - 0x24u, 0x80808080u);
        wr32(sp0 - 0x28u, COW_IMG(0x1034ffb8u));
        wr32(sp0 - 0x2cu, arg3 + 0x14u);
        wr32(sp0 - 0x30u, arg2 + 0x37u);
        g->ecx = arg2 + 0x37u;
        g->edx = t5;
        g->esp = sp0 - 0xcu;
        t6 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg2 + 0x37u, arg3 + 0x14u, COW_IMG(0x1034ffb8u), 0x80808080u, arg2 + 3u, arg3 + 3u, rd32(sp0 - 0x18u), 0x80808080u, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x30u;
        t9 = cow_stdcall(g, COW_IMG(0x10141c40u), 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x34u, t9);
        t12 = (t11 & 0xffff0000u) | rd8(COW_IMG(0x10485641u));
        wr32(sp0 - 0x38u, t12);
        g->ecx = t10;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x100fda60u), 2, t12, t9);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(sp0 - 0x3cu, (uint16_t)t13);
        wr32(sp0 - 0x40u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x44u, sp0 - 8u);
        g->eax = sp0 - 8u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10352ff0u), (uint16_t)t13, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        wr32(sp0 - 0x48u, 0x80808080u);
        wr32(sp0 - 0x4cu, sp0 - 8u);
        wr32(sp0 - 0x50u, arg3 + 0x14u);
        wr32(sp0 - 0x54u, arg2 + 0x40u);
        g->ecx = sp0 - 8u;
        g->edx = arg2 + 0x40u;
        t17 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg2 + 0x40u, arg3 + 0x14u, sp0 - 8u, 0x80808080u, sp0 - 8u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t18 = g->ecx;
        t19 = g->edx;
        g->ecx = t18;
        g->edx = t19;
        g->esp = sp0 - 0x10u;
        t20 = cow_stdcall(g, COW_IMG(0x101444b0u), 0);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x14u, t20);
        wr32(sp0 - 0x18u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->edx = t22;
        g->esp = sp0 - 8u;
        t23 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10352ff0u), t20, in_edi, in_esi);
        t24 = g->edx;
        wr32(sp0 - 0x20u, 0x3f800000u);
        wr32(sp0 - 0x24u, 0x3f800000u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, 0x80808080u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x34u, arg3 + 0x14u);
        wr32(sp0 - 0x38u, arg2 + 0x36u);
        g->edx = t24;
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 8u, 7, arg2 + 0x36u, arg3 + 0x14u, sp0 - 8u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
        t25 = g->edx;
        edx = t25;
    }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144530(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
