/* f_0x102308a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102308a0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(COW_IMG(0x104807ecu)) & 2u) == 0u)
    {
        eax = in_eax;
        goto L_102308da;
    }
    if ((uint16_t)arg1 < 0xe000u)
    {
        eax = arg1;
        goto L_102308da;
    }
    eax = COW_IMG(0x104804e0u);
L_102308c4: ;
    if ((uint16_t)(arg1 + 0x2000u) == (rd32(eax) & 0xfffu)) goto L_102308dd;
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x104805e0u))
    {
        eax = eax + 4u;
        goto L_102308c4;
    }
    eax = eax + 4u;
L_102308da: ;
    return eax & 0xffffff00u;
L_102308dd: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102308a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102308a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
