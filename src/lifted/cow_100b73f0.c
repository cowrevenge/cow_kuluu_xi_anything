/* f_0x100b73f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b73f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) <= 1u)
    {
        eax = (rd16(self + 0x256u) & 0xffffff00u) | rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
        goto L_100b743c;
    }
    eax = (rd16(self + 0x256u) & 0xffffff00u) | rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    edx = rd32(self + 0x20u);
    if ((uint8_t)eax != 2u) goto L_100b747a;
    g->eax = eax;
    g->edx = edx;
    t1 = rd32(rd32(COW_IMG(0x1065cb04u)));
    t2 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t1 + 0x18u), t2, 3, t3, 0u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100b743c: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        t5 = rd32(ecx + 0x124u);
        t6 = t5 ^ (((uint32_t)(int8_t)eax << 0x1eu ^ rd32(ecx + 0x124u)) & 0x40000000u);
        wr32(ecx + 0x124u, t6);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b747a: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b73f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b73f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
