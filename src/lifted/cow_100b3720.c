/* f_0x100b3720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100b3720(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = 0u;
    edx = self + 0x3au;
    esi = 0xffffffffu;
L_100b3731: ;
    if (rd16(edx - 0x16u) != 0xffu) goto L_100b373d;
    esi = eax;
L_100b3744: ;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        edx = edx + 0x20u;
        goto L_100b3731;
    }
    edx = edx + 0x20u;
    if (esi == 0xffffffffu) goto L_100b3790;
    wr16(esi * 0x20u + self + 0x24u, (uint16_t)arg3);
    t1 = rd32(self + 0x10u);
    t2 = rd16(arg2 * 2u + rd32(self + 0x10u));
    wr8(esi * 0x20u + self + 0x3au, (uint8_t)arg2);
    wr16(esi * 0x20u + self + 0x26u, (uint16_t)t2);
    wr32(esi * 0x20u + self + 0x40u, arg1);
    return 1u;
L_100b373d: ;
    if ((uint32_t)(int8_t)rd8(edx) == arg2) goto L_100b3788;
    goto L_100b3744;
L_100b3788: ;
    return 0u;
L_100b3790: ;
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b3720(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
