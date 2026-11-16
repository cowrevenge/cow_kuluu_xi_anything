/* f_0x101c43a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c43a0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 324u);

    wr32(sp0 - 0x128u, in_ebx);
    wr32(sp0 - 0x12cu, in_ebp);
    wr32(sp0 - 0x130u, in_esi);
    wr32(sp0 - 0x134u, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x120u, 0u);
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x80u) < 0xeu)
    {
        eax = rd32(self + 0x80u);
        goto L_101c4413;
    }
    eax = rd32(self + 0x80u);
    return 0xffffffffu;
L_101c4413: ;
    wr32(sp0 - 0x138u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x134u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, arg1);
    if ((int32_t)t1 >= 0)
    {
        edi = t1;
        goto L_101c4438;
    }
    eax = t1;
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = rd32(sp0 - 0x134u);
    g->ebp = rd32(sp0 - 0x12cu);
    return 0xffffffffu;
L_101c4438: ;
    wr32(sp0 - 0x138u, COW_IMG(0x1037cd30u));
    t2 = (edi + 3u & 0xffffff00u) | (edi + 3u & 0xfcu);
    wr32(sp0 - 0x13cu, t2);
    t3 = self + rd32(self + 0x80u) * 4u + 0xcu;
    wr32(sp0 - 0x140u, t3);
    g->esp = sp0 - 0x130u;
    cow_call_regs(g, COW_IMG(0x101907a0u), g->eax, rd32(self + 0x80u), t3, 1, 4, t3, t2, COW_IMG(0x1037cd30u), rd32(sp0 - 0x134u));
    t4 = g->edx;
    if (rd32(self + rd32(self + 0x80u) * 4u + 0xcu) != 0u)
    {
        eax = rd32(self + 0x80u);
        edx = t4;
        goto L_101c4472;
    }
    eax = rd32(self + 0x80u);
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = rd32(sp0 - 0x134u);
    g->ebp = rd32(sp0 - 0x12cu);
    return 0xffffffffu;
L_101c4472: ;
    wr32(eax * 4u + self + 0x48u, edi);
    wr32(sp0 - 0x138u, arg1);
    wr32(sp0 - 0x13cu, 0x100u);
    wr32(sp0 - 0x140u, sp0 - 0x11cu);
    wr32(sp0 - 0x120u, 1u);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x11cu, 0x100u, arg1);
    t5 = rd32(self + rd32(self + 0x80u) * 4u + 0xcu);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x138u, sp0 - 0x124u);
    t6 = rd32(self + rd32(self + 0x80u) * 4u + 0x48u);
    wr32(sp0 - 0x14u, t6);
    t7 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t6, 1, sp0 - 0x124u);
    t8 = g->edx;
    if (t7 == rd32(self + rd32(self + 0x80u) * 4u + 0x48u))
    {
        ecx = rd32(self + 0x80u);
        goto L_101c44f9;
    }
    eax = t7;
    ecx = rd32(self + 0x80u);
    edx = t8;
    t9 = rd32(ecx * 4u + self + 0xcu);
    wr32(sp0 - 0x138u, t9);
    g->esp = sp0 - 0x134u;
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t9);
    wr32(self + rd32(self + 0x80u) * 4u + 0xcu, 0u);
    t10 = rd32(self + 0x80u);
    t11 = rd32(sp0 - 0x134u);
    wr32(self + t10 * 4u + 0x48u, 0u);
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = t11;
    g->ebp = rd32(sp0 - 0x12cu);
    return 0xffffffffu;
L_101c44f9: ;
    if (ecx == 0u)
    {
        t12 = (rd32(rd32(self + 0xcu)) >> 3u) - 1u;
        wr32(self + 0x44u, t12);
    }
    t13 = rd32(sp0 - 0x134u);
    wr32(self + 0x80u, ecx + 1u);
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = t13;
    g->ebp = rd32(sp0 - 0x12cu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c43a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c43a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
