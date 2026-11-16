/* f_0x101ea6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t17;
    uint32_t t18;
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
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 0x2cu, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_cdecl(g, COW_IMG(0x101e6b80u), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        ebx = 0u;
        ebp = 0u;
        esi = 0u;
    }
    else
    {
        eax = t2;
        t4 = rd8(eax + 2u);
        edx = t4;
        ebx = rd8(eax + 1u);
        ebp = t4;
        esi = rd8(eax);
    }
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    t5 = rd32(self + 8u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t5, g->edx, 0, 1, sp0 - 0x18u);
    t6 = g->ecx;
    t7 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0xbu, 0u);
    wr32(sp0 - 7u, 0u);
    wr32(sp0 - 0x30u, COW_IMG(0x10381f74u));
    wr16(sp0 - 3u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr8(sp0 - 0x10u, (uint8_t)t7);
    wr8(sp0 - 1u, 0u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10381f74u), esi, in_edi, in_esi);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t8 = rd32(sp0 - 0x16u) + 5u;
    wr32(sp0 - 0x4cu, t8);
    t9 = rd32(sp0 - 0x18u) + 0x64u;
    wr32(sp0 - 0x50u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x34u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t9, t8, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    wr32(sp0 - 0x2cu, esi);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 0x16u) + 0x13u;
    wr32(sp0 - 0x30u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 0x18u) + 0x1fu;
    wr32(sp0 - 0x34u, t12);
    g->ecx = self;
    g->edx = t12;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, COW_IMG(0x101ea800u), 3, t12, t11, esi);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, ebx);
    wr32(sp0 - 0x34u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10357fbcu), ebx, ebp, in_edi);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0x80808080u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    t15 = rd32(sp0 - 0x16u) + 0x22u;
    wr32(sp0 - 0x50u, t15);
    t16 = rd32(sp0 - 0x18u) + 0x64u;
    wr32(sp0 - 0x54u, t16);
    g->eax = t16;
    g->edx = t15;
    g->esp = sp0 - 0x38u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t16, t15, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
