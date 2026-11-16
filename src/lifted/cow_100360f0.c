/* f_0x100360f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100360f0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    double loc_4_f;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    d1 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103516fcu)) * (double)rdf32(COW_IMG(0x103516f8u))) * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        loc_4_f = d1;
        goto L_1003616b;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    loc_4_f = d1;
    d2 = (double)rdf32(sp0 + 4u);
    if (!(d2 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1003614a;
    }
    if (rd32(COW_IMG(0x1046393cu)) == 0u) goto L_10036164;
    ecx = rd32(COW_IMG(0x1046393cu));
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10246020u), 2, rd32(COW_IMG(0x10463920u)), rd32(COW_IMG(0x1046391cu)));
    wr8(COW_IMG(0x10463909u), 1u);
    return;
L_1003614a: ;
    g->ecx = self;
    g->edx = in_edx;
    fpush(g, loc_4_f);
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10038470u), 3, rd32(COW_IMG(0x10463920u)), t3, 0u);
L_10036164: ;
    wr8(COW_IMG(0x10463909u), 1u);
L_1003616b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100360f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100360f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
