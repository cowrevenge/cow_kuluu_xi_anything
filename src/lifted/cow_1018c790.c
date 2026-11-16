/* f_0x1018c790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c790(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        goto L_1018c79e;
    }
    eax = rd32(self + 0xcu);
    return eax;
L_1018c79e: ;
    if ((int32_t)rd8(self + 3u) >= (int16_t)rd16(eax + 0x64u))
    {
        ecx = rd8(self + 3u);
        edx = (uint32_t)(int16_t)rd16(eax + 0x64u);
        esi = 0u;
    }
    else
    {
        ecx = rd8(self + 3u);
        edx = rd32(eax + 0x20u);
        esi = ecx * 0x34u + rd32(eax + 0x20u);
        ecx = ecx * 0xdu;
    }
    wr16(eax + 0x1cu, (uint16_t)(rd16(eax + 0x1cu) + 1u));
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_1018c7ed;
    }
    if (rd32(arg1 + 0x70u) == 0u)
    {
        eax = rd32(arg1 + 0x70u);
        goto L_1018c7ed;
    }
    eax = rd32(arg1 + 0x70u);
    t1 = rd32(eax + 0x78u);
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1018c760u), 1, t1);
    wr32(esi, t2);
    wr8(self + 3u, (uint8_t)(rd8(self + 3u) + 1u));
    return esi + 8u;
L_1018c7ed: ;
    wr32(esi, 0u);
    wr8(self + 3u, (uint8_t)(rd8(self + 3u) + 1u));
    return esi + 8u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c790(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
