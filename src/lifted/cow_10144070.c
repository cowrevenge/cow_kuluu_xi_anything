/* f_0x10144070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10144070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    t1 = rd8(self + 0x14u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    t2 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 7u, 0u);
    wr8(sp0 - 8u, (uint8_t)t2);
    wr32(sp0 - 0x18u, (uint32_t)(int8_t)t1);
    wr16(sp0 - 3u, 0u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr8(sp0 - 1u, 0u);
    g->eax = sp0 - 8u;
    g->edx = (uint32_t)(int8_t)t1;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10352ff0u), (uint32_t)(int8_t)t1, in_esi, rd32(sp0 - 0x10u));
    t4 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, 1u, 1u, 1u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x20u, 1u);
    if (rd32(self + 0x18u) != 1u)
    {
        eax = rd32(sp0 - 0xeu);
        ecx = rd32(sp0 - 0xcu) - 2u;
        wr32(sp0 - 0x24u, 0x80808080u);
        loc_24 = 0x80808080u;
    }
    else
    {
        eax = rd32(sp0 - 0xeu);
        ecx = rd32(sp0 - 0xcu) - 2u;
        wr32(sp0 - 0x24u, 0x80a06040u);
        loc_24 = 0x80a06040u;
    }
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, eax + 2u);
    wr32(sp0 - 0x30u, ecx);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, ecx, eax + 2u, sp0 - 8u, loc_24, 1u, 0x3f800000u, 0x3f800000u);
    t5 = g->ecx;
    t6 = (uint32_t)(int8_t)rd8(self + 0x15u);
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x1cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10352ff0u), t6, in_esi, rd32(sp0 - 0x10u));
    t8 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, 2u, 1u, 1u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 1u);
    if (rd32(self + 0x18u) != 2u)
    {
        eax = rd32(sp0 - 0xeu);
        ecx = rd32(sp0 - 0xcu) - 2u;
        goto L_10144170;
    }
    eax = rd32(sp0 - 0xeu);
    ecx = rd32(sp0 - 0xcu) - 2u;
    wr32(sp0 - 0x20u, 0x80a06040u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, eax + 2u);
    wr32(sp0 - 0x2cu, ecx);
    g->eax = eax + 2u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, ecx, eax + 2u, sp0 - 8u, 0x80a06040u, 1u, 0x3f800000u, 0x3f800000u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10144170: ;
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, eax + 2u);
    wr32(sp0 - 0x2cu, ecx);
    g->eax = eax + 2u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, ecx, eax + 2u, sp0 - 8u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
