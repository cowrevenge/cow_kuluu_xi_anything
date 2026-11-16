/* f_0x10259410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10259410(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = 0u;
    }
    else
    {
        edx = t2;
        edi = t1;
        wr32(edi + 4u, 0u);
        wr32(edi + 8u, 1u);
        wr32(edi, COW_IMG(0x1033ceacu));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1018d2d0u), edi + 0xcu, 1, arg1);
        wr32(edi, COW_IMG(0x1033cebcu));
        eax = edi;
    }
    esi = arg1;
    edi = COW_IMG(0x1034f2b8u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        wr32(eax + 8u, 7u);
    }
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10259120u), self, 1, eax);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x10259150u), t3, 0);
    t5 = g->edx;
    g->edx = t5;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10259410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
