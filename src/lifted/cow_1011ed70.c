/* f_0x1011ed70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011ed70(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x50u, arg3);
    cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, arg3);
    wr32(sp0 - 0x50u, arg5);
    wr32(sp0 - 0x54u, arg4);
    esi = sp0 - 0x40u;
    edi = sp0 - 0x94u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x98u, arg2);
    wr32(sp0 - 0x9cu, arg1);
    g->eax = arg2;
    t4 = cow_bridge_indirect(g, COW_IMG(0x1011ede0u), 0u, 20u, (const uint32_t[]){arg1, arg2, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), arg4, arg5}, self, arg4, g->eax, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011ed70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011ed70(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
