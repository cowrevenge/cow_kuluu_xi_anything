/* f_0x102063d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102063d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 == 5u) goto L_102063df;
    wr8(self + 0x24u, 0u);
    return in_eax;
L_102063df: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_102063ee;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_102063f8;
    }
    eax = (uint32_t)(int16_t)arg2 - 2u;
    loc_4 = 0u;
L_102063f0: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100e9490u), 1, loc_4);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_102063f8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_stdcall(g, COW_IMG(0x102031e0u), 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103853ecu));
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_102063ee: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    loc_4 = 1u;
    goto L_102063f0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102063d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102063d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
