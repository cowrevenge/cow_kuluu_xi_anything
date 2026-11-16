/* f_0x1017c820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017c820(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(rd32(sp0 + 0xcu) + 0x60u) == 0u)
    {
        edi = rd32(sp0 + 0xcu);
        goto L_1017c86b;
    }
    eax = rd32(rd32(sp0 + 0xcu) + 0x60u);
    edi = rd32(sp0 + 0xcu);
    t1 = rd32(edi + 0x64u);
    wr32(edi + 0x60u, arg2 + eax);
    if ((int32_t)t1 <= 0) goto L_1017c8a2;
    esi = arg2 + eax;
    eax = 0u;
L_1017c847: ;
    t2 = rd32(arg1 + 0x28u) + rd32(eax * 4u + esi) * 0x16cu;
    wr32(eax * 4u + esi, t2);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(edi + 0x64u))
    {
        eax = eax + 1u;
        goto L_1017c847;
    }
    return;
L_1017c86b: ;
    wr32(sp0 + 0xcu, 4u);
    edx = in_edx;
    esi = edi + 0x68u;
L_1017c87f: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        wr32(esi, arg2 + eax);
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x1017c820u), self, edx, 3, arg1, arg2, arg2 + eax);
        t3 = g->edx;
        edx = t3;
    }
    t4 = rd32(sp0 + 0xcu) - 1u;
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t4);
    if (t5 != 1u)
    {
        esi = esi + 4u;
        goto L_1017c87f;
    }
L_1017c8a2: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017c820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017c820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
