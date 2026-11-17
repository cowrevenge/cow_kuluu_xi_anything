/* f_0x1013a350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013a350(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1011bdc0u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x1011bae0u), rd32(COW_IMG(0x104e1b90u)), t2, 0);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x104e1b90u));
    wr32(t4 + 0x64u, 0x80808080u);
    wr32(t4 + 0x48u, 0x80808080u);
    wr32(t4 + 0x2cu, 0x80808080u);
    wr32(t4 + 0x10u, 0x80808080u);
    g->eax = t4;
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x102214d0u), self + 0x20u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1011ae80u), rd32(self + 8u), 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0x18u, sp0 - 8u);
        t9 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->esp = sp0 - 0x14u;
        t10 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t9, g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0x80808080u);
        t11 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x24u, t11);
        t12 = (uint32_t)(int16_t)rd16(sp0 - 4u) - 0x50u;
        wr32(sp0 - 0x28u, t12);
        g->edx = t12;
        t13 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x1cu), 5, t12, t11, 0x80808080u, 0u, 0u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
