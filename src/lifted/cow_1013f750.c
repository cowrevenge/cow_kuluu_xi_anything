/* f_0x1013f750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013f7c7;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 7u) goto L_1013f7a0;
    t1 = rd32(COW_IMG(0x1013f7ccu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013f76fu: goto L_1013f76f;
    case 0x1013f776u: goto L_1013f776;
    case 0x1013f77du: goto L_1013f77d;
    case 0x1013f784u: goto L_1013f784;
    case 0x1013f78bu: goto L_1013f78b;
    case 0x1013f792u: goto L_1013f792;
    case 0x1013f799u: goto L_1013f799;
    case 0x1013f7a2u: esi = 5u; goto L_1013f7a2;
    default: rt_fatal(g, COW_IMG(0x1013f768u), "switch");
    }
    return 0;
L_1013f76f: ;
    esi = 1u;
L_1013f7a2: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1013f7bc;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->esi = esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x1022b220u), 3, esi, 1u, 0u);
    t6 = g->edx;
    g->esi = in_esi;
    g->edx = t6;
    return t5;
L_1013f776: ;
    esi = 2u;
    goto L_1013f7a2;
L_1013f77d: ;
    esi = 3u;
    goto L_1013f7a2;
L_1013f784: ;
    esi = 4u;
    goto L_1013f7a2;
L_1013f78b: ;
    esi = 6u;
    goto L_1013f7a2;
L_1013f792: ;
    esi = 7u;
    goto L_1013f7a2;
L_1013f799: ;
    esi = 8u;
    goto L_1013f7a2;
L_1013f7a0: ;
    esi = 0u;
    goto L_1013f7a2;
L_1013f7bc: ;
    g->esi = esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1022b220u), 3, esi, 0u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1013f7c7: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f750(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
