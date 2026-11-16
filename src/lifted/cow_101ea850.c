/* f_0x101ea850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x1fu, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    wr8(sp0 - 0x20u, 0u);
    wr8(sp0 - 0x1bu, 0u);
    g->eax = 0u;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x101e6c60u), 1, sp0 - 0x20u);
    t2 = rd32(self + 8u);
    wr16(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    t3 = cow_call_regs(g, COW_IMG(0x10118f70u), t1, t2, g->edx, 0, 1, sp0 - 0x18u);
    t4 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0xfu, 0u);
    wr8(sp0 - 0x10u, (uint8_t)t4);
    wr32(sp0 - 0xbu, 0u);
    wr32(sp0 - 7u, 0u);
    wr16(sp0 - 3u, 0u);
    wr8(sp0 - 1u, 0u);
    ecx = 0u;
    esi = 0u;
L_101ea8b7: ;
    t5 = rd8(esi + sp0 - 0x20u);
    wr32(sp0 - 0x2cu, t5);
    wr32(sp0 - 0x30u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t5, in_esi, in_ebx);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t6 = esi * 0x10u + rd32(sp0 - 0x16u) + 0x14u;
    wr32(sp0 - 0x4cu, t6);
    t7 = rd32(sp0 - 0x18u) + 0x64u;
    wr32(sp0 - 0x50u, t7);
    g->eax = rd32(sp0 - 0x16u);
    g->edx = t7;
    t8 = rd32(sp0 - 0x16u);
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t6, 7, t7, t6, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)(esi + 1u) < 6)
    {
        ecx = t10;
        esi = esi + 1u;
        goto L_101ea8b7;
    }
    eax = t9;
    edx = t11;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
