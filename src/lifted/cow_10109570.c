/* f_0x10109570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        eax = rd32(eax + 4u);
    }
    if (eax != 0u) goto L_10109590;
    return (eax & 0xffffff00u) | arg1 != 0u;
L_10109590: ;
    if (arg1 != 0u) goto L_1010959b;
    return 0xffffffffu;
L_1010959b: ;
    if (rd8(eax) != rd8(arg1))
    {
        edx = arg1;
        ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
        goto L_101095b3;
    }
    ecx = (self & 0xffffff00u) | rd8(eax);
    edx = arg1;
    ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
L_101095a3: ;
    if ((uint8_t)ecx == 0u) goto L_101095c3;
    if (rd8(eax + 1u) == rd8(edx + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_101095a3;
    }
    eax = eax + 1u;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
    edx = edx + 1u;
L_101095b3: ;
    return (-(rd8(edx) < rd8(eax)) & 2u) - 1u;
L_101095c3: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109570(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
