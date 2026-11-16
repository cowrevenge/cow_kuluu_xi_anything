/* f_0x100d9830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d9830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;

    edi = COW_IMG(0x1048beb8u);
    eax = 0u;
    ecx = 0xd76u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x1048bebcu), 0u);
    wr8(COW_IMG(0x1048bf0cu), 0u);
    wr16(COW_IMG(0x1048bf5cu), 0u);
    wr32(COW_IMG(0x1048bf60u), 0u);
    wr32(COW_IMG(0x1048bf70u), 0u);
    wr32(COW_IMG(0x1048bf74u), 0u);
    wr32(COW_IMG(0x1048bf78u), 0u);
    wr32(COW_IMG(0x1048bf7cu), 0u);
    wr32(COW_IMG(0x1048bf80u), COW_IMG(0x1048bebcu));
    wr32(COW_IMG(0x1048bf84u), COW_IMG(0x1048bf70u));
    wr16(COW_IMG(0x1048bf88u), 0u);
    wr16(COW_IMG(0x1048bf8au), 0u);
    wr32(COW_IMG(0x1048bf8cu), COW_IMG(0x1048bf78u));
    eax = COW_IMG(0x1048c05cu);
L_100d98a5: ;
    wr8(eax - 0x7cu, 0u);
    wr32(eax - 0x18u, eax - 0x7cu);
    wr8(eax - 0xccu, 0u);
    wr16(eax - 0x2cu, 0u);
    wr32(eax - 0x28u, 0u);
    wr32(eax - 0x14u, 0u);
    wr32(eax - 0x10u, eax - 0x28u);
    wr32(eax - 0xcu, 0u);
    wr32(eax - 8u, eax - 0xccu);
    wr32(eax - 4u, eax - 0x18u);
    wr16(eax, rd16(eax - 0x2cu));
    wr16(eax + 2u, 0u);
    wr32(eax + 4u, eax - 0x10u);
    if ((int32_t)(eax + 0xd4u) < (int32_t)COW_IMG(0x1048f55cu))
    {
        eax = eax + 0xd4u;
        goto L_100d98a5;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d9830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
