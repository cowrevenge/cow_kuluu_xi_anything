/* f_0x101c3900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c3900(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 324u);

    wr32(sp0 - 0x128u, in_ebx);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, COW_IMG(0x1037ccb0u));
    g->edx = in_edx;
    g->esp = sp0 - 0x12cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, COW_IMG(0x1037ccb0u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0xccu, t1);
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101c392c;
    }
    eax = t1;
    return 0xffffffffu;
L_101c392c: ;
    wr32(sp0 - 0x130u, in_ebp);
    wr32(sp0 - 0x134u, in_edi);
    wr32(sp0 - 0x138u, COW_IMG(0x1037cc98u));
    t4 = (eax & 0xffffff00u) | (eax & 0xfeu);
    wr32(sp0 - 0x13cu, t4);
    wr32(sp0 - 0x140u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xc4u, t4, COW_IMG(0x1037cc98u), in_edi);
    t5 = g->edx;
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x138u, COW_IMG(0x1037ccb0u));
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x13cu, 0x100u);
    wr32(sp0 - 0x140u, sp0 - 0x11cu);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x120u, 1u);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x11cu, 0x100u, COW_IMG(0x1037ccb0u));
    t6 = rd32(self + 0xc4u);
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x138u, sp0 - 0x124u);
    t7 = rd32(self + 0xccu);
    wr32(sp0 - 0x14u, t7);
    t8 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t7, 1, sp0 - 0x124u);
    if ((int32_t)t8 >= 0) goto L_101c39e2;
    eax = t8;
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x12cu);
    return 0xffffffffu;
L_101c39e2: ;
    t9 = (uint32_t)((int32_t)rd32(self + 0xccu) >> 1u);
    wr32(self + 0xc8u, t9);
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x12cu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
