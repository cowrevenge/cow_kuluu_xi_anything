/* f_0x101c7d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c7d40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), self, 0);
    t3 = rd32(self);
    wr32(self + 4u, t2);
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(t3 + 0xcu), self, 0);
    t5 = g->edx;
    t6 = rd32(self + 0xcu);
    wr32(self + 8u, t4);
    if (t6 == 0u)
    {
        eax = t4;
        edx = t5;
        t7 = rd32(self + 4u) * eax;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t7, edx, 1, 1, t7);
        wr32(self + 0xcu, t8);
    }
    t9 = rd32(self + 8u) * rd32(self + 4u);
    t10 = rd32(self + 0xcu);
    edi = t10;
    eax = 0u;
    ecx = t9 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t9 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (rd32(self + 0x10u) == 0u)
    {
        edx = t9;
        t11 = rd32(self + 8u) << 2u;
        g->eax = t11;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, t11);
        wr32(self + 0x10u, t12);
    }
    if ((int32_t)rd32(self + 8u) <= 0) goto L_101c7dbf;
    eax = 0u;
L_101c7dac: ;
    wr32(eax * 4u + rd32(self + 0x10u), 0xfffffffeu);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(self + 8u))
    {
        eax = eax + 1u;
        goto L_101c7dac;
    }
L_101c7dbf: ;
    wr32(self + 0x14u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c7d40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
