/* f_0x10122190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10122190(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 1u) goto L_101221a0;
    return arg1 - 1u & 0xffffff00u;
L_101221a0: ;
    t1 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
    t2 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u);
    if ((t2 & 0x8000u) != 0u) goto L_10122241;
    eax = t2;
    if ((eax & 0x10000u) != 0u) goto L_10122241;
    if ((eax & 2u) != 0u) goto L_10122241;
    if ((eax & 8u) != 0u) goto L_10122241;
    if ((eax & 4u) != 0u) goto L_10122241;
    if (eax & 1u) goto L_10122241;
    if ((eax & 0x100u) != 0u) goto L_10122241;
    if ((eax & 0x200u) != 0u) goto L_10122241;
    if ((eax & 0x400u) != 0u) goto L_10122241;
    if ((eax & 0x1000u) != 0u) goto L_10122241;
    if ((eax & 0x2000u) != 0u) goto L_10122241;
    if ((eax & 0x4000u) != 0u) goto L_10122241;
    g->edx = 0u;
    return 0u;
L_10122241: ;
    g->edx = 0u;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10122190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10122190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
