/* f_0x10092b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10092b20(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        if (rd8(self + 0xeeu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
            goto L_10092b52;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax == 1u) goto L_10092b52;
        if ((uint8_t)eax == 2u) goto L_10092b52;
        if ((uint8_t)eax == 6u) goto L_10092b52;
        if ((uint8_t)eax == 7u) goto L_10092b52;
        if ((uint8_t)eax != 8u) goto L_10092c12;
L_10092b52: ;
        t1 = rd32(self + 0xa0u) + 0x44u;
        g->eax = eax;
        t2 = rd32(self + 0xa0u);
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            esi = t2;
            edi = t1;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            esi = t2;
            edi = t1;
            d4 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d4);
        }
        if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d5 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d5);
        }
        d6 = (double)rdf32(esi + 0x48u);
        if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d7 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x48u, (float)d7);
        }
        d8 = (double)rdf32(esi + 0x48u);
        if (!(d8 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d9 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x48u, (float)d9);
        }
        d10 = (double)rdf32(esi + 0x4cu);
        if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d11 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x4cu, (float)d11);
        }
        d12 = (double)rdf32(esi + 0x4cu);
        if (d12 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d13 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x4cu, (float)d13);
        }
    }
L_10092c12: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10092b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
