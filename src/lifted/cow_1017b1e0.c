/* f_0x1017b1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1017b1e0(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10174a60u), self + 0x34330u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    edi = 0u;
L_1017b1f4: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x1017b110u), self, edx, 1, edi);
    t4 = g->edx;
    if ((int32_t)(edi + 1u) < 2)
    {
        eax = t3;
        edx = t4;
        edi = edi + 1u;
        goto L_1017b1f4;
    }
    eax = t3;
    edx = t4;
    wr32(self + 0x38u, 0u);
    wr32(self + 0x17cu, 0xffffffffu);
    wr32(self + 0x3cu, 0u);
    wr32(COW_IMG(0x1065c5d8u), 0u);
    wr32(self + 0x154u, 0u);
    wr32(self + 0x158u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101784e0u), 0);
    t5 = g->edx;
    wr32(self + 0x38e54u, 0u);
    wr32(self + 0x38e50u, 0u);
    wr32(self + 0x38e4cu, 0u);
    wr32(self + 0x38e48u, 0u);
    wr32(self + 0x38e40u, 0u);
    wr32(self + 0x38e3cu, 0u);
    wr32(self + 0x38e38u, 0u);
    wr32(self + 0x38e34u, 0u);
    wr32(self + 0x38e2cu, 0u);
    wr32(self + 0x38e28u, 0u);
    wr32(self + 0x38e24u, 0u);
    wr32(self + 0x38e20u, 0u);
    wr32(self + 0x38e58u, 0x3f800000u);
    wr32(self + 0x38e44u, 0x3f800000u);
    wr32(self + 0x38e30u, 0x3f800000u);
    wr32(self + 0x38e1cu, 0x3f800000u);
    g->eax = 0x3f800000u;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10167950u), self + 0x178u, 0);
    t7 = g->edx;
    if (rd32(self + 0x174u) != 0u)
    {
        eax = t6;
        ecx = rd32(self + 0x174u);
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10071ec0u), ecx, 0);
        t8 = g->edx;
        t9 = rd32(rd32(self + 0x174u) + 0x14u);
        g->cf = g->cf;
        g->pf = g->pf;
        g->af = g->af;
        g->zf = g->zf;
        g->sf = g->sf;
        g->of = g->of;
        cow_stdcall(g, COW_IMG(0x10073b20u), 1, t9);
        wr32(self + 0x174u, 0u);
    }
    wr16(self + 0x34u, 1u);
    wr32(self + 0x44u, 0u);
    wr32(COW_IMG(0x10621c80u), 0u);
    edi = COW_IMG(0x10621c88u);
    eax = 0u;
    ecx = 0x4000u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10631f38u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x10621c7cu), 0u);
    wr32(COW_IMG(0x1065c4d4u), 0u);
    wr32(COW_IMG(0x1065c4ccu), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017b1e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
