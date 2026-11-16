/* f_0x1022c990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022c990(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1021e830u), rd32(COW_IMG(0x10667a80u)), 0);
    t1 = g->edx;
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = t1;
    t2 = rd32(COW_IMG(0x105781f8u));
    t3 = cow_thiscall(g, COW_IMG(0x102211b0u), t2 + 0x20u, 1, 2u);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
    t6 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
    g->edx = t6;
    cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t7 = g->edx;
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = rd32(self + 0x40u);
        edx = t7;
    }
    else
    {
        eax = rd32(self + 0x40u);
        edx = t7;
        if (rd8(self + 0xbdu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xbdu);
            t11 = rd32(self + 0x30u);
            g->eax = eax;
            g->edx = t11;
            g->esp = sp0 - 4u;
            t12 = cow_thiscall(g, COW_IMG(0x1022c730u), self, 1, t11);
            t13 = g->edx;
            wr32(self + rd32(self + 0x64u) * 4u + 0x98u, t12);
            eax = t12;
            edx = t13;
        }
        else
        {
            t8 = rd32(self + 0x30u);
            g->eax = t8;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_thiscall(g, COW_IMG(0x1022c730u), self, 1, t8);
            t10 = g->edx;
            wr32(self + rd32(self + 0x64u) * 4u + 0x74u, t9);
            eax = t9;
            edx = t10;
        }
    }
    if (rd32(self + 0xc0u) != 0u)
    {
        esi = rd32(self + 0xc0u);
        t14 = rd32(esi + 8u);
        g->edx = t14;
        g->esp = sp0 - 4u;
        t15 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022c990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
