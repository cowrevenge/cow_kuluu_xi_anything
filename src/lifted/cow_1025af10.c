/* f_0x1025af10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025af10(Guest* g)
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
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

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
    if (!zf)
    {
        g->eax = 0u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            esi = 0u;
        }
        else
        {
            eax = t5;
            edx = t6;
            esi = t5;
            wr32(esi + 4u, 0u);
            wr32(esi + 8u, 1u);
            wr32(esi, COW_IMG(0x1033cee0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0xcu, 1, arg1);
            t8 = g->edx;
            wr32(esi, COW_IMG(0x1033cedcu));
            eax = t7;
            edx = t8;
        }
        if (rd32(self) == 2u)
        {
            wr32(self, 0u);
        }
    }
    else
    {
        g->eax = 0u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            wr32(8u, 8u);
            esi = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            esi = t1;
            wr32(esi + 4u, 0u);
            wr32(esi + 8u, 1u);
            wr32(esi, COW_IMG(0x1033cee0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0xcu, 1, 0u);
            t4 = g->edx;
            wr32(esi, COW_IMG(0x1033cedcu));
            wr32(esi + 8u, 8u);
            eax = t3;
            edx = t4;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1025a880u), self, 1, esi);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x1025aab0u), t10, 0);
    t12 = g->edx;
    g->edx = t12;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025af10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025af10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
