/* f_0x1001e320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001e320(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10027620u), 2, arg1, self);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    if (d4 < (double)rdf32(COW_IMG(0x1032a378u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
    }
    else
    {
        ecx = t2;
        edx = t3;
        eax = self + 0x24u;
        ebx = 3u;
L_1001e349: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, eax, eax - 0xcu);
        t5 = g->ecx;
        t6 = g->edx;
        if (ebx != 1u)
        {
            eax = eax - 0xcu;
            ecx = t5;
            edx = t6;
            ebx = ebx - 1u;
            goto L_1001e349;
        }
        eax = eax - 0xcu;
        ecx = t5;
        edx = t6;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self, arg1);
        t8 = rd8(self + 0x34u);
        wr8(self + 0x34u, (uint8_t)(t8 + 1u));
        eax = (t7 & 0xffffff00u) | (uint8_t)(t8 + 1u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e320(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
