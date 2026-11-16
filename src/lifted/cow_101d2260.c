/* f_0x101d2260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d2260(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((arg1 | arg2) != 0u) goto L_101d227d;
    wr32(COW_IMG(0x10663188u), 0u);
    wr32(COW_IMG(0x1066318cu), 0u);
    return;
L_101d227d: ;
    if (((rd32(COW_IMG(0x10663188u)) & arg1) | (rd32(COW_IMG(0x1066318cu)) & arg2)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066318cu));
        ecx = rd32(COW_IMG(0x10663188u));
        goto L_101d22b0;
    }
    eax = rd32(COW_IMG(0x1066318cu));
    ecx = rd32(COW_IMG(0x10663188u));
    t1 = ecx & ~arg1;
    wr32(COW_IMG(0x10663188u), t1);
    t2 = eax & ~arg2;
    wr32(COW_IMG(0x1066318cu), t2);
    return;
L_101d22b0: ;
    wr32(COW_IMG(0x10663188u), ecx | arg1);
    wr32(COW_IMG(0x1066318cu), eax | arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d2260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d2260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
