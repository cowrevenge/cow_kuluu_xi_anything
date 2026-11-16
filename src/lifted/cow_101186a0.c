/* f_0x101186a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101186a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t t16;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if (t1 != self)
    {
        eax = t1;
        edx = t2;
        goto L_1011878f;
    }
    eax = t1;
    edx = t2;
    t3 = (eax & 0xffff0000u) | rd16(self + 0x4cu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_1011878f;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = t4;
    if (rd8(esi + 0x4au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
        goto L_1011878f;
    }
    t7 = rd32(esi + 0x4cu);
    if (rd32(esi + 0x4cu) != 0u)
    {
        eax = t7;
        edx = t7;
    }
    else
    {
        edx = t7;
        eax = rd32(esi + 0x40u);
    }
    if (eax == 0u) goto L_10118718;
    if (edx != 0u)
    {
        edi = edx;
    }
    else
    {
        edi = rd32(esi + 0x40u);
    }
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
        ecx = ~ecx - 1u;
        goto L_10118718;
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        goto L_10118738;
    }
    ecx = rd32(COW_IMG(0x105781f8u));
    if (edx == 0u)
    {
        edx = rd32(esi + 0x40u);
    }
    loc_18 = edx;
L_10118730: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, loc_18, 1u);
    t10 = g->ecx;
    wr8(self + 0x6du, 1u);
    ecx = t10;
L_10118738: ;
    if (rd32(esi + 0x44u) == 0u)
    {
        edx = rd32(esi + 0x44u);
        goto L_1011876f;
    }
    edx = rd32(esi + 0x44u);
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_1011876f;
    if (rd32(COW_IMG(0x1057847cu)) == 0u) goto L_1011878f;
    ecx = rd32(COW_IMG(0x1057847cu));
    if (rd32(esi + 0x50u) != 0u)
    {
        eax = rd32(esi + 0x50u);
    }
    else
    {
        eax = edx;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, eax, 1u);
    t12 = g->edx;
    wr8(self + 0x6cu, 1u);
    g->edx = t12;
    return t11;
L_10118718: ;
    if (rd32(COW_IMG(0x105781f8u)) == 0u) goto L_10118738;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x101185e0u), self, 0);
    t9 = g->edx;
    eax = t8;
    ecx = rd32(COW_IMG(0x105781f8u));
    edx = t9;
    loc_18 = t8;
    goto L_10118730;
L_1011876f: ;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t13 = cow_thiscall(g, COW_IMG(0x10118640u), self, 0);
        t14 = g->edx;
        g->edx = t14;
        g->esp = sp0 - 0x10u;
        t15 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t13, 1u);
        t16 = g->edx;
        wr8(self + 0x6cu, 1u);
        eax = t15;
        edx = t16;
    }
L_1011878f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101186a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101186a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
