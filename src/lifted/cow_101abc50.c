/* f_0x101abc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101abc50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 500u);

    wr32(sp0 - 0x1ccu, in_ebx);
    wr32(sp0 - 0x1d0u, in_ebp);
    wr32(sp0 - 0x1d4u, in_esi);
    wr32(sp0 - 0x1d8u, in_edi);
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_101abe29;
    }
    if ((int32_t)arg2 <= 0)
    {
        eax = arg2;
        goto L_101abe29;
    }
    if ((int32_t)arg2 > 450)
    {
        eax = arg2;
        goto L_101abe29;
    }
    wr32(sp0 - 0x1c8u, 0u);
    if ((int32_t)arg2 <= 0)
    {
        ecx = self;
        ebx = 0u;
        goto L_101abcfe;
    }
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    edi = 0u;
    loc_1c8 = 0u;
L_101abc8e: ;
    if (rd8(arg1 + edi) == 0u) goto L_101abcfe;
    eax = (arg1 & 0xffffff00u) | rd8(arg1 + edi);
    esi = arg1 + edi;
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    t1 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, eax, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(esi) != 0x81u)
    {
        eax = t1;
        ecx = (t2 & 0xffffff00u) | rd8(esi);
        edx = t3;
        goto L_101abcc7;
    }
    eax = t1;
    edx = t3;
    if (rd8(arg1 + edi + 1u) != 0x40u)
    {
        ecx = arg1;
        goto L_101abcc7;
    }
    wr8(ebx + sp0 - 0x1c4u, 0x20u);
    ecx = arg1;
    ebx = ebx + 1u;
L_101abce5: ;
    if ((int32_t)ebx >= 450) goto L_101abcfe;
    wr32(sp0 - 0x1c8u, eax + edi);
    if ((int32_t)(eax + edi) < (int32_t)arg2)
    {
        loc_1c8 = eax + edi;
        edi = eax + edi;
        goto L_101abc8e;
    }
L_101abcfe: ;
    wr8(ebx + sp0 - 0x1c4u, 0u);
    edi = sp0 - 0x1c4u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx - 1u;
    if ((int32_t)(t4 + rd32(self + 0xa50u)) > (int32_t)rd32(self + 0xa54u))
    {
        eax = t4 + rd32(self + 0xa50u);
        goto L_101abe29;
    }
    ecx = rd32(self + 0xa54u);
    ebx = t4;
    if ((int32_t)(ebx + rd32(self + 0x888u)) > (int32_t)ecx)
    {
        eax = rd32(self + 0x888u);
        goto L_101abe29;
    }
    eax = rd32(self + 0x888u);
    if (rd32(self + 0xa58u) != eax)
    {
        ecx = rd32(self + 0xa58u);
        wr32(sp0 - 0x1dcu, eax - ecx);
        t7 = ecx + self + 0x6c4u;
        wr32(sp0 - 0x1e0u, t7);
        t8 = ebx + ecx + self + 0x6c4u;
        wr32(sp0 - 0x1e4u, t8);
        g->esp = sp0 - 0x1d0u;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, t8, t7, eax - ecx, in_edi, in_esi);
        t9 = rd32(self + 0xa58u);
        esi = sp0 - 0x1c4u;
        edi = self + t9 + 0x6c4u;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t10 = ebx + rd32(self + 0x888u);
        t11 = rd32(self + 0xa58u);
        wr32(self + 0x888u, t10);
        ecx = ebx + t11;
    }
    else
    {
        esi = sp0 - 0x1c4u;
        edi = eax + self + 0x6c4u;
        ecx = (ebx + 1u) >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx + 1u & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t5 = ebx + rd32(self + 0x888u);
        t6 = rd32(self + 0xa58u);
        wr32(self + 0x888u, t5);
        ecx = ebx + t6;
    }
    t12 = rd32(self + 0x888u);
    wr32(self + 0xa58u, ecx);
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr8(self + t12 + 0x6c4u, 0u);
    t13 = rd32(self + 0x888u);
    wr32(sp0 - 0x1e4u, t13);
    wr32(sp0 - 0x1e8u, self + 0x6c4u);
    t14 = rd32(self + 0xa54u) + 1u;
    wr32(sp0 - 0x1ecu, t14);
    wr32(sp0 - 0x1f0u, self + 0x88cu);
    g->esp = sp0 - 0x1d8u;
    t15 = cow_call_regs(g, COW_IMG(0x101ac990u), t14, self, g->edx, 0, 6, self + 0x88cu, t14, self + 0x6c4u, t13, 0u, 0u);
    wr32(self + 0xa50u, t15);
    wr8(self + 0xc24u, 1u);
    wr8(self + 0xc78u, 1u);
    return (t15 & 0xffffff00u) | 1u;
L_101abcc7: ;
    if ((int32_t)eax > 0)
    {
        edi = ebx + sp0 - 0x1c4u;
        ecx = eax >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = eax & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = eax;
        ebx = eax + ebx;
        edi = rd32(sp0 - 0x1c8u);
    }
    goto L_101abce5;
L_101abe29: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101abc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101abc50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
