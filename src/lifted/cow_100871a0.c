/* f_0x100871a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100871a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_100871f5;
    if (arg1 == 1u) goto L_100871d3;
    if (arg1 != 2u)
    {
        eax = in_eax & 0xffffff00u;
        goto L_10087216;
    }
    if ((rd8(COW_IMG(0x104807ecu)) & 4u) != 0u) goto L_100871bd;
    return in_eax & 0xffffff00u;
L_100871bd: ;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fd650u), 1, 2u);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10087216;
    }
    eax = t1;
    wr32(COW_IMG(0x104807ecu), rd32(COW_IMG(0x104807ecu)) & 0xfffffffbu);
    return eax;
L_100871d3: ;
    if ((rd8(COW_IMG(0x104807ecu)) & 2u) != 0u) goto L_100871df;
    return in_eax & 0xffffff00u;
L_100871df: ;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x100fd650u), 1, 1u);
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10087216;
    }
    eax = t2;
    wr32(COW_IMG(0x104807ecu), rd32(COW_IMG(0x104807ecu)) & 0xfffffffdu);
    return eax;
L_100871f5: ;
    if (rd8(COW_IMG(0x104807ecu)) & 1u) goto L_10087201;
    return in_eax & 0xffffff00u;
L_10087201: ;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100fd650u), 1, 0u);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
    }
    else
    {
        eax = t3;
        wr32(COW_IMG(0x104807ecu), rd32(COW_IMG(0x104807ecu)) & 0xfffffffeu);
    }
L_10087216: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100871a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100871a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
