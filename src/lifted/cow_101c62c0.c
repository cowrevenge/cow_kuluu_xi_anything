/* f_0x101c62c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c62c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 1088u);

    wr32(sp0 - 0x420u, in_esi);
    wr32(sp0 - 0x424u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x424u;
    t1 = cow_call_regs(g, COW_IMG(0x101c6020u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x101c6060u), t1, self, g->edx, 1, 0);
    t4 = g->edx;
    if (rd8(t1) != 0x7fu)
    {
        eax = t3;
        edi = t1;
        goto L_101c62e3;
    }
    eax = t3;
    edx = t4;
    edi = t1;
    if (rd8(edi + 1u) == 0xfeu) goto L_101c6336;
L_101c62e3: ;
    wr32(sp0 - 0x428u, self + 0x6a4u);
    t5 = rd32(self + 0x6b0u);
    wr32(sp0 - 0x42cu, t5);
    wr32(sp0 - 0x430u, 0x41au);
    wr32(sp0 - 0x434u, sp0 - 0x41cu);
    wr32(sp0 - 0x438u, eax);
    wr32(sp0 - 0x43cu, edi);
    g->eax = eax;
    g->edx = t5;
    g->esp = sp0 - 0x424u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x10190280u), sp0 - 0x41cu, 6, edi, eax, sp0 - 0x41cu, 0x41au, t5, self + 0x6a4u);
    t7 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        edx = t7;
        goto L_101c6336;
    }
    eax = t6;
    ecx = 0u;
    edx = t7;
L_101c630b: ;
    if (rd8(ecx + sp0 - 0x41cu) != 0x7fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + sp0 - 0x41cu);
        goto L_101c6331;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + sp0 - 0x41cu);
    if (rd8(ecx + sp0 - 0x41bu) == 0x67u) goto L_101c6341;
    if (0u) goto L_101c6331;
    if (rd8(ecx + sp0 - 0x41bu) == 0xffu) goto L_101c6341;
    if (0u) goto L_101c6331;
    if (rd8(ecx + sp0 - 0x41bu) == 0xfeu) goto L_101c6341;
L_101c6331: ;
    if ((int32_t)(ecx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 1u;
        goto L_101c630b;
    }
L_101c6336: ;
    g->edx = edx;
    return 0u;
L_101c6341: ;
    wr8(ecx + sp0 - 0x41cu, 0u);
    wr32(sp0 - 0x428u, sp0 - 0x41cu);
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x414u;
    t8 = cow_call_regs(g, COW_IMG(0x10190830u), eax, ecx, g->edx, 1, 5, sp0 - 0x41cu, rd32(sp0 - 0x424u), rd32(sp0 - 0x420u), rd32(sp0 - 0x41cu), rd32(sp0 - 0x418u));
    t9 = g->edx;
    g->esi = rd32(sp0 - 0x420u);
    g->edi = rd32(sp0 - 0x424u);
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c62c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c62c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
