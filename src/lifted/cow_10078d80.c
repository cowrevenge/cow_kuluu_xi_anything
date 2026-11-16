/* f_0x10078d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078d80(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_40c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1076u);

    wr32(sp0 - 0x410u, in_esi);
    wr32(sp0 - 0x414u, in_edi);
    wr32(sp0 - 0x418u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x41cu, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x420u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x424u, 0u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103551e0u));
    t2 = rd32(COW_IMG(0x103551e4u));
    t3 = rd32(sp0 - 0x408u);
    g->esp = sp0 - 0x414u;
    t4 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t1, t2);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        esi = t4;
        goto L_10078dd2;
    }
    edx = t5;
    edi = t2;
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        goto L_10078dd2;
    }
    g->edx = edx;
    return -arg3;
L_10078dd2: ;
    wr32(sp0 - 0x418u, esi);
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->edx = edx;
    g->esp = sp0 - 0x400u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, esi, in_edi, in_esi, rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u));
    t6 = g->ecx;
    t7 = g->edx;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x414u < sp0 - 0x41cu;
    pf = PARITY((uint8_t)(sp0 - 0x414u));
    af = (sp0 - 0x41cu ^ sp0 - 0x414u) >> 4u & 1u;
    zf = sp0 == 0x414u;
    sf = (int32_t)(sp0 - 0x414u) < 0;
    of = ((sp0 - 0x41cu ^ sp0 - 0x414u) & (sp0 - 0x414u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_10078e02;
    }
    edx = t7;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e02: ;
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    wr32(sp0 - 0x41cu, 0u);
    wr32(sp0 - 0x420u, 0x23u);
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x414u;
    t8 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, 0x23u, 0u, sp0 - 0x400u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 1u)
    {
        ecx = t9;
        edx = t10;
        goto L_10078e29;
    }
    edx = t10;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e29: ;
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10078e44;
    }
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e44: ;
    wr32(sp0 - 0x418u, in_ebx);
    if (rd8(eax + 0x40debu) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x40decu);
        ebx = (in_ebx & 0xffffff00u) | rd8(eax + 0x40debu);
        goto L_10078ebe;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x40decu);
    ebx = (in_ebx & 0xffffff00u) | rd8(eax + 0x40debu);
    loc_40c = (rd32(sp0 - 0x40cu) & 0xffffffu) | rd8(eax + 0x40decu) << 0x18u;
    if ((uint8_t)ecx == 0u) goto L_10078ebe;
    wr32(sp0 - 0x41cu, 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x418u;
    t11 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t12 = g->ecx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        goto L_10078eb9;
    }
    eax = t11;
    ecx = t12;
    eax = (eax & 0xffffff00u) | (uint8_t)ebx;
    ecx = (ecx & 0xffffff00u) | 0xau;
    cf = 0u;
    of = 0u;
    { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    if ((uint8_t)((uint8_t)((uint8_t)eax + rd8(sp0 - 0x409u)) + 0x24u) < 0x2fu)
    {
        loc_404 = (rd32(sp0 - 0x404u) & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)eax + rd8(sp0 - 0x409u)) + 0x24u);
        goto L_10078e83;
    }
    loc_404 = (rd32(sp0 - 0x404u) & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)eax + rd8(sp0 - 0x409u)) + 0x24u);
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)eax + rd8(sp0 - 0x409u)) + 0x24u);
    if ((uint8_t)eax < 0x4du) goto L_10078e88;
L_10078e83: ;
    loc_404 = (loc_404 & 0xffffff00u) | 0x2fu;
L_10078e88: ;
    wr32(sp0 - 0x41cu, esi);
    t13 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    wr32(sp0 - 0x420u, t13);
    wr32(sp0 - 0x424u, (uint8_t)loc_404);
    wr32(sp0 - 0x428u, 0xefu);
    wr32(sp0 - 0x42cu, COW_IMG(0x10358088u));
    wr32(sp0 - 0x430u, sp0 - 0x400u);
    g->ebx = ebx;
    g->edx = t13;
    g->esp = sp0 - 0x41cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358088u), 0xefu, (uint8_t)loc_404, t13);
    t14 = g->edx;
    edx = t14;
L_10078ed7: ;
    wr32(sp0 - 0x41cu, 0u);
    wr32(sp0 - 0x420u, 1u);
    wr32(sp0 - 0x424u, 0u);
    wr32(sp0 - 0x428u, sp0 - 0x408u);
    wr32(sp0 - 0x42cu, sp0 - 0x400u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x418u;
    t16 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x408u, 0u, 1u, 0u);
    t17 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t17;
        ebx = rd32(sp0 - 0x418u);
    }
    else
    {
        eax = t16;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t17;
        ebx = rd32(sp0 - 0x418u);
        g->edx = edx;
        g->esp = sp0 - 0x414u;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t18 = g->edx;
        edx = t18;
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return arg3;
L_10078eb9: ;
    eax = rd32(COW_IMG(0x104dfd98u));
L_10078ebe: ;
    wr32(sp0 - 0x41cu, esi);
    wr32(sp0 - 0x420u, eax + 0x3c3a4u);
    wr32(sp0 - 0x424u, COW_IMG(0x1035807cu));
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    g->ebx = ebx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x414u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x1035807cu), eax + 0x3c3a4u, esi, in_ebx);
    t15 = g->edx;
    edx = t15;
    goto L_10078ed7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10078d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10078d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
