/* f_0x10081550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10081550(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, in_esi);
    if (rd32(COW_IMG(0x10480af0u) + rd32(self + 4u) * 4u) == 0u)
    {
        edx = in_edx;
        goto L_100815cc;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd32(self + 4u) * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_10081587;
    if (rd32(eax + 0x78u) != rd32(self + 8u)) goto L_10081587;
    edx = rd32(eax + 0x78u);
    g->edx = edx;
    return rd32(eax + 0xa0u);
L_10081587: ;
    edx = 0u;
L_10081589: ;
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
        goto L_100815b1;
    }
    eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100815b1;
    if (rd32(eax + 0x78u) == 0x4000000u)
    {
        eax = rd32(eax + 0x78u);
        goto L_100815b1;
    }
    eax = rd32(eax + 0x78u);
    if (eax == rd32(self + 8u)) goto L_100815d3;
L_100815b1: ;
    if ((int32_t)(edx + 1u) < 2304)
    {
        edx = edx + 1u;
        goto L_10081589;
    }
    edx = edx + 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x100814a0u), sp0 - 0xcu, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
    t5 = g->edx;
    edx = t5;
L_100815cc: ;
    g->edx = edx;
    return 0u;
L_100815d3: ;
    t1 = rd32(rd32(COW_IMG(0x10480af0u) + edx * 4u) + 0x78u);
    wr32(sp0 - 0x14u, t1);
    t2 = rd32(rd32(COW_IMG(0x10480af0u) + edx * 4u) + 0x74u);
    wr32(sp0 - 0x18u, t2);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10081530u), self, 2, t2, t1);
    g->edx = rd32(self + 4u);
    return rd32(rd32(COW_IMG(0x10480af0u) + rd32(self + 4u) * 4u) + 0xa0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10081550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
