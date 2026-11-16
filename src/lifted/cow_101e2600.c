/* f_0x101e2600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e2600(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (((rd16(arg1 + 8u) ^ rd16(self + 8u)) & 0x7fffu) == 0u) goto L_101e2625;
    eax = arg1;
L_101e261d: ;
    return eax & 0xffffff00u;
L_101e2625: ;
    eax = self + 0xau;
    ecx = 0u;
    ebx = in_ebx;
L_101e262e: ;
    if (rd16(eax) != rd16(arg1 + eax - self)) goto L_101e261d;
    ebx = (ebx & 0xffff0000u) | rd16(eax);
    if ((int32_t)(ecx + 1u) < 8)
    {
        eax = eax + 2u;
        ecx = ecx + 1u;
        goto L_101e262e;
    }
    eax = eax + 2u;
    ecx = ecx + 1u;
    if ((int8_t)rd8(arg1 + 5u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 5u);
        goto L_101e264f;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 5u);
    return eax & 0xffffff00u;
L_101e264f: ;
    return (eax & 0xffffff00u) | (int8_t)rd8(self + 5u) > (int8_t)eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2600(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
