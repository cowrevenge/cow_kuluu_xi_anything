/* f_0x102934e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_102934e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    if ((int32_t)(t1 & 0x80000003u) >= 0)
    {
        eax = t1 & 0x80000003u;
        ecx = (rd32(arg1 + 4u) & 0xffffff00u) | rd8(rd32(arg1 + 4u) + (uint32_t)((int32_t)(t1 + ((uint32_t)((int32_t)t1 >> 0x1fu) & 3u)) >> 2u));
    }
    else
    {
        eax = t1 & 0x80000003u;
        ecx = (rd32(arg1 + 4u) & 0xffffff00u) | rd8(rd32(arg1 + 4u) + (uint32_t)((int32_t)(t1 + ((uint32_t)((int32_t)t1 >> 0x1fu) & 3u)) >> 2u));
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    if (eax > 3u) goto L_10293525;
    t2 = rd32(COW_IMG(0x10293544u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10293515u: goto L_10293515;
    case 0x1029351au: goto L_1029351a;
    case 0x1029351fu: goto L_1029351f;
    case 0x10293522u: goto L_10293522;
    default: rt_fatal(g, COW_IMG(0x1029350eu), "switch");
    }
    return 0;
L_10293515: ;
    ecx = (ecx & 0xffffff00u) | (uint8_t)ecx >> 6u;
L_10293525: ;
    wr32(sp0 + 8u, ecx & 1u);
    if ((ecx & 2u) == 0u)
    {
        eax = ecx & 1u;
    }
    else
    {
        eax = ecx & 1u;
        wr32(sp0 + 8u, -eax);
        eax = -eax;
    }
    g->edx = arg1;
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(arg1 + 0x10u)));
    return eax;
L_1029351a: ;
    ecx = (ecx & 0xffffff00u) | (uint8_t)ecx >> 4u;
L_10293522: ;
    ecx = (ecx & 0xffffff00u) | (ecx & 3u);
    goto L_10293525;
L_1029351f: ;
    ecx = (ecx & 0xffffff00u) | (uint8_t)ecx >> 2u;
    goto L_10293522;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102934e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102934e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
