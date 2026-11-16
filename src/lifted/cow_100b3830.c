/* f_0x100b3830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100b3830(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 0) goto L_100b3842;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100b38a0u), self, 0);
    return t1;
L_100b3842: ;
    eax = 0u;
    edx = self + 0x3au;
L_100b3848: ;
    if ((uint32_t)(int8_t)rd8(edx) == arg1) goto L_100b385f;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        edx = edx + 0x20u;
        goto L_100b3848;
    }
    return 0u;
L_100b385f: ;
    if (eax != 0xffffffffu)
    {
        wr16(eax * 0x20u + self + 0x26u, 0u);
        wr16(eax * 0x20u + self + 0x24u, 0xffu);
        wr32(eax * 0x20u + self + 0x3cu, 0xbf800000u);
        wr32(eax * 0x20u + self + 0x40u, 0u);
        wr8(eax * 0x20u + self + 0x3au, 0u);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b3830(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
