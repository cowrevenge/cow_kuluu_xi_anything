/* f_0x10129980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10129980(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg16 = rd32(g->esp + 0x40u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (arg16 == 0u) goto L_101299c8;
    if (arg16 == 8u) goto L_101299ae;
    wr32(sp0 - 0xcu, arg16);
    esi = sp0 + 4u;
    edi = sp0 - 0x48u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), arg16);
    t1 = g->edx;
    g->edx = t1;
    return;
L_101299ae: ;
    wr32(sp0 - 0xcu, 8u);
    esi = sp0 + 4u;
    edi = sp0 - 0x48u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10129b80u), g->eax, g->ecx, in_edx, 0, 16, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), 8u);
    t2 = g->edx;
    g->edx = t2;
    return;
L_101299c8: ;
    wr32(sp0 - 0xcu, 0u);
    esi = sp0 + 4u;
    edi = sp0 - 0x48u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10129b40u), g->eax, g->ecx, in_edx, 0, 16, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), 0u);
    t3 = g->edx;
    g->edx = t3;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10129980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 64u);
}
/* COW_ADAPTER END */
