/* f_0x1013c220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013c220(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662d98u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1011ba40u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u) goto L_1013c27f;
    eax = t2;
    ecx = t3;
    edx = t4;
    t5 = rd8(self + 0x380u);
    wr8(self + 0x380u, (uint8_t)(t5 + 1u));
    if ((uint8_t)(t5 + 1u) <= 2u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t5 + 1u);
        edx = (edx & 0xffffff00u) | (uint8_t)(t5 + 1u);
        goto L_1013c24f;
    }
    wr8(self + 0x380u, 0u);
    return;
L_1013c24f: ;
    if (rd8(self + 0x381u) == 0u)
    {
        edx = edx & 0xffffff00u;
        goto L_1013c25f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x381u);
    edx = edx & 0xffffff00u;
    if ((uint8_t)eax >= (uint8_t)ecx) goto L_1013c279;
L_1013c25f: ;
    if (rd8(self + 0x382u) != (uint8_t)edx) goto L_1013c27f;
    if (rd8(self + (uint8_t)eax * 0xcu + 0x383u) != 0xffu) goto L_1013c27f;
L_1013c279: ;
    wr8(self + 0x380u, (uint8_t)edx);
L_1013c27f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013c220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013c220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
