/* f_0x1008e8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1008e8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1008e8dd;
    return in_eax & 0xffffff00u;
L_1008e8dd: ;
    if (rd8(self + 0x1ffu) < 8u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_1008e8eb;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)eax <= 9u) goto L_1008e8ed;
L_1008e8eb: ;
    eax = eax & 0xffffff00u;
L_1008e8ed: ;
    if (rd8(arg1 + 0x1ffu) < 8u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 0x1ffu);
        goto L_1008e8fd;
    }
    ecx = (self & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)ecx <= 9u) goto L_1008e8ff;
L_1008e8fd: ;
    ecx = ecx & 0xffffff00u;
L_1008e8ff: ;
    if ((uint8_t)eax == 0u) goto L_1008e913;
    if ((uint8_t)ecx == 0u) goto L_1008e913;
    if ((uint8_t)eax == (uint8_t)ecx) goto L_1008e913;
    return 1u;
L_1008e913: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008e8d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
