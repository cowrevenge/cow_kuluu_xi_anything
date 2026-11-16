/* f_0x101908b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101908b0(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(arg1);
        goto L_101908cd;
    }
    eax = (arg1 & 0xffffff00u) | rd8(arg1);
L_101908ba: ;
    if ((uint8_t)eax < 0x80u) goto L_101908c2;
    if ((uint8_t)eax <= 0x9fu) goto L_101908ca;
L_101908c2: ;
    if ((uint8_t)eax < 0xe0u) goto L_101908ba;
    if ((uint8_t)eax > 0xffu) goto L_101908ba;
L_101908ca: ;
    return (eax & 0xffffff00u) | 1u;
L_101908cd: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101908b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101908b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
