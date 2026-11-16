/* f_0x10139e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10139e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg1 != 0u) goto L_10139e4a;
    wr32(self + 0x3cu, arg3);
    return;
L_10139e4a: ;
    eax = self + 0x14u;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
    esi = 0u;
L_10139e54: ;
    if (rd8(eax + 2u) != (uint8_t)ebx) goto L_10139e74;
    if (rd16(eax) != (uint16_t)arg2) goto L_10139e74;
    wr16(eax, 0u);
    wr8(eax + 3u, 0u);
    wr8(eax + 2u, 0u);
    if (rd8(self + 0x40u) == esi) goto L_10139e9d;
    ebx = rd8(self + 0x40u);
    ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
L_10139e74: ;
    if ((int32_t)(esi + 1u) < 10)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_10139e54;
    }
    t1 = rd8(self + 0x40u);
    wr16(self + t1 * 4u + 0x14u, (uint16_t)arg2);
    wr8(self + rd8(self + 0x40u) * 4u + 0x17u, (uint8_t)arg3);
    wr8(self + rd8(self + 0x40u) * 4u + 0x16u, (uint8_t)ebx);
L_10139e9d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10139e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
