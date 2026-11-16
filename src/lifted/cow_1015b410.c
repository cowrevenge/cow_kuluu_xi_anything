/* f_0x1015b410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015b410(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_12c;
    uint32_t loc_134;
    uint32_t loc_138;
    uint32_t loc_140;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 332u);

    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_ebp);
    wr32(sp0 - 0x110u, self + 8u);
    wr32(sp0 - 0x120u, in_esi);
    wr32(sp0 - 0x124u, in_edi);
    wr32(sp0 - 0x108u, self);
    wr32(sp0 - 0x114u, self + 4u);
    wr32(sp0 - 0x104u, 0xfffffffcu - self);
    edx = in_edx;
    ebx = 4u;
    edi = self + 4u;
    loc_110 = self + 8u;
    loc_114 = self + 4u;
L_1015b43c: ;
    t1 = rd32(loc_110);
    wr8(edi, 0u);
    if (t1 == 0u) goto L_1015b566;
    esi = t1;
    if (rd8(esi) == 0u) goto L_1015b566;
    ebp = 0u;
L_1015b45e: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_1015b478;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_1015b4ae;
    if (eax == 3u) goto L_1015b4ae;
L_1015b478: ;
    if (eax != 0u) goto L_1015b4ae;
    wr32(sp0 - 0x128u, COW_IMG(0x1011d980u));
    wr32(sp0 - 0x12cu, COW_IMG(0x1011d9e0u));
    wr32(sp0 - 0x130u, 0x14u);
    wr32(sp0 - 0x134u, eax);
    t2 = (((int32_t)ebp >= 2) - 1u & 0xffffffceu) + 0x16eu;
    wr32(sp0 - 0x138u, t2);
    wr32(sp0 - 0x13cu, sp0 - 0x10cu);
    wr32(sp0 - 0x140u, esi);
    wr32(sp0 - 0x144u, 0xffu);
    wr32(sp0 - 0x148u, sp0 - 0x100u);
    ecx = sp0 - 0x100u;
    edx = t2;
    loc_12c = COW_IMG(0x1011d9e0u);
    loc_134 = eax;
    loc_138 = t2;
    loc_140 = esi;
L_1015b4d1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xf8u;
    t3 = cow_bridge_indirect(g, COW_IMG(0x1025b6e0u), 0u, 20u, (const uint32_t[]){sp0 - 0x100u, 0xffu, loc_140, sp0 - 0x10cu, loc_138, loc_134, 0x14u, loc_12c, COW_IMG(0x1011d980u), in_edi, in_esi, in_ebp, in_ebx, loc_114, loc_110, rd32(sp0 - 0x10cu), self, 0xfffffffcu - self, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu)}, g->ecx, g->edx, g->eax, 80u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd8(esi) == 0u)
    {
        edx = t5;
        goto L_1015b544;
    }
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x128u, 0xau);
    wr32(sp0 - 0x12cu, esi);
    t6 = rd8(edi);
    wr8(edi, (uint8_t)(t6 + 1u));
    g->esp = sp0 - 0x120u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), (ecx & 0xffffff00u) | (uint8_t)(t6 + 1u), 3, esi, 0xau, rd32(sp0 - 0x124u));
    t8 = g->ecx;
    if (t7 != 0u)
    {
        eax = t7;
        edx = ebp + ebx;
        goto L_1015b518;
    }
    eax = t7;
    ecx = t8;
    edx = ebp + ebx;
    edi = esi;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    t10 = rd32(sp0 - 0x108u);
    t11 = rd32(sp0 - 0x10cu);
    wr32(edx * 4u + t10, t9);
    if (t11 >= ~ecx - 1u)
    {
        edx = t11;
        goto L_1015b540;
    }
    eax = edx * 4u + t10;
    edx = t11;
    wr32(eax, edx);
    esi = edx + esi;
L_1015b536: ;
    if ((int32_t)(ebp + 1u) < 20)
    {
        ebp = ebp + 1u;
        goto L_1015b45a;
    }
L_1015b540: ;
    edi = rd32(sp0 - 0x114u);
L_1015b544: ;
    t14 = rd32(sp0 - 0x110u) + 4u;
    wr32(sp0 - 0x110u, t14);
    wr32(sp0 - 0x114u, edi + 1u);
    if ((int32_t)(edi + rd32(sp0 - 0x104u) + 1u) < 2)
    {
        ebx = ebx + 0x14u;
        loc_110 = t14;
        loc_114 = edi + 1u;
        edi = edi + 1u;
        goto L_1015b43c;
    }
L_1015b566: ;
    g->edx = edx;
    return;
L_1015b45a: ;
    edi = rd32(sp0 - 0x114u);
    goto L_1015b45e;
L_1015b4ae: ;
    wr32(sp0 - 0x128u, COW_IMG(0x1011d980u));
    wr32(sp0 - 0x12cu, COW_IMG(0x1011d970u));
    wr32(sp0 - 0x130u, 0x14u);
    wr32(sp0 - 0x134u, 0u);
    wr32(sp0 - 0x138u, 0x13cu);
    wr32(sp0 - 0x13cu, sp0 - 0x10cu);
    wr32(sp0 - 0x140u, esi);
    wr32(sp0 - 0x144u, 0xffu);
    wr32(sp0 - 0x148u, sp0 - 0x100u);
    edx = sp0 - 0x10cu;
    loc_12c = COW_IMG(0x1011d970u);
    loc_134 = 0u;
    loc_138 = 0x13cu;
    loc_140 = esi;
    goto L_1015b4d1;
L_1015b518: ;
    t12 = rd32(sp0 - 0x108u);
    t13 = rd32(sp0 - 0x10cu);
    wr32(edx * 4u + t12, eax - esi);
    if (t13 >= eax - esi)
    {
        edx = edx * 4u + t12;
        esi = eax + 1u;
    }
    else
    {
        edx = edx * 4u + t12;
        edi = t13;
        wr32(edx, edi);
        esi = edi + esi;
    }
    goto L_1015b536;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015b410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
