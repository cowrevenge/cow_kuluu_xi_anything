/* f_0x102ac4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102ac4b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    int64_t q2;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(rd32(arg1 + 0x48u)) != 1u)
    {
        eax = rd32(arg1 + 0x48u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x48u);
        wr32(sp0 - 0xcu, 0u);
        t1 = rd32(rd32(arg1 + 0x34u) + 0x14u);
        wr32(sp0 - 0x10u, t1);
        wr32(sp0 - 0x14u, eax + 8u);
        q2 = (int64_t)cow_muls(0x55555556u, rd32(eax + 4u));
        t3 = cow_qhi(q2) + (cow_qhi(q2) >> 0x1fu);
        wr32(sp0 - 0x18u, t3);
        g->eax = cow_qhi(q2) >> 0x1fu;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x102b4500u), 4, t3, eax + 8u, t1, 0u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        g->ecx = sp0 - 4u;
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102b44d0u), 2, sp0 + 4u, sp0 - 4u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x24u, 0x530u);
        wr32(sp0 - 0x28u, COW_IMG(0x103be980u));
        t7 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0x2cu, t7);
        g->esp = sp0 - 0x20u;
        t8 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t7, COW_IMG(0x103be980u), 0x530u);
        wr32(arg1 + 0x4cu, arg1);
        wr32(arg1 + 0x48u, self);
        eax = t8;
        edx = self;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ac4b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
