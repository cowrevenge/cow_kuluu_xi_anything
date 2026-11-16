/* f_0x10139920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10139920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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

    edi = self + 0x14u;
    eax = 0u;
    ecx = 0xau;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x3cu, eax);
    wr16(self + 0x42u, 1u);
    g->edx = self;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xau);
        t4 = g->edx;
        g->edx = t4;
        g->esp = sp0;
        t5 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t3, 2u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10663740u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663740u));
        g->eax = rd32(COW_IMG(0x105781f4u));
        t7 = rd32(COW_IMG(0x105781f4u));
        g->esp = sp0;
        t8 = cow_thiscall(g, COW_IMG(0x101f23a0u), ecx, 1, t7);
        eax = t8;
    }
    t9 = rd32(rd32(COW_IMG(0x105781f0u)) + 8u);
    g->eax = eax;
    g->esp = sp0;
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t9, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
