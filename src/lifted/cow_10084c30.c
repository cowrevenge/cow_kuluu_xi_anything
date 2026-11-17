/* f_0x10084c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10084c30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x1dcu), self, 1, sp0 - 4u);
    t3 = g->edx;
    wr32(sp0 - 8u, rd32(t2));
    if (rd32(t2) == 0u)
    {
        eax = rd32(t2);
        edx = t3;
        loc_c = in_esi;
        goto L_10084cb3;
    }
    eax = rd32(t2);
    edx = t3;
    loc_8 = rd32(t2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        loc_c = in_esi;
        goto L_10084cb3;
    }
    eax = t4;
    t6 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t6);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t6);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    g->edx = sp0 + 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10072430u), t7, g->ecx, g->edx, 0, 4, sp0 + 4u, t7, 7u, arg1);
    t9 = g->edx;
    wr32(sp0 - 8u, rd32(t8));
    if (rd32(t8) == 0u)
    {
        eax = rd32(t8);
        edx = t9;
        loc_c = rd32(sp0 - 0xcu);
        goto L_10084cb3;
    }
    eax = rd32(t8);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x1cu;
    t10 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10056c70u), t10, t10, g->edx, 0, 4, self, arg2, 0u, arg3);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_10084cb3: ;
    g->esi = loc_c;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084c30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
