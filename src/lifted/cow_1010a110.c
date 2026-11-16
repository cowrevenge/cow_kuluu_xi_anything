/* f_0x1010a110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1010a110(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t t3;
    uint32_t t4;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(sp0 + 4u);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = arg2 + 2u;
        x0 = (double)rdf32(sp0 + 4u);
    }
    else
    {
        eax = arg2;
        edx = arg2 + 3u;
        x0 = -(double)rdf32(sp0 + 4u);
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cecu)), 2u) & 0x100u) != 0u)
    {
        x1 = (double)rdf32(COW_IMG(0x10329cecu));
        goto L_1010a166;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cecu)), 2u) & 0x100u;
    x1 = (double)rdf32(COW_IMG(0x10329cecu));
L_1010a152: ;
    d2 = fr(g, x1 * (double)rdf32(COW_IMG(0x10329cecu)));
    if ((cow_fsw(g, x0, d2, 2u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, x0, d2, 2u) & 0x100u;
        edx = edx + 1u;
        x1 = fr(g, x1 * (double)rdf32(COW_IMG(0x10329cecu)));
        goto L_1010a152;
    }
    edx = edx + 1u;
    x1 = fr(g, x1 * (double)rdf32(COW_IMG(0x10329cecu)));
L_1010a166: ;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x101091d0u), self, 1, edx);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a110(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
