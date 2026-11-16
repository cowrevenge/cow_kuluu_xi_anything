/* f_0x10027e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10027e90(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t esi;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    eax = self + 0x20u;
    esi = 0u;
L_10027eab: ;
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(eax - 0x10u))) + fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(eax + 0x10u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(eax - 0x20u)));
    wrf32(esi * 4u + sp0 - 0x40u, (float)d1);
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x10u) * (double)rdf32(eax - 0x20u)) + fr(g, (double)rdf32(eax) * (double)rdf32(arg1 + 0x18u))) + fr(g, (double)rdf32(eax + 0x10u) * (double)rdf32(arg1 + 0x1cu))) + fr(g, (double)rdf32(eax - 0x10u) * (double)rdf32(arg1 + 0x14u)));
    wrf32(esi * 4u + sp0 - 0x30u, (float)d2);
    d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(eax + 0x10u)) + fr(g, (double)rdf32(eax) * (double)rdf32(arg1 + 0x28u))) + fr(g, (double)rdf32(arg1 + 0x24u) * (double)rdf32(eax - 0x10u))) + fr(g, (double)rdf32(arg1 + 0x20u) * (double)rdf32(eax - 0x20u)));
    wrf32(eax + sp0 - self - 0x40u, (float)d3);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x3cu) * (double)rdf32(eax + 0x10u)) + fr(g, (double)rdf32(arg1 + 0x34u) * (double)rdf32(eax - 0x10u))) + fr(g, (double)rdf32(eax) * (double)rdf32(arg1 + 0x38u))) + fr(g, (double)rdf32(arg1 + 0x30u) * (double)rdf32(eax - 0x20u)));
    wrf32(eax + sp0 - self - 0x30u, (float)d4);
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_10027eab;
    }
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    g->edx = arg1;
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x100279f0u), self, 1, sp0 - 0x40u);
    t5 = g->edx;
    g->edx = t5;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10027e90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
