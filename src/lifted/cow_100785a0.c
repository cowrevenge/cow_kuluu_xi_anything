/* f_0x100785a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100785a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1060u);

    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    if ((int32_t)rd32(COW_IMG(0x1047d490u)) < 3)
    {
        edx = in_edx;
        goto L_1007869c;
    }
    loc_404 = ((rd32(sp0 - 0x404u) & 0xffffff00u) | 4u) & 0xff0000ffu;
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x410u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x3f4u;
    t3 = cow_call_regs(g, COW_IMG(0x10077c30u), t2, g->ecx, g->edx, 1, 7, t1, in_edi, in_esi, loc_404, rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u));
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        ecx = t4;
        goto L_100785fe;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x410u, 0x65u);
    wr32(sp0 - 0x414u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x418u, t6);
    g->edx = t8;
    g->esp = sp0 - 0x410u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t6, 9u);
    t9 = g->edx;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = t9;
    return -arg3;
L_100785fe: ;
    t10 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x410u, t10);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t11 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x40cu;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, t10);
    t13 = g->edx;
    if (t12 != 1u)
    {
        edx = t13;
        goto L_10078635;
    }
    edx = t13;
    wr32(sp0 - 0x410u, 0xb3u);
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xb3u);
    t14 = g->edx;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = t14;
    return arg3;
L_10078635: ;
    wr32(sp0 - 0x410u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x414u, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, 1u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t15 = rd32(COW_IMG(0x103551e0u));
    t16 = rd32(COW_IMG(0x103551e4u));
    g->esp = sp0 - 0x40cu;
    t17 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 1u, COW_IMG(0x10354de0u), t15, t16);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        ecx = t18;
        esi = t17;
        goto L_1007865f;
    }
    ecx = t18;
    edx = t19;
    edi = t16;
    if (rd32(edi + 8u) == 0u) goto L_1007869c;
    esi = rd32(edi + 8u);
L_1007865f: ;
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x3f8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), ecx, 7, sp0 - 0x400u, esi, rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t20 = g->ecx;
    t21 = g->edx;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x40cu < sp0 - 0x414u;
    pf = PARITY((uint8_t)(sp0 - 0x40cu));
    af = (sp0 - 0x414u ^ sp0 - 0x40cu) >> 4u & 1u;
    zf = sp0 == 0x40cu;
    sf = (int32_t)(sp0 - 0x40cu) < 0;
    of = ((sp0 - 0x414u ^ sp0 - 0x40cu) & (sp0 - 0x40cu ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t21;
        goto L_1007869c;
    }
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 3u);
    t22 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x41cu, t22);
    g->edx = t22;
    g->esp = sp0 - 0x408u;
    t23 = cow_call_regs(g, COW_IMG(0x100e3570u), sp0 - 0x400u, g->ecx, g->edx, 1, 5, t22, 3u, 0u, sp0 - 0x400u, rd32(sp0 - 0x40cu));
    t24 = g->edx;
    if ((uint8_t)t23 == 1u) goto L_100786ae;
    edx = t24;
L_1007869c: ;
    g->edx = edx;
    return -arg3;
L_100786ae: ;
    wr32(sp0 - 0x410u, esi);
    t25 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x414u, t25);
    wr32(sp0 - 0x418u, COW_IMG(0x10358038u));
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x408u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358038u), t25, esi, rd32(sp0 - 0x40cu));
    t26 = g->edx;
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, 1u);
    wr32(sp0 - 0x418u, 0u);
    wr32(sp0 - 0x41cu, sp0 - 0x404u);
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->edx = t26;
    g->esp = sp0 - 0x40cu;
    t27 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    t28 = g->edx;
    if (rd32(COW_IMG(0x1066268cu)) == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1066268cu));
        t29 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x410u, t29);
        t30 = rd32(COW_IMG(0x103551e0u));
        g->esp = sp0 - 0x40cu;
        t31 = cow_fastcall(g, COW_IMG(0x1018d6e0u), ecx, t30, 1, t29);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
        g->edx = edx;
        g->esp = sp0 - 0x40cu;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t33 = g->edx;
        edx = t33;
    }
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100785a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100785a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
