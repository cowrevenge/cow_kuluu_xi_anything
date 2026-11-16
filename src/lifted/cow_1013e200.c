/* f_0x1013e200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1013e200(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg1 != 0u) goto L_1013e21a;
    g->eax = in_eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1013bf40u), self, 0);
    return t1;
L_1013e21a: ;
    if (rd16(self + 0x24u) != (uint16_t)arg1) goto L_1013e22c;
    if (rd32(self + 0x348u) == arg2)
    {
        eax = in_eax;
        goto L_1013e251;
    }
L_1013e22c: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1013bf40u), self, 0);
    t2 = g->ecx;
    wr16(self + 0x24u, (uint16_t)arg1);
    wr32(self + 0x348u, arg2);
    wr32(self + 0x374u, arg4);
    wr8(self + 0x3a7u, (uint8_t)arg3);
    eax = arg4;
L_1013e251: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013e200(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
