/* f_0x10005600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10005600(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c42u));
        goto L_1000562c;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c42u));
    if ((uint8_t)eax != 0u) goto L_10005651;
    t1 = rd8(COW_IMG(0x10455c37u));
    wr8(COW_IMG(0x10455c37u), 0u);
    wr8(COW_IMG(0x10455c41u), (uint8_t)t1);
    wr8(COW_IMG(0x10455c42u), 1u);
    eax = (eax & 0xffffff00u) | t1;
L_10005640: ;
    if (rd32(self + 0x90u) != 0u)
    {
        if ((uint8_t)eax == 1u)
        {
            wr8(COW_IMG(0x10455c40u), (uint8_t)eax);
        }
    }
L_10005651: ;
    return;
L_1000562c: ;
    if ((uint8_t)eax == 0u) goto L_10005651;
    t2 = rd8(COW_IMG(0x10455c41u));
    wr8(COW_IMG(0x10455c42u), 0u);
    wr8(COW_IMG(0x10455c37u), (uint8_t)t2);
    eax = (eax & 0xffffff00u) | t2;
    goto L_10005640;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10005600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10005600(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
