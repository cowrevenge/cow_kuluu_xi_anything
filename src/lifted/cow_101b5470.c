/* f_0x101b5470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b5470(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_840;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    cow_frame(g, sp0, 2156u);

    wr32(sp0 - 0x844u, in_ebx);
    wr32(sp0 - 0x848u, in_ebp);
    wr32(sp0 - 0x84cu, in_esi);
    wr32(sp0 - 0x850u, in_edi);
    t1 = rd32(self + 0xf108u);
    wr8(self + 0xf11du, 0u);
    if (t1 != 1u)
    {
        eax = t1;
        goto L_101b54b8;
    }
    eax = t1;
    wr32(sp0 - 0x854u, COW_IMG(0x1037c7f8u));
    g->edx = in_edx;
    g->esp = sp0 - 0x854u;
    cow_stdcall(g, COW_IMG(0x101908d0u), 0);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        wr8(arg1, 0u);
    }
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = rd32(sp0 - 0x850u);
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = edx;
    return 0u;
L_101b54b8: ;
    if (arg1 != 0u) goto L_101b54d2;
    return 0u;
L_101b54d2: ;
    if (rd8(self + 0xef22u) != 1u) goto L_101b5508;
    eax = self + 0xec34u;
    ecx = self;
L_101b54e5: ;
    t3 = rd8(eax);
    wr8(arg1 + eax - self - 0xec34u, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_101b54e5;
    }
    ecx = (ecx & 0xffffff00u) | t3;
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
    t4 = ~ecx - 1u;
    g->edx = arg1 - (self + 0xec34u);
    return t4;
L_101b5508: ;
    if (rd8(self + 0xf0ecu) != 0u) goto L_101b5661;
    eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x850u;
    t5 = cow_thiscall(g, COW_IMG(0x101ac200u), self + 0x7e30u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 <= 1050)
    {
        eax = t5;
        edx = t7;
        ebx = t5;
        goto L_101b5559;
    }
    ecx = t6;
    eax = COW_IMG(0x1037c7f0u);
L_101b5536: ;
    t8 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037c7f0u), (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101b5536;
    }
    ecx = (ecx & 0xffffff00u) | t8;
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
    t9 = ~ecx - 1u;
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = rd32(sp0 - 0x850u);
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = arg1 - COW_IMG(0x1037c7f0u);
    return t9;
L_101b5559: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x850u;
    t10 = cow_thiscall(g, COW_IMG(0x101ac1b0u), self + 0x7e30u, 0);
    t11 = g->edx;
    if ((int32_t)ebx <= 0)
    {
        eax = t10;
        edx = t11;
        goto L_101b5582;
    }
    eax = t10;
    edx = t11;
    if (eax == 0u) goto L_101b5582;
    esi = eax;
    edi = sp0 - 0x838u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = ebx;
    esi = ebx;
L_101b5589: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x850u;
    t12 = cow_thiscall(g, COW_IMG(0x101ac560u), self + 0x7e30u, 0);
    t13 = g->edx;
    if ((int32_t)t12 > (int32_t)esi)
    {
        eax = t12;
        goto L_101b559c;
    }
    eax = t12;
    edx = t13;
    edi = t12;
    zf = t12 == esi;
    if (!zf) goto L_101b55ee;
L_101b559c: ;
    wr32(sp0 - 0x854u, 0x41au - esi);
    t20 = esi + sp0 - 0x838u;
    wr32(sp0 - 0x858u, t20);
    g->esp = sp0 - 0x850u;
    t21 = cow_call_regs(g, COW_IMG(0x101b72f0u), eax, self, g->edx, 0, 2, t20, 0x41au - esi);
    eax = t21;
    esi = esi + t21;
L_101b55b2: ;
    wr8(esi + sp0 - 0x838u, 0u);
L_101b55b7: ;
L_101b55be: ;
    wr32(sp0 - 0x854u, 1u);
    wr32(sp0 - 0x858u, 0u);
    wr32(sp0 - 0x85cu, esi);
    wr32(sp0 - 0x860u, sp0 - 0x838u);
    wr32(sp0 - 0x864u, arg2);
    wr32(sp0 - 0x868u, arg1);
    g->esp = sp0 - 0x850u;
    t23 = cow_call_regs(g, COW_IMG(0x101ac990u), eax, self + 0x7e30u, g->edx, 0, 6, arg1, arg2, sp0 - 0x838u, esi, 0u, 1u);
    if ((int32_t)t23 >= 0)
    {
        eax = t23;
        wr8(arg1 + eax, 0u);
    }
    else
    {
        wr8(arg1, 0u);
        eax = 0u;
    }
    esi = arg1;
    edi = self + 0xec34u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + self + 0xec34u, 0u);
    t24 = rd32(sp0 - 0x850u);
    wr8(self + 0xef22u, 1u);
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = t24;
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = eax;
    return eax;
L_101b5582: ;
    wr8(sp0 - 0x838u, 0u);
    esi = 0u;
    goto L_101b5589;
L_101b55ee: ;
    if ((int32_t)edi >= (int32_t)esi) goto L_101b55b7;
    if ((int32_t)edi < 0) goto L_101b55b7;
    wr32(sp0 - 0x854u, 0x41au - esi);
    wr32(sp0 - 0x858u, sp0 - 0x41cu);
    g->esp = sp0 - 0x850u;
    t14 = cow_call_regs(g, COW_IMG(0x101b72f0u), 0x41au - esi, self, g->edx, 0, 2, sp0 - 0x41cu, 0x41au - esi);
    t15 = g->ecx;
    if ((int32_t)t14 <= 0)
    {
        eax = t14;
        goto L_101b55b7;
    }
    ecx = t15;
    ebx = t14;
    wr32(sp0 - 0x840u, ebx + esi);
    if ((int32_t)(ebx + esi) >= 1050)
    {
        eax = ebx + esi;
        goto L_101b55b7;
    }
    loc_840 = ebx + esi;
    wr32(sp0 - 0x854u, esi - edi);
    t16 = edi + sp0 - 0x838u;
    wr32(sp0 - 0x83cu, t16);
    wr32(sp0 - 0x858u, t16);
    t17 = ebx + edi + sp0 - 0x838u;
    wr32(sp0 - 0x85cu, t17);
    g->eax = t17;
    g->esp = sp0 - 0x848u;
    t18 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t17, t16, esi - edi, rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu));
    t19 = rd32(sp0 - 0x83cu);
    esi = sp0 - 0x41cu;
    edi = t19;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = t18;
    esi = rd32(sp0 - 0x840u);
    goto L_101b55b2;
L_101b5661: ;
    wr32(sp0 - 0x854u, 0x41au);
    wr32(sp0 - 0x858u, sp0 - 0x838u);
    g->esp = sp0 - 0x850u;
    t22 = cow_call_regs(g, COW_IMG(0x101b7d00u), sp0 - 0x838u, self, g->edx, 0, 2, sp0 - 0x838u, 0x41au);
    if ((int32_t)t22 >= 0)
    {
        eax = t22;
        esi = t22;
    }
    else
    {
        eax = t22;
        wr8(sp0 - 0x838u, 0u);
        esi = 0u;
    }
    goto L_101b55be;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b5470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
