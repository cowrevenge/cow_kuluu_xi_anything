/* f_0x101e1600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e1600(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x14u, 2u);
    t2 = rd16(sp0 - 4u);
    t3 = rd32(sp0 - 8u);
    wr16(self + 0x14u, (uint16_t)(t3 + 3u));
    wr16(self + 0x16u, (uint16_t)(t3 + (uint32_t)((int32_t)((uint32_t)(int16_t)t2 - (uint32_t)(int16_t)t3 - (uint32_t)((int32_t)((uint32_t)(int16_t)t2 - (uint32_t)(int16_t)t3) >> 0x1fu)) >> 1u)));
    t4 = rd32(sp0 - 6u);
    wr16(self + 0x18u, (uint16_t)(t4 + 4u));
    g->eax = t4 + 4u;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    wr32(sp0 - 0x14u, in_ebx);
    eax = t5;
    ecx = COW_IMG(0x1037f25cu);
    edx = self + 0x1cu;
L_101e1668: ;
    t6 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t6);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x1037f26eu))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101e1668;
    }
    ecx = COW_IMG(0x1037f270u);
    edx = self + 0x40u;
L_101e168a: ;
    t7 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t7);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x1037f290u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101e168a;
    }
    edx = edx + 4u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
