/* f_0x100ca9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ca9b0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const double xin0 = ST(0);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, sp0 - 0x30u);
    wr32(sp0 - 0x40u, sp0 - 0x34u);
    wr32(sp0 - 0x44u, sp0 - 0x34u);
    d1 = (double)(float)(double)rdf32(self + 0x824u);
    wrf32(sp0 - 0x44u, (float)d1);
    wr32(sp0 - 0x2cu, 0x6c6469u);
    wr32(sp0 - 0x28u, 0x6c6431u);
    wr32(sp0 - 0x24u, 0x6c6432u);
    wr32(sp0 - 0x20u, 0x6c6433u);
    wr32(sp0 - 0x1cu, 0x6c7462u);
    wr32(sp0 - 0x18u, 0x6c7431u);
    wr32(sp0 - 0x14u, 0x6c7432u);
    wr32(sp0 - 0x10u, 0x6c7433u);
    wr32(sp0 - 0xcu, 0x726f63u);
    wr32(sp0 - 8u, 0x317872u);
    wr32(sp0 - 4u, 0u);
    fpush(g, xin0);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x100c8bb0u), self, 3, cow_f2bits(d1), sp0 - 0x34u, sp0 - 0x30u);
    eax = 0x6c6469u;
    ecx = sp0 - 0x2cu;
    edx = rd32(sp0 - 0x34u) & 0xffffffu;
L_100caa3c: ;
    if (edx == eax) goto L_100caa54;
    if (rd32(ecx + 4u) != 0u)
    {
        eax = rd32(ecx + 4u);
        ecx = ecx + 4u;
        goto L_100caa3c;
    }
    wr32(self + 0x7d8u, 0x20202020u);
L_100caa54: ;
    g->top = (g->top + 1u) & 7u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ca9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ca9b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
