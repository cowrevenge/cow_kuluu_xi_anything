/* f_0x1029b1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029b1f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x30u) <= 0)
    {
        ecx = self;
        goto L_1029b22b;
    }
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_1029b1ff: ;
    if (rd32(esi * 4u + rd32(arg1 + 0x34u)) != 0u)
    {
        eax = rd32(esi * 4u + rd32(arg1 + 0x34u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bc66cu), 0x68u);
        t1 = g->edx;
        t2 = rd32(arg1 + 0x34u);
        wr32(esi * 4u + t2, 0u);
        ecx = t2;
        edx = t1;
    }
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x30u))
    {
        esi = esi + 1u;
        goto L_1029b1ff;
    }
L_1029b22b: ;
    t3 = rd32(arg1 + 0x34u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t3, COW_IMG(0x103bc66cu), 0x69u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029b1f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
