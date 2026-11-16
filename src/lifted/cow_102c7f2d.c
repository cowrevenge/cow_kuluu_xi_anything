/* f_0x102c7f2d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c7f2d(Guest* g)
{
    double d1;
    double d4;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            d1 = rdf64(sp0 + 0xcu);
            if ((cow_fsw(g, d1, rdf64(COW_IMG(0x103433d8u)), 0u) >> 8u & 0x41u) != 0u)
            {
                eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x103433d8u)), 0u);
                ecx = self;
                edx = in_edx;
                x0 = rdf64(sp0 + 0xcu);
            }
            else
            {
                eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x103433d8u)), 0u);
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9690u));
                t3 = g->edx;
                eax = t2;
                ecx = COW_IMG(0x103c9690u);
                edx = t3;
                x0 = rdf64(COW_IMG(0x103433d8u));
            }
            wrf32(arg2 + 0x28u, (float)x0);
            g->ecx = ecx;
            g->edx = edx;
            d4 = fr(g, fr(g, rdf64(COW_IMG(0x10342dc0u)) * x0) + rdf64(COW_IMG(0x1032ab90u)));
            fpush(g, d4);
            g->esp = sp0 - 8u;
            t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t6 = g->ecx;
            t7 = g->edx;
            d8 = rdf64(COW_IMG(0x1032a108u));
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 1u);
            wr32(arg2 + 0xfcu, t5);
            if (x0 == d8)
            {
                eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d8, 0u);
                ecx = t6;
                edx = t7;
                g->esp = sp0 - 8u;
                cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9680u));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7f2d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c7f2d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
