/* f_0x101462b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101462b0(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        edi = self + 0x14u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx == 1u)
        {
            edx = self + 0x14u;
        }
        else
        {
            ecx = ~ecx - 1u;
            g->edx = self + 0x14u;
            g->esp = sp0;
            t1 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, self + 0x14u, eax);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10350334u));
        t4 = g->edx;
        if (rd32(COW_IMG(0x105782d8u)) == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            ecx = rd32(COW_IMG(0x105782d8u));
            edx = t4;
            g->eax = rd32(ecx);
            g->edx = edx;
            t5 = rd32(ecx);
            g->esp = sp0;
            t6 = cow_thiscall(g, rd32(t5), ecx, 1, 1u);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        wr32(COW_IMG(0x105782d8u), 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101462b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101462b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
