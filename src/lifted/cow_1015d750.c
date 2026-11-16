/* f_0x1015d750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1015d750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if (arg2 > 3u)
    {
        edx = in_edx;
        goto L_1015d7c8;
    }
    t1 = rd32(COW_IMG(0x1015d7e0u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x1015d768u: goto L_1015d768;
    case 0x1015d79fu: goto L_1015d79f;
    case 0x1015d7a8u: goto L_1015d7a8;
    case 0x1015d7b1u: goto L_1015d7b1;
    default: rt_fatal(g, COW_IMG(0x1015d761u), "switch");
    }
    return 0;
L_1015d768: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10156be0u), sp0 - 8u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edx = t5;
    cow_cdecl(g, COW_IMG(0x1015d5d0u), 2, sp0 - 8u, arg3);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10156c20u), sp0 - 8u, 0);
    t8 = g->edx;
    wr32(sp0 - 0x10u, t7);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t7);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10156bb0u), sp0 - 8u, 0);
    t11 = g->edx;
    edx = t11;
L_1015d7c8: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x1018d490u), arg1, 0);
    t13 = g->edx;
    if ((int32_t)t12 < 100)
    {
        eax = t12;
        edx = t13;
    }
    else
    {
        eax = t12;
        edx = t13;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
L_1015d79f: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg3);
    ecx = self;
    edx = arg3;
L_1015d7b8: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg3, 0u);
    t3 = g->edx;
    wr32(sp0 - 0x10u, t2);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t2);
    t4 = g->edx;
    edx = t4;
    goto L_1015d7c8;
L_1015d7a8: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg3);
    ecx = self;
    edx = in_edx;
    goto L_1015d7b8;
L_1015d7b1: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg3);
    ecx = arg3;
    edx = in_edx;
    goto L_1015d7b8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015d750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015d750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
