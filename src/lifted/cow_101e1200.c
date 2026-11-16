/* f_0x101e1200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e1200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(arg1 + 6u) == 0u)
    {
        eax = in_eax;
        goto L_101e122c;
    }
    if (rd8(arg1 + 0xau) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0xau);
        goto L_101e122c;
    }
    eax = 2u;
    ecx = arg1 + 0xcu;
L_101e121a: ;
    if ((int16_t)rd16(ecx) < 0) goto L_101e122c;
    if ((int32_t)(eax + 1u) < 10)
    {
        eax = eax + 1u;
        ecx = ecx + 6u;
        goto L_101e121a;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | 1u;
L_101e122c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
