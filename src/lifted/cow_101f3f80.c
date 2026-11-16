/* f_0x101f3f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f3f80(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0xfu) goto L_101f4013;
    t1 = rd32(COW_IMG(0x101f401cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101f3f96u: goto L_101f3f96;
    case 0x101f3f9bu: goto L_101f3f9b;
    case 0x101f3fa3u: goto L_101f3fa3;
    case 0x101f3fabu: goto L_101f3fab;
    case 0x101f3fb3u: goto L_101f3fb3;
    case 0x101f3fbbu: goto L_101f3fbb;
    case 0x101f3fc3u: goto L_101f3fc3;
    case 0x101f3fcbu: goto L_101f3fcb;
    case 0x101f3fd3u: goto L_101f3fd3;
    case 0x101f3fdbu: goto L_101f3fdb;
    case 0x101f3fe3u: goto L_101f3fe3;
    case 0x101f3febu: goto L_101f3feb;
    case 0x101f3ff3u: goto L_101f3ff3;
    case 0x101f3ffbu: goto L_101f3ffb;
    case 0x101f4003u: goto L_101f4003;
    case 0x101f400bu: goto L_101f400b;
    default: rt_fatal(g, COW_IMG(0x101f3f8fu), "switch");
    }
    return 0;
L_101f3f96: ;
    return 0u;
L_101f3f9b: ;
    return 1u;
L_101f3fa3: ;
    return 9u;
L_101f3fab: ;
    return 2u;
L_101f3fb3: ;
    return 4u;
L_101f3fbb: ;
    return 5u;
L_101f3fc3: ;
    return 6u;
L_101f3fcb: ;
    return 7u;
L_101f3fd3: ;
    return 8u;
L_101f3fdb: ;
    return 0xau;
L_101f3fe3: ;
    return 0xbu;
L_101f3feb: ;
    return 0xcu;
L_101f3ff3: ;
    return 0xdu;
L_101f3ffb: ;
    return 0xeu;
L_101f4003: ;
    return 0xfu;
L_101f400b: ;
    return 0x10u;
L_101f4013: ;
    return 0x12u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f3f80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
