/* f_0x10082ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10082ec0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047d578u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x1047d578u));
        eax = in_eax;
        edx = in_edx;
L_10082ece: ;
        if (rd16(esi + 0xb2u) == 0u)
        {
            d1 = (double)rdf32(esi + 0x8cu);
            if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                t5 = rd8(esi + 0xb2u);
                wr8(esi + 0xb0u, 1u);
                wr8(esi + 0xb2u, (uint8_t)(t5 | 1u));
                eax = ((eax | t5) & 0xffffff00u) | (uint8_t)(t5 | 1u);
            }
            else
            {
                g->eax = rd32(esi);
                g->edx = edx;
                t2 = rd32(esi);
                g->esp = sp0 - 8u;
                t3 = cow_thiscall(g, rd32(t2 + 0x2fcu), esi, 0);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
        }
        if (rd32(esi + 0x54u) != 0u)
        {
            esi = rd32(esi + 0x54u);
            goto L_10082ece;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10082ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
