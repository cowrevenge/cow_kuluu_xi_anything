/* f_0x101b4910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b4910(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1d8;
    uint32_t loc_1dc;
    uint32_t loc_1e0;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 496u);

    wr32(sp0 - 0x1c8u, in_ebx);
    if (rd8(self + 0x21e0u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x21e0u);
        edx = in_edx;
        goto L_101b4934;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x21e0u);
    if (rd32(self + 4u) == rd32(self + 0x21d4u)) goto L_101b493a;
    edx = rd32(self + 0x21d4u);
    if ((uint8_t)eax != 0u) goto L_101b4947;
L_101b4934: ;
    if (rd32(self + 4u) != 0x3cu) goto L_101b4947;
L_101b493a: ;
    return 0xffffffffu;
L_101b4947: ;
    wr32(sp0 - 0x1ccu, in_ebp);
    wr32(sp0 - 0x1d0u, in_esi);
    wr32(sp0 - 0x1d4u, in_edi);
    g->esp = sp0 - 0x1d4u;
    t1 = cow_thiscall(g, COW_IMG(0x101bc9d0u), arg1, 0);
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, t1);
    g->edx = rd32(arg1);
    t2 = rd32(arg1);
    t3 = cow_thiscall_cdecl(g, rd32(t2 + 0xcu), arg1, 3, t1, 0u, 0u);
    t4 = g->edx;
    wr32(sp0 - 0x1e4u, t3);
    wr32(sp0 - 0x1e8u, 0x1c3u);
    wr32(sp0 - 0x1ecu, sp0 - 0x1c4u);
    t5 = cow_call_regs(g, COW_IMG(0x101ac990u), sp0 - 0x1c4u, arg2, g->edx, 0, 6, sp0 - 0x1c4u, 0x1c3u, t3, rd32(sp0 - 0x1e0u), 0u, 0u);
    if (rd8(self + 0x21e0u) == 0u)
    {
        ecx = t5 + 1u;
        edx = rd32(self + 0x21ccu);
        ebp = t5;
        esi = sp0 - 0x1c4u;
        edi = edx + self + 0x3c8u;
        ecx = ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(ebp + self + rd32(self + 0x21ccu) + 0x3c8u, 0u);
        t9 = rd32(arg1 + 0x14u);
        wr32(sp0 - 0x1d8u, t9);
        wr32(sp0 - 0x1dcu, ebp);
        t10 = self + rd32(self + 0x21ccu) + 0x3c8u;
        wr32(sp0 - 0x1e0u, t10);
        ecx = self + rd32(self + 4u) * 0x10u + 8u;
        edx = t10;
        loc_1d8 = t9;
        loc_1dc = ebp;
        loc_1e0 = t10;
    }
    else
    {
        ecx = t5 + 1u;
        edx = rd32(self + 0x21ccu);
        ebp = t5;
        t6 = rd32(self + 0x21d8u);
        esi = sp0 - 0x1c4u;
        edi = edx + t6;
        ecx = ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(ebp + rd32(self + 0x21ccu) + rd32(self + 0x21d8u), 0u);
        t7 = rd32(arg1 + 0x14u);
        wr32(sp0 - 0x1d8u, t7);
        wr32(sp0 - 0x1dcu, ebp);
        t8 = rd32(self + 0x21ccu) + rd32(self + 0x21d8u);
        wr32(sp0 - 0x1e0u, t8);
        ecx = rd32(self + 4u) * 0x10u + rd32(self + 0x21d0u);
        edx = arg1;
        loc_1d8 = t7;
        loc_1dc = ebp;
        loc_1e0 = t8;
    }
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x101b46a0u), ecx, 3, loc_1e0, loc_1dc, loc_1d8);
    t11 = ebp + rd32(self + 0x21ccu) + 1u;
    t12 = rd32(self + 4u);
    t13 = rd32(sp0 - 0x1d0u);
    t14 = rd32(sp0 - 0x1d4u);
    wr32(self + 0x21ccu, t11);
    wr32(self + 4u, t12 + 1u);
    g->ebx = rd32(sp0 - 0x1c8u);
    g->esi = t13;
    g->edi = t14;
    g->ebp = rd32(sp0 - 0x1ccu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4910(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
