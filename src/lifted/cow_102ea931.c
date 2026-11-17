/* f_0x102ea931 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ea931(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_214;
    uint32_t loc_21c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 556u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_esi);
    wr32(sp0 - 0x210u, in_edi);
    wr32(sp0 - 0x214u, sp0 + 0xcu);
    wr32(sp0 - 0x218u, arg2);
    wr32(sp0 - 0x21cu, 0x100u);
    wr32(sp0 - 0x220u, sp0 - 0x204u);
    g->esp = sp0 - 0x208u;
    cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x204u, 0x100u, arg2, sp0 + 0xcu, in_edi, in_esi);
    wr8(sp0 - 0x105u, 0u);
    if (rd32(arg1 + 0x3d8u) == 0u) goto L_102ea9fb;
    wr32(sp0 - 0x214u, 0xdu);
    esi = sp0 - 0x204u;
    edi = COW_IMG(0x103465dcu);
    ecx = 0xdu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ea9f6;
    if (rd32(arg1 + 0x3dcu) != 0u)
    {
        eax = rd32(arg1 + 0x3dcu);
        if (rd32(arg1 + 0xa0u) == 0u) goto L_102ea9e7;
        wr32(sp0 - 0x214u, 4u);
        esi = arg1 + 0xc8u;
        edi = COW_IMG(0x103465a4u);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102ea9e7;
        t2 = rd32(arg1 + 0x1d0u);
        wr32(sp0 - 0x214u, t2);
        wr32(sp0 - 0x218u, arg1 + 0x1d4u);
        wr32(sp0 - 0x21cu, COW_IMG(0x10346564u));
        loc_214 = t2;
        loc_21c = COW_IMG(0x10346564u);
    }
    else
    {
        t1 = rd32(arg1 + 0x1d0u);
        wr32(sp0 - 0x214u, t1);
        wr32(sp0 - 0x218u, arg1 + 0x1d4u);
        wr32(sp0 - 0x21cu, COW_IMG(0x103465a8u));
        loc_214 = t1;
        loc_21c = COW_IMG(0x103465a8u);
    }
L_102ea9d1: ;
    wr32(sp0 - 0x220u, 0x100u);
    wr32(sp0 - 0x224u, sp0 - 0x104u);
    g->ebx = arg1;
    g->edx = 0u;
    g->esp = sp0 - 0x20cu;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x100u, loc_21c, arg1 + 0x1d4u, loc_214, in_edi);
    t3 = g->edx;
    edx = t3;
L_102eaa3c: ;
    wr8(sp0 - 5u, 0u);
    wr32(sp0 - 0x214u, sp0 - 0x104u);
    g->esp = sp0 - 0x210u;
    cow_thiscall(g, COW_IMG(0x102f5321u), arg1 + 0x84u, 1, sp0 - 0x104u);
    wr32(arg1 + 0xa4u, rd32(arg1 + 0xa4u) + 1u);
    t5 = rd32(sp0 - 0x20cu);
    t6 = rd32(sp0 - 0x210u);
    wr32(arg1 + 0x98u, 1u);
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = t5;
    g->edi = t6;
    g->ebp = rd32(sp0 - 4u);
    return;
L_102ea9e7: ;
    wr32(sp0 - 0x214u, eax);
    wr32(sp0 - 0x218u, arg1 + 0x1d4u);
    wr32(sp0 - 0x21cu, COW_IMG(0x10346534u));
    loc_214 = eax;
    loc_21c = COW_IMG(0x10346534u);
    goto L_102ea9d1;
L_102ea9f6: ;
L_102ea9fb: ;
    if (rd32(arg1 + 0x3e0u) == 0u)
    {
        eax = rd32(arg1 + 0x1d0u);
    }
    else
    {
        eax = rd32(arg1 + 0x3e4u);
    }
    if (eax == 0u)
    {
        eax = 1u;
    }
    wr32(sp0 - 0x214u, sp0 - 0x204u);
    wr32(sp0 - 0x218u, eax);
    wr32(sp0 - 0x21cu, arg1 + 0x1d4u);
    wr32(sp0 - 0x220u, COW_IMG(0x10346514u));
    wr32(sp0 - 0x224u, 0x100u);
    wr32(sp0 - 0x228u, sp0 - 0x104u);
    g->ebx = arg1;
    g->edx = 0u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x100u, COW_IMG(0x10346514u), arg1 + 0x1d4u, eax, sp0 - 0x204u);
    t4 = g->edx;
    edx = t4;
    goto L_102eaa3c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ea931(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ea931(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
