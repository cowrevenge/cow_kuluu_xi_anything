/* f_0x1010e070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010e070(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self;
    esi = 0u;
L_1010e07c: ;
    if (rd32(eax) > rd32(arg1 + eax - self)) goto L_1010e097;
    cf = rd32(eax) < rd32(arg1 + eax - self);
    if (cf) goto L_1010e090;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010e07c;
    }
    eax = eax + 4u;
L_1010e090: ;
    return eax & 0xffffff00u;
L_1010e097: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010e070(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
