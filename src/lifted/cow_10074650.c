/* f_0x10074650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10074650(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 8u);
        eax = rd32(eax);
    }
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_1007468e;
    }
L_1007466a: ;
    if ((rd32(eax + 0x24u) & 0x7fu) != arg1) goto L_1007467d;
    if (arg2 == 0u)
    {
        edx = arg1;
        goto L_10074690;
    }
    if (rd32(eax + 0x20u) == arg2)
    {
        edx = arg1;
        goto L_10074690;
    }
L_1007467d: ;
    if (rd32(eax + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_1007466a;
    edx = arg1;
L_1007468e: ;
    eax = 0u;
L_10074690: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074650(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
