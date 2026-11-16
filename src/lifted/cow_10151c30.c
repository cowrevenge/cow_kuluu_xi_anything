/* f_0x10151c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10151c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_10151c60;
    eax = rd32(COW_IMG(0x104dfd98u));
    eax = eax + 0x194c0u;
    ecx = self;
    esi = 0u;
L_10151c45: ;
    if (rd16(eax + 4u) == 0u) goto L_10151c57;
    if (rd8(eax + 6u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 6u);
        goto L_10151c57;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 6u);
    if ((uint8_t)arg1 == (uint8_t)ecx) goto L_10151c66;
L_10151c57: ;
    if ((int32_t)(esi + 1u) < 10)
    {
        eax = eax + 8u;
        esi = esi + 1u;
        goto L_10151c45;
    }
L_10151c60: ;
    return 0u;
L_10151c66: ;
    return rd32(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10151c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10151c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
