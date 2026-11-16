/* f_0x100ad7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ad7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;

    if (rd8(COW_IMG(0x10482f43u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10482f43u));
        goto L_100ad7cc;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10482f43u));
    return eax & 0xffffff00u;
L_100ad7cc: ;
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_100ad7d9;
    }
    return eax & 0xffffff00u;
L_100ad7d9: ;
    if (rd16(ecx + 0x40d7cu) - 1u > 0xe3u)
    {
        eax = rd16(ecx + 0x40d7cu) - 1u;
        goto L_100ad7fc;
    }
    eax = rd16(ecx + 0x40d7cu) - 1u;
    t1 = rd32(COW_IMG(0x100ad800u) + rd8(COW_IMG(0x100ad808u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x100ad7f9u: goto L_100ad7f9;
    case 0x100ad7fcu: goto L_100ad7fc;
    default: rt_fatal(g, COW_IMG(0x100ad7f2u), "switch");
    }
    return 0;
L_100ad7f9: ;
    return eax & 0xffffff00u;
L_100ad7fc: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
