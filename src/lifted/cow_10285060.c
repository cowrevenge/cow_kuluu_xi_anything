/* f_0x10285060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10285060(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd8(arg1) != 0x53u) goto L_1028518f;
    if (rd8(arg1 + 1u) != 0x51u) goto L_1028518f;
    if (rd8(arg1 + 2u) != 0x4cu) goto L_1028518f;
    if (rd8(arg1 + 3u) != 0x45u) goto L_1028518f;
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg1 + 4u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 4u, 4u, 1u, arg1 + 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(self & 1u))
    {
        eax = t1;
        edx = t3;
        edi = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
        edi = 1u;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 4u, 4u, 1u, eax, 0u);
    if (arg1 - 0x50001u > 8u)
    {
        eax = t4;
        goto L_10285163;
    }
    eax = t4;
    t5 = rd32(COW_IMG(0x102851b4u) + arg1 * 4u - 0x140004u);
    switch (t5 - RD)
    {
    case 0x102850e5u: goto L_102850e5;
    case 0x102850f5u: goto L_102850f5;
    case 0x10285105u: goto L_10285105;
    case 0x10285115u: goto L_10285115;
    case 0x1028513cu: goto L_1028513c;
    case 0x10285163u: goto L_10285163;
    default: rt_fatal(g, COW_IMG(0x102850deu), "switch");
    }
    return 0;
L_102850e5: ;
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, eax);
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x102851e0u), 2, eax, edi);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t14;
L_102850f5: ;
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, eax);
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x10285300u), 2, eax, edi);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t13;
L_10285105: ;
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, eax);
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x10285410u), 2, eax, edi);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t12;
L_10285115: ;
    wr32(sp0 - 0x10u, 0x123u);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = arg1 - 0x50001u;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7ad8u));
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103b7aa0u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7aa0u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1028513c: ;
    wr32(sp0 - 0x10u, 0x126u);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = arg1 - 0x50001u;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7ad8u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103b7a60u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a60u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_10285163: ;
    wr32(sp0 - 0x10u, 0x117u);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->ecx = arg1 - 0x50001u;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7ad8u));
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b7a30u));
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a30u), arg1);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1028518f: ;
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, COW_IMG(0x103b7a04u));
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a04u), arg1);
    t18 = g->edx;
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b79dcu));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b79dcu), arg1);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
