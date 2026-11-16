/* f_0x101e3ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e3ac0(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 > 7u) goto L_101e3aed;
    t1 = rd32(COW_IMG(0x101e3af0u) + (uint8_t)arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x101e3ad5u: goto L_101e3ad5;
    case 0x101e3adbu: goto L_101e3adb;
    case 0x101e3ae1u: goto L_101e3ae1;
    case 0x101e3ae7u: goto L_101e3ae7;
    case 0x101e3aedu: goto L_101e3aed;
    default: rt_fatal(g, COW_IMG(0x101e3aceu), "switch");
    }
    return 0;
L_101e3ad5: ;
    return rd32(COW_IMG(0x10666e2cu));
L_101e3adb: ;
    return rd32(COW_IMG(0x10666e40u));
L_101e3ae1: ;
    return rd32(COW_IMG(0x10666e44u));
L_101e3ae7: ;
    return rd32(COW_IMG(0x10666e48u));
L_101e3aed: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
