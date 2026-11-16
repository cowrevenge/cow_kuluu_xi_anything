/* f_0x10192cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10192cc0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) goto L_10192d0f;
    if ((int32_t)arg1 < 346) goto L_10192ce3;
    if ((int32_t)arg1 > 369) goto L_10192ce3;
    return (arg1 & 0xffffff00u) | 1u;
L_10192ce3: ;
    if ((int32_t)arg1 < 375) goto L_10192cf6;
    if ((int32_t)arg1 > 397) goto L_10192cf6;
    return (arg1 & 0xffffff00u) | 1u;
L_10192cf6: ;
    if (arg1 - 0x172u > 0x3eu)
    {
        eax = arg1 - 0x172u;
        goto L_10192d55;
    }
    t1 = rd32(COW_IMG(0x10192d5cu) + rd8(COW_IMG(0x10192d64u) + arg1 - 0x172u) * 4u);
    eax = arg1 - 0x172u;
    switch (t1 - RD)
    {
    case 0x10192d50u: goto L_10192d50;
    case 0x10192d55u: goto L_10192d55;
    default: rt_fatal(g, COW_IMG(0x10192d08u), "switch");
    }
    return 0;
L_10192d0f: ;
    if ((int32_t)arg1 < 346) goto L_10192d22;
    if ((int32_t)arg1 > 369) goto L_10192d22;
    return (arg1 & 0xffffff00u) | 1u;
L_10192d22: ;
    if ((int32_t)arg1 < 375) goto L_10192d35;
    if ((int32_t)arg1 > 397) goto L_10192d35;
    return (arg1 & 0xffffff00u) | 1u;
L_10192d35: ;
    if (arg1 - 0x114u > 0x9cu)
    {
        eax = arg1 - 0x114u;
        goto L_10192d55;
    }
    t2 = rd32(COW_IMG(0x10192da4u) + rd8(COW_IMG(0x10192dacu) + arg1 - 0x114u) * 4u);
    eax = arg1 - 0x114u;
    switch (t2 - RD)
    {
    case 0x10192d50u: goto L_10192d50;
    case 0x10192d55u: goto L_10192d55;
    default: rt_fatal(g, COW_IMG(0x10192d49u), "switch");
    }
    return 0;
L_10192d50: ;
    return (eax & 0xffffff00u) | 1u;
L_10192d55: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10192cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10192cc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
