/* f_0x1003cbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003cbb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

L_1003cbb4: ;
    eax = rd32(COW_IMG(0x1047d140u));
    esi = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_1003cbbf: ;
    if (esi == 0u) goto L_1003cbe5;
    g->eax = eax;
    g->edx = rd32(esi);
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1), esi, 0);
    t3 = g->edx;
    if (t2 != COW_IMG(0x1032ab34u))
    {
        eax = t2;
        goto L_1003cbd5;
    }
    eax = t2;
    edx = t3;
    if (rd32(esi + 0x74u) == self) goto L_1003cbda;
L_1003cbd5: ;
    esi = rd32(esi + 0xcu);
    goto L_1003cbbf;
L_1003cbda: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(esi) + 0x18u), esi, 1, 1u);
    goto L_1003cbb4;
L_1003cbe5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003cbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003cbb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
