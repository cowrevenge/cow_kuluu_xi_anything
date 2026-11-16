/* f_0x1012f380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1012f380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1012f3fa;
    }
    eax = rd32(self + 8u);
    if ((int32_t)((uint32_t)(int16_t)rd16(eax + 0x4cu) - 1u) < 0)
    {
        eax = (uint32_t)(int16_t)rd16(eax + 0x4cu) - 1u;
        goto L_1012f3fa;
    }
    eax = (uint32_t)(int16_t)rd16(eax + 0x4cu) - 1u;
    if ((int32_t)eax >= 8) goto L_1012f3fa;
    if (rd8(arg1 + 2u) >= 0x51u) goto L_1012f3fa;
    if (rd16(arg1) == 0u) goto L_1012f3fa;
    if ((int32_t)arg2 < 0) goto L_1012f3fa;
    if (rd32(arg1 + 4u) < arg2) goto L_1012f3fa;
    wr8(eax * 0x34u + self + 0x14u, 1u);
    wr32(eax * 0x34u + self + 0x18u, 0u);
    t1 = rd16(arg1);
    wr32(eax * 0x34u + self + 0x20u, arg2);
    wr16(eax * 0x34u + self + 0x1cu, (uint16_t)t1);
    t2 = rd8(arg1 + 2u);
    wr32(eax * 0x34u + self + 0x24u, t2);
    esi = self + 0x1c6u;
    edi = eax * 0x34u + self + 0x28u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + 0x1b4u, 0xbu);
    return (eax * 0x34u + self + 0x14u & 0xffffff00u) | 1u;
L_1012f3fa: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012f380(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
