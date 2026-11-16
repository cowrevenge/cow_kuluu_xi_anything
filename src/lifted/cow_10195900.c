/* f_0x10195900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10195900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 3336u);

    wr32(sp0 - 0xcf4u, in_esi);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, 0xa2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcf4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193830u), in_eax, g->ecx, g->edx, 1, 2, 0xa2u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xd00u, 2u);
    wr32(sp0 - 0xd04u, 0xa2u);
    g->esp = sp0 - 0xcfcu;
    cow_call_regs(g, COW_IMG(0x10193830u), t1, g->ecx, g->edx, 1, 2, 0xa2u, 2u);
    wr32(sp0 - 0xcf0u, 5u);
    eax = 0u;
    edx = 1u;
L_10195933: ;
    if ((int32_t)edx >= 828) goto L_10195958;
    if (rd32(eax + rd32(self + 4u) + 0xcu) == 4u)
    {
        ecx = eax + rd32(self + 4u);
        t4 = rd32(ecx + 8u);
        wr32(edx * 4u + sp0 - 0xcf0u, t4);
        edx = edx + 1u;
    }
    if ((int32_t)(eax + 0x2cu) < 9108)
    {
        eax = eax + 0x2cu;
        goto L_10195933;
    }
L_10195958: ;
    if ((int32_t)edx <= 0) goto L_10195988;
    wr32(sp0 - 0xcf4u, 0u);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, edx << 2u);
    wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd04u, COW_IMG(0x10379a08u));
    g->eax = sp0 - 0xcf0u;
    g->esp = sp0 - 0xcf0u;
    t5 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a08u), sp0 - 0xcf0u, edx << 2u, 0u, 0u);
    if ((int32_t)t5 >= 0) goto L_10195988;
    eax = t5;
    return 0xffffffffu;
L_10195988: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
