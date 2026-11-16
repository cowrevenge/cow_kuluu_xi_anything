/* f_0x100e5720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e5720(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100e5781;
    esi = rd32(COW_IMG(0x104dfd98u));
    if (rd32(sp0 + 4u) == 0u) goto L_100e5767;
    eax = rd32(sp0 + 4u);
    t1 = rd8(eax);
    wr8(sp0 + 4u, (uint8_t)(t1 + 1u));
    if ((uint8_t)(t1 + 1u) >= 0x10u) goto L_100e5781;
    edx = (in_edx & 0xffffff00u) | (uint8_t)(t1 + 1u);
L_100e5740: ;
    t2 = rd32(sp0 + 4u);
    if (rd32(esi + (uint8_t)t2 * 0x24u + 0x19adcu) != 0x10u)
    {
        ecx = t2;
        goto L_100e576f;
    }
    wr8(sp0 + 4u, (uint8_t)((uint8_t)edx + 1u));
    if ((uint8_t)((uint8_t)edx + 1u) < 0x10u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
        goto L_100e5740;
    }
    return 0u;
L_100e5767: ;
    wr8(sp0 + 4u, 0u);
    edx = in_edx & 0xffffff00u;
    goto L_100e5740;
L_100e576f: ;
    return esi + (uint8_t)ecx * 0x24u + 0x19adcu;
L_100e5781: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
