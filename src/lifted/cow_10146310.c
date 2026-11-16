/* f_0x10146310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10146310(Guest* g)
{
    uint32_t eax;
    uint32_t t1;

    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    if ((uint8_t)t1 == 0u) goto L_10146329;
    if (rd32(COW_IMG(0x105782b0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105782b0u));
        goto L_10146325;
    }
    eax = rd32(COW_IMG(0x105782b0u));
    return eax & 0xffffff00u;
L_10146325: ;
    return (eax & 0xffffff00u) | rd8(eax + 0x21u);
L_10146329: ;
    if (rd32(COW_IMG(0x105783e4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105783e4u));
        goto L_10146335;
    }
    eax = rd32(COW_IMG(0x105783e4u));
    return eax & 0xffffff00u;
L_10146335: ;
    return (eax & 0xffffff00u) | rd8(eax + 0x1fu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10146310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10146310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
