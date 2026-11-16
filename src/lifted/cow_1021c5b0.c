/* f_0x1021c5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1021c5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_1021c66d;
    }
    t1 = rd32(sp0 + 8u);
    wr8(sp0 + 8u, 0u);
    wr8(self + (uint8_t)t1 + 0x1368u, 0u);
    edx = in_edx;
    ebx = t1;
L_1021c5dd: ;
    if (rd32(self + 0xcu) != (uint8_t)rd32(sp0 + 8u))
    {
        eax = rd32(self + 0xcu);
        esi = (uint8_t)rd32(sp0 + 8u);
        goto L_1021c607;
    }
    esi = (uint8_t)rd32(sp0 + 8u);
    if (rd32(self + 0x10u) == 0u)
    {
        eax = rd32(self + 0x10u);
        goto L_1021c607;
    }
    eax = rd32(self + 0x10u);
    if (arg3 == 0u)
    {
        edx = arg3;
        goto L_1021c607;
    }
    if ((eax & rd16(arg3 + 0x1cu)) == 0u)
    {
        edx = arg3;
        goto L_1021c65b;
    }
    edx = arg3;
L_1021c607: ;
    if (rd8(esi + self + 0x18u) >= 0x51u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + self + 0x18u);
        goto L_1021c676;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + self + 0x18u);
    wr8(esi * 0x288u + self + (uint8_t)eax * 8u + 0x80au, (uint8_t)ebx);
    t2 = rd8(esi + self + 0x18u);
    wr32(esi * 0x288u + self + t2 * 8u + 0x804u, 0u);
    t3 = rd8(esi + self + 0x18u);
    t4 = rd16(arg1);
    wr16(esi * 0x288u + self + t3 * 8u + 0x808u, (uint16_t)t4);
    t5 = rd8(esi + self + 0x18u);
    wr8(esi + self + 0x18u, (uint8_t)(t5 + 1u));
    wr32(self + 8u, 0x52u);
    eax = (esi * 0x51u + t3 & 0xffffff00u) | (uint8_t)(t5 + 1u);
    edx = (esi * 0x51u + t2 & 0xffff0000u) | t4;
L_1021c65b: ;
    t6 = rd8(sp0 + 8u);
    wr8(sp0 + 8u, (uint8_t)(t6 + 1u));
    if ((uint8_t)(t6 + 1u) < 4u) goto L_1021c5dd;
    eax = (eax & 0xffffff00u) | (uint8_t)(t6 + 1u);
L_1021c66d: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1021c676: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c5b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
