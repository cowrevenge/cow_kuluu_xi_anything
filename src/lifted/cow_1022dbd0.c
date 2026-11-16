/* f_0x1022dbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022dbd0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 - 1u > 5u) goto L_1022dc3d;
    t1 = rd32(COW_IMG(0x1022dc4cu) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1022dbe4u: goto L_1022dbe4;
    case 0x1022dbefu: goto L_1022dbef;
    case 0x1022dbfau: goto L_1022dbfa;
    case 0x1022dc05u: goto L_1022dc05;
    case 0x1022dc10u: goto L_1022dc10;
    case 0x1022dc32u: goto L_1022dc32;
    default: rt_fatal(g, COW_IMG(0x1022dbddu), "switch");
    }
    return;
L_1022dbe4: ;
    wr32(self + 0x70u, 3u);
    return;
L_1022dbef: ;
    wr32(self + 0x70u, 4u);
    return;
L_1022dbfa: ;
    wr32(self + 0x70u, 6u);
    return;
L_1022dc05: ;
    wr32(self + 0x70u, 8u);
    return;
L_1022dc10: ;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    if (t2 < 0x154u) goto L_1022dc27;
    wr32(self + 0x70u, 0xbu);
    return;
L_1022dc27: ;
    wr32(self + 0x70u, 0xau);
    return;
L_1022dc32: ;
    wr32(self + 0x70u, 9u);
    return;
L_1022dc3d: ;
    t3 = (uint32_t)(int8_t)rd8(COW_IMG(0x1047fe8eu));
    wr32(self + 0x70u, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022dbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022dbd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
