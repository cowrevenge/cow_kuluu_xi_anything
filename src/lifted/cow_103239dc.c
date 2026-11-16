/* f_0x103239dc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_103239dc(Guest* g)
{
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10323a38u), sp0 - 0x10u, self, g->edx, 1, 4, sp0 - 0x10u, sp0 + 4u, in_edi, in_esi);
    t1 = g->edx;
    wr32(sp0 - 0x38u, sp0 - 0x2cu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x11u);
    esi = sp0 - 0x10u;
    edi = sp0 - 0x4cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    g->ecx = sp0 + 4u;
    g->edx = t1;
    t2 = cow_cdecl(g, COW_IMG(0x10325fe2u), 8, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), 0x11u, 0u, sp0 - 0x2cu, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg3 + 8u, t2);
    t5 = (uint32_t)(int8_t)rd8(sp0 - 0x2au);
    wr32(arg3, t5);
    t6 = (uint32_t)(int16_t)rd16(sp0 - 0x2cu);
    wr32(arg3 + 4u, t6);
    wr32(sp0 - 0x50u, sp0 - 0x28u);
    wr32(sp0 - 0x54u, arg4);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10317500u), 3, arg4, sp0 - 0x28u, rd32(sp0 - 0x4cu));
    wr32(arg3 + 0xcu, arg4);
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103239dc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103239dc(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
