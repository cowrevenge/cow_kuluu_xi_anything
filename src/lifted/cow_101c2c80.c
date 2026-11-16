/* f_0x101c2c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101c2c80(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_244;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 608u);

    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, in_ebp);
    if (rd8(self + 0xd0u) == 0u)
    {
        wr32(sp0 - 0x250u, self + 0x1f4u);
        wr32(sp0 - 0x254u, COW_IMG(0x1037cbb4u));
        wr32(sp0 - 0x258u, sp0 - 0x100u);
        g->ebx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x244u;
        t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbb4u), self + 0x1f4u, in_ebp, in_ebx);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        wr32(sp0 - 0x250u, self + 0x1f4u);
        wr32(sp0 - 0x254u, self + 0xd0u);
        wr32(sp0 - 0x258u, COW_IMG(0x1037cbbcu));
        wr32(sp0 - 0x25cu, sp0 - 0x100u);
        g->ebx = self;
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x248u;
        t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbbcu), self + 0xd0u, self + 0x1f4u, in_ebp);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->esp = sp0 - 0x24cu;
    cow_thiscall(g, COW_IMG(0x101c33e0u), self, 0);
    t5 = g->ecx;
    wr32(sp0 - 0x250u, sp0 - 0x240u);
    wr32(sp0 - 0x254u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x240u;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x10329128u)), t5, 2, sp0 - 0x100u, sp0 - 0x240u);
    t7 = g->edx;
    if (t6 != 0xffffffffu)
    {
        eax = t6;
        ebp = t6;
        goto L_101c2d08;
    }
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->esp = sp0 - 0x24cu;
    t8 = cow_thiscall(g, COW_IMG(0x101c33f0u), self, 0);
    g->ebx = rd32(sp0 - 0x248u);
    g->ebp = rd32(sp0 - 0x24cu);
    return (t8 & 0xffffff00u) | 1u;
L_101c2d08: ;
    wr32(sp0 - 0x250u, in_esi);
    wr32(sp0 - 0x254u, in_edi);
    wr32(sp0 - 0x244u, 0u);
L_101c2d12: ;
    esi = sp0 - 0x214u;
    edi = COW_IMG(0x10354054u);
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
        loc_244 = 0u;
    }
    else
    {
        esi = sp0 - 0x214u;
        edi = COW_IMG(0x1037cbc4u);
        ecx = 3u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (zf)
        {
            eax = 0u;
            loc_244 = 0u;
        }
        else
        {
            wr32(sp0 - 0x244u, 1u);
            eax = 0u;
            loc_244 = 1u;
        }
    }
    wr32(sp0 - 0x258u, sp0 - 0x240u);
    wr32(sp0 - 0x25cu, ebp);
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 0x254u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x10329120u)), sp0 - 0x240u, 2, ebp, sp0 - 0x240u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        goto L_101c2d12;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0x258u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x254u;
    t12 = cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, ebp);
    t13 = g->edx;
    cow_thiscall(g, COW_IMG(0x101c33f0u), self, 0);
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x250u);
    g->edi = rd32(sp0 - 0x254u);
    g->ebp = rd32(sp0 - 0x24cu);
    return (int32_t)rd32(sp0 - 0x244u) < 80;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
