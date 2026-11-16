/* f_0x1019f7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019f7c0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 312u);

    wr32(sp0 - 0x128u, in_ebx);
    wr32(sp0 - 0x12cu, in_esi);
    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1019f878;
    }
    wr32(sp0 - 0x130u, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x134u, sp0 - 0x124u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x120u, 0xbu);
    g->esp = sp0 - 0x130u;
    cow_fastcall(g, COW_IMG(0x1019f8b0u), self, in_edx, 1, sp0 - 0x124u);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101a0f30u), rd32(rd32(self + 8u) + 4u), 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1019f868;
    }
    edx = t3;
L_1019f840: ;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    cow_thiscall(g, COW_IMG(0x101a0910u), rd32(self + 8u), 0);
    t4 = g->edx;
    wr32(sp0 - 0x130u, 0x3e8u);
    t5 = cow_thiscall(g, COW_IMG(0x101a0930u), rd32(self + 8u), 1, 0x3e8u);
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        goto L_1019f8a0;
    }
    g->edx = rd32(self + 8u);
    t6 = rd32(self + 8u);
    g->esp = sp0 - 0x12cu;
    t7 = cow_thiscall(g, COW_IMG(0x101a0f30u), rd32(t6 + 4u), 0);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_1019f840;
    }
    eax = t7;
    edx = t8;
L_1019f868: ;
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        wr32(sp0 - 0x130u, 1u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t9 = rd32(ecx);
        g->esp = sp0 - 0x12cu;
        t10 = cow_thiscall(g, rd32(t9), ecx, 1, 1u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    wr32(self + 4u, 0u);
L_1019f878: ;
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x130u, 1u);
        g->edx = rd32(ecx);
        t12 = rd32(ecx);
        g->esp = sp0 - 0x12cu;
        cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t13 = g->edx;
        wr32(self + 8u, 0u);
        edx = t13;
    }
    g->esp = sp0 - 0x12cu;
    cow_stdcall(g, COW_IMG(0x101be460u), 0);
    return 1u;
L_1019f8a0: ;
    g->ebx = rd32(sp0 - 0x128u);
    g->esi = rd32(sp0 - 0x12cu);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
