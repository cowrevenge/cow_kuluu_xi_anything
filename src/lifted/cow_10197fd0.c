/* f_0x10197fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10197fd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    edx = in_edx;
    esi = 0u;
L_10197fef: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, esi + 1u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ebx = esi + 1u;
    g->edi = self;
    g->eax = esi + rd32(self + 0x18u);
    t1 = rd32(self + 0x18u);
    t2 = rd32(self + 8u);
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x10118900u), t2, 4, sp0 - 8u, esi + 1u, 1u, 1u);
    t4 = g->ecx;
    wr32(sp0 - 0x1cu, 0x80808080u);
    t5 = rd16(COW_IMG(0x10379a28u) + esi * 4u + t1 * 4u + 2u);
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 0x24u, 0xbu);
    g->edx = t5;
    g->esp = sp0 - 0x1cu;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t5);
    t7 = g->edx;
    wr32(sp0 - 0x20u, t6);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x24u, t8);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x21u;
    wr32(sp0 - 0x28u, t9);
    g->eax = t8;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, t9, t8, t6, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 8u));
    t11 = esi + rd32(self + 0x18u);
    wr32(sp0 - 0x1cu, t11);
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10198240u), t10, self, g->edx, 0, 1, t11);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x80808080u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x28u, t13);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x2cu, t14);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t12 * 4u + 0x1cu), 5, t14, t13, 0x80808080u, 0u, 0u);
    t16 = g->edx;
    if ((int32_t)(esi + 1u) < 14)
    {
        edx = t16;
        esi = esi + 1u;
        goto L_10197fef;
    }
    eax = t15;
    edx = t16;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
