/* f_0x10128740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10128740(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 360u);

    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_ebp);
    wr32(sp0 - 0x118u, in_esi);
    wr32(sp0 - 0x11cu, in_edi);
    wr32(sp0 - 0x120u, arg2);
    wr32(sp0 - 0x108u, self);
    esi = arg1;
    edi = sp0 - 0x15cu;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x160u, sp0 - 0x100u);
    g->eax = arg2;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0xc0u;
    t1 = cow_bridge_indirect(g, COW_IMG(0x10127fa0u), 0u, 40u, (const uint32_t[]){sp0 - 0x100u, rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), arg2, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x10cu), self, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u)}, g->ecx, g->edx, g->eax, 160u);
    t2 = g->ecx;
    wr32(sp0 - 0x10cu, (uint16_t)arg5);
    wr32(sp0 - 0x104u, (uint16_t)t1);
    t3 = (uint16_t)arg5 + (uint16_t)t1 + 3u;
    wr32(sp0 - 0x164u, t3);
    g->eax = (uint16_t)arg5;
    g->edx = t3;
    g->esp = sp0 - 0x158u;
    t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t3, sp0 - 0x100u, rd32(sp0 - 0x15cu));
    t5 = g->edx;
    esi = sp0 - 0x100u;
    edi = t4;
    ecx = (uint16_t)t1 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t1 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x120u, t4);
    wr16(t4 + (uint16_t)t1, rd16(arg3));
    esi = arg4;
    edi = t4 + (uint16_t)(t1 + 2u);
    ecx = (uint16_t)arg5 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg5 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(t4 + (uint16_t)(arg5 + t1 + 2u), 0u);
    g->eax = arg5;
    g->edx = (uint16_t)arg5;
    t6 = rd32(self + 0x64044u);
    g->esp = sp0 - 0x11cu;
    t7 = cow_thiscall(g, COW_IMG(0x1018ed80u), t6, 1, t4);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x120u, t4);
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t4);
    t11 = g->edx;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10128740(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
