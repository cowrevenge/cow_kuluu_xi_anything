/* f_0x1014c1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014c1b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr8(sp0 - 0x40u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x3fu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(COW_IMG(0x10578448u));
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t2 = cow_stdcall(g, COW_IMG(0x101617a0u), 0);
    if (t2 == 0u)
    {
        eax = t2;
        esi = 0u;
    }
    else
    {
        eax = t2;
        esi = rd16(eax);
    }
    wr32(sp0 - 0x54u, 0x3e8u);
    wr32(sp0 - 0x58u, (uint16_t)esi);
    wr32(sp0 - 0x5cu, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    g->ebx = self;
    g->ecx = (uint16_t)esi;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10357fbcu), (uint16_t)esi, 0x3e8u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint16_t)esi < 0x3e8u)
    {
        ecx = t3;
        edx = t4;
        ebp = 0x80808080u;
    }
    else
    {
        ecx = t3;
        edx = t4;
        ebp = 0x802060a0u;
    }
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, ebp);
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    t5 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x14u);
    wr32(sp0 - 0x68u, t5);
    t6 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 8u);
    wr32(sp0 - 0x6cu, t6);
    g->eax = sp0 - 0x40u;
    g->edx = t6;
    g->esp = sp0 - 0x50u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t5, 7, t6, t5, sp0 - 0x40u, ebp, 1u, 0x3f800000u, 0x3f800000u);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c1b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
