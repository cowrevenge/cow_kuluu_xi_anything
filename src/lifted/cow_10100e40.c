/* f_0x10100e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10100e40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = 0u;
    ecx = arg1 + 0x1ccu;
L_10100e4d: ;
    if (rd32(ecx) == 0u) goto L_10100e5d;
    if ((int32_t)(eax + 1u) < 5)
    {
        eax = eax + 1u;
        ecx = ecx + 0xcu;
        goto L_10100e4d;
    }
    return;
L_10100e5d: ;
    t1 = rd8(COW_IMG(0x103628f9u) + (uint16_t)arg2 * 4u);
    wr32(arg1 + eax * 0xcu + 0x1c8u, t1);
    t2 = rd16(COW_IMG(0x103628fau) + (uint16_t)arg2 * 4u) >> 4u;
    wr32(arg1 + eax * 0xcu + 0x1ccu, t2);
    t3 = (uint16_t)arg3 * 5u;
    wr32(arg1 + eax * 0xcu + 0x1d0u, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10100e40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
