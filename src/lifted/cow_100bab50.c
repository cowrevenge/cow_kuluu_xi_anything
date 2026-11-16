/* f_0x100bab50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bab50(Guest* g)
{
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 8u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr8(COW_IMG(0x104886dau), 1u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, t3);
    g->ecx = t4;
    g->edx = t5;
    t6 = cow_cdecl(g, COW_IMG(0x1018be70u), 1, t3);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(COW_IMG(0x1065cb20u), 1u);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x1018c4f0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = t10;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t9, 1, sp0 - 4u);
    t12 = g->edx;
    wr32(sp0 - 0x14u, rd32(t11));
    g->eax = rd32(t11);
    g->edx = t12;
    t13 = rd32(t11);
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, t13);
    t15 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, 0u);
    t17 = g->edx;
    wr32(sp0 - 0x14u, t6);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1018bfa0u), sp0 - 8u, 1, t6);
    t19 = g->edx;
    wr32(sp0 - 0x14u, 0x1eu);
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1018bf00u), sp0 - 8u, 1, 0x1eu);
    t21 = g->edx;
    t22 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t22);
    cow_cdecl(g, COW_IMG(0x1018c1e0u), 1, t22);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bab50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bab50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
