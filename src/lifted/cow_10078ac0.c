/* f_0x10078ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078ac0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1060u);

    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    wr32(sp0 - 0x410u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x414u, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, 0u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103551e0u));
    t2 = rd32(COW_IMG(0x103551e4u));
    t3 = rd32(sp0 - 0x404u);
    g->esp = sp0 - 0x40cu;
    t4 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t1, t2);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        esi = t4;
        goto L_10078b12;
    }
    edx = t5;
    edi = t2;
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        goto L_10078b12;
    }
    g->edx = edx;
    return -arg3;
L_10078b12: ;
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    g->edx = edx;
    g->esp = sp0 - 0x3f8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, esi, in_edi, in_esi, rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t6 = g->ecx;
    t7 = g->edx;
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
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_10078b42;
    }
    edx = t7;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return -arg3;
L_10078b42: ;
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 0x21u);
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t8 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, 0x21u, 0u, sp0 - 0x400u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 1u)
    {
        ecx = t9;
        edx = t10;
        goto L_10078b69;
    }
    edx = t10;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return -arg3;
L_10078b69: ;
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10078b84;
    }
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return -arg3;
L_10078b84: ;
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, eax + 0x3c3a4u);
    wr32(sp0 - 0x418u, COW_IMG(0x10358058u));
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->esp = sp0 - 0x408u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358058u), eax + 0x3c3a4u, esi, rd32(sp0 - 0x40cu));
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, 1u);
    wr32(sp0 - 0x418u, 0u);
    wr32(sp0 - 0x41cu, sp0 - 0x404u);
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t11 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    t12 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x40cu;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t13 = g->edx;
        edx = t13;
    }
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10078ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10078ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
