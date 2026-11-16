/* f_0x10225aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10225aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x30u);
    g->ecx = self;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10225370u), 1, t1);
    t2 = g->ecx;
    if ((int32_t)t1 < 0) goto L_10225af5;
    ecx = t2;
    edi = t1;
    if ((int32_t)edi >= (int32_t)rd32(self + 0x44u)) goto L_10225af5;
    if (edi * 8u + rd32(self + 0x20u) == 0u) goto L_10225af5;
    eax = edi * 8u + rd32(self + 0x20u);
    t3 = rd32(eax);
    t4 = rd8(COW_IMG(0x1066716eu));
    t5 = rd32(self + 0x64u);
    wr8(COW_IMG(0x1066716eu), (uint8_t)(t4 + 1u));
    t6 = rd16(t3 * 0x20u + t5 + 4u);
    wr16(COW_IMG(0x10666eacu) + (uint8_t)(t4 + 1u) * 2u, (uint16_t)t6);
    g->esp = sp0;
    g->edx = (uint8_t)(t4 + 1u);
    cow_tailcall(g, COW_IMG(0x102258b0u), (t3 << 5u & 0xffff0000u) | t6, self, (uint8_t)(t4 + 1u));
    return;
L_10225af5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10225aa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
