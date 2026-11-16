/* f_0x1025e190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1025e190(Guest* g)
{
    double d11;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10123ee0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_1025e1f0;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 2, 0x3fu, 6u);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    if (d7 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1025e1f0;
    }
    eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 2, 0x3fu, 7u);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    if (d11 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1025e1f0;
    }
    eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t9;
    edx = t10;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0xaau, 4u, 0xffffffffu);
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        goto L_1025e1e9;
    }
    eax = t12;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return eax;
L_1025e1e9: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1025e1f0: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
