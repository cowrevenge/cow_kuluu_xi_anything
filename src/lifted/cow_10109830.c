/* f_0x10109830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        ecx = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        ecx = rd32(eax + 4u);
    }
    if (rd8(ecx) == 0u) goto L_10109865;
    edx = (in_edx & 0xffffff00u) | rd8(ecx);
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    esi = 0u;
L_1010984b: ;
    if ((uint8_t)edx == (uint8_t)eax) goto L_1010986d;
    if ((int8_t)edx < 0)
    {
        if (rd8(ecx + 1u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            ecx = ecx + 1u;
            esi = esi + 1u;
        }
    }
    if (rd8(ecx + 1u) != 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        esi = esi + 1u;
        goto L_1010984b;
    }
L_10109865: ;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
L_1010986d: ;
    return (eax & 0xffff0000u) | (uint16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109830(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
