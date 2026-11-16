/* f_0x1020e310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020e310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 1u, 1u, 1u);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(sp0 - 8u) + 2u;
        ecx = rd32(self + 0x14u);
        edx = rd32(sp0 - 6u) + 2u;
        goto L_1020e37e;
    }
    eax = rd32(sp0 - 8u) + 2u;
    ecx = rd32(self + 0x14u);
    edx = rd32(sp0 - 6u) + 2u;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x5au);
    wr32(sp0 - 0x1cu, (uint32_t)(int16_t)edx);
    wr32(sp0 - 0x20u, (uint32_t)(int16_t)eax);
    g->edx = (uint32_t)(int16_t)edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_call_regs(g, COW_IMG(0x101c6060u), (uint32_t)(int16_t)eax, ecx, g->edx, 1, 0);
    t3 = g->edx;
    wr32(sp0 - 0x24u, t2);
    g->edx = t3;
    g->esp = sp0 - 0x24u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6020u), t2, rd32(self + 0x14u), g->edx, 1, 0);
    t5 = g->edx;
    wr32(sp0 - 0x28u, t4);
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x14u), 6, t4, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), 0x5au, 1u);
    t7 = g->edx;
    g->edi = in_edi;
    g->edx = t7;
    return t6;
L_1020e37e: ;
    wr32(sp0 - 0x14u, 0x80808080u);
    wr32(sp0 - 0x18u, self + 0x18u);
    wr32(sp0 - 0x1cu, edx);
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, 0x5au);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x5au, eax, edx, self + 0x18u, 0x80808080u);
    t9 = g->edx;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020e310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
