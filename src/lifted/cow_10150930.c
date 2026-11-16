/* f_0x10150930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10150930(Guest* g)
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
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101509d0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x74u) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        edi = arg1;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->eax = eax;
        g->ecx = ~ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ~ecx, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(self + 0x74u, t3);
        ecx = t4;
        edx = t5;
    }
    if (rd32(self + 0x70u) != 0u)
    {
        eax = rd32(self + 0x70u);
    }
    else
    {
        edi = arg2;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ~ecx, in_edi, in_esi);
        wr32(self + 0x70u, t6);
        eax = t6;
    }
    ecx = arg1;
    edx = rd32(self + 0x74u);
L_10150984: ;
    t7 = rd8(ecx);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = (eax & 0xffffff00u) | t7;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10150984;
    }
    eax = (eax & 0xffffff00u) | t7;
    ecx = arg2;
    edx = rd32(self + 0x70u);
L_10150993: ;
    t8 = rd8(ecx);
    wr8(edx, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = (eax & 0xffffff00u) | t8;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10150993;
    }
    edx = edx + 1u;
    t9 = rd32(self + 0x70u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t9, 2u);
    t11 = g->edx;
    t12 = rd32(self + 0x74u);
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t12, 2u);
    t14 = g->edx;
    wr8(self + 0x6cu, 0u);
    g->edx = t14;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150930(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
