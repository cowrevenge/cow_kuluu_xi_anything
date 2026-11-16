/* f_0x100b72c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b72c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edi = g->edi;

    t1 = (in_edi & 0xffff0000u) | rd16(self + 0x256u);
    t2 = (rd32(self + 0x20u) & 0xffffff00u) | rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if ((uint8_t)t2 > 7u) goto L_100b73c1;
    eax = (uint8_t)t2;
    ecx = t2;
    edi = t1;
    t3 = rd32(COW_IMG(0x100b73c4u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x100b72f0u: goto L_100b72f0;
    case 0x100b7328u: goto L_100b7328;
    case 0x100b733du: goto L_100b733d;
    case 0x100b7356u: goto L_100b7356;
    case 0x100b736fu: goto L_100b736f;
    case 0x100b7388u: goto L_100b7388;
    case 0x100b73a1u: goto L_100b73a1;
    default: rt_fatal(g, COW_IMG(0x100b72e9u), "switch");
    }
    return;
L_100b72f0: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        t10 = rd32(eax + 0x124u) ^ (((uint32_t)(int8_t)ecx << 0x1du ^ rd32(eax + 0x124u)) & 0x20000000u);
        wr32(eax + 0x124u, t10);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100b7328: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x100b5510u), self, 1, 0u);
    eax = t9;
L_100b73b6: ;
    if ((uint8_t)eax == 0u)
    {
        wr16(self + 0x256u, (uint16_t)edi);
    }
L_100b73c1: ;
    return;
L_100b733d: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = edi + 1u;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x100b5210u), self, 3, 0u, 0u, 0u);
    eax = t8;
    goto L_100b73b6;
L_100b7356: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x100b5210u), self, 3, 1u, 0u, 0u);
    eax = t7;
    goto L_100b73b6;
L_100b736f: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100b5210u), self, 3, 0u, 0u, 1u);
    eax = t6;
    goto L_100b73b6;
L_100b7388: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = edi + 1u;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100b5210u), self, 3, 1u, 0u, 1u);
    eax = t5;
    goto L_100b73b6;
L_100b73a1: ;
    wr16(self + 0x256u, (uint16_t)(edi + 1u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100b4e10u), self, 2, 0u, 1u);
    eax = t4;
    goto L_100b73b6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b72c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b72c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
