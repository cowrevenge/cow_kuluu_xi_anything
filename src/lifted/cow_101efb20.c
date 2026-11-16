/* f_0x101efb20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101efb20(Guest* g)
{
    double d10;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int16_t)rd16(self + 0x7au) <= 0)
    {
        loc_4 = self;
        goto L_101efbee;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x7au);
    ebx = rd32(self + 0x94u);
    ebp = 0u;
    loc_4 = self;
L_101efb3b: ;
    t1 = (eax & 0xffff0000u) | rd16(ebx);
    if ((t1 & 0x800u) != 0u) goto L_101efbde;
    eax = t1;
    ecx = t1 & 0x800u;
    if (eax & 1u) goto L_101efb5b;
    if ((eax & 0x20u) != 0u) goto L_101efbde;
L_101efb5b: ;
    t2 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    t3 = (uint32_t)(int16_t)rd16(self + 0x6cu);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t2 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)t3);
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
    fpush(g, d4);
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t7 = (uint32_t)(int16_t)rd16(self + 0x1eu);
    t8 = (uint32_t)(int16_t)rd16(self + 0x6eu);
    t9 = rd16(ebx + 6u);
    d10 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t7 * d5) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)t8);
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    if ((int32_t)((uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t6) >= 0)
    {
        eax = (uint32_t)(int16_t)rd16(ebx + 8u) - (uint32_t)(int16_t)t11;
        edi = (uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t6;
        loc_4 = t8;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(ebx + 8u) - (uint32_t)(int16_t)t11;
        edi = (uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t6;
        loc_4 = t8;
        edi = -edi;
    }
    if ((int32_t)eax < 0)
    {
        eax = -eax;
    }
    if ((int32_t)edi >= 5) goto L_101efbde;
    if ((int32_t)eax < 5) goto L_101efbf6;
L_101efbde: ;
    if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 0x7au))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x7au);
        ebx = ebx + 0x20u;
        ebp = ebp + 1u;
        goto L_101efb3b;
    }
L_101efbee: ;
    return 0u;
L_101efbf6: ;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101efb20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101efb20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
