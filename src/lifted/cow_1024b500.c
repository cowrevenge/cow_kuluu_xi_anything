/* f_0x1024b500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024b500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    q1 = (int64_t)cow_muls(0x88888889u, arg2 * 0x32u);
    t2 = (uint32_t)((int32_t)(arg2 * 0x32u + cow_qhi(q1)) >> 5u);
    t3 = t2 + (t2 >> 0x1fu);
    ecx = rd32(COW_IMG(0x106690b8u));
    esi = t3;
L_1024b533: ;
    if ((int32_t)arg1 < 0) goto L_1024b545;
    if (rd32(ecx + 0x94u) == arg1) goto L_1024b545;
    eax = rd32(ecx + 0x94u);
    if ((int32_t)eax >= 0) goto L_1024b57f;
L_1024b545: ;
    if (esi == 0u)
    {
        t8 = rd32(COW_IMG(0x103889f0u));
        wr32(ecx + 0x50u, 0u);
        wr32(ecx + 0x4cu, t8 << 0xcu);
        wr32(ecx + 0x48u, 1u);
    }
    else
    {
        t4 = rd32(COW_IMG(0x103889f4u));
        t5 = rd32(ecx + 0x4cu);
        wr32(ecx + 0x48u, esi);
        t6 = cow_divs(g, (t4 << 0xcu) - t5 + 0x800u, esi);
        t7 = cow_mods(g, (t4 << 0xcu) - t5 + 0x800u, esi);
        wr32(ecx + 0x50u, t6);
    }
    wr32(ecx + 0x54u, 1u);
L_1024b57f: ;
    if (ecx + 0x1c0u < rd32(COW_IMG(0x106690b8u)) + 0x380u)
    {
        ecx = ecx + 0x1c0u;
        goto L_1024b533;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024b500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
