/* f_0x102e23f6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102e23f6(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 < arg1 + rd32(self + 0x1058u) * 0x10u)
    {
        eax = arg1 + rd32(self + 0x1058u) * 0x10u;
        t1 = ((eax - arg1 - 1u) >> 4u) + 1u;
        eax = t1;
        edx = arg1 + 8u;
        esi = t1;
L_102e2416: ;
        d2 = (double)rdf32(edx - 8u);
        d3 = (double)rdf32(self + 0x1cu);
        if (d2 != d3)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
            d4 = (double)rdf32(edx - 4u);
            d5 = (double)rdf32(self + 0x20u);
            if (d4 != d5)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
                d6 = (double)rdf32(self + 0x24u);
                if ((double)rdf32(edx) != d6)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), d6, 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), d6, 0u);
                    d7 = (double)rdf32(edx + 4u);
                    d8 = (double)rdf32(self + 0x28u);
                    if (d7 != d8)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
                        wrf32(edx + 4u, (float)0.0);
                        wrf32(edx, (float)0.0);
                        wrf32(edx - 4u, (float)0.0);
                        wrf32(edx - 8u, (float)0.0);
                    }
                }
            }
        }
        if (esi != 1u)
        {
            edx = edx + 0x10u;
            esi = esi - 1u;
            goto L_102e2416;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e23f6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e23f6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
