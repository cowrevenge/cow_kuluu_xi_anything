/* f_0x1007eb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007eb60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, sp0 - 8u);
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x18u, t1);
    g->edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1007bed0u), rd32(COW_IMG(0x103551e0u)), 5, t1, sp0 - 8u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_1007ebc4;
    }
    eax = sp0 - 8u;
L_1007eb82: ;
    wr32(sp0 - 0x10u, rd32(eax));
    t8 = rd32(eax + 4u);
    wr32(sp0 - 0xcu, t8);
    if (rd32(eax + 4u) == 0u)
    {
        edx = rd32(eax);
        goto L_1007ebf9;
    }
    edx = rd32(eax);
    loc_c = t8;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10159370u), rd32(COW_IMG(0x1057876cu)), 0);
    t10 = g->edx;
    wr32(sp0 - 8u, rd32(t9));
    if (rd32(t9 + 4u) == 0u)
    {
        eax = rd32(t9 + 4u);
        goto L_1007ebe9;
    }
    eax = rd32(t9 + 4u);
    edx = t10;
    if (eax != rd32(sp0 - 0xcu)) goto L_1007ebe9;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10159340u), rd32(COW_IMG(0x1057876cu)), 0);
    t11 = g->edx;
    g->edx = t11;
    return arg3;
L_1007ebc4: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    t4 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x20u, t4);
    t5 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t5, t4, edx, 1, 4, t4, 1u, 0u, 0u);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        goto L_1007eb82;
    }
    edx = t7;
    g->edx = edx;
    return -arg3;
L_1007ebe9: ;
    wr32(sp0 - 0x14u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10159260u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 0, 1, sp0 - 0x10u);
    t12 = g->edx;
    edx = t12;
L_1007ebf9: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007eb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007eb60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
