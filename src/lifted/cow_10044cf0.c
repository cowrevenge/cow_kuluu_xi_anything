/* f_0x10044cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10044cf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x187u) == 0u) goto L_10044cfd;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x187u);
    return (eax & 0xffffff00u) | 1u;
L_10044cfd: ;
    if (rd32(self + 0x108u) == 0u) goto L_10044d0a;
    eax = rd32(self + 0x108u);
    return eax & 0xffffff00u;
L_10044d0a: ;
    if (rd32(self + 0xfcu) == 0u) goto L_10044d24;
    ecx = rd32(self + 0xfcu);
    g->edx = rd32(rd32(ecx) + 0xa4u);
    return rd32(rd32(ecx) + 0xa4u) != 0u;
L_10044d24: ;
    g->edx = rd32(0xa4u);
    return rd32(0xa4u) != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044cf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
