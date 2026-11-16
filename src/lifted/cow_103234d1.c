/* f_0x103234d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103234d1(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_divs(g, arg2, 0x20u);
    t2 = cow_mods(g, arg2, 0x20u);
    t3 = cow_divs(g, arg2, 0x20u);
    t4 = cow_mods(g, arg2, 0x20u);
    if ((rd32(arg1 + t1 * 4u) & ~(0xffffffffu << (0x1fu - t4 & 0x1fu))) != 0u) goto L_10323516;
    esi = t1;
    if ((int32_t)(esi + 1u) >= 3) goto L_10323511;
    esi = esi + 1u;
    eax = arg1 + esi * 4u;
L_10323503: ;
    if (rd32(eax) != 0u) goto L_10323516;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_10323503;
    }
L_10323511: ;
    return 1u;
L_10323516: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103234d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103234d1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
