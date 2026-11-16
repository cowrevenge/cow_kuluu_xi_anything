/* f_0x10113940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10113940(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    edi = sp0 - 0x20u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 0x20u, (uint8_t)eax);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u);
        t2 = rd32(eax + 4u);
        wr32(sp0 - 0x18u, t2);
        t3 = rd32(eax + 8u);
        wr32(sp0 - 0x14u, t3);
        t4 = rd32(eax + 0x24u);
        wr32(sp0 - 0xcu, t4);
        t5 = rd32(eax + 0xcu);
        wr32(sp0 - 0x10u, t5);
        t6 = rd32(eax + 0x28u);
        wr32(sp0 - 8u, t6);
        t7 = rd32(eax + 0x2cu);
        wr32(sp0 - 4u, t7);
    }
    wr8(sp0 - 0x1fu, 0x20u);
    esi = sp0 - 0x20u;
    edi = arg2;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return arg2 + 0x20u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10113940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
