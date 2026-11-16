/* f_0x100e9090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e9090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100e90bc;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 == 0u) goto L_100e90c9;
    if ((uint8_t)arg1 == 1u) goto L_100e90c0;
    if ((uint8_t)arg1 - 1u != 4u)
    {
        eax = (uint8_t)arg1 - 5u;
        goto L_100e90bc;
    }
    eax = (uint8_t)arg1 - 5u;
    zf = (rd8(ecx + 0x97f8u) & 8u) == 0u;
L_100e90ba: ;
    if (!zf) goto L_100e90d2;
L_100e90bc: ;
    return eax & 0xffffff00u;
L_100e90c0: ;
    eax = (uint8_t)arg1 - 1u;
    zf = (rd8(ecx + 0x97f8u) & 0x40u) == 0u;
    goto L_100e90ba;
L_100e90c9: ;
    if ((rd8(ecx + 0x97f8u) & 4u) == 0u)
    {
        eax = (uint8_t)arg1;
        goto L_100e90bc;
    }
L_100e90d2: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x70u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100e90bc;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr8(eax + 4u, (uint8_t)arg1);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 6u, 0u);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
