/* f_0x1011cec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011cec0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x14u, in_esi);
    if ((uint16_t)arg1 >= 0x20u) goto L_1011ced5;
    return 0u;
L_1011ced5: ;
    if ((uint16_t)arg1 >= 0x7fu) goto L_1011ceec;
    return (uint32_t)(int8_t)rd8(COW_IMG(0x1036c408u) + (uint16_t)arg1);
L_1011ceec: ;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr8(sp0 - 0x10u, (uint8_t)(arg1 >> 8u));
    wr8(sp0 - 0xfu, (uint8_t)arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1011c940u), 1, sp0 - 0x10u);
    t2 = g->edx;
    if ((uint32_t)(int16_t)t1 < 0x2115u)
    {
        edx = t2;
        esi = (uint32_t)(int16_t)t1;
        goto L_1011cf4d;
    }
    edx = t2;
    esi = (uint32_t)(int16_t)t1;
    if (esi > 0x2143u) goto L_1011cf4d;
    if (rd32(COW_IMG(0x10621934u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10621934u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10621934u));
        wr32(sp0 - 0x18u, COW_IMG(0x1036c98cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c98cu));
        t4 = g->edx;
        wr32(COW_IMG(0x10621934u), t3);
        eax = t3;
        edx = t4;
    }
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (uint32_t)(int16_t)rd16(rd32(esi * 4u + rd32(eax) - 0x8454u) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(esi * 4u + rd32(eax) - 0x8454u) + 0x20u);
L_1011cf4d: ;
    if (esi >= 0x440u) goto L_1011cf61;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (uint32_t)(int8_t)rd8(COW_IMG(0x1036c428u) + esi);
L_1011cf61: ;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0xeu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011cec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011cec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
