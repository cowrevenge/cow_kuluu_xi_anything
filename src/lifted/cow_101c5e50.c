/* f_0x101c5e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c5e50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x694u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x694u);
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 0x398u) + 1u;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101c6960u), rd32(self + 0x6a0u), 2, self + 0x12u, t1);
        t2 = rd32(self + 0x398u) + 1u;
        edi = self + 0x12u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t3 = ~ecx - 1u;
        g->eax = eax;
        g->edx = self + 0x1d5u;
        t4 = cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, self + 0x12u, t3, self + 0x1d5u, t2, 0u, 0u);
        t5 = g->edx;
        wr32(self + 0x39cu, t4);
        eax = t4;
        edx = t5;
    }
    if ((uint8_t)arg1 != 0u)
    {
        eax = self + 0x1d5u;
    }
    else
    {
        eax = self + 0x12u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c5e50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
