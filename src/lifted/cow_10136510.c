/* f_0x10136510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10136510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(rd32(self + 8u) + 0x6au) == 0u) goto L_10136553;
    ecx = rd32(self + 8u);
    if (rd8(self + 0x48u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x48u);
        goto L_1013653c;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x48u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101192b0u), ecx, 2, 1u, 0u);
    wr8(rd32(self + 8u) + 0x62u, 0u);
    wr8(rd32(self + 8u) + 0x69u, 0u);
    return;
L_1013653c: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101192b0u), ecx, 2, 1u, 0u);
    wr8(rd32(self + 8u) + 0x62u, 0u);
    wr8(rd32(self + 8u) + 0x69u, 0u);
    wr8(rd32(self + 8u) + 0x6au, 0u);
L_10136553: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10136510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
