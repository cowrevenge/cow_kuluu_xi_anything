/* f_0x101fdfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fdfe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd8(self + 0x15u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x15u);
        if (rd8(self + 0x16u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t3 = cow_call_regs(g, COW_IMG(0x101fd290u), self + 0x3cu, self, g->edx, 0, 1, self + 0x3cu);
            t4 = g->edx;
            wr8(self + 0x16u, (uint8_t)t3);
            edx = t4;
        }
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101fd980u), self, 0);
        t2 = g->edx;
        wr8(self + 0x15u, (uint8_t)t1);
        edx = t2;
    }
    if ((int32_t)rd32(COW_IMG(0x10663aa8u)) >= 512)
    {
        eax = rd32(COW_IMG(0x10663aa8u));
        goto L_101fe09e;
    }
    eax = rd32(COW_IMG(0x10663aa8u));
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t5, 1, eax + 0x7080u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_101fe09e;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if ((int8_t)rd8(rd32(eax + 0x1530u)) >= 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(rd32(eax + 0x1530u));
        esi = rd32(eax + 0x1530u);
        eax = rd32(COW_IMG(0x10663aa8u));
        t10 = rd8(COW_IMG(0x106638a8u) + eax);
        wr8(COW_IMG(0x106638a8u) + eax, (uint8_t)(((t10 ^ ecx) & 0xfu) ^ t10));
        edx = (edx & 0xffffff00u) | t10;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(rd32(eax + 0x1530u));
        esi = rd32(eax + 0x1530u);
        eax = rd32(COW_IMG(0x10663aa8u));
        t9 = rd8(COW_IMG(0x106638a8u) + eax);
        wr8(COW_IMG(0x106638a8u) + eax, (t9 & 0xf8u) | 8u);
        ecx = (ecx & 0xffffff00u) | (t9 & 0xf8u) | 8u;
    }
    t11 = rd32(COW_IMG(0x10621808u));
    t12 = rd8(COW_IMG(0x106638a8u) + eax);
    t13 = rd8(esi + 1u);
    wr8(COW_IMG(0x106638a8u) + eax, (uint8_t)((t12 & 0xfu) ^ t13 << 4u));
    wr32(COW_IMG(0x10663aa8u), eax + 1u);
    wr32(sp0 + 4u, eax + 0x7081u);
    g->esp = sp0;
    g->edx = (edx & 0xffffff00u) | (uint8_t)((t12 & 0xfu) ^ t13 << 4u);
    return cow_tailcall(g, COW_IMG(0x1015b9e0u), eax + 0x7081u, t11, (edx & 0xffffff00u) | (uint8_t)((t12 & 0xfu) ^ t13 << 4u));
L_101fe09e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fdfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fdfe0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
