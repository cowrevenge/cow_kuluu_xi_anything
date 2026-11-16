/* f_0x10203310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10203310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10203347;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd32(COW_IMG(0x10664390u)) != rd32(eax + 0x3c390u))
    {
        eax = rd32(eax + 0x3c390u);
        ecx = rd32(COW_IMG(0x10664390u));
        goto L_1020332e;
    }
    eax = rd32(eax + 0x3c390u);
    return (eax & 0xffffff00u) | 1u;
L_1020332e: ;
    if (rd32(COW_IMG(0x10664394u)) != eax) goto L_10203347;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_10203342;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    if (ecx != 0u) goto L_10203347;
L_10203342: ;
    return (eax & 0xffffff00u) | 1u;
L_10203347: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203310(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
