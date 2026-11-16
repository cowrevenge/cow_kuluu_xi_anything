/* f_0x101ae720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ae720(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1037ade8u)) == 0u)
    {
        eax = in_eax;
        goto L_101ae774;
    }
    esi = rd32(COW_IMG(0x1037ade8u));
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    edi = COW_IMG(0x1037ade8u);
L_101ae737: ;
    eax = arg1;
L_101ae739: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(esi);
        cf = rd8(eax) < rd8(esi);
        goto L_101ae761;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_101ae75d;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101ae761;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_101ae739;
    }
L_101ae75d: ;
    eax = 0u;
L_101ae766: ;
    if (eax == 0u) goto L_101ae77b;
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        edi = edi + 4u;
        goto L_101ae737;
    }
L_101ae774: ;
    return eax & 0xffffff00u;
L_101ae761: ;
    eax = -cf + 1u - cf;
    goto L_101ae766;
L_101ae77b: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ae720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
