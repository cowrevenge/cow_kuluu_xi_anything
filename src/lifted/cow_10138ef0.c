/* f_0x10138ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10138ef0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0x1cu) == rd32(rd32(self + 0x50u) + 8u))
    {
        eax = rd32(self + 0x50u);
        goto L_10138f00;
    }
    eax = rd32(self + 0x50u);
    return eax & 0xffffff00u;
L_10138f00: ;
    if (rd32(self + 0x20u) == rd32(eax + 0xcu))
    {
        edx = rd32(self + 0x20u);
        goto L_10138f0e;
    }
    return eax & 0xffffff00u;
L_10138f0e: ;
    ecx = self;
    ebx = in_ebx;
    esi = eax + 0x18u;
    eax = self + 0x2cu;
L_10138f15: ;
    if (rd8(eax) != rd8(esi))
    {
        cf = rd8(eax) < rd8(esi);
        goto L_10138f43;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_10138f39;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10138f43;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10138f15;
    }
L_10138f39: ;
    return 1u;
L_10138f43: ;
    return (-cf + 1u - cf & 0xffffff00u) | -cf + 1u == cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
