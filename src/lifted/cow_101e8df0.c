/* f_0x101e8df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e8df0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(COW_IMG(0x10663648u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663648u));
        edx = in_edx;
        goto L_101e8e96;
    }
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
    if ((int16_t)rd16(rd32(COW_IMG(0x10663648u)) + 0x1cu) <= (int32_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u))
    {
        eax = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        edx = (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu);
        goto L_101e8e74;
    }
    eax = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    edx = (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu);
    if ((int16_t)rd16(sp0 - 8u) <= (int32_t)(uint32_t)((int32_t)(eax - edx) >> 1u))
    {
        eax = (uint32_t)((int32_t)(eax - edx) >> 1u);
        goto L_101e8e96;
    }
    eax = (uint32_t)((int32_t)(eax - edx) >> 1u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x10u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x101e8d20u), self, 2, 0x10u, 0u);
    t2 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t2;
    return t1;
L_101e8e74: ;
    if ((int16_t)rd16(sp0 - 8u) > (int32_t)(uint32_t)((int32_t)(eax - edx) >> 1u))
    {
        eax = (uint32_t)((int32_t)(eax - edx) >> 1u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
    }
    else
    {
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x18u, 1u);
        t3 = 0x1f0u - (uint32_t)(int16_t)rd16(self + 0x16u);
        wr32(sp0 - 0x1cu, t3);
        g->ebx = 0u;
        g->eax = (uint32_t)(int16_t)rd16(self + 0x16u);
        g->edx = edx;
        t4 = rd16(self + 0x16u);
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x101e8d20u), self, 2, t3, 1u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_101e8e96: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8df0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
