/* f_0x10205b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205b10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u) - 1u) <= 0)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u) - 1u;
        edx = in_edx;
        ebx = in_ebx;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u) - 1u;
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x18u, in_ebx);
        esi = 0u;
L_10205b3d: ;
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, esi + 1u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        g->ebx = esi + 1u;
        g->edi = self;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, esi + 1u, 1u, 1u);
        if ((rd32(self + 0x2cu) & 1u << (rd8(COW_IMG(0x10385388u) + esi + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u) & 0x1fu)) == 0u)
        {
            eax = rd32(self + 0x2cu);
            ebx = esi + 1u;
        }
        else
        {
            edx = 1u << (rd8(COW_IMG(0x10385388u) + esi + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u) & 0x1fu);
            ebx = esi + 1u;
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x80808080u);
            t1 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x28u, t1);
            t2 = (uint32_t)(int16_t)rd16(sp0 - 8u);
            wr32(sp0 - 0x2cu, t2);
            g->eax = t1;
            g->esp = sp0 - 0x18u;
            t3 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x34u), 5, t2, t1, 0x80808080u, 0u, 0u);
            eax = t3;
        }
        if ((int32_t)ebx < (int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u) - 1u))
        {
            ecx = rd32(self + 8u);
            esi = ebx;
            goto L_10205b3d;
        }
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u) - 1u;
        ebx = rd32(sp0 - 0x18u);
    }
    g->ebx = ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
