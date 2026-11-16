/* f_0x100283c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100283c0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, self + 0x30u);
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x50u, self + 0x30u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x30u, 0u);
    eax = sp0 - 0x40u;
    ebx = 4u;
    edi = self;
L_100283f2: ;
    ecx = edi;
    edx = 4u;
L_100283f9: ;
    wr32(eax, rd32(ecx));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_100283f9;
    }
    eax = eax + 4u;
    edx = edx - 1u;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_100283f2;
    }
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->eax = eax;
    g->esp = sp0 - 0x60u;
    t1 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x50u);
    d2 = (double)(float)-(double)rdf32(sp0 - 0x50u);
    wrf32(sp0 - 0x10u, (float)d2);
    d3 = (double)(float)-(double)rdf32(sp0 - 0x4cu);
    wrf32(sp0 - 0xcu, (float)d3);
    d4 = (double)(float)-(double)rdf32(sp0 - 0x48u);
    wrf32(sp0 - 8u, (float)d4);
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    wr32(sp0 - 4u, 0x3f800000u);
    t5 = cow_thiscall(g, COW_IMG(0x100279f0u), self, 1, sp0 - 0x40u);
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100283c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100283c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
