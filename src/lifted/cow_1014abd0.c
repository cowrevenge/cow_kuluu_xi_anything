/* f_0x1014abd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014abd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 1u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->esp = sp0 - 0x24u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    if (rd32(self + 0x58u) != 0u)
    {
        eax = t1;
        edi = rd32(rd32(eax) + 0xb4cu);
    }
    else
    {
        eax = t1;
        edi = rd32(rd32(eax) + 0xb48u);
        eax = rd32(eax);
    }
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    t2 = rd32(self + 8u);
    g->esp = sp0 - 0x24u;
    t3 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t2, g->edx, 0, 1, sp0 - 0x18u);
    t4 = g->ecx;
    t5 = g->edx;
    if (edi == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    else
    {
        edx = t5;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0x80808080u);
        t6 = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
        wr32(sp0 - 0x34u, t6);
        t7 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
        wr32(sp0 - 0x38u, t7);
        g->eax = t6;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t8 = cow_thiscall(g, COW_IMG(0x1011fb60u), edi, 5, t7, t6, 0x80808080u, 0u, 0u);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t11 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        if (rd32(self + 0x58u) == 1u)
        {
            t13 = rd8(COW_IMG(0x103d3c84u));
            wr32(sp0 - 0xfu, 0u);
            wr8(sp0 - 0x10u, (uint8_t)t13);
            wr32(sp0 - 0xbu, 0u);
            wr32(sp0 - 7u, 0u);
            wr16(sp0 - 3u, 0u);
            wr8(sp0 - 1u, 0u);
            t14 = rd16(eax + rd8(self + 0x54u) * 6u + 8u);
            wr32(sp0 - 0x28u, t14);
            wr32(sp0 - 0x2cu, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x30u, sp0 - 0x10u);
            g->ebx = 0u;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t14, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            wr32(sp0 - 0x34u, 0x80808080u);
            wr32(sp0 - 0x38u, sp0 - 0x10u);
            t15 = rd32(sp0 - 0x16u) + 4u;
            wr32(sp0 - 0x3cu, t15);
            t16 = rd32(sp0 - 0x18u) + 0x102u;
            wr32(sp0 - 0x40u, t16);
            g->eax = sp0 - 0x10u;
            g->edx = t16;
            t17 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t16, t15, sp0 - 0x10u, 0x80808080u, sp0 - 0x10u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t18 = g->edx;
            eax = t17;
            edx = t18;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t19 = cow_fastcall(g, COW_IMG(0x101f6a60u), self, edx, 0);
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014abd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014abd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
