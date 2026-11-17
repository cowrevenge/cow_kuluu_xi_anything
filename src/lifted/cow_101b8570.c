/* f_0x101b8570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b8570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_588;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 1444u);

    wr32(sp0 - 0x588u, in_esi);
    wr32(sp0 - 0x58cu, 0x168u);
    wr32(sp0 - 0x590u, sp0 - 0x41cu);
    g->eax = rd32(rd32(self + 8u));
    g->edx = sp0 - 0x41cu;
    t1 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x588u;
    t2 = cow_thiscall(g, rd32(t1 + 0x10u), rd32(self + 8u), 2, sp0 - 0x41cu, 0x168u);
    t3 = g->edx;
    if (rd8(sp0 - 0x41cu) != 0x7fu)
    {
        eax = t2;
        goto L_101b85a2;
    }
    eax = t2;
    edx = t3;
    if (rd8(sp0 - 0x41bu) == 0xfeu)
    {
        loc_588 = in_esi;
        goto L_101b85f6;
    }
L_101b85a2: ;
    wr32(sp0 - 0x58cu, self + 0x14u);
    t4 = rd32(self + 0x20u);
    wr32(sp0 - 0x590u, t4);
    wr32(sp0 - 0x594u, 0x168u);
    wr32(sp0 - 0x598u, sp0 - 0x584u);
    wr32(sp0 - 0x59cu, eax);
    wr32(sp0 - 0x5a0u, sp0 - 0x41cu);
    g->eax = eax;
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x588u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10190280u), sp0 - 0x584u, 6, sp0 - 0x41cu, eax, sp0 - 0x584u, 0x168u, t4, self + 0x14u);
    t6 = g->edx;
    if ((int32_t)t5 <= 0)
    {
        edx = t6;
        loc_588 = in_esi;
        goto L_101b85f6;
    }
    eax = t5;
    ecx = 0u;
    edx = t6;
L_101b85cb: ;
    if (rd8(ecx + sp0 - 0x584u) != 0x7fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + sp0 - 0x584u);
        goto L_101b85f1;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + sp0 - 0x584u);
    if (rd8(ecx + sp0 - 0x583u) == 0x67u) goto L_101b8600;
    if (0u) goto L_101b85f1;
    if (rd8(ecx + sp0 - 0x583u) == 0xffu) goto L_101b8600;
    if (0u) goto L_101b85f1;
    if (rd8(ecx + sp0 - 0x583u) == 0xfeu) goto L_101b8600;
L_101b85f1: ;
    if ((int32_t)(ecx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 1u;
        goto L_101b85cb;
    }
    loc_588 = rd32(sp0 - 0x588u);
L_101b85f6: ;
    g->esi = loc_588;
    g->edx = edx;
    return 0u;
L_101b8600: ;
    wr8(ecx + sp0 - 0x584u, 0u);
    wr32(sp0 - 0x58cu, sp0 - 0x584u);
    g->edx = edx;
    g->esp = sp0 - 0x578u;
    t7 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x584u, ecx, g->edx, 1, 5, sp0 - 0x584u, rd32(sp0 - 0x588u), rd32(sp0 - 0x584u), rd32(sp0 - 0x580u), rd32(sp0 - 0x57cu));
    t8 = g->edx;
    g->esi = rd32(sp0 - 0x588u);
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b8570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
