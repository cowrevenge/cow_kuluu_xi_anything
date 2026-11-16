/* f_0x101f7fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101f7fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    ecx = self + 0x6d4u;
    esi = 2u;
L_101f7fef: ;
    edx = 0xau;
L_101f7ff4: ;
    eax = 0u;
L_101f7ff6: ;
    if (rd8(eax + ecx + 4u) == 0u) goto L_101f8002;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_101f7ff6;
    }
    eax = eax + 1u;
L_101f8002: ;
    if (eax == 0x10u)
    {
        wr8(ecx + 0x13u, 0u);
    }
    if (edx != 1u)
    {
        ecx = ecx + 0x16u;
        edx = edx - 1u;
        goto L_101f7ff4;
    }
    ecx = ecx + 0x16u;
    if (esi != 1u)
    {
        esi = esi - 1u;
        goto L_101f7fef;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
