/* f_0x10109730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109730(Guest* g)
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
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        eax = rd32(eax + 4u);
    }
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_1010977f;
    }
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_1010977f;
    }
    if (rd8(eax) == 0u)
    {
        edx = in_edx;
        goto L_1010977f;
    }
    ecx = (self & 0xffffff00u) | rd8(eax);
    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_1010977f;
    }
    edx = in_edx;
    esi = arg1;
L_10109756: ;
    if (rd8(esi) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(esi);
        goto L_1010976f;
    }
    edx = (edx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx != (uint8_t)edx) goto L_1010976f;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        esi = esi + 1u;
        goto L_10109756;
    }
    eax = eax + 1u;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1010976f: ;
    if (rd8(eax) == 0u) goto L_10109779;
    if (rd8(esi) != 0u) goto L_1010977f;
L_10109779: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1010977f: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
