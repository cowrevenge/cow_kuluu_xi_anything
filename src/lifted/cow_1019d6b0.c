/* f_0x1019d6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019d6b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        if ((int16_t)rd16(rd32(self + 8u) + 0x58u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 8u);
            wr32(sp0 - 0x1cu, in_esi);
            wr32(sp0 - 0xcu, self + 0x18u);
            eax = self + 0x18u;
            edi = 0u;
            loc_c = self + 0x18u;
L_1019d6dc: ;
            if (rd16(loc_c) == 0u)
            {
                eax = rd32(self + 0x14u);
                esi = rd32(rd32(rd32(self + 0x14u)) + 0x54u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(loc_c);
                esi = rd32((uint16_t)eax * 4u + rd32(rd32(self + 0x14u)));
                eax = (uint16_t)eax;
            }
            if (esi != 0u)
            {
                wr32(sp0 - 0x20u, 1u);
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, edi + 1u);
                wr32(sp0 - 0x2cu, sp0 - 8u);
                g->ebx = self;
                g->edi = edi;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, edi + 1u, 1u, 1u);
                t1 = g->edx;
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 0u);
                t2 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, 0u, 0u, 0x80808080u, 0u, 0u);
                eax = t2;
            }
            wr32(sp0 - 0xcu, loc_c + 2u);
            if ((int32_t)(edi + 1u) < (int16_t)rd16(rd32(self + 8u) + 0x58u))
            {
                ecx = rd32(self + 8u);
                edi = edi + 1u;
                loc_c = loc_c + 2u;
                goto L_1019d6dc;
            }
            edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        }
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d6b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
