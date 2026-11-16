/* f_0x10322da7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10322da7(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 8u) < 0) goto L_10322dfa;
    eax = 1u;
    ecx = self;
    ebx = 0u;
L_10322db7: ;
    if (eax == 0u) goto L_10322dfa;
    t1 = ebx + rd32(sp0 + 8u) - (uint32_t)((int32_t)(ebx + rd32(sp0 + 8u)) >> 0x1fu);
    t2 = rd32(arg1 + (uint32_t)((int32_t)t1 >> 1u) * 8u);
    t3 = rd32(arg3);
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, (uint32_t)((int32_t)(ebx + rd32(sp0 + 8u)) >> 0x1fu), 1, 4, t3, t2, in_edi, in_esi);
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t2;
        esi = (uint32_t)((int32_t)t1 >> 1u);
        sf = (int32_t)t4 < 0;
        if (!sf)
        {
            ebx = esi + 1u;
        }
        else
        {
            wr32(sp0 + 8u, esi - 1u);
        }
    }
    else
    {
        eax = t4;
        edi = arg1 + (uint32_t)((int32_t)t1 >> 1u) * 8u;
        wr32(arg3, edi + 4u);
        ecx = arg3;
    }
    if ((int32_t)ebx <= (int32_t)rd32(sp0 + 8u)) goto L_10322db7;
L_10322dfa: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10322da7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10322da7(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
