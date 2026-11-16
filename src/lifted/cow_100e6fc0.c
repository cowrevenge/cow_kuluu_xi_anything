/* f_0x100e6fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e6fc0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = arg1 + 0xa0u;
    ecx = arg1;
    edx = in_edx;
    ebx = in_ebx;
    esi = arg2 + 0xa0u;
L_100e6fd6: ;
    if (rd8(eax) != rd8(esi))
    {
        cf = rd8(eax) < rd8(esi);
        goto L_100e6fff;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_100e6ffa;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100e6fff;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100e6fd6;
    }
L_100e6ffa: ;
    return 0u;
L_100e6fff: ;
    return -cf + 1u - cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e6fc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
