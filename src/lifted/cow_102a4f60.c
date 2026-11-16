/* f_0x102a4f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
void cow_fn_102a4f60(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(arg1 + 0x14u) != 5u) goto L_102a4f79;
    fpush(g, (double)rdf32(arg1 + 4u));
    return;
L_102a4f79: ;
    d1 = (double)rdf32(arg1 + 4u);
    wrf64(sp1 - 0x50u, d1);
    d2 = (double)rdf32(arg2 + 4u);
    wrf64(sp1 - 0x48u, d2);
    d3 = (double)rdf32(arg1 + 0x2cu);
    wrf64(sp1 - 0x58u, d3);
    wr32(sp1 - 0x5cu, sp1 - 0x38u);
    d4 = (double)rdf32(arg2 + 0x24u);
    wrf64(sp1 - 0x40u, d4);
    wr32(sp1 - 0x60u, sp1 - 0x20u);
    d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1) + (double)rdf32(arg1)) + (double)rdf32(arg1 + 0x28u)) - fr(g, (double)rdf32(arg2) + (double)rdf32(arg2))) + (double)rdf32(arg2 + 0x20u));
    wrf64(sp1 - 8u, d5);
    d6 = (double)rdf32(arg1 + 0x28u);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * rdf64(COW_IMG(0x10340b30u))) - fr(g, fr(g, d6 + d6) + fr(g, (double)rdf32(arg1) * rdf64(COW_IMG(0x10340b30u))))) - (double)rdf32(arg2 + 0x20u));
    wrf64(sp1 - 0x10u, d7);
    wrf64(sp1 - 0x18u, d6);
    d8 = fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 + 0xcu));
    wrf64(sp1 - 0x20u, d8);
    g->esp = sp1 - 0x58u;
    t9 = cow_call_regs(g, COW_IMG(0x102a5a90u), sp1 - 0x38u, g->ecx, g->edx, 1, 2, sp1 - 0x20u, sp1 - 0x38u);
    if ((int32_t)t9 <= 0)
    {
        ecx = 0u;
        goto L_102a5026;
    }
    eax = t9;
    ecx = 0u;
    edx = t9;
L_102a4ffd: ;
    d10 = rdf64(ecx * 8u + sp1 - 0x38u);
    if ((cow_fsw(g, d10, rdf64(COW_IMG(0x10340bb0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d10, rdf64(COW_IMG(0x10340bb0u)), 0u) & 0x100u;
        goto L_102a5021;
    }
    eax = cow_fsw(g, d10, rdf64(COW_IMG(0x10340bb0u)), 0u) & 0x100u;
    d11 = rdf64(ecx * 8u + sp1 - 0x38u);
    if (d11 <= rdf64(COW_IMG(0x10340ba8u))) goto L_102a5026;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, rdf64(COW_IMG(0x10340ba8u)), 0u);
L_102a5021: ;
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        ecx = ecx + 1u;
        goto L_102a4ffd;
    }
    ecx = ecx + 1u;
L_102a5026: ;
    d12 = rdf64(sp1 - 0x58u);
    d13 = rdf64(sp1 - 0x50u);
    d14 = rdf64(sp1 - 0x48u);
    d15 = fr(g, fr(g, fr(g, fr(g, rdf64(sp1 - 0x48u) * rdf64(COW_IMG(0x10340b30u))) - fr(g, fr(g, d12 + d12) + fr(g, rdf64(sp1 - 0x50u) * rdf64(COW_IMG(0x10340b30u))))) - rdf64(sp1 - 0x40u)) + fr(g, fr(g, fr(g, fr(g, fr(g, d13 + d13) + rdf64(sp1 - 0x58u)) - fr(g, d14 + d14)) + rdf64(sp1 - 0x40u)) * rdf64(ecx * 8u + sp1 - 0x38u)));
    g->ebp = rd32(sp0 - 4u);
    fpush(g, fr(g, fr(g, rdf64(ecx * 8u + sp1 - 0x38u) * fr(g, fr(g, d15 * rdf64(ecx * 8u + sp1 - 0x38u)) + rdf64(sp1 - 0x58u))) + rdf64(sp1 - 0x50u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a4f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
