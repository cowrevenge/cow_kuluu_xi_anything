/* f_0x1006b940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1006b940(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_408;
    uint32_t loc_40c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1048u);

    wr32(sp0 - 0x404u, in_ebx);
    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40cu;
    t2 = cow_thiscall(g, COW_IMG(0x1006b850u), self, 1, sp0 - 0x400u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        loc_404 = in_ebx;
        loc_408 = in_esi;
        loc_40c = in_edi;
        goto L_1006b999;
    }
    eax = t2;
    edx = t3;
    edi = t1;
    edi = edi + sp0 - 0x400u;
    loc_404 = in_ebx;
    loc_408 = in_esi;
    loc_40c = in_edi;
L_1006b974: ;
    wr32(sp0 - 0x410u, arg1);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    wr8(edi, 0u);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x404u;
    t4 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, sp0 - 0x400u, edx, 1, 4, sp0 - 0x400u, arg1, loc_40c, loc_408);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        ecx = t5;
        goto L_1006b9a7;
    }
    eax = t4;
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    g->eax = eax;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t6 = cow_thiscall(g, COW_IMG(0x1006b850u), self, 1, sp0 - 0x400u);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        loc_404 = rd32(sp0 - 0x404u);
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        goto L_1006b974;
    }
    loc_404 = rd32(sp0 - 0x404u);
    loc_408 = rd32(sp0 - 0x408u);
    loc_40c = rd32(sp0 - 0x40cu);
L_1006b999: ;
    g->ebx = loc_404;
    g->esi = loc_408;
    g->edi = loc_40c;
    return 0u;
L_1006b9a7: ;
    if (arg2 == 0u) goto L_1006b9cd;
    edx = rd32(self + 4u);
    esi = arg2;
L_1006b9b7: ;
    t8 = rd8(edx);
    wr8(esi, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        ecx = (ecx & 0xffffff00u) | t8;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_1006b9b7;
    }
    g->ebx = rd32(sp0 - 0x404u);
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    return arg2;
L_1006b9cd: ;
    g->ebx = rd32(sp0 - 0x404u);
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    return rd32(self + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b940(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
