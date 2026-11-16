/* f_0x1012a960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012a960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg1;
    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x1012a9f0u), self, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1012a971;
    }
    return;
L_1012a971: ;
    ecx = arg2;
L_1012a977: ;
    if ((int8_t)rd8(eax) >= 0)
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        goto L_1012a98a;
    }
    edx = (edx & 0xffffff00u) | rd8(eax);
    wr8(ecx, (uint8_t)edx);
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    eax = eax + 1u;
L_1012a984: ;
    wr8(ecx, (uint8_t)edx);
    eax = eax + 1u;
    ecx = ecx + 1u;
    goto L_1012a977;
L_1012a98a: ;
    if ((uint32_t)(int8_t)edx > 0x2cu) goto L_1012a984;
    esi = (uint32_t)(int8_t)edx;
    t3 = rd32(COW_IMG(0x1012a9acu) + rd8(COW_IMG(0x1012a9b4u) + esi) * 4u);
    switch (t3 - RD)
    {
    case 0x1012a984u: goto L_1012a984;
    case 0x1012a9a1u: goto L_1012a9a1;
    default: rt_fatal(g, COW_IMG(0x1012a99au), "switch");
    }
    return;
L_1012a9a1: ;
    wr8(ecx, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012a960(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
