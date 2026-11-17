/* f_0x1022a810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022a810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10221f50u), self, in_edx, 0);
    t1 = g->edx;
    t2 = rd16(COW_IMG(0x103862ceu) + rd32(self + 0x30u) * 8u);
    g->eax = t2;
    g->edx = t1;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, t2);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = rd32(COW_IMG(0x105781f8u));
        edx = t4;
        goto L_1022a848;
    }
    eax = t3;
    ecx = rd32(COW_IMG(0x105781f8u));
    edx = t4;
    if (ecx == 0u) goto L_1022a855;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, eax, 2u);
    return;
L_1022a848: ;
    if (ecx != 0u)
    {
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
    }
L_1022a855: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022a810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
