/* f_0x101403a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101403a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1036ff98u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036ff98u));
        goto L_101403bf;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036ff98u));
    ecx = 0u;
L_101403af: ;
    if ((uint8_t)eax == (uint8_t)arg1) goto L_101403c2;
    if (rd8(COW_IMG(0x1036ff9au) + ecx * 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1036ff9au) + ecx * 2u);
        ecx = ecx + 1u;
        goto L_101403af;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1036ff9au) + ecx * 2u);
L_101403bf: ;
    return (eax & 0xffffff00u) | 1u;
L_101403c2: ;
    return (eax & 0xffffff00u) | rd8(COW_IMG(0x1036ff99u) + ecx * 2u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101403a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101403a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
