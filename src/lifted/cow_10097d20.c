/* f_0x10097d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10097d20(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;

    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = in_eax;
        goto L_10097d47;
    }
    if ((uint8_t)rd32(COW_IMG(0x10485684u)) == 0u)
    {
        eax = (uint8_t)rd32(COW_IMG(0x10485684u));
        goto L_10097d44;
    }
    eax = (uint8_t)rd32(COW_IMG(0x10485684u));
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10097d41;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10097d47;
    }
    eax = eax - 1u;
    return (eax & 0xffffff00u) | 3u;
L_10097d41: ;
    return (eax & 0xffffff00u) | 2u;
L_10097d44: ;
    return (eax & 0xffffff00u) | 1u;
L_10097d47: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
