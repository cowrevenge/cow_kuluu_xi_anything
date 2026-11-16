/* f_0x101e25b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e25b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(self + 6u) == 0x73ffu) goto L_101e25c9;
    return arg1 & 0xffffff00u;
L_101e25c9: ;
    if (((rd16(arg1 + 8u) ^ rd16(self + 8u)) & 0x7fffu) == 0u) goto L_101e25df;
    eax = arg1;
L_101e25d9: ;
    return eax & 0xffffff00u;
L_101e25df: ;
    eax = self + 0xau;
    ecx = self + 4u;
    edx = 0u;
L_101e25e6: ;
    if (rd16(eax) != rd16(arg1 + eax - self)) goto L_101e25d9;
    ecx = (ecx & 0xffff0000u) | rd16(eax);
    if ((int32_t)(edx + 1u) < 8)
    {
        eax = eax + 2u;
        edx = edx + 1u;
        goto L_101e25e6;
    }
    eax = eax + 2u;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e25b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e25b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
