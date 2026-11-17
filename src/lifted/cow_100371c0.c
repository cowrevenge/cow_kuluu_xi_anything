/* f_0x100371c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100371c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x18u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10037263;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    wr32(sp0 - 0x1cu, 0x7fu);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x42800000u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    g->edx = rd32(t3);
    t4 = rd32(t3);
    g->esp = sp0 - 0x34u;
    t5 = cow_thiscall(g, rd32(t4 + 0x1bcu), t3, 0);
    t6 = g->edx;
    wr32(sp0 - 0x38u, t5);
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, COW_IMG(0x10037020u), self, 8, t5, 0u, 0u, 0u, 0x42800000u, 0u, 0u, 0x7fu);
    t8 = g->edx;
    wr32(sp0 - 0x10u, 0x42800000u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 0x7fu);
    t9 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = rd32(t9);
    t10 = rd32(t9);
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, rd32(t10 + 0x1bcu), t9, 0);
    t12 = g->edx;
    wr32(sp0 - 0x30u, t11);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 0x14u;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x10036c70u), 8, sp0 - 0x10u, sp0 - 0x14u, t11, 0u, 0u, 0u, 0u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_10037263: ;
    wr32(sp0 - 0x1cu, 0x7fu);
    wr32(sp0 - 0x20u, 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t15 = cow_thiscall(g, COW_IMG(0x10036f00u), self, 2, 0x40u, 0x7fu);
    t16 = g->edx;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100371c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100371c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
