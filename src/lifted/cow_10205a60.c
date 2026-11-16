/* f_0x10205a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x30u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x98u);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0x2cu, t1);
        if (t1 != 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            ecx = t2;
            pf = PARITY((uint8_t)t1);
            zf = t1 == 0u;
            sf = (int32_t)t1 < 0;
            t4 = 1u << (rd8(COW_IMG(0x10385388u) + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u) & 0x1fu);
            t5 = rd8(COW_IMG(0x10385388u) + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u);
            wr32(self + 0x2cu, t4);
            ecx = (ecx & 0xffffff00u) | t5;
            edx = t4;
        }
        t6 = rd16(self + 0x2cu);
        g->eax = t6;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x100e4910u), 1, t6);
        t8 = g->edx;
        wr8(self + 0x30u, 1u);
        eax = t7;
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
