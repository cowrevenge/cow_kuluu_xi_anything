/* f_0x102bba00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bba00(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_ac;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 192u);

    wr32(sp0 - 0xb0u, in_ebx);
    wr32(sp0 - 0xb4u, in_ebp);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, in_edi);
    wr32(sp0 - 0xacu, 8u);
    eax = sp0 - 0xa0u;
    ebp = rd32(COW_IMG(0x109f8258u));
    esi = sp0 - 0xa4u;
    loc_ac = 8u;
L_102bba2a: ;
    wr32(esi - 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    ecx = ebp;
    edx = arg2 + 8u;
    ebx = 8u;
L_102bba3d: ;
    d1 = fr(g, fr(g, (double)rdf32(edx - 8u) * (double)rdf32(ecx)) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d1);
    d2 = fr(g, fr(g, (double)rdf32(edx - 4u) * (double)rdf32(ecx)) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d2);
    d3 = fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx)) + (double)rdf32(eax));
    wrf32(eax, (float)d3);
    if (ebx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 0xcu;
        ebx = ebx - 1u;
        goto L_102bba3d;
    }
    wr32(sp0 - 0xacu, loc_ac - 1u);
    if (loc_ac != 1u)
    {
        eax = eax + 0xcu;
        ebp = ebp + 0x38u;
        esi = esi + 0xcu;
        loc_ac = loc_ac - 1u;
        goto L_102bba2a;
    }
    eax = sp0 - 0x40u;
    ecx = rd32(COW_IMG(0x109f8258u)) + 0x1c0u;
    ebp = 6u;
    esi = sp0 - 0x44u;
L_102bba94: ;
    wr32(esi - 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    edx = arg2 + 8u;
    ebx = 0xeu;
L_102bbaa5: ;
    d4 = fr(g, fr(g, (double)rdf32(edx - 8u) * (double)rdf32(ecx)) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d4);
    d5 = fr(g, fr(g, (double)rdf32(edx - 4u) * (double)rdf32(ecx)) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d5);
    d6 = fr(g, fr(g, (double)rdf32(edx) * (double)rdf32(ecx)) + (double)rdf32(eax));
    wrf32(eax, (float)d6);
    if (ebx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 0xcu;
        ebx = ebx - 1u;
        goto L_102bbaa5;
    }
    ecx = ecx + 4u;
    if (ebp != 1u)
    {
        eax = eax + 0xcu;
        ebp = ebp - 1u;
        esi = esi + 0xcu;
        goto L_102bba94;
    }
    esi = sp0 - 0xa8u;
    edi = arg2;
    ecx = 0x2au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bba00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bba00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
