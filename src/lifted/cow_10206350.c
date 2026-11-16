/* f_0x10206350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10206350(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_90;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    edi = self + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = self + 0x14u;
    }
    else
    {
        ecx = ~ecx - 1u;
        if (rd8(self + 0x24u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
            edx = self + 0x14u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
            wr32(sp0 - 0x8cu, self + 0x14u);
            if (rd8(COW_IMG(0x106643a7u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643a7u));
                wr32(sp0 - 0x90u, 1u);
                wr32(sp0 - 0x94u, 0xau);
                g->eax = eax;
                g->edx = self + 0x14u;
                g->esp = sp0 - 0x8cu;
                t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 1u);
                t5 = g->edx;
                wr32(sp0 - 0x90u, t4);
                wr32(sp0 - 0x94u, sp0 - 0x80u);
                ecx = sp0 - 0x80u;
                edx = t5;
                loc_90 = t4;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643a7u));
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, 0xau);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = self + 0x14u;
                g->esp = sp0 - 0x8cu;
                t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0u);
                t2 = g->ecx;
                t3 = g->edx;
                wr32(sp0 - 0x90u, t1);
                wr32(sp0 - 0x94u, sp0 - 0x80u);
                ecx = t2;
                edx = t3;
                loc_90 = t1;
            }
            g->esp = sp0 - 0x80u;
            t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, loc_90, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
            wr32(sp0 - 0x8cu, 1u);
            wr32(sp0 - 0x90u, sp0 - 0x80u);
            g->edx = sp0 - 0x80u;
            g->esp = sp0 - 0x88u;
            t7 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, sp0 - 0x80u, 1u);
            t8 = g->edx;
            wr8(self + 0x24u, 1u);
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206350(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
