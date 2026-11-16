/* f_0x102a9870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a9870(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_102a98d1;
    if ((int32_t)arg1 >= 12) goto L_102a98d1;
    if (arg1 > 0xbu) goto L_102a98d7;
    t1 = rd32(COW_IMG(0x102a98dcu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x102a9889u: goto L_102a9889;
    case 0x102a988fu: goto L_102a988f;
    case 0x102a9895u: goto L_102a9895;
    case 0x102a989bu: goto L_102a989b;
    case 0x102a98a1u: goto L_102a98a1;
    case 0x102a98a7u: goto L_102a98a7;
    case 0x102a98adu: goto L_102a98ad;
    case 0x102a98b3u: goto L_102a98b3;
    case 0x102a98b9u: goto L_102a98b9;
    case 0x102a98bfu: goto L_102a98bf;
    case 0x102a98c5u: goto L_102a98c5;
    case 0x102a98cbu: goto L_102a98cb;
    default: rt_fatal(g, COW_IMG(0x102a9882u), "switch");
    }
    return 0;
L_102a9889: ;
    return COW_IMG(0x103be8b8u);
L_102a988f: ;
    return COW_IMG(0x103be8b0u);
L_102a9895: ;
    return COW_IMG(0x103be8acu);
L_102a989b: ;
    return COW_IMG(0x103be8a4u);
L_102a98a1: ;
    return COW_IMG(0x103be898u);
L_102a98a7: ;
    return COW_IMG(0x103be88cu);
L_102a98ad: ;
    return COW_IMG(0x103be884u);
L_102a98b3: ;
    return COW_IMG(0x103be870u);
L_102a98b9: ;
    return COW_IMG(0x103be854u);
L_102a98bf: ;
    return COW_IMG(0x103be83cu);
L_102a98c5: ;
    return COW_IMG(0x103be834u);
L_102a98cb: ;
    return COW_IMG(0x103be82cu);
L_102a98d1: ;
    return COW_IMG(0x103be81cu);
L_102a98d7: ;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a9870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
